/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
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
#include "CVehicle.h"

class CModelInfo {
public:
    // variables
    static CBaseModelInfo **ms_modelInfoPtrs;
    static XtraCompsModelStore* ms_xtraCompsModelStore; // [2]
    static MloInstanceStore* ms_mloInstanceStore;       // [1]
    static EffectStore* ms_2dEffectStore;               // [2000]
    static ClumpModelStore* ms_clumpModelStore;         // [5]
    static MloModelStore* ms_mloModelStore;             // [1]
    static PedModelStore* ms_pedModelStore;             // [90]
    static SimpleModelStore* ms_simpleModelStore;       // [5000]
    static TimeModelStore* ms_timeModelStore;           // [30]
    static VehicleModelStore* ms_vehicleModelStore;     // [120]

    //funcs
    static CClumpModelInfo* AddClumpModel(int index);
    static CMloModelInfo* AddMloModel(int index);
    static CPedModelInfo* AddPedModel(int index);
    static CSimpleModelInfo* AddSimpleModel(int index);
    static CTimeModelInfo* AddTimeModel(int index);
    static CVehicleModelInfo* AddVehicleModel(int index);
    static void ConstructMloClumps();
    static EffectStore* Get2dEffectStore();
    static MloInstanceStore* GetMloInstanceStore();
    static CBaseModelInfo* GetModelInfo(char const* name, int* index);
    static void Initialise();
    static bool IsBoatModel(int index);
    static void ReInit2dEffects();
    static void RemoveColModelsFromOtherLevels(eLevelName levelName);
    static void ShutDown();

    static inline CBaseModelInfo *GetModelInfo(int index) {
        return ms_modelInfoPtrs[index];
    }

    static inline bool IsPedModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_PED);
    }

    static inline bool IsCarModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_AUTOMOBILE);
    }

    static inline bool IsTrainModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_TRAIN);
    }

    static inline bool IsHeliModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_HELI);
    }

    static inline bool IsPlaneModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo *>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_PLANE);
    }

    // return -1 if model is not a vehicle model otherwise returns vehicle model type
    // 0 - car, 1 - boat, 2 - train, 3 - heli, 4 - plane
    static inline int IsVehicleModelType(int index) {
        int result;
        if (index < 5500 && ms_modelInfoPtrs[index]) {
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