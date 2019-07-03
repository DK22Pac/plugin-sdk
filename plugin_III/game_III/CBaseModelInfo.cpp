/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBaseModelInfo.h"

// Converted from void CBaseModelInfo::Shutdown(void) 0x0
void CBaseModelInfo::Shutdown() {
    plugin::CallVirtualMethod<1, CBaseModelInfo *>(this);
}

// Converted from void CBaseModelInfo::DeleteRwObject(void) 0x0
void CBaseModelInfo::DeleteRwObject() {
    plugin::CallVirtualMethod<2, CBaseModelInfo *>(this);
}

// Converted from RwObject* CBaseModelInfo::CreateInstance(void) 0x0
RwObject* CBaseModelInfo::CreateInstance() {
    return plugin::CallVirtualMethodAndReturn<RwObject*, 3, CBaseModelInfo *>(this);
}

// Converted from RwObject* CBaseModelInfo::CreateInstance(RwMatrixTag *tranform) 0x0
RwObject* CBaseModelInfo::CreateInstance(RwMatrixTag* tranform) {
    return plugin::CallVirtualMethodAndReturn<RwObject*, 4, CBaseModelInfo *, RwMatrixTag*>(this, tranform);
}

// Converted from RwObject* CBaseModelInfo::GetRwObject(void) 0x0
RwObject* CBaseModelInfo::GetRwObject() {
    return plugin::CallVirtualMethodAndReturn<RwObject*, 5, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::Add2dEffect(C2dEffect *effect) 0x4F6B20
void CBaseModelInfo::Add2dEffect(C2dEffect* effect) {
    plugin::CallMethod<0x4F6B20, CBaseModelInfo *, C2dEffect*>(this, effect);
}

// Converted from thiscall void CBaseModelInfo::AddRef(void) 0x4F6BA0 
void CBaseModelInfo::AddRef() {
    plugin::CallMethod<0x4F6BA0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::AddTexDictionaryRef(void) 0x4F6B80 
void CBaseModelInfo::AddTexDictionaryRef() {
    plugin::CallMethod<0x4F6B80, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::ClearTexDictionary(void) 0x4F6B70 
void CBaseModelInfo::ClearTexDictionary() {
    plugin::CallMethod<0x4F6B70, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::DeleteCollisionModel(void) 0x4F6AC0 
void CBaseModelInfo::DeleteCollisionModel() {
    plugin::CallMethod<0x4F6AC0, CBaseModelInfo *>(this);
}

// Converted from thiscall C2dEffect* CBaseModelInfo::Get2dEffect(int effectNumber) 0x4F6B00
C2dEffect* CBaseModelInfo::Get2dEffect(int effectNumber) {
    return plugin::CallMethodAndReturn<C2dEffect*, 0x4F6B00, CBaseModelInfo *, int>(this, effectNumber);
}

// Converted from thiscall void CBaseModelInfo::Init2dEffects(void) 0x4F6AF0 
void CBaseModelInfo::Init2dEffects() {
    plugin::CallMethod<0x4F6AF0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::RemoveRef(void) 0x4F6BB0 
void CBaseModelInfo::RemoveRef() {
    plugin::CallMethod<0x4F6BB0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::RemoveTexDictionaryRef(void) 0x4F6B90 
void CBaseModelInfo::RemoveTexDictionaryRef() {
    plugin::CallMethod<0x4F6B90, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::SetTexDictionary(char const*txdName) 0x4F6B40
void CBaseModelInfo::SetTexDictionary(char const* txdName) {
    plugin::CallMethod<0x4F6B40, CBaseModelInfo *, char const*>(this, txdName);
}
