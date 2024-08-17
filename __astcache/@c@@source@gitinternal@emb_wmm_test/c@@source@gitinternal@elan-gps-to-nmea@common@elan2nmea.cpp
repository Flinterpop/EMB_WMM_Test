#include "System.SysUtils.hpp"

#include   <stdio.h>
#include   <dos.h>


//MGRS code from https://github.com/hobuinc/mgrs/tree/main
#include "mgrs.h"
#include "geoid.h"

#include "ELAN2NMEA.h"

#include "AppLogger.h"


//CONSTANTS Scoped to this file only

static double DEG2RAD = M_PI / 180.0;
static double RAD2DEG = 180.0 / M_PI;
static double PI_2 = M_PI / 2.0;

static double FEETPERMETRE = 3.28084;
static double KMPERNM = 1.852;

static const char *weekdays[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
static const char *months[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
static const char *opmode[] = {"Continuous", "Fix", "Averaging", "Time only", "Standby", "2D Training", "3D Training","Rehearsal Training", "Not used"};
static const char *CorrectionUnits[] = {"mil","deg","streck","Not Used"};
static const char *ladgps[] = {"Not receiving LADGPS inputs"," Receiving but not using LADGPS inputs","Receiving and using LADGPS inputs","Not Used"};
static const char *elevation_status[] = {"OK", "Held", "Poor VDOP", "Not used"};
static const char *error_units[] = {"m","ft","yds","km","mi","nm","Not Used"};
static const char *groundspeed_units[] = {"kph", "mph", "kt", "Not Used"};
static const char *track_units[] = {"mil","deg","streck","Not Used"};
static const char *track_north_reference[] ={"True","Magnetic", "Grid","Not Used"};
static const char *PosFormatString[] ={"MGRS-Old","MGRS-New", "UTM/UPS","LL-DM","LL-DMS","BNG","ITMG"};

//This is the most complex function as it converts the ELAN GPS Service message into formats required for NMEA
void  ParseELANGPSPacket(TIdBytes packet,	struct GPSRecord *GR)
{
	GR->ProtocolID = (unsigned short) packet[PROTOCOL_ID];
	GR->Version = (unsigned short) packet[VERSION];

	GR->TimeZoneIndex = (unsigned short) packet[_UTC_TIME];
	GR->hours = (unsigned short) packet[_UTC_TIME + 2];	//packet[_UTC_TIME+2] + packet[_UTC_TIME+3]*16;
	GR->minutes = (unsigned short) packet[_UTC_TIME + 4];	// packet[_UTC_TIME+4] + packet[_UTC_TIME+5]*16;
	GR->seconds =  (unsigned short) packet[_UTC_TIME + 6]; //packet[_UTC_TIME+6] + packet[_UTC_TIME+7]*16;
	GR->DayOfWeek =  (unsigned short) packet[_UTC_TIME + 8];
	GR->DayOfMonth =  (unsigned short) packet[_UTC_TIME + 10];
	GR->Month =  (unsigned short) packet[_UTC_TIME + 12]; 	//this is in the range 1-12 not 0-11
	GR->Year = (unsigned short) packet[_UTC_TIME + 14];   	//last two digits of year

	char *DatumCode = (char *) &packet[DATUM_CODE];
	GR->DatumCode[0] = DatumCode[1]; GR->DatumCode[1] = DatumCode[0];
	GR->DatumCode[2] = DatumCode[3]; GR->DatumCode[3] = DatumCode[2];
	GR->DatumCode[4] = DatumCode[5]; GR->DatumCode[5] = DatumCode[4];
	GR->DatumCode[6] = 0; //ensure string is terminated       Should contain 'WGD' but this is not checked

	char *HWVer = (char *) &packet[HARDWARE_VERSION];
	char hv[16];
	GR->HWVersion[0] = HWVer[1]; GR->HWVersion[1] = HWVer[0];
	GR->HWVersion[2] = HWVer[3]; GR->HWVersion[3] = HWVer[2];
	GR->HWVersion[4] = HWVer[5]; GR->HWVersion[5] = HWVer[4];
	GR->HWVersion[6] = HWVer[7]; GR->HWVersion[7] = HWVer[6];
	GR->HWVersion[8] = HWVer[9]; GR->HWVersion[9] = HWVer[8];
	GR->HWVersion[10] = HWVer[11]; GR->HWVersion[11] = HWVer[10];
	GR->HWVersion[12] = HWVer[13]; GR->HWVersion[13] = HWVer[12];
	GR->HWVersion[14] = HWVer[15]; GR->HWVersion[15] = HWVer[14];
	GR->HWVersion[15] = 0; //ensure string is terminated

	char *SWVer = (char *) &packet[SOFTWARE_VERSION];
	char sv[16];
	GR->SWVersion[0] = SWVer[1]; GR->SWVersion[1] = SWVer[0];
	GR->SWVersion[2] = SWVer[3]; GR->SWVersion[3] = SWVer[2];
	GR->SWVersion[4] = SWVer[5]; GR->SWVersion[5] = SWVer[4];
	GR->SWVersion[6] = SWVer[7]; GR->SWVersion[7] = SWVer[6];
	GR->SWVersion[8] = SWVer[9]; GR->SWVersion[9] = SWVer[8];
	GR->SWVersion[10] = SWVer[11]; GR->SWVersion[11] = SWVer[10];
	GR->SWVersion[12] = SWVer[13]; GR->SWVersion[13] = SWVer[12];
	GR->SWVersion[14] = SWVer[15]; GR->SWVersion[15] = SWVer[14];
	GR->SWVersion[15] = 0; //ensure string is terminated

	GR->OpMode = (unsigned short) packet[OPERATING_MODE];

	GR->NorthRefCorrection = GetSPFP((byte*)&packet[NORTH_REF_CORRECTION]);
	GR->NorthRefCorrectionUnits  = (unsigned int) packet[NORTH_REF_CORRECTION_UNITS];

	GR->LADGPS  = (unsigned int) packet[LADGPS_STATUS];
    //LADGPS: 0=Not Rx LADGPS, 1=Rx but not using, 2= Rx and using

	int rs  = (unsigned int) packet[RAIM_STATUS];
	(rs == 0)?(GR->RAIM_Status = false):(GR->RAIM_Status = true);

	int wg  = (unsigned int) packet[WAGE_ENABLED];
	(wg == 0)?(GR->WAGEEnabled = false):(GR->WAGEEnabled = true);

	int wu  = (unsigned int) packet[WAGE_ENABLED];
	(wu == 0)?(GR->WAGEUsed = false):(GR->WAGEUsed = true);

	char *_WMM = (char *)&packet[WORLD_MAGNETIC_MODEL];
	GR->WMM[0] = _WMM[1]; GR->WMM[1] = _WMM[0];
	GR->WMM[2] = _WMM[3]; GR->WMM[3] = _WMM[2];
	GR->WMM[4] = _WMM[5]; GR->WMM[5] = _WMM[4];
	GR->WMM[6] = _WMM[7]; GR->WMM[7] = _WMM[6];
	GR->WMM[8] = 0; //ensure string is terminated   should contain WMM 2010 but this is not checked

	int nc  = (unsigned int) packet[NAV_CONVERGED];
	(nc == 0)?(GR->NavConverged = false):(GR->NavConverged = true);

	GR->Sol_Code_Type  = (unsigned int) packet[SOL_CODE_TYPE];

	GR->ElevationStatus = (unsigned int) packet[ELEVATION_STATUS];

	GR->EstHoriError = GetSPFP((byte*)&packet[EST_HORIZ_ERROR]);
	GR->EHEUnits = (unsigned int) packet[EHE_UNITS];   //should be 0 for metres
	GR->EstVertError = GetSPFP((byte*)&packet[EST_VERT_ERROR]);
	GR->EVEUnits = (unsigned int) packet[EVE_UNITS];   //should be 0 for metres

    //START of 28 bytes/14 WORDS of POSITION information
	byte *Pos = (byte*)&packet[POSITION];
	GR->PosFormat = (unsigned int) *Pos;

	if ((0x00 == GR->PosFormat) || (0x01 == GR->PosFormat) || (0x1D == GR->PosFormat)) {  //position is MGRS-Old, MGRS-New or USNG which all have the same decode
		GR->ZoneNum = (unsigned int) *(Pos + 2); //this is POSITION WORD 2 (ICD-53)
		GR->ZoneLetter = (char) *(Pos + 5);      //this is POSITION WORD 3 (ICD-53) but skipping the leading letter which is supposed to be a space

		GR->ColumnLetter = (char) *(Pos + 7); 	//this is POSITION WORD 4 (ICD-53) but skipping the leading letter which is supposed to be a space
		GR->RowLetter = (char) *(Pos + 9); 		//this is POSITION WORD 5 (ICD-53) but skipping the leading letter which is supposed to be a space

		//MGRS Easting Calculation
		int hex1 = (byte)packet[POSITION + 10];      //this is POSITION WORD 6 (ICD-53)
		int hex2 = (byte)packet[POSITION + 11];
		int hex3 = (byte)packet[POSITION + 12];      //this is POSITION WORD 7 (ICD-53)
		int hex4 = (byte)packet[POSITION + 13];
		GR->Easting = hex1 + (hex2 << 8) + (hex3 << 16) + ((hex4 & 0xE0) << 24);

		//MGRS Northing Calculation
		hex1 = (byte)packet[POSITION + 14];     //this is POSITION WORD 8 (ICD-53)
		hex2 = (byte)packet[POSITION + 15];
		hex3 = (byte)packet[POSITION + 16];     //this is POSITION WORD 9 (ICD-53)
		hex4 = (byte)packet[POSITION + 17];

		GR->Northing = hex1 + (hex2 << 8) + (hex3 << 16) + ((hex4 & 0xE0) << 24);

		double latitudeRad, longitudeRad;
		char buf[200];
		sprintf(buf,"%02d%c%c%c%05d%05d", GR->ZoneNum, GR->ZoneLetter, GR->ColumnLetter, GR->RowLetter, GR->Easting, GR->Northing);
		Convert_MGRS_To_Geodetic(buf, &latitudeRad, &longitudeRad);
		GR->LatitudeDeg = latitudeRad * RAD2DEG;
		GR->LongitudeDeg = longitudeRad * RAD2DEG;
	}
	else if (0x02 == GR->PosFormat) {  //position is UTM/UPS
		log("Pos format is UTM/UPS\r\n");
	}
	else if ((0x03 == GR->PosFormat)|| (0x04 == GR->PosFormat)) {  //position is Lat/Long
		if(0x03 == GR->PosFormat) 	{
			log("Pos format is Lat/Lon Deg Minutes.minutes\r\n");
		}
		else if(0x04 == GR->PosFormat)
		{
			log("Pos format is Lat/Lon Deg Minutes Seconds\r\n");
		}

		//ICD-153 states that latitude and longitide are store in Collins Adaptive Processing System (CADS) Extended Precison Floating Point (epfp)
		GR->LatitudeDeg = GetEPFP((byte*)&packet[POSITION + 2]);
		GR->LongitudeDeg = GetEPFP((byte*)&packet[POSITION + 10]);
	}
	else if ((0x05 == GR->PosFormat)|| (0x06 == GR->PosFormat)) {  //position is BNG/ITMG
		log("Pos format is BNG/ITMG\r\n");
	}

	GR->Elevation = GetSPFP((byte*)&packet[POSITION + 18]);
	GR->ElevationReference =   (unsigned int)packet[POSITION + 22];
	GR->ElevationUnits =   (unsigned int)packet[POSITION + 24];

	GR->DatumNumber = (unsigned int)packet[POSITION + 26];

	GR->Vel_Valid = (unsigned int) packet[VEL_VALID];

	GR->GroundSpeed  = GetSPFP((byte*)&packet[GROUND_SPEED]);
	GR->GroundSpeedUnits  = (unsigned int) packet[GROUND_SPEED_UNITS];

	GR->Track  = GetSPFP((byte*)&packet[TRACK]);      //words 31-32 of Message 5040
	GR->TrackUnits = (unsigned int) packet[TRACK_UNITS];  //2 bytes: mil = 0, deg = 1, streck = 2, 0x3 to 0xF are unused
	GR->TrackNorthReference = (unsigned int) packet[TRACK_NORTH_REFERENCE];   // 2 bytes, 0 = True, 1 = Mag, 2 m= grid, 0x3 to 0xf are unused
}
//---------------------------------------------------------------------------



void BuildNMEAStringsFromELAN(struct GPSRecord &m_GR, char *rmc, char *gga)
{
	char UTCTime[20];
	char date[10];

	SYSTEMTIME st;
	sprintf(UTCTime,"%02d%02d%02d.%03d", m_GR.hours, m_GR.minutes, m_GR.seconds, 0 );
	sprintf(date,"%02d%02d%02d", m_GR.DayOfMonth, m_GR.Month, m_GR.Year);

	double wholeDeg, fractional;
	fractional = std::modf(m_GR.LatitudeDeg, &wholeDeg);
	double LatMins = 60.0 * fractional;
	char NMEALatitude[20];
	sprintf(NMEALatitude,"%02d%07.4f", (int)(wholeDeg), LatMins);  //%07.4f means minimum 7 chars including decimal and 4 digits after decimal and pad with leading 0s

	fractional = std::modf(abs(m_GR.LongitudeDeg), &wholeDeg);
	double LonMins = 60.0 * fractional;
	char NMEALongitude[20];
	sprintf(NMEALongitude,"%03d%07.4f", (int)(wholeDeg), LonMins);

	//$GPRMC specific items
	double Speed = (double)m_GR.GroundSpeed;

	//Observation 367062: ELAN2NMEA is not calculating heading information correctly
	//conversion of degrees to mils
	double TrackInDegrees = 0.0;
	if (m_GR.TrackUnits==0) {  //ELAN/DAGR Sending MILS
		//convert MILS to Degrees
		TrackInDegrees = (double)(m_GR.Track * 0.05625);  // 6400 mils is 360 degrees: 1 mil  is	0.05625°
	}
	else if (m_GR.TrackUnits==1) { //ELAN/DAGR Sending Degrees
		TrackInDegrees = (double)m_GR.Track;
	}
	else if (m_GR.TrackUnits==2) {     //ELAN/DAGR Sending STRECK    //. In the Swedish military, there are 6300 strecks per turn (1 streck = 0.997 mrad).
		//https://en.wikipedia.org/wiki/List_of_unusual_units_of_measurement
		TrackInDegrees =  (double)(m_GR.Track * 360.0/6300.0);  // 6300 streck is 360 degrees: 1 streck  is	360/6300
	}
	else  //m_GR->TrackUnits must be 0x3 to 0xh
	{
		//invalid track //TrackInDegrees will be left as 0.0
		log("Track format is invalid\r\n");
	}


	//Magnetic Declination/Variation follows
	m_GR.NorthRefCorrInDegrees = 0.0;
	if (m_GR.NorthRefCorrectionUnits==0) {  //mils
		m_GR.NorthRefCorrInDegrees = (double)(m_GR.NorthRefCorrection * 0.05625);  // 6400 mils is 360 degrees: 1 mil  is	0.05625°
	}
	else if (m_GR.NorthRefCorrectionUnits==1) {  //degrees
		m_GR.NorthRefCorrInDegrees= m_GR.NorthRefCorrection;
	}
	else if (m_GR.NorthRefCorrectionUnits==2) {  //streck
		m_GR.NorthRefCorrInDegrees= (double)(m_GR.NorthRefCorrection * 360.0/6300.0);  // 6300 streck is 360 degrees: 1 streck  is	360/6300
	}
	else  //m_GR->NorthRefCorrectionUnits must be 0x3 to 0xh
	{
		//invalid Correction Reference //NorthRefCorrInDegrees will be left as 0.0
		log("North Reference Correction format is invalid\r\n");
	}


	m_GR.TrackInDegreesTrue = 0.0;

	if (m_GR.TrackNorthReference==0) //true
	{
		m_GR.TrackInDegreesTrue = TrackInDegrees;// no correction if TRUE and TRUE + NorthRefCorrInDegrees;
	}
	else if (m_GR.TrackNorthReference==1) //Magnetic
	{
		m_GR.TrackInDegreesTrue = TrackInDegrees + m_GR.NorthRefCorrInDegrees;
	}
	else if (m_GR.TrackNorthReference==2) //GRID
	{
		log("North Reference is in GRID which is invalid for ELAN - treating as TRUE which may be wrong\r\n");
		m_GR.TrackInDegreesTrue = TrackInDegrees;
	}


	char buf[200];

	//Observation 367062: ELAN2NMEA is not calculating heading information correctly
	m_GR.MagVar =  abs(m_GR.NorthRefCorrInDegrees);
	m_GR.MagVarDir = 'E';
	if (m_GR.NorthRefCorrInDegrees<0) m_GR.MagVarDir = 'W';
	sprintf(buf,"GPRMC,%s,%c,%s,N,%s,W,%1.1f,%1.1f,%s,%1.1f,%c,%c", UTCTime, (m_GR.GPRMC_PositionValid?'A':'V'), NMEALatitude, NMEALongitude, Speed, m_GR.TrackInDegreesTrue, date, m_GR.MagVar,m_GR.MagVarDir,m_GR.GPRMC_PositionSystemModeIndicator);

	//sprintf(buf,"GPRMC,%s,A,%s,N,%s,W,%1.1f,%1.1f,%s,000.0,E", UTCTime, NMEALatitude, NMEALongitude, Speed, Course, date);
	int checksum = calcNMEAChecksum(buf);
	sprintf(rmc,"$%s*%X", buf,checksum); //checksum does not include leading '$' nor trailing '*' so include them in this line


	//$GPGGA specific items
	int Elevation = (int)m_GR.Elevation; //ELAN BL2022+ is supposed to in METRES but check if its in feet
	if (m_GR.ElevationUnits == 1) {   //1 is feet 0 is metres
		Elevation = Elevation / FEETPERMETRE;
		log("***ELEVATION UNITS Issue: ELAN is sending in FEET but should be METRES\r\n");
	}

	float GS = sample_geoid(m_GR.LatitudeDeg, m_GR.LongitudeDeg);  //this is the geoid separation calculated from a sample at a geographic position

	if (m_GR.ElevationReference == 1) {
		log("***ELEVATION REFERENCE Issue: ELAN is sending in HAE but should be MSL\r\n");
		Elevation -= GS; //correct HAE to MSL for NMEA which is only MSL
	}

	sprintf(buf,"GPGGA,%s,%s,N,%s,W,1,4,1.0,%d,M,%5.2f,M,,,",UTCTime, NMEALatitude, NMEALongitude, Elevation, GS);
	checksum = calcNMEAChecksum(buf);
	sprintf(gga,"$%s*%X", buf, checksum);
}


double GetEPFP(byte *hex)
{
	float i_exponent = (byte)hex[0];
	int hex2 = (byte)hex[1];
	int hex3 = (byte)hex[2];
	int hex4 = (byte)hex[3];
	int hex5 = (byte)hex[4];
	int hex6 = (byte)hex[5];

	double mantissa = (byte)hex2;
	mantissa /= 256;
	mantissa += (byte)hex3;
	mantissa /= 256;
	mantissa += (byte)hex4;
	mantissa /= 256;
	mantissa += (byte)hex5;
	mantissa /= 256;
	mantissa += (byte)hex6 & 0x7F;
	mantissa /= 256;
	mantissa += 0.5;
	float exponent = (byte)i_exponent - 128;

	int sign = 1;
	if ((byte)hex6 & 0x80) sign =-1;

	return sign*(float)(mantissa * pow(2.0,exponent));
}


double GetSPFP(byte *hex)
{
	int ahex1 = (byte)hex[0]; //packet[POSITION + 18];  //this is POSITION WORD 10 (ICD-53)
	int ahex2 = (byte)hex[1]; //packet[POSITION + 19];  //this is POSITION WORD 10 (ICD-53)
	int ahex3 = (byte)hex[2];//packet[POSITION + 20];  //this is POSITION WORD 11 (ICD-53)
	int ahex4 = (byte)hex[3]; //packet[POSITION + 21];  //this is POSITION WORD 11 (ICD-53)

	float mantissa = (byte)ahex2;
	mantissa /= 256;
	mantissa += (byte)ahex3;
	mantissa /= 256;
	mantissa += (byte)ahex4 & 0x7F;
	mantissa /= 256;
	mantissa += 0.5;
	float exponent = (byte)ahex1 - 128;

	int sign = 1;
	if ((byte)ahex4 & 0x80) sign = -1;

	return (float)(sign * mantissa * pow(2.0,exponent));
}


int calcNMEAChecksum(char *buf)      //buf should not include leading '$' nor trailing '*' that appear in all NMEA messages
{
	int len = strlen(buf);
	int checksum = 0;
	for (int i = 0; i < len; i++)
		{
			checksum ^= (byte)buf[i];
		}
	return checksum;
}

