/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

CBaseModelInfo **CModelInfo::ms_modelInfoPtrs = (CBaseModelInfo**)0x92D4C8;
ClumpModelStore *CModelInfo::ms_clumpModelStore = (ClumpModelStore*)0x752988;
PedModelStore *CModelInfo::ms_pedModelStore = (PedModelStore*)0x75CA70;
SimpleModelStore *CModelInfo::ms_simpleModelStore = (SimpleModelStore*)0x709EAC;
TimeModelStore *CModelInfo::ms_timeModelStore = (TimeModelStore*)0x74A6B0;
VehicleModelStore *CModelInfo::ms_vehicleModelStore = (VehicleModelStore*)0x752A88;
WeaponModelStore *CModelInfo::ms_weaponModelStore = (WeaponModelStore*)0x751F10;

// Converted from cdecl CClumpModelInfo* CModelInfo::AddClumpModel(int index) 0x55F640
CClumpModelInfo* CModelInfo::AddClumpModel(int index) {
    return plugin::CallAndReturn<CClumpModelInfo*, 0x55F640, int>(index);
}

// Converted from cdecl CPedModelInfo* CModelInfo::AddPedModel(int index) 0x55F580
CPedModelInfo* CModelInfo::AddPedModel(int index) {
    return plugin::CallAndReturn<CPedModelInfo*, 0x55F580, int>(index);
}

// Converted from cdecl CSimpleModelInfo* CModelInfo::AddSimpleModel(int index) 0x55F730
CSimpleModelInfo* CModelInfo::AddSimpleModel(int index) {
    return plugin::CallAndReturn<CSimpleModelInfo*, 0x55F730, int>(index);
}

// Converted from cdecl CTimeModelInfo* CModelInfo::AddTimeModel(int index) 0x55F6E0
CTimeModelInfo* CModelInfo::AddTimeModel(int index) {
    return plugin::CallAndReturn<CTimeModelInfo*, 0x55F6E0, int>(index);
}

// Converted from cdecl CVehicleModelInfo* CModelInfo::AddVehicleModel(int index) 0x55F5D0
CVehicleModelInfo* CModelInfo::AddVehicleModel(int index) {
    return plugin::CallAndReturn<CVehicleModelInfo*, 0x55F5D0, int>(index);
}

// Converted from cdecl CWeaponModelInfo* CModelInfo::AddWeaponModel(int index) 0x55F690
CWeaponModelInfo* CModelInfo::AddWeaponModel(int index) {
    return plugin::CallAndReturn<CWeaponModelInfo*, 0x55F690, int>(index);
}

// Converted from cdecl void* CModelInfo::Get2dEffectStore(void) 0x55F570 
void* CModelInfo::Get2dEffectStore() {
    return plugin::CallAndReturn<void*, 0x55F570>();
}

// Converted from cdecl CBaseModelInfo* CModelInfo::GetModelInfo(char const* name,int * index) 0x55F7D0
CBaseModelInfo* CModelInfo::GetModelInfo(char const* name, int* index) {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x55F7D0, char const*, int*>(name, index);
}

// Converted from cdecl CBaseModelInfo* CModelInfo::GetModelInfo(char const* name,int minIndex,int maxInedx) 0x55F780
CBaseModelInfo* CModelInfo::GetModelInfo(char const* name, int minIndex, int maxInedx) {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x55F780, char const*, int, int>(name, minIndex, maxInedx);
}

// Converted from cdecl void CModelInfo::Initialise(void) 0x55FA40 
void CModelInfo::Initialise() {
    plugin::Call<0x55FA40>();
}

// Converted from cdecl bool CModelInfo::IsBikeModel(int index) 0x55F4E0
bool CModelInfo::IsBikeModel(int index) {
    return plugin::CallAndReturn<bool, 0x55F4E0, int>(index);
}

// Converted from cdecl bool CModelInfo::IsBoatModel(int index) 0x55F540
bool CModelInfo::IsBoatModel(int index) {
    return plugin::CallAndReturn<bool, 0x55F540, int>(index);
}

// Converted from cdecl bool CModelInfo::IsCarModel(int index) 0x55F510
bool CModelInfo::IsCarModel(int index) {
    return plugin::CallAndReturn<bool, 0x55F510, int>(index);
}

// Converted from cdecl void CModelInfo::ShutDown(void) 0x55F820 
void CModelInfo::ShutDown() {
    plugin::Call<0x55F820>();
}