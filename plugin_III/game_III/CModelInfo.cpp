/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

CBaseModelInfo **CModelInfo::ms_modelInfoPtrs = (CBaseModelInfo**)0x83D408;
CXtraCompsModelInfo *CModelInfo::ms_xtraCompsModelStore = (CXtraCompsModelInfo*)0x940348;
CInstance *CModelInfo::ms_mloInstanceStore = (CInstance*)0x8E2B84;
C2deffectsModelInfo *CModelInfo::ms_2dEffectStore = (C2deffectsModelInfo*)0x9434F8;
CModelInfo* (&CModelInfo::ms_clumpModelStore)[5] = *(CModelInfo* (*)[5])*(int *)0x6FA108; 
CMloModelInfo* (&CModelInfo::ms_mloModelStore)[1] = *(CMloModelInfo* (*)[1])*(int *)0x8F5980;
CPedModelInfo* (&CModelInfo::ms_pedModelStore)[90] = *(CPedModelInfo* (*)[90])*(int *)0x941600;
CSimpleModelInfo* (&CModelInfo::ms_simpleModelStore)[5000] = *(CSimpleModelInfo* (*)[5000])*(int *)0x885BB4;
CTimeModelInfo* (&CModelInfo::ms_timeModelStore)[30] = *(CTimeModelInfo* (*)[30])*(int *)0x94076C;
CVehicleModelInfo* (&CModelInfo::ms_vehicleModelStore)[120] = *(CVehicleModelInfo* (*)[120])*(int *)0x8E2DE0;

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

// Converted from cdecl void* CModelInfo::Get2dEffectStore(void) 0x50BB30
void* CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturn<void*, 0x50BB30>();
}

// Converted from cdecl void* CModelInfo::GetMloInstanceStore(void) 0x50BB20
void* CModelInfo::GetMloInstanceStore() {
    return plugin::CallAndReturn<void*, 0x50BB20>();
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

// Converted from cdecl void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName) 0x50BBC0 
void CModelInfo::RemoveColModelsFromOtherLevels(eLevelName arg0) {
    plugin::Call<0x50BBC0, eLevelName>(arg0);
}

// Converted from cdecl void CModelInfo::ShutDown(void) 0x50B5B0 
void CModelInfo::ShutDown() {
    plugin::Call<0x50B5B0>();
}
