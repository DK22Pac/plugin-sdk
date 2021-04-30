/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CStore<CClumpModelInfo, 5> &CModelInfo::ms_clumpModelStore = *reinterpret_cast<CStore<CClumpModelInfo, 5> *>(GLOBAL_ADDRESS_BY_VERSION(0x6FA108, 0x6FA108, 0x70A248));
PLUGIN_VARIABLE CBaseModelInfo *(&CModelInfo::ms_modelInfoPtrs)[5500] = *reinterpret_cast<CBaseModelInfo *(*)[5500]>(GLOBAL_ADDRESS_BY_VERSION(0x83D408, 0x83D408, 0x84D548));
PLUGIN_VARIABLE CStore<CSimpleModelInfo, 5000> &CModelInfo::ms_simpleModelStore = *reinterpret_cast<CStore<CSimpleModelInfo, 5000> *>(GLOBAL_ADDRESS_BY_VERSION(0x885BB4, 0x885B64, 0x895CA4));
PLUGIN_VARIABLE CStore<CInstance, 1> &CModelInfo::ms_mloInstanceStore = *reinterpret_cast<CStore<CInstance, 1> *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2B84, 0x8E2C38, 0x8F2D78));
PLUGIN_VARIABLE CStore<CVehicleModelInfo, 120> &CModelInfo::ms_vehicleModelStore = *reinterpret_cast<CStore<CVehicleModelInfo, 120> *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2DE0, 0x8E2E94, 0x8F2FD4));
PLUGIN_VARIABLE CStore<CMloModelInfo, 1> &CModelInfo::ms_mloModelStore = *reinterpret_cast<CStore<CMloModelInfo, 1> *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5980, 0x8F5A34, 0x905B74));
PLUGIN_VARIABLE CStore<CXtraCompsModelInfo, 2> &CModelInfo::ms_xtraCompsModelStore = *reinterpret_cast<CStore<CXtraCompsModelInfo, 2> *>(GLOBAL_ADDRESS_BY_VERSION(0x940348, 0x940500, 0x950640));
PLUGIN_VARIABLE CStore<CTimeModelInfo, 30> &CModelInfo::ms_timeModelStore = *reinterpret_cast<CStore<CTimeModelInfo, 30> *>(GLOBAL_ADDRESS_BY_VERSION(0x94076C, 0x940924, 0x950A64));
PLUGIN_VARIABLE CStore<CPedModelInfo, 90> &CModelInfo::ms_pedModelStore = *reinterpret_cast<CStore<CPedModelInfo, 90> *>(GLOBAL_ADDRESS_BY_VERSION(0x941600, 0x9417B8, 0x9518F8));
PLUGIN_VARIABLE CStore<C2dEffect, 2000> &CModelInfo::ms_2dEffectStore = *reinterpret_cast<CStore<C2dEffect, 2000> *>(GLOBAL_ADDRESS_BY_VERSION(0x9434F8, 0x9436B0, 0x9537F0));

int addrof(CModelInfo::AddClumpModel) = ADDRESS_BY_VERSION(0x50BA10, 0x50BB00, 0x50BA90);
int gaddrof(CModelInfo::AddClumpModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BA10, 0x50BB00, 0x50BA90);

CClumpModelInfo *CModelInfo::AddClumpModel(int index) {
    return plugin::CallAndReturnDynGlobal<CClumpModelInfo *, int>(gaddrof(CModelInfo::AddClumpModel), index);
}

int addrof(CModelInfo::AddMloModel) = ADDRESS_BY_VERSION(0x50B970, 0x50BA60, 0x50B9F0);
int gaddrof(CModelInfo::AddMloModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B970, 0x50BA60, 0x50B9F0);

CMloModelInfo *CModelInfo::AddMloModel(int index) {
    return plugin::CallAndReturnDynGlobal<CMloModelInfo *, int>(gaddrof(CModelInfo::AddMloModel), index);
}

int addrof(CModelInfo::AddPedModel) = ADDRESS_BY_VERSION(0x50BAD0, 0x50BBC0, 0x50BB50);
int gaddrof(CModelInfo::AddPedModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BAD0, 0x50BBC0, 0x50BB50);

CPedModelInfo *CModelInfo::AddPedModel(int index) {
    return plugin::CallAndReturnDynGlobal<CPedModelInfo *, int>(gaddrof(CModelInfo::AddPedModel), index);
}

int addrof(CModelInfo::AddSimpleModel) = ADDRESS_BY_VERSION(0x50B920, 0x50BA10, 0x50B9A0);
int gaddrof(CModelInfo::AddSimpleModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B920, 0x50BA10, 0x50B9A0);

CSimpleModelInfo *CModelInfo::AddSimpleModel(int index) {
    return plugin::CallAndReturnDynGlobal<CSimpleModelInfo *, int>(gaddrof(CModelInfo::AddSimpleModel), index);
}

