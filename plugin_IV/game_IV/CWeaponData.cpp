/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeaponData.h"

CAmmoData* CWeaponData::GetAmmoData() {
    return plugin::CallMethodAndReturnDyn<CAmmoData*, CWeaponData*>(gpattern("8B 41 14 85 C0 74 07"), this);
}

CAmmoData* CWeaponData::GetAmmoDataExtraCheck() {
    return plugin::CallMethodAndReturnDyn<CAmmoData*, CWeaponData*>(gpattern("8B C1 56 8B 70 14"), this);
}

void CWeaponData::SetCurrentWeapon(int32_t arg1, int32_t slot, bool arg3, CPed* ped) {
    plugin::CallMethodDyn(gpattern("83 EC 28 A1 ? ? ? ? 33 C4 89 44 24 24 53 8B 5C 24 30 55"), this, arg1, slot, arg3, ped);
}

int32_t CWeaponData::GetAmountOfAmmunition(int32_t weaponSlot) {
    return plugin::CallMethodAndReturnDyn<int32_t, CWeaponData*>(gpattern("53 56 57 8B D9 E8 ? ? ? ? 8B 74 24 10 8B F8"), this, weaponSlot);
}

void CWeaponData::GiveWeapon(eWeaponType weaponType, int32_t ammo, int8_t setAsCurrent, int8_t arg4, int8_t arg5) {
    plugin::CallMethodDyn(gpattern("53 55 56 8B F1 8B 4C 24 10 57 51"), this, weaponType, ammo, setAsCurrent, arg4, arg5);
}
