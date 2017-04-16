/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CBaseModelInfo.h"
#include "CSimpleModelInfo.h"
#include "CVehicleModelInfo.h"
#include "CMloModelInfo.h"
#include "CTimeModelInfo.h"
#include "CPedModelInfo.h"
#include "CXtraCompsModelInfo.h"
#include "C2deffectsModelInfo.h"
#include "CClumpModelInfo.h"
#include "eLevelName.h"
#include "CInstance.h"

class CModelInfo {
public:
    // variables
    static CBaseModelInfo **ms_modelInfoPtrs;
    static CXtraCompsModelInfo *ms_xtraCompsModelStore;
    static CInstance *ms_mloInstanceStore;
    static C2deffectsModelInfo *ms_2dEffectStore;
    static CModelInfo* (&ms_clumpModelStore)[5];		     // CModelInfo* CModelInfo::ms_clumpModelStore[5]
    static CMloModelInfo* (&ms_mloModelStore)[1];		     // CMloModelInfo* CModelInfo::ms_mloModelStore[1]
    static CPedModelInfo* (&ms_pedModelStore)[90];		     // CPedModelInfo* CModelInfo::ms_pedModelStore[90]
    static CSimpleModelInfo* (&ms_simpleModelStore)[5000];	 // CSimpleModelInfo* CModelInfo::ms_simpleModelStore[5000]
    static CTimeModelInfo* (&ms_timeModelStore)[30];	     // CTimeModelInfo* CModelInfo::ms_timeModelStore[30]
    static CVehicleModelInfo* (&ms_vehicleModelStore)[120];	 // CVehicleModelInfo* CModelInfo::ms_vehicleModelStore[120]

    //funcs
    static CClumpModelInfo* AddClumpModel(int index);
    static CMloModelInfo* AddMloModel(int index);
    static CPedModelInfo* AddPedModel(int index);
    static CSimpleModelInfo* AddSimpleModel(int index);
    static CTimeModelInfo* AddTimeModel(int index);
    static CVehicleModelInfo* AddVehicleModel(int index);
    static void ConstructMloClumps();
    static void* Get2dEffectStore();
    static void* GetMloInstanceStore();
    static CBaseModelInfo* GetModelInfo(char const* name, int* index);
    static void Initialise();
    static bool IsBoatModel(int index);
    static void ReInit2dEffects();
    static void RemoveColModelsFromOtherLevels(eLevelName arg0);
    static void ShutDown();
};