/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBaseModelInfo.h"
#include "CPedModelInfo.h"
#include "CSimpleModelInfo.h"
#include "CTimeModelInfo.h"
#include "CVehicleModelInfo.h"
#include "CWeaponModelInfo.h"
#include "eModelID.h"

class CModelInfo {
public:
    // variables
    static CBaseModelInfo** ms_modelInfoPtrs; // extended by limit adjusters
    static const int&       ms_modelInfoCount;

    static void Initialise();
    static void ShutDown();

    static ClumpModelStore*   ms_clumpModelStore;   // [5]
    static PedModelStore*     ms_pedModelStore;     // [130]
    static SimpleModelStore*  ms_simpleModelStore;  // [3885]
    static TimeModelStore*    ms_timeModelStore;    // [385]
    static VehicleModelStore* ms_vehicleModelStore; // [110]
    static WeaponModelStore*  ms_weaponModelStore;  // [37]

    //funcs
    static CClumpModelInfo*   AddClumpModel(int modelId);
    static CPedModelInfo*     AddPedModel(int modelId);
    static CSimpleModelInfo*  AddSimpleModel(int modelId);
    static CTimeModelInfo*    AddTimeModel(int modelId);
    static CVehicleModelInfo* AddVehicleModel(int modelId);
    static CWeaponModelInfo*  AddWeaponModel(int modelId);

    static void* Get2dEffectStore();

    static CBaseModelInfo* GetModelInfo(int modelId);
    static CBaseModelInfo* GetModelInfo(char const* name, int* modelId);
    static CBaseModelInfo* GetModelInfo(char const* name, int minModelId, int maxModelId); // get model in range

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