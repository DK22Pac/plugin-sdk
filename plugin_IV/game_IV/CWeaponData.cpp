/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeaponData.h"

static uint32_t CWeaponData__GetAmmoDataAddr;
CAmmoData* CWeaponData::GetAmmoData() {
    return plugin::CallMethodAndReturnDyn<CAmmoData*, CWeaponData*>(CWeaponData__GetAmmoDataAddr, this);
}

static uint32_t CWeaponData__GetAmmoDataExtraCheckAddr;
CAmmoData* CWeaponData::GetAmmoDataExtraCheck() {
    return plugin::CallMethodAndReturnDyn<CAmmoData*, CWeaponData*>(CWeaponData__GetAmmoDataExtraCheckAddr, this);
}

static uint32_t CWeaponData__SetCurrentWeaponAddr;
void CWeaponData::SetCurrentWeapon(int32_t arg1, int32_t slot, bool arg3, CPed* ped) {
    plugin::CallMethodDyn(CWeaponData__SetCurrentWeaponAddr, this, arg1, slot, arg3, ped);
}

static uint32_t CWeaponData__GetAmountOfAmmunitionAddr;
int32_t CWeaponData::GetAmountOfAmmunition(int32_t weaponSlot) {
    return plugin::CallMethodAndReturnDyn<int32_t, CWeaponData*>(CWeaponData__GetAmountOfAmmunitionAddr, this, weaponSlot);
}

template<>
void plugin::InitPatterns<CWeaponData>() {
    CWeaponData__GetAmmoDataAddr = plugin::GetPattern("8B 41 14 85 C0 74 07", 0);
    CWeaponData__GetAmmoDataExtraCheckAddr = plugin::GetPattern("8B C1 56 8B 70 14", 0);

    CWeaponData__SetCurrentWeaponAddr = plugin::GetPattern("83 EC 28 A1 ? ? ? ? 33 C4 89 44 24 24 53 8B 5C 24 30 55", 0);
    CWeaponData__GetAmountOfAmmunitionAddr = plugin::GetPattern("53 56 57 8B D9 E8 ? ? ? ? 8B 74 24 10 8B F8", 0);
}
