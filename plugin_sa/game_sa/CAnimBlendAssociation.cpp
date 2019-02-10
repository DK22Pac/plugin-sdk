/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendAssociation.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendAssociation) = ADDRESS_BY_VERSION(0x4CE9B0, 0, 0, 0, 0, 0);
int ctor_gaddr(CAnimBlendAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4CE9B0, 0, 0, 0, 0, 0);

int ctor_addr_o(CAnimBlendAssociation, void(CAnimBlendHierarchy &)) = ADDRESS_BY_VERSION(0x4CF080, 0, 0, 0, 0, 0);
int ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendHierarchy &)) = GLOBAL_ADDRESS_BY_VERSION(0x4CF080, 0, 0, 0, 0, 0);

int ctor_addr_o(CAnimBlendAssociation, void(RpClump *, CAnimBlendHierarchy *)) = ADDRESS_BY_VERSION(0x4CEFC0, 0, 0, 0, 0, 0);
int ctor_gaddr_o(CAnimBlendAssociation, void(RpClump *, CAnimBlendHierarchy *)) = GLOBAL_ADDRESS_BY_VERSION(0x4CEFC0, 0, 0, 0, 0, 0);

int ctor_addr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)) = ADDRESS_BY_VERSION(0x4CF020, 0, 0, 0, 0, 0);
int ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)) = GLOBAL_ADDRESS_BY_VERSION(0x4CF020, 0, 0, 0, 0, 0);

int dtor_addr(CAnimBlendAssociation) = ADDRESS_BY_VERSION(0x4CECF0, 0, 0, 0, 0, 0);
int dtor_gaddr(CAnimBlendAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4CECF0, 0, 0, 0, 0, 0);

int del_dtor_addr(CAnimBlendAssociation) = ADDRESS_BY_VERSION(0x4CEFA0, 0, 0, 0, 0, 0);
int del_dtor_gaddr(CAnimBlendAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4CEFA0, 0, 0, 0, 0, 0);

CAnimBlendAssociation::~CAnimBlendAssociation()
{
    plugin::CallVirtualMethod<0, CAnimBlendAssociation *>(this, 1);
}

int addrof(CAnimBlendAssociation::AllocateAnimBlendNodeArray) = ADDRESS_BY_VERSION(0x4CE9F0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::AllocateAnimBlendNodeArray) = GLOBAL_ADDRESS_BY_VERSION(0x4CE9F0, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::AllocateAnimBlendNodeArray(int count) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, int>(gaddrof(CAnimBlendAssociation::AllocateAnimBlendNodeArray), this, count);
}

int addrof(CAnimBlendAssociation::FreeAnimBlendNodeArray) = ADDRESS_BY_VERSION(0x4CEA40, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::FreeAnimBlendNodeArray) = GLOBAL_ADDRESS_BY_VERSION(0x4CEA40, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::FreeAnimBlendNodeArray() {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(gaddrof(CAnimBlendAssociation::FreeAnimBlendNodeArray), this);
}

int addrof(CAnimBlendAssociation::GetNode) = ADDRESS_BY_VERSION(0x4CEB60, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::GetNode) = GLOBAL_ADDRESS_BY_VERSION(0x4CEB60, 0, 0, 0, 0, 0);

CAnimBlendNode *CAnimBlendAssociation::GetNode(int nodeIndex) {
    return plugin::CallMethodAndReturnDynGlobal<CAnimBlendNode *, CAnimBlendAssociation *, int>(gaddrof(CAnimBlendAssociation::GetNode), this, nodeIndex);
}

int addrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *)) = ADDRESS_BY_VERSION(0x4CED50, 0, 0, 0, 0, 0);
int gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *)) = GLOBAL_ADDRESS_BY_VERSION(0x4CED50, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::Init(RpClump *clump, CAnimBlendHierarchy *hierarchy) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *>(gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *)), this, clump, hierarchy);
}

int addrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &)) = ADDRESS_BY_VERSION(0x4CEE40, 0, 0, 0, 0, 0);
int gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &)) = GLOBAL_ADDRESS_BY_VERSION(0x4CEE40, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::Init(CAnimBlendAssociation &source) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation &>(gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &)), this, source);
}

int addrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendStaticAssociation &)) = ADDRESS_BY_VERSION(0x4CEEC0, 0, 0, 0, 0, 0);
int gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendStaticAssociation &)) = GLOBAL_ADDRESS_BY_VERSION(0x4CEEC0, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::Init(CAnimBlendStaticAssociation &source) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendStaticAssociation &>(gaddrof_o(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendStaticAssociation &)), this, source);
}

