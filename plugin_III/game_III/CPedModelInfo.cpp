/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedModelInfo.h"

// Converted from thiscall void CPedModelInfo::CPedModelInfo(void) 0x50BFA0
CPedModelInfo::CPedModelInfo() {
    plugin::CallMethod<0x50BFA0, CPedModelInfo *>(this);
}

// Converted from thiscall void CPedModelInfo::CreateHitColModel(void) 0x5104D0
void CPedModelInfo::CreateHitColModel() {
    plugin::CallMethod<0x5104D0, CPedModelInfo *>(this);
}

// Converted from thiscall void CPedModelInfo::SetLowDetailClump(RpClump *clump) 0x510390
void CPedModelInfo::SetLowDetailClump(RpClump* clump) {
    plugin::CallMethod<0x510390, CPedModelInfo *, RpClump*>(this, clump);
}

// Converted from thiscall void CPedModelInfo::~CPedModelInfo() 0x50BF60
CPedModelInfo::~CPedModelInfo() {
    plugin::CallMethod<0x50BF60, CPedModelInfo *>(this);
}

// Converted from thiscall void CStore<CPedModelInfo,90>::~CStore() 0x50BF40 
PedModelStore::~PedModelStore() {
    plugin::CallMethod<0x50BF40, PedModelStore *>(this);
}
