

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include "bg_WMM.h"

#include "GeomagnetismHeader.h"
#include "EGM9615.h"




static MAGtype_MagneticModel * MagneticModels[1], *TimedMagneticModel;
static MAGtype_Ellipsoid Ellip;
static MAGtype_GeoMagneticElements GeoMagneticElements, Errors;
static MAGtype_Geoid Geoid;

int InitWMM()
{
	char filename[] = "WMM.COF";
	char VersionDate[12];
	int NumTerms, Flag = 1, nMax = 0;
	int epochs = 1;

	//these defines are in GeomagnetismHeader.h
	//#define MODEL_RELEASE_DATE "10 Dec 2019"
	//#define VERSIONDATE_LARGE "$Date: 2019-12-10 10:40:43 -0700 (Tue, 10 Dec 2019) $"
	strncpy(VersionDate, VERSIONDATE_LARGE + 39, 11);
	VersionDate[11] = '\0';

	if(!MAG_robustReadMagModels(filename, &MagneticModels, epochs)) return WMM_ERR_WMM_COF_NOT_FOUND;

	if(nMax < MagneticModels[0]->nMax) nMax = MagneticModels[0]->nMax;
	NumTerms = ((nMax + 1) * (nMax + 2) / 2);
	TimedMagneticModel = MAG_AllocateModelMemory(NumTerms); /* For storing the time modified WMM Model parameters */
	if(MagneticModels[0] == NULL || TimedMagneticModel == NULL)
	{
		MAG_Error(2);
	}
	MAG_SetDefaults(&Ellip, &Geoid); /* Set default values and constants */

	/* Set EGM96 Geoid parameters */
	Geoid.GeoidHeightBuffer = GeoidHeightBuffer;
	Geoid.Geoid_Initialized = 1;

    return WMM_ERR_NO_ERROR;
}

int DeInitWMM()
{
	MAG_FreeMagneticModelMemory(TimedMagneticModel);
	MAG_FreeMagneticModelMemory(MagneticModels[0]);
    return WMM_ERR_NO_ERROR;
}


double CalcMagVar(double lat, double lon, double HAE, int year, int month, int day)
{
	MAGtype_CoordSpherical CoordSpherical;
	MAGtype_CoordGeodetic CoordGeodetic;
	MAGtype_Date UserDate;

	CoordGeodetic.phi = lat;
	CoordGeodetic.lambda = lon;
	CoordGeodetic.HeightAboveGeoid = HAE;
	MAG_GeodeticToSpherical(Ellip, CoordGeodetic, &CoordSpherical); //Convert from geodetic to Spherical Equations: 17-18, WMM Technical report

	UserDate.Year = year;
	UserDate.Month = month;
	UserDate.Day = day;
	MAG_TimelyModifyMagneticModel(UserDate, MagneticModels[0], TimedMagneticModel); /* Time adjust the coefficients, Equation 19, WMM Technical report */

	char Error_Message[255];
	if(!MAG_DateToYear(&UserDate, Error_Message))
	{
		puts("Error in date converwsion");
		return WMM_ERR_DATE_CONVERSION_ERROR;
	}

	MAG_TimelyModifyMagneticModel(UserDate, MagneticModels[0], TimedMagneticModel); /* Time adjust the coefficients, Equation 19, WMM Technical report */
	MAG_Geomag(Ellip, CoordSpherical, CoordGeodetic, TimedMagneticModel, &GeoMagneticElements); /* Computes the geoMagnetic field elements and their time change*/

	//MAG_CalculateGridVariation(CoordGeodetic, &GeoMagneticElements);
	//MAG_WMMErrorCalc(GeoMagneticElements.H, &Errors);

	return GeoMagneticElements.Decl;
}


