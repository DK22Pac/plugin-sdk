/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBaseModelInfo.h"
#include "CSimpleModelInfo.h"
#include "CVehicleModelInfo.h"
#include "CWeaponModelInfo.h"
#include "CTimeModelInfo.h"
#include "CPedModelInfo.h"

class CModelInfo {
public:
    // variables
    static CBaseModelInfo **ms_modelInfoPtrs;

    //funcs
    static CClumpModelInfo* AddClumpModel(int index);
    static CPedModelInfo* AddPedModel(int index);
    static CSimpleModelInfo* AddSimpleModel(int index);
    static CTimeModelInfo* AddTimeModel(int index);
    static CVehicleModelInfo* AddVehicleModel(int index);
    static CWeaponModelInfo* AddWeaponModel(int index);
    static void* Get2dEffectStore();
    static CBaseModelInfo* GetModelInfo(char const* name, int* index);
    static CBaseModelInfo* GetModelInfo(char const* name, int minIndex, int maxInedx);
    static void Initialise();
    static bool IsBikeModel(int index);
    static bool IsBoatModel(int index);
    static bool IsCarModel(int index);
    static void ShutDown();

    static inline CBaseModelInfo *GetModelInfo(int index) {
        return ms_modelInfoPtrs[index];
    }
};