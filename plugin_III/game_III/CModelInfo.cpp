/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

CBaseModelInfo **CModelInfo::ms_modelInfoPtrs = (CBaseModelInfo**)0x83D408;
XtraCompsModelStore *CModelInfo::ms_xtraCompsModelStore = (XtraCompsModelStore*)0x940348;
MloInstanceStore *CModelInfo::ms_mloInstanceStore = (MloInstanceStore*)0x8E2B84;
EffectStore *CModelInfo::ms_2dEffectStore = (EffectStore*)0x9434F8;
ClumpModelStore *CModelInfo::ms_clumpModelStore = (ClumpModelStore*)0x6FA108;
MloModelStore *CModelInfo::ms_mloModelStore = (MloModelStore*)0x8F5980;
PedModelStore *CModelInfo::ms_pedModelStore = (PedModelStore*)0x941600;
SimpleModelStore *CModelInfo::ms_simpleModelStore = (SimpleModelStore*)0x885BB4;
TimeModelStore *CModelInfo::ms_timeModelStore = (TimeModelStore*)0x94076C;
VehicleModelStore *CModelInfo::ms_vehicleModelStore = (VehicleModelStore*)0x8E2DE0;

// Converted from cdecl CClumpModelInfo* CModelInfo::AddClumpModel(int index) 0x50BA10
CClumpModelInfo* CModelInfo::AddClumpModel(int index) {
    return plugin::CallAndReturn<CClumpModelInfo*, 0x50BA10, int>(index);
}

// Converted from cdecl CMloModelInfo* CModelInfo::AddMloModel(int index) 0x50B970
CMloModelInfo* CModelInfo::AddMloModel(int index) {
    return plugin::CallAndReturn<CMloModelInfo*, 0x50B970, int>(index);
}

// Converted from cdecl CPedModelInfo* CModelInfo::AddPedModel(int index) 0x50BAD0
CPedModelInfo* CModelInfo::AddPedModel(int index) {
    return plugin::CallAndReturn<CPedModelInfo*, 0x50BAD0, int>(index);
}

// Converted from cdecl CSimpleModelInfo* CModelInfo::AddSimpleModel(int index) 0x50B920
CSimpleModelInfo* CModelInfo::AddSimpleModel(int index) {
    return plugin::CallAndReturn<CSimpleModelInfo*, 0x50B920, int>(index);
}

// Converted from cdecl CTimeModelInfo* CModelInfo::AddTimeModel(int index) 0x50B9C0
CTimeModelInfo* CModelInfo::AddTimeModel(int index) {
    return plugin::CallAndReturn<CTimeModelInfo*, 0x50B9C0, int>(index);
}

// Converted from cdecl CVehicleModelInfo* CModelInfo::AddVehicleModel(int index) 0x50BA60
CVehicleModelInfo* CModelInfo::AddVehicleModel(int index) {
    return plugin::CallAndReturn<CVehicleModelInfo*, 0x50BA60, int>(index);
}

// Converted from cdecl void CModelInfo::ConstructMloClumps(void) 0x50BB40 
void CModelInfo::ConstructMloClumps() {
    plugin::Call<0x50BB40>();
}

// Converted from cdecl EffectStore* CModelInfo::Get2dEffectStore(void) 0x50BB30
EffectStore* CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturn<EffectStore*, 0x50BB30>();
}

// Converted from cdecl MloInstanceStore* CModelInfo::GetMloInstanceStore(void) 0x50BB20
MloInstanceStore* CModelInfo::GetMloInstanceStore() {
    return plugin::CallAndReturn<MloInstanceStore*, 0x50BB20>();
}

// Converted from cdecl CBaseModelInfo* CModelInfo::GetModelInfo(char const* name,int *index) 0x50B860
CBaseModelInfo* CModelInfo::GetModelInfo(char const* name, int* index) {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x50B860, char const*, int*>(name, index);
}

// Converted from cdecl void CModelInfo::Initialise(void) 0x50B310 
void CModelInfo::Initialise() {
    plugin::Call<0x50B310>();
}

// Converted from cdecl bool CModelInfo::IsBoatModel(int index) 0x50BB90
bool CModelInfo::IsBoatModel(int index) {
    return plugin::CallAndReturn<bool, 0x50BB90, int>(index);
}

// Converted from cdecl void CModelInfo::ReInit2dEffects(void) 0x50B580 
void CModelInfo::ReInit2dEffects() {
    plugin::Call<0x50B580>();
}

// Converted from cdecl void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName levelName) 0x50BBC0 
void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName levelName) {
    plugin::Call<0x50BBC0, eLevelName>(levelName);
}

// Converted from cdecl void CModelInfo::ShutDown(void) 0x50B5B0 
void CModelInfo::ShutDown() {
    plugin::Call<0x50B5B0>();
}
