# EMB_WMM_Test
Test Code for the World Magnetic Model

I had a requirement to encode NMEA string GPRMC which requires Magnetic Variation. 
If MagVar is not available then it can be calculated using the World Magnetic Model managed by NOAA.
https://www.ncei.noaa.gov/products/world-magnetic-model

NOAA provides c source code and a coefficient file that can calculate the MagVar for a location at a specific time.
The coefficient file is valid for 5 years 2015-2020, 2020-2025 etc.

This project creates a small API that returns the MagVar based on a Lat/Lon/Alt/Date.
It uses the NOAA files verbatim.


![image](https://github.com/user-attachments/assets/b136454a-90dd-42a0-9ea3-34b316faf611)

Example:

'''
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include "bg_WMM.h"

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

'''
