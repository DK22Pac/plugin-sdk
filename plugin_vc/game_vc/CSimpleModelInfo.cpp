/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSimpleModelInfo.h"

// Converted from void CSimpleModelInfo::SetAtomic(int atomicIndex, RpAtomic *atomic) 0x56F790
void CSimpleModelInfo::SetAtomic(int atomicIndex, RpAtomic* atomic) {
    plugin::CallVirtualMethod<9, CSimpleModelInfo *, int, RpAtomic*>(this, atomicIndex, atomic);
}

// Converted from thiscall RpAtomic* CSimpleModelInfo::GetAtomicFromDistance(float distance) 0x56F690
RpAtomic* CSimpleModelInfo::GetAtomicFromDistance(float distance) {
    return plugin::CallMethodAndReturn<RpAtomic*, 0x56F690, CSimpleModelInfo *, float>(this, distance);
}

// Converted from thiscall float CSimpleModelInfo::GetLargestLodDistance(void) 0x56F660
float CSimpleModelInfo::GetLargestLodDistance() {
    return plugin::CallMethodAndReturn<float, 0x56F660, CSimpleModelInfo *>(this);
}

// Converted from thiscall RpAtomic* CSimpleModelInfo::GetLastAtomic(float distance) 0x56F620
RpAtomic* CSimpleModelInfo::GetLastAtomic(float distance) {
    return plugin::CallMethodAndReturn<RpAtomic*, 0x56F620, CSimpleModelInfo *, float>(this, distance);
}

// Converted from thiscall float CSimpleModelInfo::GetLodDistance(int lodIndex) 0x56F6F0
float CSimpleModelInfo::GetLodDistance(int lodIndex) {
    return plugin::CallMethodAndReturn<float, 0x56F6F0, CSimpleModelInfo *, int>(this, lodIndex);
}

// Converted from thiscall void CSimpleModelInfo::Init(void) 0x56F770
void CSimpleModelInfo::Init() {
    plugin::CallMethod<0x56F770, CSimpleModelInfo *>(this);
}

// Converted from thiscall void CSimpleModelInfo::SetLodDistances(float *distances) 0x56F600
void CSimpleModelInfo::SetLodDistances(float* distances) {
    plugin::CallMethod<0x56F600, CSimpleModelInfo *, float*>(this, distances);
}

// Converted from thiscall void CSimpleModelInfo::SetupBigBuilding(int minLineIndex,int maxLineIndex) 0x56F420
void CSimpleModelInfo::SetupBigBuilding(int minLineIndex, int maxLineIndex) {
    plugin::CallMethod<0x56F420, CSimpleModelInfo *, int, int>(this, minLineIndex, maxLineIndex);
}

// Converted from thiscall void CStore<CSimpleModelInfo,3885>::~CStore() 0x5602A0 
SimpleModelStore::~SimpleModelStore() {
    plugin::CallMethod<0x5602A0, SimpleModelStore *>(this);
}
