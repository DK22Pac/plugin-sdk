/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPool.h"
#include "CTreadable.h"
#include "CDummy.h"
#include "CEntryInfoList.h"
#include "CPtrList.h"
#include "CAutomobile.h"
#include "CPlayerPed.h"
#include "CCutsceneObject.h"

#ifdef GetObject
#undef GetObject
#endif

class CPools {
public:
    static CPool<CBuilding>                *&ms_pBuildingPool;
    static CPool<CTreadable>               *&ms_pTreadablePool;
    static CPool<CPtrNode>                 *&ms_pPtrNodePool;
    static CPool<CEntryInfoNode>           *&ms_pEntryInfoNodePool;
    static CPool<CVehicle, CAutomobile>    *&ms_pVehiclePool;
    static CPool<CPed, CPlayerPed>         *&ms_pPedPool;
    static CPool<CObject, CCutsceneObject> *&ms_pObjectPool;

    static void MakeSureSlotInObjectPoolIsEmpty(int slot);
    static void LoadPedPool(unsigned char* buffer, unsigned int size);
    static void SavePedPool(unsigned char* buffer, unsigned int* outSize);
    static void LoadObjectPool(unsigned char* buffer, unsigned int size);
    static void SaveObjectPool(unsigned char* buffer, unsigned int* outSize);
    static void SaveVehiclePool(unsigned char* buffer, unsigned int* outSize);
    static void LoadVehiclePool(unsigned char* buffer, unsigned int size);
    static CObject* GetObject(int handle);
    static int GetObjectRef(CObject* object);
    static CVehicle* GetVehicle(int handle);
    static int GetVehicleRef(CVehicle* vehicle);
    static CPed* GetPed(int handle);
    static int GetPedRef(CPed* ped);
    static void CheckPoolsEmpty();
    static void ShutDown();
    static void Initialise();
};