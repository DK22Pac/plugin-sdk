/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "C2dEffect.h"
#include "CBaseModelInfo.h"
#include "CClumpModelInfo.h"
#include "CInstance.h"
#include "CMloModelInfo.h"
#include "CPedModelInfo.h"
#include "CSimpleModelInfo.h"
#include "CStore.h"
#include "CTimeModelInfo.h"
#include "CXtraCompsModelInfo.h"
#include "eLevelName.h"
#include "eModelID.h"
#include "eModelInfoType.h"
#include "eVehicleType.h"

class CVehicleModelInfo;

class PLUGIN_API CModelInfo {
public:
    SUPPORTED_10EN static CBaseModelInfo** ms_modelInfoPtrs; // extended by limit adjusters
    SUPPORTED_10EN static const int&       ms_modelInfoCount;

    // TODO: these should be replaced by limit adjuster supporting getter functions
    SUPPORTED_10EN_11EN_STEAM static CStore<CClumpModelInfo, 5>&     ms_clumpModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CSimpleModelInfo, 5000>& ms_simpleModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CInstance, 1>&           ms_mloInstanceStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CVehicleModelInfo, 120>& ms_vehicleModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CMloModelInfo, 1>&       ms_mloModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CXtraCompsModelInfo, 2>& ms_xtraCompsModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CTimeModelInfo, 30>&     ms_timeModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CPedModelInfo, 90>&      ms_pedModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<C2dEffect, 2000>&        ms_2dEffectStore;

    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void ReInit2dEffects();
    SUPPORTED_10EN_11EN_STEAM static void ShutDown();

    SUPPORTED_10EN_11EN_STEAM static CClumpModelInfo*   AddClumpModel(int modelId);
    SUPPORTED_10EN_11EN_STEAM static CMloModelInfo*     AddMloModel(int modelId);
    SUPPORTED_10EN_11EN_STEAM static CPedModelInfo*     AddPedModel(int modelId);
    SUPPORTED_10EN_11EN_STEAM static CSimpleModelInfo*  AddSimpleModel(int modelId);
    SUPPORTED_10EN_11EN_STEAM static CTimeModelInfo*    AddTimeModel(int modelId);
    SUPPORTED_10EN_11EN_STEAM static CVehicleModelInfo* AddVehicleModel(int modelId);

    SUPPORTED_10EN_11EN_STEAM static CStore<C2dEffect, 2000>* Get2dEffectStore();

    SUPPORTED_10EN_11EN_STEAM static void ConstructMloClumps();
    SUPPORTED_10EN_11EN_STEAM static CStore<CInstance, 1>* GetMloInstanceStore();
    SUPPORTED_10EN_11EN_STEAM static void RemoveColModelsFromOtherLevels(eLevelName level);

    static CBaseModelInfo* GetModelInfo(int modelId);
    SUPPORTED_10EN_11EN_STEAM static CBaseModelInfo* GetModelInfo(char const* name, int* modelId);

    static int FindNextModel(eModelInfoType type, int startModelId, bool searchForward = true, bool warpAround = true); // find next/previous model of given type

    static bool IsPedModel(int modelId);
    static bool IsVehicleModel(int modelId);

    // vehicle subclass info
    static eVehicleType GetVehicleModelType(int modelId);
    static bool IsBikeModel(int modelId);
    static bool IsBmxModel(int modelId);
    static bool IsBoatModel(int modelId);
    static bool IsCarModel(int modelId);
    static bool IsHeliModel(int modelId);
    static bool IsMonsterTruckModel(int modelId);
    static bool IsPlaneModel(int modelId);
    static bool IsQuadBikeModel(int modelId);
    static bool IsTrailerModel(int modelId);
    static bool IsTrainModel(int modelId);
};

#include "meta/meta.CModelInfo.h"
