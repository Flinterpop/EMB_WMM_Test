//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include <windows/sdk/scrptids.h>

#include   <stdio.h>
#include   <dos.h>
#include "ELANtoNMEA.h"

#include "common/mgrs.h"
#include "common/geoid.h"
#include "common/ELAN2NMEA.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

#include "DebugForm.h"

extern PACKAGE TDebugF *DebugF;

//CONSTANTS Scoped to this file only

static double DEG2RAD = M_PI / 180.0;
static double RAD2DEG = 180.0 / M_PI;
static double PI_2 = M_PI / 2.0;

static double FEETPERMETRE = 3.28084;
static double KMPERNM = 1.852;

const char *weekdays[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
const char *months[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
const char *opmode[] = {"Continuous", "Fix", "Averaging", "Time only", "Standby", "2D Training", "3D Training","Rehearsal Training", "Not used"};
const char *CorrectionUnits[] = {"mil","deg","streck","Not Used"};
const char *lapds[] = {"Not receiving LADGPS inputs"," Receiving but not using LADGPS inputs","Receiving and using LADGPS inputs","Not Used"};
const char *elevation_status[] = {"OK", "Held", "Poor VDOP", "Not used"};
const char *error_units[] = {"m","ft","yds","km","mi","nm","Not Used"};
const char *groundspeed_units[] = {"kph", "mph", "kt", "Not Used"};
const char *track_units[] = {"mil","deg","streck","Not Used"};
const char *track_north_reference[] ={"True","Magnetic", "Grid","Not Used"};

const char *PosFormatString[] ={"MGRS-Old","MGRS-New", "UTM/UPS","LL-DM","LL-DMS","BNG","ITMG"};



TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
	listening = true;
	BN_ELANGPSListen->Text = "Stop";

	IdIPMCastClient1->Active = true;
	IdUDPClientNMEA = new TIdUDPClient(NULL);
	NMEAPort = StrToInt(TE_NMEAPort->Text);
}


void __fastcall TForm4::Timer1OnTimer(TObject *Sender)
{
	//this is the main sim and timer loop:
	//1 second update rate

	if (false == SimulationOn)
	{
		++ticksSinceLastELANMessageReceived;

		if (ticksSinceLastELANMessageReceived > 1)
		{
			char buf[60];
			sprintf(buf,"Seconds since last ELAN Nav Msg: %d",ticksSinceLastELANMessageReceived);
			LB_TimeSinceLast->Text = buf;
			LB_TimeSinceLast->Visible = true;
		}
		else LB_TimeSinceLast->Visible =false;
		return;
	}

	//Update Time and Position based on SIM parameters

	int SpeedInKnots = NB_GndSpeed->Value; //speed is nautical miles per hour


	if (SpeedInKnots != 0) {
		int course = NB_Course->Value;

		double SimLat = lastSimLat;
		double SimLon = lastSimLon;

		try
		{
			SimLat = TNum_SimLat->Value;
			SimLon = TNum_SimLong->Value;
		}
		catch (EConvertError  *e)
		{
			SimLat = lastSimLat;
			SimLon = lastSimLon;
		}

		//~60nm per degree
		double deltaDistance_nm = SpeedInKnots/3600.0;   //implied duration is 1 second (timer interval)
		double deltaDistance_degrees = deltaDistance_nm/60;
		//This is a crude algorithm to calculate next position. should be replaced with more accurate algorithm
		double deltaY = deltaDistance_degrees* cos(course*DEG2RAD);
		double deltaX = deltaDistance_degrees* sin(course*DEG2RAD);

		TNum_SimLat->Value = SimLat + deltaY;
		TNum_SimLong->Value = SimLon + deltaX;

        pme("Delta X,Y: %f %f",deltaX,deltaY);


		if (PathType==1) { //Circle
			PathCounter++;
			if (PathCounter>360) {
				course += 1;
				if (course > 359) course = 0;
			}
			else
			{
				course -= 1;
				if (course<0) course = 359;
			}
			if (PathCounter>720) PathCounter=0;
			NB_Course->Value=course;
		}
		else if (PathType==2) { //Square
			PathCounter++;
			int segmentNum = PathCounter/15;
			switch (segmentNum) {
				case 1:
				case 3:
				case 5:
				case 7:
					course+=6;
					break;
				case 9:
					PathCounter=0;
					break;

				default:
				break;
			}
			if (course > 359) course -= 360;
			else if (course <0) course += 360;
			NB_Course->Value=course;
		}


	}

	BuildNMEAStringsFromSim();
	ProcessNMEA(m_lastGPRMC,m_lastGPGGA);
}
//---------------------------------------------------------------------------



//this is the main Translation loop: read in an ELAN GPS Service Packet, Parse it into the m_GR struct, then create and send two NMEA messages
void __fastcall TForm4::IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData, TIdSocketHandle *ABinding)
{
	ticksSinceLastELANMessageReceived = 0;
	m_NumPacketsRx++;

	if (DebugF->Visible) DebugF->pme("Read in ELAN Packet of size %d bytes",AData.size());

	struct GPSRecord t_GR;
	char GPRMC[200];
	char GPGGA[200];

	ParseELANGPSPacket(AData,&t_GR);

    //save current loacation in case required by SIM via transfer button
	lastSimLat = t_GR.LatitudeDeg;
	lastSimLon = t_GR.LongitudeDeg;

	BuildNMEAStringsFromELAN(t_GR, GPRMC, GPGGA);
	UpdateDAGRDisplay(t_GR);

	if (DebugF->Visible) PrintGPSRecord(t_GR);

	ProcessNMEA(GPRMC,GPGGA);   //rename to SendNMEA
}


