/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSimpleModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CSimpleModelInfo) = ADDRESS_BY_VERSION(0x50C150, 0x50C240, 0x50C1D0);
int ctor_gaddr(CSimpleModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C150, 0x50C240, 0x50C1D0);

int dtor_addr(CSimpleModelInfo) = ADDRESS_BY_VERSION(0x50C140, 0x50C230, 0x50C1C0);
int dtor_gaddr(CSimpleModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C140, 0x50C230, 0x50C1C0);

int del_dtor_addr(CSimpleModelInfo) = ADDRESS_BY_VERSION(0x50C1D0, 0x50C2C0, 0x50C250);
int del_dtor_gaddr(CSimpleModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C1D0, 0x50C2C0, 0x50C250);

int addrof(CSimpleModelInfo::DeleteRwObject) = ADDRESS_BY_VERSION(0x5179B0, 0x517BC0, 0x517B50);
int gaddrof(CSimpleModelInfo::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x5179B0, 0x517BC0, 0x517B50);

void CSimpleModelInfo::DeleteRwObject() {
    plugin::CallVirtualMethod<2, CSimpleModelInfo *>(this);
}

int addrof_o(CSimpleModelInfo::CreateInstance, RwObject *(CSimpleModelInfo::*)()) = ADDRESS_BY_VERSION(0x517B60, 0x517D70, 0x517D00);
int gaddrof_o(CSimpleModelInfo::CreateInstance, RwObject *(CSimpleModelInfo::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x517B60, 0x517D70, 0x517D00);

RwObject *CSimpleModelInfo::CreateInstance() {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 3, CSimpleModelInfo *>(this);
}

int addrof_o(CSimpleModelInfo::CreateInstance, RwObject *(CSimpleModelInfo::*)(RwMatrix *)) = ADDRESS_BY_VERSION(0x517AC0, 0x517CD0, 0x517C60);
int gaddrof_o(CSimpleModelInfo::CreateInstance, RwObject *(CSimpleModelInfo::*)(RwMatrix *)) = GLOBAL_ADDRESS_BY_VERSION(0x517AC0, 0x517CD0, 0x517C60);

RwObject *CSimpleModelInfo::CreateInstance(RwMatrix *matrix) {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 4, CSimpleModelInfo *, RwMatrix *>(this, matrix);
}

int addrof(CSimpleModelInfo::GetRwObject) = ADDRESS_BY_VERSION(0x4A9BA0, 0x4A9C90, 0x4A9C20);
int gaddrof(CSimpleModelInfo::GetRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x4A9BA0, 0x4A9C90, 0x4A9C20);

RwObject *CSimpleModelInfo::GetRwObject() {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 5, CSimpleModelInfo *>(this);
}

int addrof(CSimpleModelInfo::FindRelatedModel) = ADDRESS_BY_VERSION(0x517C00, 0x517E10, 0x517DA0);
int gaddrof(CSimpleModelInfo::FindRelatedModel) = GLOBAL_ADDRESS_BY_VERSION(0x517C00, 0x517E10, 0x517DA0);

void CSimpleModelInfo::FindRelatedModel() {
    plugin::CallMethodDynGlobal<CSimpleModelInfo *>(gaddrof(CSimpleModelInfo::FindRelatedModel), this);
}

int addrof(CSimpleModelInfo::GetAtomicFromDistance) = ADDRESS_BY_VERSION(0x517A00, 0x517C10, 0x517BA0);
int gaddrof(CSimpleModelInfo::GetAtomicFromDistance) = GLOBAL_ADDRESS_BY_VERSION(0x517A00, 0x517C10, 0x517BA0);

RpAtomic *CSimpleModelInfo::GetAtomicFromDistance(float distance) {
    return plugin::CallMethodAndReturnDynGlobal<RpAtomic *, CSimpleModelInfo *, float>(gaddrof(CSimpleModelInfo::GetAtomicFromDistance), this, distance);
}

int addrof(CSimpleModelInfo::GetLargestLodDistance) = ADDRESS_BY_VERSION(0x517A60, 0x517C70, 0x517C00);
int gaddrof(CSimpleModelInfo::GetLargestLodDistance) = GLOBAL_ADDRESS_BY_VERSION(0x517A60, 0x517C70, 0x517C00);

float CSimpleModelInfo::GetLargestLodDistance() {
    return plugin::CallMethodAndReturnDynGlobal<float, CSimpleModelInfo *>(gaddrof(CSimpleModelInfo::GetLargestLodDistance), this);
}

int addrof(CSimpleModelInfo::GetNearDistance) = ADDRESS_BY_VERSION(0x517A90, 0x517CA0, 0x517C30);
int gaddrof(CSimpleModelInfo::GetNearDistance) = GLOBAL_ADDRESS_BY_VERSION(0x517A90, 0x517CA0, 0x517C30);

float CSimpleModelInfo::GetNearDistance() {
    return plugin::CallMethodAndReturnDynGlobal<float, CSimpleModelInfo *>(gaddrof(CSimpleModelInfo::GetNearDistance), this);
}

int addrof(CSimpleModelInfo::IncreaseAlpha) = ADDRESS_BY_VERSION(0x517C60, 0x517E70, 0x517E00);
int gaddrof(CSimpleModelInfo::IncreaseAlpha) = GLOBAL_ADDRESS_BY_VERSION(0x517C60, 0x517E70, 0x517E00);

void CSimpleModelInfo::IncreaseAlpha() {
    plugin::CallMethodDynGlobal<CSimpleModelInfo *>(gaddrof(CSimpleModelInfo::IncreaseAlpha), this);
}

int addrof(CSimpleModelInfo::Init) = ADDRESS_BY_VERSION(0x517990, 0x517BA0, 0x517B30);
int gaddrof(CSimpleModelInfo::Init) = GLOBAL_ADDRESS_BY_VERSION(0x517990, 0x517BA0, 0x517B30);

void CSimpleModelInfo::Init() {
    plugin::CallMethodDynGlobal<CSimpleModelInfo *>(gaddrof(CSimpleModelInfo::Init), this);
}

int addrof(CSimpleModelInfo::SetAtomic) = ADDRESS_BY_VERSION(0x517950, 0x517B60, 0x517AF0);
int gaddrof(CSimpleModelInfo::SetAtomic) = GLOBAL_ADDRESS_BY_VERSION(0x517950, 0x517B60, 0x517AF0);

void CSimpleModelInfo::SetAtomic(int number, RpAtomic *atomic) {
    plugin::CallMethodDynGlobal<CSimpleModelInfo *, int, RpAtomic *>(gaddrof(CSimpleModelInfo::SetAtomic), this, number, atomic);
}

int addrof(CSimpleModelInfo::SetLodDistances) = ADDRESS_BY_VERSION(0x517AA0, 0x517CB0, 0x517C40);
int gaddrof(CSimpleModelInfo::SetLodDistances) = GLOBAL_ADDRESS_BY_VERSION(0x517AA0, 0x517CB0, 0x517C40);

void CSimpleModelInfo::SetLodDistances(float *distance) {
    plugin::CallMethodDynGlobal<CSimpleModelInfo *, float *>(gaddrof(CSimpleModelInfo::SetLodDistances), this, distance);
}

int addrof(CSimpleModelInfo::SetupBigBuilding) = ADDRESS_BY_VERSION(0x517B90, 0x517DA0, 0x517D30);
int gaddrof(CSimpleModelInfo::SetupBigBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x517B90, 0x517DA0, 0x517D30);

void CSimpleModelInfo::SetupBigBuilding() {
    plugin::CallMethodDynGlobal<CSimpleModelInfo *>(gaddrof(CSimpleModelInfo::SetupBigBuilding), this);
}
