//---------------------------------------------------------------------------

#ifndef ELANtoNMEAH
#define ELANtoNMEAH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <FireDAC.Comp.BatchMove.hpp>
#include <FireDAC.Comp.BatchMove.Text.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
#include <IdUDPServer.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Memo.Types.hpp>
#include <FMX.ScrollBox.hpp>
#include <IdIPMCastBase.hpp>
#include <IdIPMCastServer.hpp>
#include <IdIPMCastClient.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Objects.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.SpinBox.hpp>
#include <FMX.NumberBox.hpp>
#include <FMX.ComboTrackBar.hpp>
#include <FMX.Menus.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------


#include   "common\ELAN2NMEA.h"




class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TIdIPMCastClient *IdIPMCastClient1;
	TIdUDPClient *IdUDPClient1;
	TEdit *TE_GPSServiceIP;
	TButton *BN_ELANGPSListen;
	TEdit *TE_GPSServicePort;
	TLabel *Label2;
	TEdit *TE_PacketRxCount;
	TLabel *Label1;
	TCheckBox *CB_TimeNow;
	TEdit *TE_NMEAIP;
	TEdit *TE_NMEAPort;
	TButton *BN_SendNMEA;
	TGroupBox *GroupBox1;
	TGroupBox *GB_NMEASender;
	TLabel *Label8;
	TEdit *TE_NMEAPacketSent;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label4;
	TLabel *Label13;
	TLabel *Label15;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label14;
	TLabel *Label16;
	TLabel *Label19;
	TTimer *Timer1;
	TArcDial *ArcDial1_Course;
	TTrackBar *TB_Elevation;
	TButton *BN_TxFerFromLive;
	TLabel *Lb_SimElevation;
	TImage *LeftScreenPage;
	TLabel *Label12;
	TLabel *LB_DAGR_MGRS;
	TLabel *LB_DAGR_DATUMCODE;
	TLabel *LB_DAGR_OPMODE;
	TLabel *Label23;
	TLabel *LB_DAGR_MSL;
	TLabel *labelFOM;
	TLabel *LB_DAGR_FOMV;
	TLabel *LB_DAGR_ELEVATION;
	TLabel *LB_DAGR_EHE;
	TLabel *LB_DAGR_EASTING;
	TLabel *LB_DAGR_NORTHING;
	TLabel *LB_DAGR_GEO;
	TLabel *Label6;
	TPanel *Panel_DAGR;
	TPanel *Panel_SIM;
	TArcDial *DialGndSpeed;
	TNumberBox *NB_GndSpeed;
	TNumberBox *NB_Course;
	TLabel *Label3;
	TLabel *Label5;
	TPanel *Panel_NMEA;
	TLabel *Label7;
	TMemo *TM_GGA;
	TSwitch *SW_SIM_LIVE;
	TMemo *TM_RMC;
	TLabel *Label11;
	TMainMenu *MainMenu1;
	TMenuItem *Help;
	TMenuItem *About2;
	TMenuItem *GPRMC;
	TMenuItem *GPGGA;
	TMenuItem *Debug;
	TLabel *LB_WARN_FLAG;
	TSpeedButton *SB_EVHE;
	TComboBox *CB_Path;
	TLabel *Label21;
	TNumberBox *TNum_SimLat;
	TNumberBox *TNum_SimLong;
	TImage *RightScreen;
	TLabel *Label39;
	TLabel *Label43;
	TLabel *LB_DATE;
	TLabel *Label52;
	TLabel *Label40;
	TLabel *LB_TRK_NorthRef;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label44;
	TLabel *LB_NorthRefCor;
	TLabel *LB_NorthRefCorrUnits;
	TLabel *LB_GdnSpd;
	TLabel *LB_TRK;
	TLabel *LB_TOD;
	TLabel *LB_TimeSinceLast;
	TLabel *LB_NAV_NotConverged;
	TGroupBox *GB_NMEADerivedData;
	TLabel *Label20;
	TLabel *Label22;
	TLabel *LB_RMC_Hdg;
	TLabel *LB_NRCor;
	TLabel *Label24;
	TLabel *LB_RMCMagVar;

	void __fastcall IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData, TIdSocketHandle *ABinding);
    void __fastcall BN_ELANGPSListenClick(TObject *Sender);
	void __fastcall BN_SendNMEAClick(TObject *Sender);
	void __fastcall Timer1OnTimer(TObject *Sender);
	void __fastcall ArcDial1_CourseChange(TObject *Sender);
	void __fastcall BN_TransferFromLiveClick(TObject *Sender);
	void __fastcall TB_ElevationChange(TObject *Sender);
	void __fastcall DialGndSpeedChange(TObject *Sender);
	void __fastcall SW_SIM_LIVESwitch(TObject *Sender);
	void __fastcall About2Clicked(TObject *Sender);
	void __fastcall GPGGAClick(TObject *Sender);
	void __fastcall GPRMCClick(TObject *Sender);
	void __fastcall DebugClick(TObject *Sender);
	void __fastcall DialGndSpeedDblClick(TObject *Sender);
	void __fastcall ArcDial1_CourseDblClick(TObject *Sender);
	void __fastcall SB_EVHEClick(TObject *Sender);
	void __fastcall CB_PathChange(TObject *Sender);

private:	// User declarations

	bool listening = true;
	void _ParseELANGPSPacket(TIdBytes packet);
	void pme(const char* fmt, ...);
	void PrintGPSRecord(struct GPSRecord &gr);
	void UpdateNMEADisplay(char * GPRMC, char * GPGGA);
	void UpdateDAGRDisplay(struct GPSRecord &gr);
	void BuildNMEAStringsFromSim();
	void ProcessNMEA(char * GPRMC, char * GPGGA);

	int m_NumPacketsRx=0;
	int m_NumPacketsTx=0;
	char m_lastGPRMC[200];
	char m_lastGPGGA[200];

	bool bSendNMEA = true;
	TIdUDPClient *IdUDPClientNMEA;
	int NMEAPort;

	bool SimulationOn = false;

	double lastSimLat = 45.330; //TE_SimLatitude->Text.ToDouble();
	double lastSimLon = -75.644; //TE_SimLongitude->Text.ToDouble();



	//const float feetpermetre = 3.28084;
	int 	ticksSinceLastELANMessageReceived = 0;
	int PathType = 0;// 0: Line, 1: Circle, 2: Square
	int PathCounter = 0;

public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
