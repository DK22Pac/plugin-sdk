/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPool.h"
#include "CCopPed.h"
#include "CHeli.h"
#include "CBuilding.h"
#include "CCutsceneObject.h"
#include "CDummy.h"
#include "CColModel.h"
#include "CTask.h"
#include "CPedIntelligence.h"

#ifdef GetObject
#undef GetObject
#endif

class CPools {
public:
	static CPool<CPed, CCopPed>                                 *&ms_pPedPool;
	static CPool<CVehicle, CHeli>                               *&ms_pVehiclePool;
	static CPool<CBuilding>                                     *&ms_pBuildingPool;
	static CPool<CObject, CCutsceneObject>                      *&ms_pObjectPool;
	static CPool<CDummy>                                        *&ms_pDummyPool;
	static CPool<CColModel>                                     *&ms_pColModelPool;
	static CPool<CTask, char[128]>                              *&ms_pTaskPool;
	static CPool<CPedIntelligence>                              *&ms_pPedIntelligencePool;

    // dummy function; returns "-1"
    static int CheckBuildingAtomics();
    static void CheckPoolsEmpty();
    static CObject* GetObject(int handle);
    static int GetObjectRef(CObject* object);
    static CPed* GetPed(int handle);
    static int GetPedRef(CPed* ped);
    static CVehicle* GetVehicle(int arg0);
    static int GetVehicleRef(CVehicle* vehicle);
    static void Initialise();
    // returns "true"
    static bool Load();
    // returns "true"
    static bool LoadObjectPool();
    // returns "true"
    static bool LoadPedPool();
    // returns "true"
    static bool LoadVehiclePool();
    static void MakeSureSlotInObjectPoolIsEmpty(int slot);
    // returns "true"
    static bool Save();
    // returns "true"
    static bool SaveObjectPool();
    // returns "true"
    static bool SavePedPool();
    // returns "true"
    static bool SaveVehiclePool();
    static void ShutDown();
};