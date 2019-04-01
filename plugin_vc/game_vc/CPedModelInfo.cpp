/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedModelInfo.h"

// Converted from thiscall void CPedModelInfo::AnimatePedColModelSkinned(RpClump * clump) 0x566150
void CPedModelInfo::AnimatePedColModelSkinned(RpClump* clump) {
    plugin::CallMethod<0x566150, CPedModelInfo *, RpClump*>(this, clump);
}

// Converted from thiscall void CPedModelInfo::AnimatePedColModelSkinnedWorld(RpClump * clump) 0x566060
void CPedModelInfo::AnimatePedColModelSkinnedWorld(RpClump* clump) {
    plugin::CallMethod<0x566060, CPedModelInfo *, RpClump*>(this, clump);
}

// Converted from thiscall void CPedModelInfo::CreateHitColModelSkinned(RpClump * clump) 0x566300
void CPedModelInfo::CreateHitColModelSkinned(RpClump* clump) {
    plugin::CallMethod<0x566300, CPedModelInfo *, RpClump*>(this, clump);
}

// Converted from thiscall void CPedModelInfo::CPedModelInfo(void) 0x560120
CPedModelInfo::CPedModelInfo() {
    plugin::CallMethod<0x560120, CPedModelInfo *>(this);
}

// Converted from thiscall void CPedModelInfo::~CPedModelInfo() 0x5600E0
CPedModelInfo::~CPedModelInfo() {
    plugin::CallMethod<0x5600E0, CPedModelInfo *>(this);
}

// Converted from thiscall void CStore<CPedModelInfo,130>::~CStore() 0x5600C0 
PedModelStore::~PedModelStore() {
    plugin::CallMethod<0x5600C0, PedModelStore *>(this);
}
