#include "CPools.h"

CPool<CPed, CCopPed> *&CPools::ms_pPedPool                                  = *(CPool<CPed, CCopPed> **)0xB74490;
CPool<CVehicle,  std::aligned_storage<0xA18, 1>::type > *&CPools::ms_pVehiclePool = *(CPool<CVehicle, std::aligned_storage<0xA18, 1>::type > **)0xB74494;
CPool<CBuilding> *&CPools::ms_pBuildingPool                                 = *(CPool<CBuilding> **)0xB74498;
CPool<CObject> *&CPools::ms_pObjectPool                                     = *(CPool<CObject> **)0xB7449C;
CPool<CDummy> *&CPools::ms_pDummyPool                                       = *(CPool<CDummy> **)0xB744A0;
CPool<CColModel> *&CPools::ms_pColModelPool                                 = *(CPool<CColModel> **)0xB744A4;
CPool<CTask> *&CPools::ms_pTaskPool                                         = *(CPool<CTask> **)0xB744A8;
CPool<CPedIntelligence> *&CPools::ms_pPedIntelligencePool                   = *(CPool<CPedIntelligence> **)0xB744C0;
