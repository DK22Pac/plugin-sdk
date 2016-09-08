/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

CPool<CPed, CCopPed> *&CPools::ms_pPedPool                = *(CPool<CPed, CCopPed> **)0xB74490;
CPool<CVehicle, CHeli> *&CPools::ms_pVehiclePool          = *(CPool<CVehicle, CHeli> **)0xB74494;
CPool<CBuilding> *&CPools::ms_pBuildingPool               = *(CPool<CBuilding> **)0xB74498;
CPool<CObject, CCutsceneObject> *&CPools::ms_pObjectPool  = *(CPool<CObject, CCutsceneObject> **)0xB7449C;
CPool<CDummy> *&CPools::ms_pDummyPool                     = *(CPool<CDummy> **)0xB744A0;
CPool<CColModel> *&CPools::ms_pColModelPool               = *(CPool<CColModel> **)0xB744A4;
CPool<CTask, char[128]> *&CPools::ms_pTaskPool            = *(CPool<CTask, char[128]> **)0xB744A8;
CPool<CPedIntelligence> *&CPools::ms_pPedIntelligencePool = *(CPool<CPedIntelligence> **)0xB744C0;