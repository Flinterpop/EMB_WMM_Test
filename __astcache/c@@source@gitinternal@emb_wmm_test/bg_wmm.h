
#ifndef BG_WMM_H
#define BG_WMM_H

double CalcMagVar(double lat, double lon, double HAE,int year, int month, int day);
int InitWMM();
int DeInitWMM();
#define WMM_ERR_NO_ERROR 0
#define WMM_ERR_WMM_COF_NOT_FOUND 1
#define WMM_ERR_DATE_CONVERSION_ERROR 2





#endif