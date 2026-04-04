/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"
#include "CVehicleModelInfo.h"

PLUGIN_SOURCE_FILE

CBaseModelInfo** CModelInfo::ms_modelInfoPtrs = *(CBaseModelInfo***)0x40A597; // limit adjusters support - get from reference in CStreaming::LoadAllRequestedModels
const int& CModelInfo::ms_modelInfoCount = *(const int*)0x40A58E; // limit adjusters support - get from CStreaming::LoadAllRequestedModels

PLUGIN_VARIABLE CStore<CClumpModelInfo, 5> &CModelInfo::ms_clumpModelStore = *reinterpret_cast<CStore<CClumpModelInfo, 5> *>(GLOBAL_ADDRESS_BY_VERSION(0x6FA108, 0x6FA108, 0x70A248));
PLUGIN_VARIABLE CStore<CSimpleModelInfo, 5000> &CModelInfo::ms_simpleModelStore = *reinterpret_cast<CStore<CSimpleModelInfo, 5000> *>(GLOBAL_ADDRESS_BY_VERSION(0x885BB4, 0x885B64, 0x895CA4));
PLUGIN_VARIABLE CStore<CInstance, 1> &CModelInfo::ms_mloInstanceStore = *reinterpret_cast<CStore<CInstance, 1> *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2B84, 0x8E2C38, 0x8F2D78));
PLUGIN_VARIABLE CStore<CVehicleModelInfo, 120> &CModelInfo::ms_vehicleModelStore = *reinterpret_cast<CStore<CVehicleModelInfo, 120> *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2DE0, 0x8E2E94, 0x8F2FD4));
PLUGIN_VARIABLE CStore<CMloModelInfo, 1> &CModelInfo::ms_mloModelStore = *reinterpret_cast<CStore<CMloModelInfo, 1> *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5980, 0x8F5A34, 0x905B74));
PLUGIN_VARIABLE CStore<CXtraCompsModelInfo, 2> &CModelInfo::ms_xtraCompsModelStore = *reinterpret_cast<CStore<CXtraCompsModelInfo, 2> *>(GLOBAL_ADDRESS_BY_VERSION(0x940348, 0x940500, 0x950640));
PLUGIN_VARIABLE CStore<CTimeModelInfo, 30> &CModelInfo::ms_timeModelStore = *reinterpret_cast<CStore<CTimeModelInfo, 30> *>(GLOBAL_ADDRESS_BY_VERSION(0x94076C, 0x940924, 0x950A64));
PLUGIN_VARIABLE CStore<CPedModelInfo, 90> &CModelInfo::ms_pedModelStore = *reinterpret_cast<CStore<CPedModelInfo, 90> *>(GLOBAL_ADDRESS_BY_VERSION(0x941600, 0x9417B8, 0x9518F8));
PLUGIN_VARIABLE CStore<C2dEffect, 2000> &CModelInfo::ms_2dEffectStore = *reinterpret_cast<CStore<C2dEffect, 2000> *>(GLOBAL_ADDRESS_BY_VERSION(0x9434F8, 0x9436B0, 0x9537F0));

int addrof(CModelInfo::Initialise) = ADDRESS_BY_VERSION(0x50B310, 0x50B3F0, 0x50B380);
int gaddrof(CModelInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x50B310, 0x50B3F0, 0x50B380);
void CModelInfo::Initialise() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::Initialise));
}

int addrof(CModelInfo::ReInit2dEffects) = ADDRESS_BY_VERSION(0x50B580, 0x50B660, 0x50B5F0);
int gaddrof(CModelInfo::ReInit2dEffects) = GLOBAL_ADDRESS_BY_VERSION(0x50B580, 0x50B660, 0x50B5F0);
void CModelInfo::ReInit2dEffects() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ReInit2dEffects));
}

int addrof(CModelInfo::ShutDown) = ADDRESS_BY_VERSION(0x50B5B0, 0x50B690, 0x50B620);
int gaddrof(CModelInfo::ShutDown) = GLOBAL_ADDRESS_BY_VERSION(0x50B5B0, 0x50B690, 0x50B620);
void CModelInfo::ShutDown() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ShutDown));
}

int addrof(CModelInfo::AddClumpModel) = ADDRESS_BY_VERSION(0x50BA10, 0x50BB00, 0x50BA90);
int gaddrof(CModelInfo::AddClumpModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BA10, 0x50BB00, 0x50BA90);
CClumpModelInfo* CModelInfo::AddClumpModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<CClumpModelInfo*, int>(gaddrof(CModelInfo::AddClumpModel), modelId);
}

int addrof(CModelInfo::AddMloModel) = ADDRESS_BY_VERSION(0x50B970, 0x50BA60, 0x50B9F0);
int gaddrof(CModelInfo::AddMloModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B970, 0x50BA60, 0x50B9F0);
CMloModelInfo* CModelInfo::AddMloModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<CMloModelInfo*, int>(gaddrof(CModelInfo::AddMloModel), modelId);
}

int addrof(CModelInfo::AddPedModel) = ADDRESS_BY_VERSION(0x50BAD0, 0x50BBC0, 0x50BB50);
int gaddrof(CModelInfo::AddPedModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BAD0, 0x50BBC0, 0x50BB50);
CPedModelInfo* CModelInfo::AddPedModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<CPedModelInfo*, int>(gaddrof(CModelInfo::AddPedModel), modelId);
}