void  __fastcall TForm4::ProcessNMEA(char * GPRMC, char * GPGGA)
{
	if (bSendNMEA) {
		IdUDPClient1->SendBuffer(TE_NMEAIP->Text,NMEAPort,ToBytes(GPRMC));
		m_NumPacketsTx++;

		IdUDPClient1->SendBuffer(TE_NMEAIP->Text,NMEAPort,ToBytes(GPGGA));
		m_NumPacketsTx++;
	}

	UpdateNMEADisplay(GPRMC,GPGGA);
}




void __fastcall TForm4::BuildNMEAStringsFromSim()
{
	char buf[200];
	char UTCTime[30];

	SYSTEMTIME st;
	GetSystemTime(&st);
	sprintf(UTCTime,"%02d%02d%02d.%03d",st.wHour, st.wMinute, st.wSecond,st.wMilliseconds);

	char date[10];
	sprintf(date,"%02d%02d%02d",st.wDay,st.wMonth, st.wYear%100);

	double wholeDeg, fractional;
	double SimLat = TNum_SimLat->Value ;

	fractional = std::modf(SimLat, &wholeDeg);
	double LatMins = 60.0 * fractional;
	char NMEALatitude[20];
	sprintf(NMEALatitude,"%02d%07.4f", (int)(wholeDeg), LatMins);

	double SimLong = TNum_SimLong->Value;

	fractional = std::modf(abs(SimLong), &wholeDeg);
	double LonMins = 60.0 * fractional;
	char NMEALongitude[20];
	sprintf(NMEALongitude,"%03d%07.4f", (int)(wholeDeg), LonMins);

	//$GPRMC specific items
	double Speed = (double)NB_GndSpeed->Value;
	double Course = (double) NB_Course->Value;

	sprintf(buf,"GPRMC,%s,A,%s,N,%s,W,%1.1f,%1.1f,%s,000.0,W,A,E",UTCTime ,NMEALatitude, NMEALongitude, Speed, Course, date);
//	sprintf(buf,"GPRMC,%s,A,%s,N,%s,W,%1.1f,%1.1f,%s,%1.1f,%c,%c", UTCTime, NMEALatitude, NMEALongitude, Speed, m_GR.TrackInDegreesTrue, date, m_GR.MagVar,m_GR.MagVarDir,m_GR.GPRMC_PositionSystemModeIndicator);

	int checksum = calcNMEAChecksum(buf); //checksum does not include leading '$' nor trailing '*'
	sprintf(m_lastGPRMC,"$%s*%X", buf,checksum);

	//$GPGGA specific items
	int Elevation = TB_Elevation->Value;

	float GS = sample_geoid(SimLat, SimLong);

	sprintf(buf,"GPGGA,%s,%s,N,%s,W,1,4,1.0,%d,M,%5.2f,M,,,",UTCTime ,NMEALatitude, NMEALongitude, Elevation, GS);
	checksum = calcNMEAChecksum(buf);
	sprintf(m_lastGPGGA,"$%s*%X", buf,checksum);
}
//---------------------------------------------------------------------------



