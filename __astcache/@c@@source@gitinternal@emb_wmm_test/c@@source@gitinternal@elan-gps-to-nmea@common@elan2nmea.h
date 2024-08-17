//---------------------------------------------------------------------------
#ifndef ELAN2NMEAH
#define ELAN2NMEAH
#pragma once

#include <IdUDPBase.hpp>



struct GPSRecord {

	byte ProtocolID;
	byte Version;
	byte GPS_TIME_TAG[8];

	//UTC_TIME:
	int TimeZoneIndex;
	int hours;
	int minutes;
	int seconds;
	int DayOfWeek;
	int DayOfMonth;
	int Month;
	int Year;

	char DatumCode[7];
	int OpMode;

	double NorthRefCorrection;
	int NorthRefCorrectionUnits;

	char HWVersion[17];
	char SWVersion[17];
	int LADGPS;
	bool RAIM_Status;
	bool WAGEEnabled;
	bool WAGEUsed;

	char WMM[13];

	bool NavConverged;
	int Sol_Code_Type;
	int ElevationStatus;
	double EstHoriError;
	int EHEUnits;
	double EstVertError;
	int EVEUnits;

	int PosFormat;

	//POSITION
	int ZoneNum;
	char ZoneLetter;
	char ColumnLetter;
	char RowLetter;
	int Easting;
	int Northing;

	double LatitudeDeg;
	double LongitudeDeg;

	float Elevation;

	int Vel_Valid;
	double GroundSpeed;
	int GroundSpeedUnits;
	int ElevationReference;
	int ElevationUnits;
	int DatumNumber;

	int GeoidSeparation = 0;

	double Track;
	int TrackUnits;
	int TrackNorthReference;

	//NMEA items
	double MagVar;
	char MagVarDir;
	double TrackInDegreesTrue;
	bool GPRMC_PositionValid = true;
	char GPRMC_PositionSystemModeIndicator='A';
    double NorthRefCorrInDegrees;

};


enum Offsets {
	PROTOCOL_ID = 0,
	VERSION = 1,
	GPS_TIME_TAG = 2,
	_UTC_TIME = GPS_TIME_TAG + 8 ,
	HARDWARE_VERSION = _UTC_TIME + 16,
	SOFTWARE_VERSION = HARDWARE_VERSION + 16,
	OPERATING_MODE = SOFTWARE_VERSION + 16,
	NORTH_REF_CORRECTION = OPERATING_MODE + 2,
	NORTH_REF_CORRECTION_UNITS = NORTH_REF_CORRECTION + 4,
	LADGPS_STATUS = NORTH_REF_CORRECTION_UNITS + 2,
	DATUM_CODE = LADGPS_STATUS + 2,
	RAIM_STATUS = DATUM_CODE + 6,
	WAGE_ENABLED = RAIM_STATUS + 2,
	WAGE_USED =  WAGE_ENABLED + 2,
	WORLD_MAGNETIC_MODEL = WAGE_USED + 2,
	NAV_CONVERGED = WORLD_MAGNETIC_MODEL + 12,
	SOL_CODE_TYPE = NAV_CONVERGED + 2,
	ELEVATION_STATUS = SOL_CODE_TYPE + 2,
	EST_HORIZ_ERROR = ELEVATION_STATUS + 2,
	EHE_UNITS = EST_HORIZ_ERROR + 4,
	EST_VERT_ERROR = EHE_UNITS + 2,
	EVE_UNITS = EST_VERT_ERROR + 4,
	POSITION = EVE_UNITS + 2,
	VEL_VALID = POSITION + 28,
	GROUND_SPEED = VEL_VALID + 2,
	GROUND_SPEED_UNITS = GROUND_SPEED +4,
	TRACK = GROUND_SPEED_UNITS + 2,
	TRACK_UNITS = TRACK + 4,
	TRACK_NORTH_REFERENCE = TRACK_UNITS + 2
};



int calcNMEAChecksum(char *buf);


double GetSPFP(byte *hex);
double GetEPFP(byte *hex);

void ParseELANGPSPacket(TIdBytes packet, struct GPSRecord *gr);
void BuildNMEAStringsFromELAN(struct GPSRecord &gr, char *rmc, char *gga);



#endif


