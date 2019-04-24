/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponModelInfo.h"

// Converted from thiscall int CWeaponModelInfo::GetWeaponInfo(void) 0x629C20
int CWeaponModelInfo::GetWeaponInfo() {
    return plugin::CallMethodAndReturn<int, 0x629C20, CWeaponModelInfo *>(this);
}

// Converted from thiscall void CWeaponModelInfo::Init(void) 0x629C70
void CWeaponModelInfo::Init() {
    plugin::CallMethod<0x629C70, CWeaponModelInfo *>(this);
}

// Converted from thiscall int CWeaponModelInfo::SetWeaponInfo(int) 0x629C30
int CWeaponModelInfo::SetWeaponInfo(int weaponType) {
    return plugin::CallMethodAndReturn<int, 0x629C30, CWeaponModelInfo *, int>(this, weaponType);
}

// Converted from thiscall void CStore<CWeaponModelInfo,37>::~CStore() 0x5601E0 
WeaponModelStore::~WeaponModelStore() {
    plugin::CallMethod<0x5601E0, WeaponModelStore *>(this);
}