int addrof(CModelInfo::AddSimpleModel) = ADDRESS_BY_VERSION(0x50B920, 0x50BA10, 0x50B9A0);
int gaddrof(CModelInfo::AddSimpleModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B920, 0x50BA10, 0x50B9A0);
CSimpleModelInfo* CModelInfo::AddSimpleModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<CSimpleModelInfo*, int>(gaddrof(CModelInfo::AddSimpleModel), modelId);
}

int addrof(CModelInfo::AddTimeModel) = ADDRESS_BY_VERSION(0x50B9C0, 0x50BAB0, 0x50BA40);
int gaddrof(CModelInfo::AddTimeModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B9C0, 0x50BAB0, 0x50BA40);
CTimeModelInfo* CModelInfo::AddTimeModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<CTimeModelInfo*, int>(gaddrof(CModelInfo::AddTimeModel), modelId);
}

int addrof(CModelInfo::AddVehicleModel) = ADDRESS_BY_VERSION(0x50BA60, 0x50BB50, 0x50BAE0);
int gaddrof(CModelInfo::AddVehicleModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BA60, 0x50BB50, 0x50BAE0);
CVehicleModelInfo *CModelInfo::AddVehicleModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<CVehicleModelInfo*, int>(gaddrof(CModelInfo::AddVehicleModel), modelId);
}

int addrof(CModelInfo::Get2dEffectStore) = ADDRESS_BY_VERSION(0x50BB30, 0x50BC20, 0x50BBB0);
int gaddrof(CModelInfo::Get2dEffectStore) = GLOBAL_ADDRESS_BY_VERSION(0x50BB30, 0x50BC20, 0x50BBB0);
CStore<C2dEffect, 2000>* CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturnDynGlobal<CStore<C2dEffect, 2000>*>(gaddrof(CModelInfo::Get2dEffectStore));
}

int addrof(CModelInfo::ConstructMloClumps) = ADDRESS_BY_VERSION(0x50BB40, 0x50BC30, 0x50BBC0);
int gaddrof(CModelInfo::ConstructMloClumps) = GLOBAL_ADDRESS_BY_VERSION(0x50BB40, 0x50BC30, 0x50BBC0);
void CModelInfo::ConstructMloClumps() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ConstructMloClumps));
}

int addrof(CModelInfo::GetMloInstanceStore) = ADDRESS_BY_VERSION(0x50BB20, 0x50BC10, 0x50BBA0);
int gaddrof(CModelInfo::GetMloInstanceStore) = GLOBAL_ADDRESS_BY_VERSION(0x50BB20, 0x50BC10, 0x50BBA0);
CStore<CInstance, 1> *CModelInfo::GetMloInstanceStore() {
    return plugin::CallAndReturnDynGlobal<CStore<CInstance, 1>*>(gaddrof(CModelInfo::GetMloInstanceStore));
}

int addrof(CModelInfo::RemoveColModelsFromOtherLevels) = ADDRESS_BY_VERSION(0x50BBC0, 0x50BCB0, 0x50BC40);
int gaddrof(CModelInfo::RemoveColModelsFromOtherLevels) = GLOBAL_ADDRESS_BY_VERSION(0x50BBC0, 0x50BCB0, 0x50BC40);
void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName level) {
    plugin::CallDynGlobal<eLevelName>(gaddrof(CModelInfo::RemoveColModelsFromOtherLevels), level);
}

CBaseModelInfo* CModelInfo::GetModelInfo(int modelId) {
    return modelId < ms_modelInfoCount ? ms_modelInfoPtrs[modelId] : nullptr;
}

int addrof_o(CModelInfo::GetModelInfo, CBaseModelInfo* (char const*, int*)) = ADDRESS_BY_VERSION(0x50B860, 0x50B950, 0x50B8E0);
int gaddrof_o(CModelInfo::GetModelInfo, CBaseModelInfo* (char const*, int*)) = GLOBAL_ADDRESS_BY_VERSION(0x50B860, 0x50B950, 0x50B8E0);
CBaseModelInfo *CModelInfo::GetModelInfo(char const* name, int* modelId) {
    return plugin::CallAndReturnDynGlobal<CBaseModelInfo*, char const*, int*>(gaddrof_o(CModelInfo::GetModelInfo, CBaseModelInfo * (char const*, int*)), name, modelId);
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
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_BIKE;
}

bool CModelInfo::IsBmxModel(int modelId) {
    return false; // not present in GTA 3
}

int addrof(CModelInfo::IsBoatModel) = ADDRESS_BY_VERSION(0x50BB90, 0x50BC80, 0x50BC10);
int gaddrof(CModelInfo::IsBoatModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BB90, 0x50BC80, 0x50BC10);
bool CModelInfo::IsBoatModel(int modelId) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CModelInfo::IsBoatModel), modelId);
}

bool CModelInfo::IsCarModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_AUTOMOBILE;
}

bool CModelInfo::IsHeliModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_HELI;
}

bool CModelInfo::IsMonsterTruckModel(int modelId) {
    return false; // not present in GTA 3
}

bool CModelInfo::IsPlaneModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_PLANE;
}

bool CModelInfo::IsQuadBikeModel(int modelId) {
    return false; // not present in GTA 3
}

bool CModelInfo::IsTrailerModel(int modelId) {
    return false; // not present in GTA 3
}

bool CModelInfo::IsTrainModel(int modelId) {
    return GetVehicleModelType(modelId) == eVehicleType::VEHICLE_TRAIN;
}
