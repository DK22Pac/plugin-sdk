/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"

CWeaponInfo(&aWeaponInfo)[14] = *(CWeaponInfo(*)[14])*(int *)0x6503EC;
char **CWeaponInfo::ms_aWeaponNames = (char **)0x603334;

// Converted from thiscall void CWeaponInfo::CWeaponInfo(void) 0x5654F0
CWeaponInfo::CWeaponInfo() {
    plugin::CallMethod<0x5654F0, CWeaponInfo *>(this);
}

// Converted from cdecl eWeaponFire CWeaponInfo::FindWeaponFireType(char *name) 0x5653E0
eWeaponFire CWeaponInfo::FindWeaponFireType(char* name) {
    eWeaponFire result;
    plugin::CallAndReturn<eWeaponFire, 0x5653E0, eWeaponFire*, char*>(&result, name);
    return result;
}

// Converted from cdecl eWeaponType CWeaponInfo::FindWeaponType(char *name) 0x5653B0
eWeaponType CWeaponInfo::FindWeaponType(char* name) {
    eWeaponType result;
    plugin::CallAndReturn<eWeaponType, 0x5653B0, eWeaponType*, char*>(&result, name);
    return result;
}

// Converted from cdecl CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType weaponType) 0x564FD0
CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType weaponType) {
    return plugin::CallAndReturn<CWeaponInfo*, 0x564FD0, eWeaponType>(weaponType);
}

// Converted from cdecl void CWeaponInfo::Initialise(void) 0x564EA0 
void CWeaponInfo::Initialise() {
    plugin::Call<0x564EA0>();
}

// Converted from cdecl void CWeaponInfo::LoadWeaponData(void) 0x564FE0 
void CWeaponInfo::LoadWeaponData() {
    plugin::Call<0x564FE0>();
}

// Converted from cdecl void CWeaponInfo::Shutdown(void) 0x564FB0
void CWeaponInfo::Shutdown() {
    plugin::Call<0x564FB0>();
}

// Converted from thiscall void CWeaponInfo::~CWeaponInfo() 0x5654E0
CWeaponInfo::~CWeaponInfo() {
    plugin::CallMethod<0x5654E0, CWeaponInfo *>(this);
}
