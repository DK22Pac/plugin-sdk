#include "CPools.h"

CPool<CBuilding>  *&CPools::ms_pBuildingPool =  *(CPool<CBuilding> **)0x97F240;
CPool<CTreadable> *&CPools::ms_pTreadablePool = *(CPool<CTreadable> **)0x978834;