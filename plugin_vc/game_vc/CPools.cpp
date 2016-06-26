/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#include "CPools.h"

CPool<CBuilding>  *&CPools::ms_pBuildingPool =  *(CPool<CBuilding> **)0x97F240;
CPool<CTreadable> *&CPools::ms_pTreadablePool = *(CPool<CTreadable> **)0x978834;
CPool<CEntryInfoNode> *&CPools::ms_pEntryInfoNodePool = *(CPool<CEntryInfoNode> **)0xA0D8BC;
CPool<CPtrNode> *&CPools::ms_pPtrNodePool = *(CPool<CPtrNode> **)0xA0FD38;