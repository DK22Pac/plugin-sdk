/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"

// Converted from CWeaponInfo aWeaponInfo[37] 0x782A14
CWeaponInfo (&aWeaponInfo)[37] = *(CWeaponInfo (*)[37])*(int *)0x782A14;

// Converted from thiscall void CWeaponInfo::CWeaponInfo(void) 0x5D58D0
CWeaponInfo::CWeaponInfo() {
    plugin::CallMethod<0x5D58D0, CWeaponInfo *>(this);
}

// Converted from thiscall void CWeaponInfo::~CWeaponInfo(void) 0x5D58C0
CWeaponInfo::~CWeaponInfo() {
    plugin::CallMethod<0x5D58C0, CWeaponInfo *>(this);
}

// Converted from cdecl eWeaponFire CWeaponInfo::FindWeaponFireType(char *name) 0x5D5170
eWeaponFire CWeaponInfo::FindWeaponFireType(char* name) {
    return plugin::CallAndReturn<eWeaponFire, 0x5D5170, char*>(name);
}

// Converted from cdecl CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType weaponType) 0x5D5710
CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType weaponType) {
    return plugin::CallAndReturn<CWeaponInfo*, 0x5D5710, eWeaponType>(weaponType);
}

// Converted from cdecl void CWeaponInfo::Initialise(void) 0x5D5750
void CWeaponInfo::Initialise() {
    plugin::Call<0x5D5750>();
}

// Converted from cdecl void CWeaponInfo::LoadWeaponData(void) 0x5D5250
void CWeaponInfo::LoadWeaponData() {
    plugin::Call<0x5D5250>();
}

// Converted from cdecl void CWeaponInfo::Shutdown(void) 0x5D5730
void CWeaponInfo::Shutdown() {
    plugin::Call<0x5D5730>();
}