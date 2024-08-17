
                                                                              /*--------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include "bg_WMM.h"


//#include "GeomagnetismHeader.h"
//#include "EGM9615.h"

/*---------------------------------------------------------------------------*/


double CalcMagVar(double lat, double lon, double HAE,int year, int month, int day);
int InitWMM();
int DeInitWMM();
#define WMM_ERR_NO_ERROR 0
#define WMM_ERR_WMM_COF_NOT_FOUND 1
#define WMM_ERR_DATE_CONVERSION_ERROR 2


int main()
{
	int retVal =InitWMM();
	if (retVal==WMM_ERR_WMM_COF_NOT_FOUND) {
		printf("Cannot find WMM file: %s\r\n","WMM.COF");
        getch();
        return  -1;
	}

	for (int i = 69; i < 110;i++)
	{
		double mv = CalcMagVar(45, -i, 1.032, 2024, 8, 18);
		printf(">>>Mag Var for i = %d: %f %s\r\n", -i, fabs(mv), (mv < 0)?"W":"E");
	}

	double _mv = CalcMagVar(45, -70, 1.032, 2024, 8, 18);
	printf(">>>Mag Var: %f %s\r\n",  fabs(_mv), (_mv < 0)?"W":"E");

	getchar();

	DeInitWMM();
	return 0;
}


