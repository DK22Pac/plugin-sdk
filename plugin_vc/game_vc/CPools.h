/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"
#include "CVehicle.h"
#include "CPed.h"
#include "CPool.h"
#include "CCutsceneObject.h"
#include "CColModel.h"
#include "cAudioScriptObject.h"
#include "CTreadable.h"
#include "CBuilding.h"
#include "CDummy.h"
#include "CPlayerPed.h"
#include "CEntryInfoNode.h"
#include "CPtrNode.h"
#include "CAutomobile.h"

#undef GetObject

class PLUGIN_API CPools {
public:
    SUPPORTED_10EN_11EN_STEAM static CPool<CObject, CCutsceneObject> *&ms_pObjectPool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CColModel> *&ms_pColModelPool;
    SUPPORTED_10EN_11EN_STEAM static CPool<cAudioScriptObject> *&ms_pAudioScriptObjectPool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CTreadable> *&ms_pTreadablePool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CBuilding> *&ms_pBuildingPool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CDummy> *&ms_pDummyPool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CPed, CPlayerPed> *&ms_pPedPool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CEntryInfoNode> *&ms_pEntryInfoNodePool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CPtrNode> *&ms_pPtrNodePool;
    SUPPORTED_10EN_11EN_STEAM static CPool<CVehicle, CAutomobile> *&ms_pVehiclePool;

    SUPPORTED_10EN_11EN_STEAM static void CheckPoolsEmpty();
    SUPPORTED_10EN_11EN_STEAM static CObject *GetObject(int handle);
    SUPPORTED_10EN_11EN_STEAM static int GetObjectRef(CObject *object);
    SUPPORTED_10EN_11EN_STEAM static CPed *GetPed(int handle);
    SUPPORTED_10EN_11EN_STEAM static int GetPedRef(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM static CVehicle *GetVehicle(int handle);
    SUPPORTED_10EN_11EN_STEAM static int GetVehicleRef(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadObjectPool(unsigned char *buffer, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void LoadPedPool(unsigned char *buffer, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void LoadVehiclePool(unsigned char *buffer, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void MakeSureSlotInObjectPoolIsEmpty(int slot);
    SUPPORTED_10EN_11EN_STEAM static void SaveObjectPool(unsigned char *buffer, unsigned int *outSize);
    SUPPORTED_10EN_11EN_STEAM static void SavePedPool(unsigned char *buffer, unsigned int *outSize);
    SUPPORTED_10EN_11EN_STEAM static void SaveVehiclePool(unsigned char *buffer, unsigned int *outSize);
    SUPPORTED_10EN_11EN_STEAM static void ShutDown();
};

#include "meta/meta.CPools.h"
