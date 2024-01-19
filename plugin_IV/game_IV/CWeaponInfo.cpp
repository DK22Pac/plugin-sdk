/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeaponInfo.h"

CWeaponInfo* aWeaponInfo = gpatternt(CWeaponInfo, "B8 ? ? ? ? C3 CC CC CC CC CC C7 01", 1); // [60];

void CWeaponInfo::LoadWeaponData(const char* file) {
    return plugin::CallDyn(gpattern("55 56 8B 74 24 0C 68"), file);
}

CWeaponInfo* CWeaponInfo::GetWeaponInfo(uint32_t weaponType) {
    return plugin::CallAndReturnDyn<CWeaponInfo*>(gpattern("8B 44 24 04 83 F8 3C"), weaponType);
}

