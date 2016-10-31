/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponModelInfo.h"

// Converted from void CWeaponModelInfo::SetAtomic(int, RpAtomic *) 0x629C40
void CWeaponModelInfo::SetAtomic(int arg0, RpAtomic* arg1) {
    plugin::CallVirtualMethod<9, CWeaponModelInfo *, int, RpAtomic*>(this, arg0, arg1);
}

// Converted from thiscall int CWeaponModelInfo::GetWeaponInfo(void) 0x629C20
int CWeaponModelInfo::GetWeaponInfo() {
    return plugin::CallMethodAndReturn<int, 0x629C20, CWeaponModelInfo *>(this);
}

// Converted from thiscall void CWeaponModelInfo::Init(void) 0x629C70
void CWeaponModelInfo::Init() {
    plugin::CallMethod<0x629C70, CWeaponModelInfo *>(this);
}

// Converted from thiscall int CWeaponModelInfo::SetWeaponInfo(int) 0x629C30
int CWeaponModelInfo::SetWeaponInfo(int arg0) {
    return plugin::CallMethodAndReturn<int, 0x629C30, CWeaponModelInfo *, int>(this, arg0);
}
