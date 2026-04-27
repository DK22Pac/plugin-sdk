/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

CBaseModelInfo **CModelInfo::ms_modelInfoPtrs = *(CBaseModelInfo***)0x40B824; // limit adjusters support - get from reference in CStreaming::LoadAllRequestedModels
const int& CModelInfo::ms_modelInfoCount = *(const int*)0x40B818; // limit adjusters support - get from CStreaming::LoadAllRequestedModels

ClumpModelStore *CModelInfo::ms_clumpModelStore = (ClumpModelStore*)0x752988;
PedModelStore *CModelInfo::ms_pedModelStore = (PedModelStore*)0x75CA70;
SimpleModelStore *CModelInfo::ms_simpleModelStore = (SimpleModelStore*)0x709EAC;
TimeModelStore *CModelInfo::ms_timeModelStore = (TimeModelStore*)0x74A6B0;
VehicleModelStore *CModelInfo::ms_vehicleModelStore = (VehicleModelStore*)0x752A88;
WeaponModelStore *CModelInfo::ms_weaponModelStore = (WeaponModelStore*)0x751F10;

void CModelInfo::Initialise() {
    plugin::Call<0x55FA40>();
}

void CModelInfo::ShutDown() {
    plugin::Call<0x55F820>();
}

CClumpModelInfo* CModelInfo::AddClumpModel(int modelId) {
    return plugin::CallAndReturn<CClumpModelInfo*, 0x55F640, int>(modelId);
}

CPedModelInfo* CModelInfo::AddPedModel(int modelId) {
    return plugin::CallAndReturn<CPedModelInfo*, 0x55F580, int>(modelId);
}

CSimpleModelInfo* CModelInfo::AddSimpleModel(int modelId) {
    return plugin::CallAndReturn<CSimpleModelInfo*, 0x55F730, int>(modelId);
}

CTimeModelInfo* CModelInfo::AddTimeModel(int modelId) {
    return plugin::CallAndReturn<CTimeModelInfo*, 0x55F6E0, int>(modelId);
}

CVehicleModelInfo* CModelInfo::AddVehicleModel(int modelId) {
    return plugin::CallAndReturn<CVehicleModelInfo*, 0x55F5D0, int>(modelId);
}

CWeaponModelInfo* CModelInfo::AddWeaponModel(int modelId) {
    return plugin::CallAndReturn<CWeaponModelInfo*, 0x55F690, int>(modelId);
}

void* CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturn<void*, 0x55F570>();
}

CBaseModelInfo* CModelInfo::GetModelInfo(int modelId) {
    return modelId < ms_modelInfoCount ? ms_modelInfoPtrs[modelId] : nullptr;
}

CBaseModelInfo* CModelInfo::GetModelInfo(char const* name, int* modelId) {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x55F7D0, char const*, int*>(name, modelId);
}

CBaseModelInfo* CModelInfo::GetModelInfo(char const* name, int minModelId, int maxModelId) {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x55F780, char const*, int, int>(name, minModelId, maxModelId);
}

int CModelInfo::FindNextModel(eModelInfoType type, int startModelId, bool searchForward, bool warpAround) {
    const auto minId = 0;
    const auto maxId = CModelInfo::ms_modelInfoCount - 1;

    int modelId = startModelId;
    while (true)
    {
        modelId += searchForward ? 1 : -1;

        if (modelId < minId || modelId > maxId)
        {
            if (warpAround)
                modelId = searchForward ? minId : maxId;
            else
                break;
        }

        if (modelId == startModelId)
            break; // all models checked

        if (CModelInfo::ms_modelInfoPtrs[modelId] && CModelInfo::ms_modelInfoPtrs[modelId]->GetModelType() == type)
            return static_cast<eModelID>(modelId); // found
    }

    return eModelID::MODEL_INVALID; // not found
}

bool CModelInfo::IsPedModel(int modelId) {
    return modelId < ms_modelInfoCount && ms_modelInfoPtrs[modelId] && ms_modelInfoPtrs[modelId]->GetModelType() == MODEL_INFO_PED;
}

bool CModelInfo::IsVehicleModel(int modelId) {
    return modelId < ms_modelInfoCount && ms_modelInfoPtrs[modelId] && ms_modelInfoPtrs[modelId]->GetModelType() == MODEL_INFO_VEHICLE;
}

eVehicleType CModelInfo::GetVehicleModelType(int modelId) {
    if (modelId >= ms_modelInfoCount ||
        ms_modelInfoPtrs[modelId] == nullptr ||
        ms_modelInfoPtrs[modelId]->GetModelType() != MODEL_INFO_VEHICLE)
    {
        return eVehicleType::VEHICLE_INVALID;
    }

    return reinterpret_cast<CVehicleModelInfo*>(ms_modelInfoPtrs[modelId])->m_nVehicleType;
}

bool CModelInfo::IsBikeModel(int modelId) {
    return plugin::CallAndReturn<bool, 0x55F4E0, int>(modelId);
}

bool CModelInfo::IsBmxModel(int modelId) {
    return false; // not present in Vice City
}

bool CModelInfo::IsBoatModel(int modelId) {
    return plugin::CallAndReturn<bool, 0x55F540, int>(modelId);
}

bool CModelInfo::IsCarModel(int modelId) {
    return plugin::CallAndReturn<bool, 0x55F510, int>(modelId);
}

bool CModelInfo::IsHeliModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_HELI;
}

bool CModelInfo::IsMonsterTruckModel(int modelId) {
    return false; // not present in Vice City
}

bool CModelInfo::IsPlaneModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_PLANE;
}

bool CModelInfo::IsQuadBikeModel(int modelId) {
    return false; // not present in Vice City
}

bool CModelInfo::IsTrailerModel(int modelId) {
    return false; // not present in Vice City
}

bool CModelInfo::IsTrainModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_TRAIN;
}