int addrof(CAnimBlendAssociation::ReferenceAnimBlock) = ADDRESS_BY_VERSION(0x4CEA50, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::ReferenceAnimBlock) = GLOBAL_ADDRESS_BY_VERSION(0x4CEA50, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::ReferenceAnimBlock() {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(gaddrof(CAnimBlendAssociation::ReferenceAnimBlock), this);
}

int addrof(CAnimBlendAssociation::SetBlend) = ADDRESS_BY_VERSION(0x4CEBA0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::SetBlend) = GLOBAL_ADDRESS_BY_VERSION(0x4CEBA0, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::SetBlend(float blendAmount, float blendDelta) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float, float>(gaddrof(CAnimBlendAssociation::SetBlend), this, blendAmount, blendDelta);
}

int addrof(CAnimBlendAssociation::SetBlendTo) = ADDRESS_BY_VERSION(0x4CEB80, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::SetBlendTo) = GLOBAL_ADDRESS_BY_VERSION(0x4CEB80, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::SetBlendTo(float blendAmount, float blendDelta) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float, float>(gaddrof(CAnimBlendAssociation::SetBlendTo), this, blendAmount, blendDelta);
}

int addrof(CAnimBlendAssociation::SetCurrentTime) = ADDRESS_BY_VERSION(0x4CEA80, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::SetCurrentTime) = GLOBAL_ADDRESS_BY_VERSION(0x4CEA80, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::SetCurrentTime(float currentTime) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float>(gaddrof(CAnimBlendAssociation::SetCurrentTime), this, currentTime);
}

int addrof(CAnimBlendAssociation::SetDeleteCallback) = ADDRESS_BY_VERSION(0x4CEBC0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::SetDeleteCallback) = GLOBAL_ADDRESS_BY_VERSION(0x4CEBC0, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::SetDeleteCallback(void(*callback)(CAnimBlendAssociation *, void *), void *data) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *>(gaddrof(CAnimBlendAssociation::SetDeleteCallback), this, callback, data);
}

int addrof(CAnimBlendAssociation::SetFinishCallback) = ADDRESS_BY_VERSION(0x4CEBE0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::SetFinishCallback) = GLOBAL_ADDRESS_BY_VERSION(0x4CEBE0, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::SetFinishCallback(void(*callback)(CAnimBlendAssociation *, void *), void *data) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *>(gaddrof(CAnimBlendAssociation::SetFinishCallback), this, callback, data);
}

int addrof(CAnimBlendAssociation::Start) = ADDRESS_BY_VERSION(0x4CEB70, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::Start) = GLOBAL_ADDRESS_BY_VERSION(0x4CEB70, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::Start(float currentTime) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float>(gaddrof(CAnimBlendAssociation::Start), this, currentTime);
}

int addrof(CAnimBlendAssociation::SyncAnimation) = ADDRESS_BY_VERSION(0x4CEB40, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::SyncAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x4CEB40, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::SyncAnimation(CAnimBlendAssociation *syncWith) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation *>(gaddrof(CAnimBlendAssociation::SyncAnimation), this, syncWith);
}

int addrof(CAnimBlendAssociation::UpdateBlend) = ADDRESS_BY_VERSION(0x4D1490, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::UpdateBlend) = GLOBAL_ADDRESS_BY_VERSION(0x4D1490, 0, 0, 0, 0, 0);

bool CAnimBlendAssociation::UpdateBlend(float blendDeltaMult) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAnimBlendAssociation *, float>(gaddrof(CAnimBlendAssociation::UpdateBlend), this, blendDeltaMult);
}

int addrof(CAnimBlendAssociation::UpdateTime) = ADDRESS_BY_VERSION(0x4D13D0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::UpdateTime) = GLOBAL_ADDRESS_BY_VERSION(0x4D13D0, 0, 0, 0, 0, 0);

bool CAnimBlendAssociation::UpdateTime(float unused1, float unused2) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAnimBlendAssociation *, float, float>(gaddrof(CAnimBlendAssociation::UpdateTime), this, unused1, unused2);
}

int addrof(CAnimBlendAssociation::UpdateTimeStep) = ADDRESS_BY_VERSION(0x4D13A0, 0, 0, 0, 0, 0);
int gaddrof(CAnimBlendAssociation::UpdateTimeStep) = GLOBAL_ADDRESS_BY_VERSION(0x4D13A0, 0, 0, 0, 0, 0);

void CAnimBlendAssociation::UpdateTimeStep(float speedMult, float timeMult) {
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, float, float>(gaddrof(CAnimBlendAssociation::UpdateTimeStep), this, speedMult, timeMult);
}
