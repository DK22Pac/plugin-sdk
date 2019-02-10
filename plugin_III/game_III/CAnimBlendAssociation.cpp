/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendAssociation.h"

// Converted from void CAnimBlendAssociation::~CAnimBlendAssociation() 0x0
CAnimBlendAssociation::~CAnimBlendAssociation() {
    plugin::CallVirtualMethod<0, CAnimBlendAssociation *>(this, 1);
}

// Converted from thiscall void CAnimBlendAssociation::AllocateAnimBlendNodeArray(int) 0x4016A0 
void CAnimBlendAssociation::AllocateAnimBlendNodeArray(int arg0) {
    plugin::CallMethod<0x4016A0, CAnimBlendAssociation *, int>(this, arg0);
}

// Converted from thiscall void CAnimBlendAssociation::CAnimBlendAssociation(CAnimBlendAssociation&) 0x4014C0 
CAnimBlendAssociation::CAnimBlendAssociation(CAnimBlendAssociation& arg0) {
    plugin::CallMethod<0x4014C0, CAnimBlendAssociation *, CAnimBlendAssociation&>(this, arg0);
}

// Converted from thiscall void CAnimBlendAssociation::CAnimBlendAssociation(void) 0x401460 
CAnimBlendAssociation::CAnimBlendAssociation() {
    plugin::CallMethod<0x401460, CAnimBlendAssociation *>(this);
}

// Converted from thiscall void CAnimBlendAssociation::FreeAnimBlendNodeArray(void) 0x4016F0 
void CAnimBlendAssociation::FreeAnimBlendNodeArray() {
    plugin::CallMethod<0x4016F0, CAnimBlendAssociation *>(this);
}

// Converted from thiscall CAnimBlendNode* CAnimBlendAssociation::GetNode(int) 0x4017B0
CAnimBlendNode* CAnimBlendAssociation::GetNode(int arg0) {
    return plugin::CallMethodAndReturn<CAnimBlendNode*, 0x4017B0, CAnimBlendAssociation *, int>(this, arg0);
}

// Converted from thiscall void CAnimBlendAssociation::Init(CAnimBlendAssociation&) 0x401620 
void CAnimBlendAssociation::Init(CAnimBlendAssociation& arg0) {
    plugin::CallMethod<0x401620, CAnimBlendAssociation *, CAnimBlendAssociation&>(this, arg0);
}

// Converted from thiscall void CAnimBlendAssociation::Init(RpClump *clump,CAnimBlendHierarchy *hierarchy) 0x401560
void CAnimBlendAssociation::Init(RpClump* clump, CAnimBlendHierarchy* hierarchy) {
    plugin::CallMethod<0x401560, CAnimBlendAssociation *, RpClump*, CAnimBlendHierarchy*>(this, clump, hierarchy);
}

// Converted from thiscall void CAnimBlendAssociation::SetBlend(float amount,float delta) 0x4017E0
void CAnimBlendAssociation::SetBlend(float amount, float delta) {
    plugin::CallMethod<0x4017E0, CAnimBlendAssociation *, float, float>(this, amount, delta);
}

// Converted from thiscall void CAnimBlendAssociation::SetCurrentTime(float time) 0x401700
void CAnimBlendAssociation::SetCurrentTime(float time) {
    plugin::CallMethod<0x401700, CAnimBlendAssociation *, float>(this, time);
}

// Converted from thiscall void CAnimBlendAssociation::Start(float time) 0x4017D0
void CAnimBlendAssociation::Start(float time) {
    plugin::CallMethod<0x4017D0, CAnimBlendAssociation *, float>(this, time);
}

// Converted from thiscall void CAnimBlendAssociation::SyncAnimation(CAnimBlendAssociation*) 0x401780 
void CAnimBlendAssociation::SyncAnimation(CAnimBlendAssociation* arg0) {
    plugin::CallMethod<0x401780, CAnimBlendAssociation *, CAnimBlendAssociation*>(this, arg0);
}

// Converted from thiscall bool CAnimBlendAssociation::UpdateBlend(float) 0x4032B0 
bool CAnimBlendAssociation::UpdateBlend(float arg0) {
    return plugin::CallMethodAndReturn<bool, 0x4032B0, CAnimBlendAssociation *, float>(this, arg0);
}

// Converted from thiscall void CAnimBlendAssociation::UpdateTime(float,float) 0x4031F0 
void CAnimBlendAssociation::UpdateTime(float arg0, float arg1) {
    plugin::CallMethod<0x4031F0, CAnimBlendAssociation *, float, float>(this, arg0, arg1);
}
