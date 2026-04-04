/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "C2dEffect.h"
#include "CAtomicModelInfo.h"
#include "CBaseModelInfo.h"
#include "CDamageAtomicModelInfo.h"
#include "CLodAtomicModelInfo.h"
#include "CLodTimeModelInfo.h"
#include "CPedModelInfo.h"
#include "CStore.h"
#include "CTimeModelInfo.h"
#include "CVehicleModelInfo.h"
#include "CWeaponModelInfo.h"
#include "eModelID.h"
#include "eVehicleType.h"

class PLUGIN_API CModelInfo
{
public:
    static CBaseModelInfo** ms_modelInfoPtrs; // extended by limit adjusters
    static const int&       ms_modelInfoCount;

    static void Initialise();
    static void ReInit2dEffects();
    static void ShutDown();

    static CAtomicModelInfo*       AddAtomicModel(int modelId);
    static CDamageAtomicModelInfo* AddDamageAtomicModel(int modelId);
    static CLodAtomicModelInfo*    AddLodAtomicModel(int modelId);
    static CTimeModelInfo*         AddTimeModel(int modelId);
    static CLodTimeModelInfo*      AddLodTimeModel(int modelId);
    static CWeaponModelInfo*       AddWeaponModel(int modelId);
    static CClumpModelInfo*        AddClumpModel(int modelId);
    static CVehicleModelInfo*      AddVehicleModel(int modelId);
    static CPedModelInfo*          AddPedModel(int modelId);

    static int* Get2dEffectStore();

    static CBaseModelInfo* GetModelInfo(int modelId);
    static CBaseModelInfo* GetModelInfo(const char* name, int* modelId);
    static CBaseModelInfo* GetModelInfo(const char* name, int minModelId, int maxModelId); // get model in range
    static CBaseModelInfo* GetModelInfoFromHashKey(unsigned int arg0, int* modelId);
    static CBaseModelInfo* GetModelInfoUInt16(const char* name, int* modelId);

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