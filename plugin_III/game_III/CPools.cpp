/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

CPool<CBuilding>  *&CPools::ms_pBuildingPool =  *(CPool<CBuilding> **)0x8F2C04; 
CPool<CTreadable> *&CPools::ms_pTreadablePool = *(CPool<CTreadable> **)0x8F2568; 
CPool<CEntryInfoNode> *&CPools::ms_pEntryInfoNodePool = *(CPool<CEntryInfoNode> **)0x941448; 
CPool<CPtrNode> *&CPools::ms_pPtrNodePool = *(CPool<CPtrNode> **)0x943044; 
CPool<CVehicle, CAutomobile> *&CPools::ms_pVehiclePool = *(CPool<CVehicle, CAutomobile> **)0x9430DC;
CPool<CPed, CPlayerPed> *&CPools::ms_pPedPool = *(CPool<CPed, CPlayerPed> **)0x8F2C60; 
CPool<CObject, CCutsceneObject> *&CPools::ms_pObjectPool = *(CPool<CObject, CCutsceneObject> **)0x880E28; 
CPool<CDummy, CDummyObject>  *&CPools::ms_pDummyPool = *(CPool<CDummy, CDummyObject> **)0x8F2C18;

// CPools::ms_pAudioScriptObjectPool 0x8F1B6C; 