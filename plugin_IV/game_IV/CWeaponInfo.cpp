/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"
#include "Patch.h"

CWeaponInfo* aWeaponInfo = nullptr; // [60];

static uint32_t CWeaponInfo__LoadWeaponDataAddr;
void CWeaponInfo::LoadWeaponData(const char* file) {
    return plugin::CallDyn(CWeaponInfo__LoadWeaponDataAddr, file);
}

static uint32_t CWeaponInfo__GetWeaponInfoAddr;
CWeaponInfo* CWeaponInfo::GetWeaponInfo(uint32_t weaponType) {
    return plugin::CallAndReturnDyn<CWeaponInfo*>(CWeaponInfo__GetWeaponInfoAddr, weaponType);
}

template<>
void plugin::InitPatterns<CWeaponInfo>() {
    aWeaponInfo = (CWeaponInfo*)plugin::patch::GetPointer(plugin::GetPattern("B8 ? ? ? ? C3 CC CC CC CC CC C7 01", 0));

    CWeaponInfo__LoadWeaponDataAddr = plugin::GetPattern("55 56 8B 74 24 0C 68", 0);
    CWeaponInfo__GetWeaponInfoAddr = plugin::GetPattern("8B 44 24 04 83 F8 3C", 0);
}
