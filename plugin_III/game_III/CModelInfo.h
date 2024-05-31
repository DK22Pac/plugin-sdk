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
#include "CMloModelInfo.h"
#include "CTimeModelInfo.h"
#include "CClumpModelInfo.h"
#include "CVehicleModelInfo.h"
#include "CPedModelInfo.h"
#include "CStore.h"
#include "CInstance.h"
#include "C2dEffect.h"
#include "eLevelName.h"
#include "CXtraCompsModelInfo.h"
#include "CVehicle.h"

class PLUGIN_API CModelInfo {
public:
    SUPPORTED_10EN_11EN_STEAM static CStore<CClumpModelInfo, 5> &ms_clumpModelStore;
    SUPPORTED_10EN_11EN_STEAM static CBaseModelInfo *(&ms_modelInfoPtrs)[5500]; // static CBaseModelInfo *ms_modelInfoPtrs[5500]
    SUPPORTED_10EN_11EN_STEAM static CStore<CSimpleModelInfo, 5000> &ms_simpleModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CInstance, 1> &ms_mloInstanceStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CVehicleModelInfo, 120> &ms_vehicleModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CMloModelInfo, 1> &ms_mloModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CXtraCompsModelInfo, 2> &ms_xtraCompsModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CTimeModelInfo, 30> &ms_timeModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<CPedModelInfo, 90> &ms_pedModelStore;
    SUPPORTED_10EN_11EN_STEAM static CStore<C2dEffect, 2000> &ms_2dEffectStore;

    SUPPORTED_10EN_11EN_STEAM static CClumpModelInfo *AddClumpModel(int index);
    SUPPORTED_10EN_11EN_STEAM static CMloModelInfo *AddMloModel(int index);
    SUPPORTED_10EN_11EN_STEAM static CPedModelInfo *AddPedModel(int index);
    SUPPORTED_10EN_11EN_STEAM static CSimpleModelInfo *AddSimpleModel(int index);
    SUPPORTED_10EN_11EN_STEAM static CTimeModelInfo *AddTimeModel(int index);
    SUPPORTED_10EN_11EN_STEAM static CVehicleModelInfo *AddVehicleModel(int index);
    SUPPORTED_10EN_11EN_STEAM static void ConstructMloClumps();
    SUPPORTED_10EN_11EN_STEAM static CStore<C2dEffect, 2000> *Get2dEffectStore();
    SUPPORTED_10EN_11EN_STEAM static CStore<CInstance, 1> *GetMloInstanceStore();
    SUPPORTED_10EN_11EN_STEAM static CBaseModelInfo *GetModelInfo(char const *name, int *index);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static bool IsBoatModel(int index);
    SUPPORTED_10EN_11EN_STEAM static void ReInit2dEffects();
    SUPPORTED_10EN_11EN_STEAM static void RemoveColModelsFromOtherLevels(eLevelName level);
    SUPPORTED_10EN_11EN_STEAM static void ShutDown();

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

    static inline bool IsBikeModel(int index) {
        return (ms_modelInfoPtrs[index] && ms_modelInfoPtrs[index]->m_nType == MODEL_INFO_VEHICLE && reinterpret_cast<CVehicleModelInfo*>(ms_modelInfoPtrs[index])->m_nVehicleType == VEHICLE_BIKE);
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

#include "meta/meta.CModelInfo.h"