int addrof(CModelInfo::AddTimeModel) = ADDRESS_BY_VERSION(0x50B9C0, 0x50BAB0, 0x50BA40);
int gaddrof(CModelInfo::AddTimeModel) = GLOBAL_ADDRESS_BY_VERSION(0x50B9C0, 0x50BAB0, 0x50BA40);

CTimeModelInfo *CModelInfo::AddTimeModel(int index) {
    return plugin::CallAndReturnDynGlobal<CTimeModelInfo *, int>(gaddrof(CModelInfo::AddTimeModel), index);
}

int addrof(CModelInfo::AddVehicleModel) = ADDRESS_BY_VERSION(0x50BA60, 0x50BB50, 0x50BAE0);
int gaddrof(CModelInfo::AddVehicleModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BA60, 0x50BB50, 0x50BAE0);

CVehicleModelInfo *CModelInfo::AddVehicleModel(int index) {
    return plugin::CallAndReturnDynGlobal<CVehicleModelInfo *, int>(gaddrof(CModelInfo::AddVehicleModel), index);
}

int addrof(CModelInfo::ConstructMloClumps) = ADDRESS_BY_VERSION(0x50BB40, 0x50BC30, 0x50BBC0);
int gaddrof(CModelInfo::ConstructMloClumps) = GLOBAL_ADDRESS_BY_VERSION(0x50BB40, 0x50BC30, 0x50BBC0);

void CModelInfo::ConstructMloClumps() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ConstructMloClumps));
}

int addrof(CModelInfo::Get2dEffectStore) = ADDRESS_BY_VERSION(0x50BB30, 0x50BC20, 0x50BBB0);
int gaddrof(CModelInfo::Get2dEffectStore) = GLOBAL_ADDRESS_BY_VERSION(0x50BB30, 0x50BC20, 0x50BBB0);

CStore<C2dEffect, 2000> *CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturnDynGlobal<CStore<C2dEffect, 2000> *>(gaddrof(CModelInfo::Get2dEffectStore));
}

int addrof(CModelInfo::GetMloInstanceStore) = ADDRESS_BY_VERSION(0x50BB20, 0x50BC10, 0x50BBA0);
int gaddrof(CModelInfo::GetMloInstanceStore) = GLOBAL_ADDRESS_BY_VERSION(0x50BB20, 0x50BC10, 0x50BBA0);

CStore<CInstance, 1> *CModelInfo::GetMloInstanceStore() {
    return plugin::CallAndReturnDynGlobal<CStore<CInstance, 1> *>(gaddrof(CModelInfo::GetMloInstanceStore));
}

int addrof(CModelInfo::GetModelInfo) = ADDRESS_BY_VERSION(0x50B860, 0x50B950, 0x50B8E0);
int gaddrof(CModelInfo::GetModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50B860, 0x50B950, 0x50B8E0);

CBaseModelInfo *CModelInfo::GetModelInfo(char const *name, int *index) {
    return plugin::CallAndReturnDynGlobal<CBaseModelInfo *, char const *, int *>(gaddrof(CModelInfo::GetModelInfo), name, index);
}

int addrof(CModelInfo::Initialise) = ADDRESS_BY_VERSION(0x50B310, 0x50B3F0, 0x50B380);
int gaddrof(CModelInfo::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x50B310, 0x50B3F0, 0x50B380);

void CModelInfo::Initialise() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::Initialise));
}

int addrof(CModelInfo::IsBoatModel) = ADDRESS_BY_VERSION(0x50BB90, 0x50BC80, 0x50BC10);
int gaddrof(CModelInfo::IsBoatModel) = GLOBAL_ADDRESS_BY_VERSION(0x50BB90, 0x50BC80, 0x50BC10);

bool CModelInfo::IsBoatModel(int index) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CModelInfo::IsBoatModel), index);
}

int addrof(CModelInfo::ReInit2dEffects) = ADDRESS_BY_VERSION(0x50B580, 0x50B660, 0x50B5F0);
int gaddrof(CModelInfo::ReInit2dEffects) = GLOBAL_ADDRESS_BY_VERSION(0x50B580, 0x50B660, 0x50B5F0);

void CModelInfo::ReInit2dEffects() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ReInit2dEffects));
}

int addrof(CModelInfo::RemoveColModelsFromOtherLevels) = ADDRESS_BY_VERSION(0x50BBC0, 0x50BCB0, 0x50BC40);
int gaddrof(CModelInfo::RemoveColModelsFromOtherLevels) = GLOBAL_ADDRESS_BY_VERSION(0x50BBC0, 0x50BCB0, 0x50BC40);

void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName level) {
    plugin::CallDynGlobal<eLevelName>(gaddrof(CModelInfo::RemoveColModelsFromOtherLevels), level);
}

int addrof(CModelInfo::ShutDown) = ADDRESS_BY_VERSION(0x50B5B0, 0x50B690, 0x50B620);
int gaddrof(CModelInfo::ShutDown) = GLOBAL_ADDRESS_BY_VERSION(0x50B5B0, 0x50B690, 0x50B620);

void CModelInfo::ShutDown() {
    plugin::CallDynGlobal(gaddrof(CModelInfo::ShutDown));
}
