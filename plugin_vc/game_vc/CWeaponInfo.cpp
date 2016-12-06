/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"

// Converted from void CWeaponInfo::CWeaponInfo(void) 0x5D5870
CWeaponInfo::CWeaponInfo() {
    plugin::CallVirtualMethod<0, CWeaponInfo *>(this);
}

// Converted from cdecl eWeaponFire CWeaponInfo::FindWeaponFireType(char *name) 0x5D5170
eWeaponFire CWeaponInfo::FindWeaponFireType(char* name) {
    eWeaponFire result;
    plugin::CallAndReturn<eWeaponFire, 0x5D5170, eWeaponFire*, char*>(&result, name);
    return result;
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