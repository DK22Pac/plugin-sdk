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
#include "CVehicle.h"

class CModelInfo {
public:
    // variables
    static CBaseModelInfo **ms_modelInfoPtrs;       // [6500];
    static ClumpModelStore* ms_clumpModelStore;     // [5]
    static PedModelStore* ms_pedModelStore;         // [130]
    static SimpleModelStore* ms_simpleModelStore;   // [3885]
    static TimeModelStore* ms_timeModelStore;       // [385]
    static VehicleModelStore* ms_vehicleModelStore; // [110]
    static WeaponModelStore* ms_weaponModelStore;   // [37]

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

    static inline bool IsPedModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_PED);
    }

    static inline bool IsHeliModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_HELI);
    }

    static inline bool IsPlaneModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_PLANE);
    }

    // return -1 if model is not a vehicle model otherwise returns vehicle model type
    // 0 - car, 1 - boat, 2 - train, 3 - heli, 4 - plane, 5 - bike 
    static inline int IsVehicleModelType(int index) {
        int result;
        if (index < 6500 && ms_modelInfoPtrs[index]) {
            if (ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE)
                result = reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType;
            else
                result = -1;
        }
        else
            result = -1;
        return result;
    }
};