void  __fastcall TForm4::UpdateDAGRDisplay(struct GPSRecord &gr)
{
	char buf[200];
	LB_DAGR_DATUMCODE->Text = gr.DatumCode;


	if (gr.PosFormat == 0x1D) {
		LB_WARN_FLAG->Text="DAGR not in MGRS-New";
		LB_WARN_FLAG->Visible=true;
		LB_DAGR_MGRS->Text ="USNG";
	}
	else if ((gr.PosFormat >= 0x00) && (gr.PosFormat < 0x07)){
		LB_DAGR_MGRS->Text = PosFormatString[gr.PosFormat];
	}
	else LB_DAGR_MGRS->Text = "UNKNOWN";


	if ((0x00 == gr.PosFormat) || (0x01 == gr.PosFormat) || (0x1D == gr.PosFormat))  //this is expected: MGRS old, new or USNG
	{
		LB_WARN_FLAG->Visible=false;
		sprintf(buf,"%02d%c %c%c %05de",gr.ZoneNum,gr.ZoneLetter,gr.ColumnLetter,gr.RowLetter,gr.Easting);
		LB_DAGR_EASTING->Text = buf;
		sprintf(buf,"%05dn",gr.Northing);
		LB_DAGR_NORTHING->Text = buf;
	}
	else if (0x04 == gr.PosFormat) //this is LL-DMS
	{
		LB_WARN_FLAG->Text="DAGR not in MGRS-New";
		LB_WARN_FLAG->Visible=true;

		double wholePart;
		double fractionalPart = abs(modf(gr.LatitudeDeg, &wholePart));
		double minute = fractionalPart*60.0;
		double MinuteWholePart;
		double MinuteFractionalPart = abs(modf(minute, &MinuteWholePart));
		double seconds = MinuteFractionalPart *60.0;

		sprintf(buf,"%3.0f\xB0 %2.0f' %5.2f\"",wholePart,MinuteWholePart, seconds);
		if (DebugF->Visible) pme(buf);
		LB_DAGR_EASTING->Text = buf;

		fractionalPart = abs(modf(gr.LongitudeDeg, &wholePart));
		minute = fractionalPart*60.0;
		MinuteFractionalPart = abs(modf(minute, &MinuteWholePart));
		seconds = MinuteFractionalPart *60.0;
		sprintf(buf,"%3.0f\xB0 %2.0f' %5.2f\"",wholePart,MinuteWholePart,seconds);
		if (DebugF->Visible) pme(buf);
		LB_DAGR_NORTHING->Text = buf;
	}
	else if (0x03 == gr.PosFormat) //this is LL-DM.mmm
	{
		LB_WARN_FLAG->Text="DAGR not in MGRS-New";
		LB_WARN_FLAG->Visible=true;

		double wholePart;
		double fractionalPart = abs(modf(gr.LatitudeDeg, &wholePart));
		sprintf(buf,"%3.0f %6.3f",wholePart,fractionalPart*60.0);
		LB_DAGR_EASTING->Text = buf;

		fractionalPart = abs(modf(gr.LongitudeDeg, &wholePart));
		sprintf(buf,"%3.0f %6.3f",wholePart,fractionalPart*60.0);
		LB_DAGR_NORTHING->Text = buf;
	}




	if  (gr.ElevationUnits==0x0000)      //0 is m
	{
			sprintf(buf,"%5.0fm",gr.Elevation);
			LB_DAGR_ELEVATION->Text = buf;
	}
	else if (gr.ElevationUnits==0x0001)
	{
		sprintf(buf,"%5.0fft",gr.Elevation);   //ft
		LB_DAGR_ELEVATION->Text = buf;
	}
	else
		LB_DAGR_ELEVATION->Text = "";  //error

	if (gr.ElevationReference==0x0000)  LB_DAGR_MSL->Text = "MSL";
	else if (gr.ElevationReference==0x0001) LB_DAGR_MSL->Text = "HAE";
	else LB_DAGR_MSL->Text = "ERROR";


	if (SB_EVHE->Text=="EHE")
	{
		sprintf(buf,"%0.1f%s",	gr.EstHoriError,error_units[gr.EHEUnits]);
		LB_DAGR_EHE->Text = buf;
	}
	else
	{
		sprintf(buf,"%0.1f%s",	gr.EstVertError,error_units[gr.EVEUnits]);
		LB_DAGR_EHE->Text = buf;

	}

	LB_DAGR_FOMV->Text = "NA";   //value not provided by ELAN
	LB_DAGR_OPMODE->Text = opmode[gr.OpMode];

	//Page 2

	sprintf(buf,"%d %s",(int)gr.GroundSpeed,groundspeed_units[gr.GroundSpeedUnits]);
	LB_GdnSpd->Text = buf;

	sprintf(buf,"%d %s",(int)gr.Track,track_units[gr.TrackUnits]);
	LB_TRK->Text = buf;

	LB_TRK_NorthRef->Text = track_north_reference[gr.TrackNorthReference];


	if (0 == gr.NorthRefCorrectionUnits) { //MIL
		sprintf(buf,"%6.3f", gr.NorthRefCorrection);
	}
	else if (1 == gr.NorthRefCorrectionUnits) { //deg
		sprintf(buf,"%8.1f", gr.NorthRefCorrection);
	}
	else if (2 == gr.NorthRefCorrectionUnits) { //streck
		sprintf(buf,"%8.1f", gr.NorthRefCorrection);
	}
	else
	    sprintf(buf,"??");
	LB_NorthRefCor->Text =buf;
	LB_NorthRefCorrUnits->Text = CorrectionUnits[gr.NorthRefCorrectionUnits];


	char *timeZones[]={ (char *)"z", (char *)"1", (char *)"2", (char *)"3"};
	sprintf(buf,"%02d%02d:%02d%s",gr.hours,gr.minutes,gr.seconds , timeZones[gr.TimeZoneIndex]);
	LB_TOD->Text = buf;

	sprintf(buf,"%02d-%s-20%2d", gr.DayOfMonth, months[gr.Month], gr.Year); //last two digits of year so prefix 20
	LB_DATE->Text = buf;


	//extra

   	sprintf(buf,"%2.6f %3.6f",gr.LatitudeDeg,gr.LongitudeDeg);
	LB_DAGR_GEO->Text =  buf;

	sprintf(buf,"%d", m_NumPacketsRx);
	TE_PacketRxCount->Text=buf;

	if (gr.NavConverged) {
	    LB_NAV_NotConverged->FontColor= claBlack;
		LB_NAV_NotConverged->Text="Nav is Converged";
	}
	else  {
		LB_NAV_NotConverged->FontColor= claCrimson;
		LB_NAV_NotConverged->Text="Nav NOT Converged";
	}


    sprintf(buf,"%3.2f °True",abs(gr.TrackInDegreesTrue));
	LB_RMC_Hdg->Text = buf;

	sprintf(buf,"%3.2f °",gr.NorthRefCorrInDegrees);
	LB_NRCor->Text = buf;

	if (0 == gr.TrackNorthReference) {//if ref is true we cannot derive MagVar from ELAN data
		sprintf(buf,"Cannot determine from ELAN");
	}
	else 	sprintf(buf,"%3.2f ° %c",gr.MagVar,gr.MagVarDir);
	LB_RMCMagVar->Text = buf;

}
//---------------------------------------------------------------------------


