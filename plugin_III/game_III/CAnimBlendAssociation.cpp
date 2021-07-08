/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendAssociation.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendAssociation) = ADDRESS_BY_VERSION(0x401460, 0x401460, 0x401460);
int ctor_gaddr(CAnimBlendAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x401460, 0x401460, 0x401460);

int ctor_addr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)) = ADDRESS_BY_VERSION(0x4014C0, 0x4014C0, 0x4014C0);
int ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)) = GLOBAL_ADDRESS_BY_VERSION(0x4014C0, 0x4014C0, 0x4014C0);

int dtor_addr(CAnimBlendAssociation) = ADDRESS_BY_VERSION(0x401520, 0x401520, 0x401520);
int dtor_gaddr(CAnimBlendAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x401520, 0x401520, 0x401520);

int del_dtor_addr(CAnimBlendAssociation) = ADDRESS_BY_VERSION(0x401840, 0x401840, 0x401840);
int del_dtor_gaddr(CAnimBlendAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x401840, 0x401840, 0x401840);

int addrof(CAnimBlendAssociation::AllocateAnimBlendNodeArray) = ADDRESS_BY_VERSION(0x4016A0, 0x4016A0, 0x4016A0);
int gaddrof(CAnimBlendAssociation::AllocateAnimBlendNodeArray) = GLOBAL_ADDRESS_BY_VERSION(0x4016A0, 0x4016A0, 0x4016A0);

void CAnimBlendAssociation::AllocateAnimBlendNodeArray(int n) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, int>(gaddrof(CAnimBlendAssociation::AllocateAnimBlendNodeArray), this, n);
}

int addrof(CAnimBlendAssociation::FreeAnimBlendNodeArray) = ADDRESS_BY_VERSION(0x4016F0, 0x4016F0, 0x4016F0);
int gaddrof(CAnimBlendAssociation::FreeAnimBlendNodeArray) = GLOBAL_ADDRESS_BY_VERSION(0x4016F0, 0x4016F0, 0x4016F0);

void CAnimBlendAssociation::FreeAnimBlendNodeArray() {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(gaddrof(CAnimBlendAssociation::FreeAnimBlendNodeArray), this);
}

int addrof(CAnimBlendAssociation::GetNode) = ADDRESS_BY_VERSION(0x4017B0, 0x4017B0, 0x4017B0);
int gaddrof(CAnimBlendAssociation::GetNode) = GLOBAL_ADDRESS_BY_VERSION(0x4017B0, 0x4017B0, 0x4017B0);

CAnimBlendNode *CAnimBlendAssociation::GetNode(int index) {
    return plugin::CallMethodAndReturnDynGlobal<CAnimBlendNode *, CAnimBlendAssociation *, int>(gaddrof(CAnimBlendAssociation::GetNode), this, index);
}

int addrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *)) = ADDRESS_BY_VERSION(0x401560, 0x401560, 0x401560);
int gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *)) = GLOBAL_ADDRESS_BY_VERSION(0x401560, 0x401560, 0x401560);

void CAnimBlendAssociation::Init(RpClump *clump, CAnimBlendHierarchy *hier) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *>(gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *)), this, clump, hier);
}

int addrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &)) = ADDRESS_BY_VERSION(0x401620, 0x401620, 0x401620);
int gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &)) = GLOBAL_ADDRESS_BY_VERSION(0x401620, 0x401620, 0x401620);

void CAnimBlendAssociation::Init(CAnimBlendAssociation &assoc) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation &>(gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &)), this, assoc);
}

int addrof(CAnimBlendAssociation::SetBlend) = ADDRESS_BY_VERSION(0x4017E0, 0x4017E0, 0x4017E0);
int gaddrof(CAnimBlendAssociation::SetBlend) = GLOBAL_ADDRESS_BY_VERSION(0x4017E0, 0x4017E0, 0x4017E0);

void CAnimBlendAssociation::SetBlend(float amount, float delta) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float, float>(gaddrof(CAnimBlendAssociation::SetBlend), this, amount, delta);
}

int addrof(CAnimBlendAssociation::SetCurrentTime) = ADDRESS_BY_VERSION(0x401700, 0x401700, 0x401700);
int gaddrof(CAnimBlendAssociation::SetCurrentTime) = GLOBAL_ADDRESS_BY_VERSION(0x401700, 0x401700, 0x401700);

void CAnimBlendAssociation::SetCurrentTime(float time) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float>(gaddrof(CAnimBlendAssociation::SetCurrentTime), this, time);
}

int addrof(CAnimBlendAssociation::SetDeleteCallback) = ADDRESS_BY_VERSION(0x401800, 0x401800, 0x401800);
int gaddrof(CAnimBlendAssociation::SetDeleteCallback) = GLOBAL_ADDRESS_BY_VERSION(0x401800, 0x401800, 0x401800);

void CAnimBlendAssociation::SetDeleteCallback(void(*func)(CAnimBlendAssociation *, void *), void *data) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *>(gaddrof(CAnimBlendAssociation::SetDeleteCallback), this, func, data);
}

int addrof(CAnimBlendAssociation::SetFinishCallback) = ADDRESS_BY_VERSION(0x401820, 0x401820, 0x401820);
int gaddrof(CAnimBlendAssociation::SetFinishCallback) = GLOBAL_ADDRESS_BY_VERSION(0x401820, 0x401820, 0x401820);

void CAnimBlendAssociation::SetFinishCallback(void(*func)(CAnimBlendAssociation *, void *), void *data) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *>(gaddrof(CAnimBlendAssociation::SetFinishCallback), this, func, data);
}

int addrof(CAnimBlendAssociation::Start) = ADDRESS_BY_VERSION(0x4017D0, 0x4017D0, 0x4017D0);
int gaddrof(CAnimBlendAssociation::Start) = GLOBAL_ADDRESS_BY_VERSION(0x4017D0, 0x4017D0, 0x4017D0);

void CAnimBlendAssociation::Start(float time) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float>(gaddrof(CAnimBlendAssociation::Start), this, time);
}

int addrof(CAnimBlendAssociation::SyncAnimation) = ADDRESS_BY_VERSION(0x401780, 0x401780, 0x401780);
int gaddrof(CAnimBlendAssociation::SyncAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x401780, 0x401780, 0x401780);

void CAnimBlendAssociation::SyncAnimation(CAnimBlendAssociation *other) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation *>(gaddrof(CAnimBlendAssociation::SyncAnimation), this, other);
}

int addrof(CAnimBlendAssociation::UpdateBlend) = ADDRESS_BY_VERSION(0x4032B0, 0x4032B0, 0x4032B0);
int gaddrof(CAnimBlendAssociation::UpdateBlend) = GLOBAL_ADDRESS_BY_VERSION(0x4032B0, 0x4032B0, 0x4032B0);

bool CAnimBlendAssociation::UpdateBlend(float timeDelta) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAnimBlendAssociation *, float>(gaddrof(CAnimBlendAssociation::UpdateBlend), this, timeDelta);
}

int addrof(CAnimBlendAssociation::UpdateTime) = ADDRESS_BY_VERSION(0x4031F0, 0x4031F0, 0x4031F0);
int gaddrof(CAnimBlendAssociation::UpdateTime) = GLOBAL_ADDRESS_BY_VERSION(0x4031F0, 0x4031F0, 0x4031F0);

void CAnimBlendAssociation::UpdateTime(float timeDelta, float relSpeed) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float, float>(gaddrof(CAnimBlendAssociation::UpdateTime), this, timeDelta, relSpeed);
}
