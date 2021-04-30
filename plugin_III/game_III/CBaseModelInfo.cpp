/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBaseModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CBaseModelInfo, void(ModelInfoType)) = ADDRESS_BY_VERSION(0x4F6A50, 0x4F6B00, 0x4F6A90);
int ctor_gaddr_o(CBaseModelInfo, void(ModelInfoType)) = GLOBAL_ADDRESS_BY_VERSION(0x4F6A50, 0x4F6B00, 0x4F6A90);

int dtor_addr(CBaseModelInfo) = ADDRESS_BY_VERSION(0x4F6C00, 0x4F6CB0, 0x4F6C40);
int dtor_gaddr(CBaseModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x4F6C00, 0x4F6CB0, 0x4F6C40);

int del_dtor_addr(CBaseModelInfo) = ADDRESS_BY_VERSION(0x4F6BC0, 0x4F6C70, 0x4F6C00);
int del_dtor_gaddr(CBaseModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x4F6BC0, 0x4F6C70, 0x4F6C00);

int addrof(CBaseModelInfo::Shutdown) = ADDRESS_BY_VERSION(0x4F6A90, 0x4F6B40, 0x4F6AD0);
int gaddrof(CBaseModelInfo::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4F6A90, 0x4F6B40, 0x4F6AD0);

void CBaseModelInfo::Shutdown() {
    plugin::CallVirtualMethod<1, CBaseModelInfo *>(this);
}

int addrof(CBaseModelInfo::Add2dEffect) = ADDRESS_BY_VERSION(0x4F6B20, 0x4F6BD0, 0x4F6B60);
int gaddrof(CBaseModelInfo::Add2dEffect) = GLOBAL_ADDRESS_BY_VERSION(0x4F6B20, 0x4F6BD0, 0x4F6B60);

void CBaseModelInfo::Add2dEffect(C2dEffect *effect) {
    plugin::CallMethodDynGlobal<CBaseModelInfo *, C2dEffect *>(gaddrof(CBaseModelInfo::Add2dEffect), this, effect);
}

int addrof(CBaseModelInfo::AddRef) = ADDRESS_BY_VERSION(0x4F6BA0, 0x4F6C50, 0x4F6BE0);
int gaddrof(CBaseModelInfo::AddRef) = GLOBAL_ADDRESS_BY_VERSION(0x4F6BA0, 0x4F6C50, 0x4F6BE0);

void CBaseModelInfo::AddRef() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::AddRef), this);
}

int addrof(CBaseModelInfo::AddTexDictionaryRef) = ADDRESS_BY_VERSION(0x4F6B80, 0x4F6C30, 0x4F6BC0);
int gaddrof(CBaseModelInfo::AddTexDictionaryRef) = GLOBAL_ADDRESS_BY_VERSION(0x4F6B80, 0x4F6C30, 0x4F6BC0);

void CBaseModelInfo::AddTexDictionaryRef() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::AddTexDictionaryRef), this);
}

int addrof(CBaseModelInfo::ClearTexDictionary) = ADDRESS_BY_VERSION(0x4F6B70, 0x4F6C20, 0x4F6BB0);
int gaddrof(CBaseModelInfo::ClearTexDictionary) = GLOBAL_ADDRESS_BY_VERSION(0x4F6B70, 0x4F6C20, 0x4F6BB0);

void CBaseModelInfo::ClearTexDictionary() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::ClearTexDictionary), this);
}

int addrof(CBaseModelInfo::DeleteCollisionModel) = ADDRESS_BY_VERSION(0x4F6AC0, 0x4F6B70, 0x4F6B00);
int gaddrof(CBaseModelInfo::DeleteCollisionModel) = GLOBAL_ADDRESS_BY_VERSION(0x4F6AC0, 0x4F6B70, 0x4F6B00);

void CBaseModelInfo::DeleteCollisionModel() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::DeleteCollisionModel), this);
}

int addrof(CBaseModelInfo::Get2dEffect) = ADDRESS_BY_VERSION(0x4F6B00, 0x4F6BB0, 0x4F6B40);
int gaddrof(CBaseModelInfo::Get2dEffect) = GLOBAL_ADDRESS_BY_VERSION(0x4F6B00, 0x4F6BB0, 0x4F6B40);

C2dEffect *CBaseModelInfo::Get2dEffect(int effectNumber) {
    return plugin::CallMethodAndReturnDynGlobal<C2dEffect *, CBaseModelInfo *, int>(gaddrof(CBaseModelInfo::Get2dEffect), this, effectNumber);
}

int addrof(CBaseModelInfo::Init2dEffects) = ADDRESS_BY_VERSION(0x4F6AF0, 0x4F6BA0, 0x4F6B30);
int gaddrof(CBaseModelInfo::Init2dEffects) = GLOBAL_ADDRESS_BY_VERSION(0x4F6AF0, 0x4F6BA0, 0x4F6B30);

void CBaseModelInfo::Init2dEffects() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::Init2dEffects), this);
}

int addrof(CBaseModelInfo::RemoveRef) = ADDRESS_BY_VERSION(0x4F6BB0, 0x4F6C60, 0x4F6BF0);
int gaddrof(CBaseModelInfo::RemoveRef) = GLOBAL_ADDRESS_BY_VERSION(0x4F6BB0, 0x4F6C60, 0x4F6BF0);

void CBaseModelInfo::RemoveRef() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::RemoveRef), this);
}

int addrof(CBaseModelInfo::RemoveTexDictionaryRef) = ADDRESS_BY_VERSION(0x4F6B90, 0x4F6C40, 0x4F6BD0);
int gaddrof(CBaseModelInfo::RemoveTexDictionaryRef) = GLOBAL_ADDRESS_BY_VERSION(0x4F6B90, 0x4F6C40, 0x4F6BD0);

void CBaseModelInfo::RemoveTexDictionaryRef() {
    plugin::CallMethodDynGlobal<CBaseModelInfo *>(gaddrof(CBaseModelInfo::RemoveTexDictionaryRef), this);
}

int addrof(CBaseModelInfo::SetTexDictionary) = ADDRESS_BY_VERSION(0x4F6B40, 0x4F6BF0, 0x4F6B80);
int gaddrof(CBaseModelInfo::SetTexDictionary) = GLOBAL_ADDRESS_BY_VERSION(0x4F6B40, 0x4F6BF0, 0x4F6B80);

void CBaseModelInfo::SetTexDictionary(char const *txdName) {
    plugin::CallMethodDynGlobal<CBaseModelInfo *, char const *>(gaddrof(CBaseModelInfo::SetTexDictionary), this, txdName);
}
