/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CAnimBlendAssociation.h"

// Converted from thiscall CAnimBlendNode* CAnimBlendAssociation::AllocateAnimBlendNodeArray(int numBlendNodes) 0x4CE9F0 
CAnimBlendNode* CAnimBlendAssociation::AllocateAnimBlendNodeArray(int numBlendNodes) {
    return plugin::CallMethodAndReturn<CAnimBlendNode*, 0x4CE9F0, CAnimBlendAssociation *, int>(this, numBlendNodes);
}

// Converted from thiscall void CAnimBlendAssociation::CAnimBlendAssociation(CAnimBlendStaticAssociation &arg1) 0x4CF080 
CAnimBlendAssociation::CAnimBlendAssociation(CAnimBlendStaticAssociation& arg1) {
    plugin::CallMethod<0x4CF080, CAnimBlendAssociation *, CAnimBlendStaticAssociation&>(this, arg1);
}

// Converted from thiscall void CAnimBlendAssociation::CAnimBlendAssociation(RpClump *pClump, CAnimBlendHierarchy *pAnimBlendHier) 0x4CEFC0 
CAnimBlendAssociation::CAnimBlendAssociation(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier) {
    plugin::CallMethod<0x4CEFC0, CAnimBlendAssociation *, RpClump*, CAnimBlendHierarchy*>(this, pClump, pAnimBlendHier);
}

// Converted from thiscall CAnimBlendNode* CAnimBlendAssociation::GetNode(int index) 0x4CEB60 
CAnimBlendNode* CAnimBlendAssociation::GetNode(int index) {
    return plugin::CallMethodAndReturn<CAnimBlendNode*, 0x4CEB60, CAnimBlendAssociation *, int>(this, index);
}

// Converted from thiscall void CAnimBlendAssociation::Init(CAnimBlendStaticAssociation & arg1) 0x4CEEC0 
void CAnimBlendAssociation::Init(CAnimBlendStaticAssociation& arg1) {
    plugin::CallMethod<0x4CEEC0, CAnimBlendAssociation *, CAnimBlendStaticAssociation&>(this, arg1);
}

// Converted from thiscall void CAnimBlendAssociation::Init(RpClump *pClump,CAnimBlendHierarchy *pAnimBlendHier) 0x4CED50 
void CAnimBlendAssociation::Init(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier) {
    plugin::CallMethod<0x4CED50, CAnimBlendAssociation *, RpClump*, CAnimBlendHierarchy*>(this, pClump, pAnimBlendHier);
}

// Converted from thiscall void CAnimBlendAssociation::ReferenceAnimBlock(void) 0x4CEA50 
void CAnimBlendAssociation::ReferenceAnimBlock() {
    plugin::CallMethod<0x4CEA50, CAnimBlendAssociation *>(this);
}

// Converted from thiscall void CAnimBlendAssociation::SetBlend(float fBlendAmount,float fBlendDelta) 0x4CEBA0 
void CAnimBlendAssociation::SetBlend(float fBlendAmount, float fBlendDelta) {
    plugin::CallMethod<0x4CEBA0, CAnimBlendAssociation *, float, float>(this, fBlendAmount, fBlendDelta);
}

// Converted from thiscall void CAnimBlendAssociation::SetCurrentTime(float currentTime) 0x4CEA80 
void CAnimBlendAssociation::SetCurrentTime(float currentTime) {
    plugin::CallMethod<0x4CEA80, CAnimBlendAssociation *, float>(this, currentTime);
}

// Converted from thiscall void CAnimBlendAssociation::SetDeleteCallback(void *func,void *data) 0x4CEBC0 
void CAnimBlendAssociation::SetDeleteCallback(void* func, void* data) {
    plugin::CallMethod<0x4CEBC0, CAnimBlendAssociation *, void*, void*>(this, func, data);
}

// Converted from thiscall void CAnimBlendAssociation::SetFinishCallback(void *func,void *data) 0x4CEBE0 
void CAnimBlendAssociation::SetFinishCallback(void* func, void* data) {
    plugin::CallMethod<0x4CEBE0, CAnimBlendAssociation *, void*, void*>(this, func, data);
}

// Converted from thiscall void CAnimBlendAssociation::Start(float currentTime) 0x4CEB70 
void CAnimBlendAssociation::Start(float currentTime) {
    plugin::CallMethod<0x4CEB70, CAnimBlendAssociation *, float>(this, currentTime);
}

// Converted from thiscall void CAnimBlendAssociation::SyncAnimation(CAnimBlendAssociation* arg1) 0x4CEB40 
void CAnimBlendAssociation::SyncAnimation(CAnimBlendAssociation* arg1) {
    plugin::CallMethod<0x4CEB40, CAnimBlendAssociation *, CAnimBlendAssociation*>(this, arg1);
}

// Converted from thiscall bool CAnimBlendAssociation::UpdateBlend(float BlendDeltaMult) 0x4D1490 
bool CAnimBlendAssociation::UpdateBlend(float BlendDeltaMult) {
    return plugin::CallMethodAndReturn<bool, 0x4D1490, CAnimBlendAssociation *, float>(this, BlendDeltaMult);
}

// Converted from thiscall void CAnimBlendAssociation::UpdateTime(void) 0x4D13D0 
void CAnimBlendAssociation::UpdateTime() {
    plugin::CallMethod<0x4D13D0, CAnimBlendAssociation *>(this);
}

// Converted from thiscall void CAnimBlendAssociation::~CAnimBlendAssociation() 0x4CECF0 
//CAnimBlendAssociation::~CAnimBlendAssociation() {
//  plugin::CallMethod<0x4CECF0, CAnimBlendAssociation *>(this);
//}

// Converted from thiscall void CAnimBlendAssociation::~CAnimBlendAssociation() 0x4CEFA0 
//CAnimBlendAssociation::~CAnimBlendAssociation() {
//   plugin::CallMethod<0x4CEFA0, CAnimBlendAssociation *>(this);
//}
