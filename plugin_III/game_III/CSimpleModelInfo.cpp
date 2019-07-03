/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CSimpleModelInfo.h"

// Converted from thiscall void CSimpleModelInfo::CSimpleModelInfo(void) 0x50C150 
CSimpleModelInfo::CSimpleModelInfo() {
    plugin::CallMethod<0x50C150, CSimpleModelInfo *>(this);
}

// Converted from thiscall void CSimpleModelInfo::FindRelatedModel(void) 0x517C00 
void CSimpleModelInfo::FindRelatedModel() {
    plugin::CallMethod<0x517C00, CSimpleModelInfo *>(this);
}

// Converted from thiscall RpAtomic* CSimpleModelInfo::GetAtomicFromDistance(float distance) 0x517A00
RpAtomic* CSimpleModelInfo::GetAtomicFromDistance(float distance) {
    return plugin::CallMethodAndReturn<RpAtomic*, 0x517A00, CSimpleModelInfo *, float>(this, distance);
}

// Converted from thiscall float CSimpleModelInfo::GetLargestLodDistance(void) 0x517A60 
float CSimpleModelInfo::GetLargestLodDistance() {
    return plugin::CallMethodAndReturn<float, 0x517A60, CSimpleModelInfo *>(this);
}

// Converted from thiscall float CSimpleModelInfo::GetNearDistance(void) 0x517A90 
float CSimpleModelInfo::GetNearDistance() {
    return plugin::CallMethodAndReturn<float, 0x517A90, CSimpleModelInfo *>(this);
}

// Converted from thiscall void CSimpleModelInfo::IncreaseAlpha(void) 0x517C60 
void CSimpleModelInfo::IncreaseAlpha() {
    plugin::CallMethod<0x517C60, CSimpleModelInfo *>(this);
}

// Converted from thiscall void CSimpleModelInfo::Init(void) 0x517990 
void CSimpleModelInfo::Init() {
    plugin::CallMethod<0x517990, CSimpleModelInfo *>(this);
}

// Converted from thiscall void CSimpleModelInfo::SetAtomic(int number,RpAtomic *atomic) 0x517950
void CSimpleModelInfo::SetAtomic(int number, RpAtomic* atomic) {
    plugin::CallMethod<0x517950, CSimpleModelInfo *, int, RpAtomic*>(this, number, atomic);
}

// Converted from thiscall void CSimpleModelInfo::SetLodDistances(float * distance) 0x517AA0
void CSimpleModelInfo::SetLodDistances(float* distance) {
    plugin::CallMethod<0x517AA0, CSimpleModelInfo *, float*>(this, distance);
}

// Converted from thiscall void CSimpleModelInfo::SetupBigBuilding(void) 0x517B90 
void CSimpleModelInfo::SetupBigBuilding() {
    plugin::CallMethod<0x517B90, CSimpleModelInfo *>(this);
}

// Converted from thiscall void CStore<CSimpleModelInfo,5000>::~CStore() 0x50C120 
SimpleModelStore::~SimpleModelStore() {
    plugin::CallMethod<0x50C120, SimpleModelStore *>(this);
}