void  __fastcall TForm4::UpdateNMEADisplay(char * GPRMC, char * GPGGA)
{
	char buf[200];
	TM_RMC->Text = GPRMC;
	TM_GGA->Text = GPGGA;

	TE_NMEAPacketSent->Text = std::to_string(m_NumPacketsTx).c_str();
}
//---------------------------------------------------------------------------




//Debug function
void  __fastcall TForm4::PrintGPSRecord(struct GPSRecord &m_GR)
{
	pme("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	pme("Protocol ID %02X Version %02X", m_GR.ProtocolID ,m_GR.Version);
	pme("UTC Time Zone: %d",m_GR.TimeZoneIndex);
	pme("UTC Time: %s %02d %s %02d at %02d:%02d:%02d", weekdays[m_GR.DayOfWeek],m_GR.DayOfMonth, months[m_GR.Month], m_GR.Year, m_GR.hours,m_GR.minutes,m_GR.seconds);
	pme("DATUM Code: %s", m_GR.DatumCode);
	pme("HW Version: %s", m_GR.HWVersion);

	pme("SW Version: %s", m_GR.SWVersion);
	pme("OP Mode 0x%0X which is %s",m_GR.OpMode, opmode[m_GR.OpMode]);

    //NEW
    pme("Lat: %f  Lon: %f",m_GR.LatitudeDeg, m_GR.LongitudeDeg);

	pme("North Reference Correction %f %s",m_GR.NorthRefCorrection,CorrectionUnits[m_GR.NorthRefCorrectionUnits]);
	pme("LAPDS %s",lapds[m_GR.LADGPS]);      //add lookup table for 0,1,2, other************
	pme("RAIM Status: %s",(m_GR.RAIM_Status)?"true":"false");
	pme("Wide Area GPS Enhancement (WAGE) Enabled: %s",(m_GR.WAGEEnabled)?"true":"false");
	pme("Wide Area GPS Enhancement (WAGE) Used: %s",(m_GR.WAGEUsed)?"true":"false");
	pme("WMM: %s", m_GR.WMM);

	pme("NAV Converged : %s",(m_GR.NavConverged)?"true":"false");
	if (m_GR.Sol_Code_Type==0) pme("Some data in Position, Velocity, Time (PVT) solution from C/A-code");
	else if (m_GR.Sol_Code_Type==1) pme("All data in PVT solution from P(Y)-code");
	else pme("Unknown Solution Code Type!!");

	pme("Elevation Status: %s",elevation_status[m_GR.ElevationStatus]);  //add lookup table for 0/1/2/other

	//char *EHEUnitsText[] ={"m","ft", "yds","km","mi","nm"};
	pme("Estimated Horizontal Error %f %s",m_GR.EstHoriError, error_units[m_GR.EHEUnits]);
	pme("Estimated Vertical Error %f %s",m_GR.EstVertError,error_units[m_GR.EVEUnits]);

	if (m_GR.PosFormat==1) {
		pme("Pos Type %d which is MGRS-New",m_GR.PosFormat);
	}
	else pme("Pos Type %d",m_GR.PosFormat);

	pme("Elevation %f %s %s",m_GR.Elevation,((m_GR.ElevationUnits==0x0000)?"metres":"feet"), ((m_GR.ElevationReference==0x0000)?"MSL":"HAE"));

	char *ER;
	(m_GR.ElevationReference==0x0000)?ER=(char *)"MSL":ER=(char *)"HAE";
	pme("Elevation Ref 0x%04X which is %s",m_GR.ElevationReference,ER);

	(m_GR.ElevationUnits==0x0000)?ER=(char *)"metres":ER=(char *)"feet";
	pme("Elevation Units 0x%04X which is %s",m_GR.ElevationUnits,ER);

	(m_GR.DatumNumber==47)?ER=(char *)"WGE":ER=(char *)"Not WGE and violates ELAN ICD";
    pme("Datum Number 0x%04X which is %s",m_GR.DatumNumber,ER);

	if(m_GR.Vel_Valid==0) pme("Velocity Valid: 0x%02X which is %s",m_GR.Vel_Valid,"Not Valid");
	else pme("Velocity Valid: 0x%02X which is %s",m_GR.Vel_Valid,"Valid");

	pme("Ground Speed: %f [%s]",m_GR.GroundSpeed,groundspeed_units[m_GR.GroundSpeedUnits]);

	pme("Track:%f Units: %s Trk Ref: %s",m_GR.Track,track_units[m_GR.TrackUnits],track_north_reference[m_GR.TrackNorthReference]);

	pme(m_lastGPRMC);
	pme(m_lastGPGGA);

	pme(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
}
//---------------------------------------------------------------------------




/////////Contol Actons (Button Clicked etc) /////////////





void __fastcall TForm4::SW_SIM_LIVESwitch(TObject *Sender)
{
	if (SW_SIM_LIVE->IsChecked)
	{
		IdIPMCastClient1->Active = false;
		Panel_DAGR->Visible=false;
		Panel_SIM->Visible=true;
		CB_TimeNow->Enabled=false;
		SimulationOn = true;
		GroupBox1->Enabled = false;
	}
	else  // LIVE mode: listen to ELAN GPS Packets
	{
		IdIPMCastClient1->Active = true;
		Panel_SIM->Visible=false;
		Panel_DAGR->Visible=true;
		CB_TimeNow->Enabled=true;
		SimulationOn = false;
		GroupBox1->Enabled = true;
	}
}
//---------------------------------------------------------------------------


//Listen/Stop Listen Button Clicked
void __fastcall TForm4::BN_ELANGPSListenClick(TObject *Sender)
{
	if (true == listening)
	{
		listening = false;
		BN_ELANGPSListen->Text = "Start";
		IdIPMCastClient1->Active = false;
	}
	else
	{
		listening = true;
		BN_ELANGPSListen->Text = "Stop";
		IdIPMCastClient1->Active = true;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm4::BN_SendNMEAClick(TObject *Sender)
{
	if (bSendNMEA) {
		bSendNMEA = false;
		BN_SendNMEA->Text = "Start";
	}
	else {
		bSendNMEA = true;
		BN_SendNMEA->Text = "Stop";
		IdUDPClientNMEA = new TIdUDPClient(NULL);
		NMEAPort = StrToInt(TE_NMEAPort->Text);
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm4::BN_TransferFromLiveClick(TObject *Sender)    //transfer last Location Rx by GPS to Sim location
{
		TNum_SimLat->Value = (float)lastSimLat; //m_GR.LatitudeDeg;
		TNum_SimLong->Value = (float)lastSimLon; // m_GR.LongitudeDeg;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::TB_ElevationChange(TObject *Sender)
{
	int feetMSL = (int)(TB_Elevation->Value * FEETPERMETRE);
	Lb_SimElevation->Text = IntToStr((int)TB_Elevation->Value) + "[m] = " + IntToStr(feetMSL) + " [ft]";
}
//---------------------------------------------------------------------------


void __fastcall TForm4::DialGndSpeedChange(TObject *Sender)
{
	int gs = 0;
	if (DialGndSpeed->Value<0) gs = -DialGndSpeed->Value;
	else gs = 360 - DialGndSpeed->Value;
	NB_GndSpeed->Value = gs/4;    //change Dial Control widget range from 0 thru 360 to 0 thru 90
}
//---------------------------------------------------------------------------

void __fastcall TForm4::DialGndSpeedDblClick(TObject *Sender)
{
	DialGndSpeed->Value = 0.0;
    NB_GndSpeed->Value=0;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::ArcDial1_CourseChange(TObject *Sender)
{
	int course;
	if (ArcDial1_Course->Value < 0) course = -ArcDial1_Course->Value;
	else course = 360 - ArcDial1_Course->Value;
	NB_Course->Value = course;
}
//---------------------------------------------------------------------------


void __fastcall TForm4::ArcDial1_CourseDblClick(TObject *Sender)
{
	ArcDial1_Course->Value = 0.0;
	NB_Course->Value=0;
}
//---------------------------------------------------------------------------




#include "GPGGA.h"
extern PACKAGE TGPGGAForm *GPGGAForm;
void __fastcall TForm4::GPGGAClick(TObject *Sender)
{
	  GPGGAForm->Show();
}
//---------------------------------------------------------------------------



#include "GPRMC.h"
extern PACKAGE TRMCForm *RMCForm;
void __fastcall TForm4::GPRMCClick(TObject *Sender)
{
	RMCForm->Show();
}
//---------------------------------------------------------------------------


#include "About.h"
extern PACKAGE TAboutForm *AboutForm;
void __fastcall TForm4::About2Clicked(TObject *Sender)
{
	AboutForm->Show();
}



void __fastcall TForm4::DebugClick(TObject *Sender)
{
		DebugF->Show();
}
//---------------------------------------------------------------------------


 //this is a printf for the Debug Form
void  __fastcall TForm4::pme(const char* fmt, ...)
{
	if (DebugF->Visible==false ) return;

	va_list args;
	va_start(args, fmt);
	char buf[200];
	vsprintf(buf,fmt,args);

		DebugF->pme(buf);

	va_end(args);
}
//---------------------------------------------------------------------------




void __fastcall TForm4::SB_EVHEClick(TObject *Sender)
{
	if (SB_EVHE->Text=="EHE")
			SB_EVHE->Text = "EVE";
		else
			SB_EVHE->Text = "EHE";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CB_PathChange(TObject *Sender)
{

	if (CB_Path->Selected->Text == "Circle") {
		PathType = 1;
		PathCounter = 0;
		pme("Starting Circle Nav");
	}

	else if (CB_Path->Selected->Text == "Square") {
		PathType = 2;
		PathCounter = 0;
		pme("Starting Square Nav");
	}
	else
	{
		PathType = 0; //line
        pme("Starting Straight Line Nav");

	}
}
//---------------------------------------------------------------------------


