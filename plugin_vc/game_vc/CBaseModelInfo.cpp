/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
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

// Converted from void CBaseModelInfo::SetAnimFile(char const* filename) 0x0
void CBaseModelInfo::SetAnimFile(char const* filename) {
    plugin::CallVirtualMethod<6, CBaseModelInfo *, char const*>(this, filename);
}

// Converted from void CBaseModelInfo::ConvertAnimFileIndex(void) 0x0
void CBaseModelInfo::ConvertAnimFileIndex() {
    plugin::CallVirtualMethod<7, CBaseModelInfo *>(this);
}

// Converted from int CBaseModelInfo::GetAnimFileIndex(void) 0x0
int CBaseModelInfo::GetAnimFileIndex() {
    return plugin::CallVirtualMethodAndReturn<int, 8, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::RemoveRef(void) 0x53F1A0
void CBaseModelInfo::RemoveRef() {
    plugin::CallMethod<0x53F1A0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::AddRef(void) 0x53F1B0
void CBaseModelInfo::AddRef() {
    plugin::CallMethod<0x53F1B0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::RemoveTexDictionaryRef(void) 0x53F1C0
void CBaseModelInfo::RemoveTexDictionaryRef() {
    plugin::CallMethod<0x53F1C0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::AddTexDictionaryRef(void) 0x53F1D0
void CBaseModelInfo::AddTexDictionaryRef() {
    plugin::CallMethod<0x53F1D0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::ClearTexDictionary(void) 0x53F1E0
void CBaseModelInfo::ClearTexDictionary() {
    plugin::CallMethod<0x53F1E0, CBaseModelInfo *>(this);
}

// Converted from thiscall void CBaseModelInfo::SetTexDictionary(char *txdName) 0x53F1F0
void CBaseModelInfo::SetTexDictionary(char* txdName) {
    plugin::CallMethod<0x53F1F0, CBaseModelInfo *, char*>(this, txdName);
}

// Converted from thiscall void CBaseModelInfo::Add2dEffect(C2dEffect *effect) 0x53F220
void CBaseModelInfo::Add2dEffect(C2dEffect* effect) {
    plugin::CallMethod<0x53F220, CBaseModelInfo *, C2dEffect*>(this, effect);
}

// Converted from thiscall C2dEffect* CBaseModelInfo::Get2dEffect(int effectNumber) 0x53F260
C2dEffect* CBaseModelInfo::Get2dEffect(int effectNumber) {
    return plugin::CallMethodAndReturn<C2dEffect*, 0x53F260, CBaseModelInfo *, int>(this, effectNumber);
}

CColModel * CBaseModelInfo::GetColModel() {
    return plugin::CallMethodAndReturn<CColModel *, 0x4739B2, CBaseModelInfo *>(this);
}