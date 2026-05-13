/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAmmoData.h"
#include "CObject.h"
#include "CWeapon.h"

class CPed;

class CWeaponData {
public:
    int32_t m_nActiveWeaponSlot;
    int32_t field_1C;
    int32_t field_20;
    int32_t field_24;
    int32_t field_28;
    CObject* m_pHoldingObject;
    int32_t field_30;
    int32_t field_34;
    CAmmoData* m_pAmmoData;
    CWeapon m_aWeapons[12];
    uint16_t field_41;
    uint8_t field_CE;
    int32_t field_D0;
    uint8_t field_D4;
    uint8_t field_C8;
    uint8_t field_C9;
    uint8_t field_CA;
    uint8_t m_nShootRate;
    uint8_t m_nAccuracy;
    uint8_t field_CB;
    uint8_t field_CC;
    uint8_t field_CD;
    int32_t field_E0;
    uint8_t field_98[4];
    uint32_t m_nMinAccuracy;
    uint32_t m_nMaxAccuracy;
    uint8_t gap_e4[16];
    CEntity* m_pTargetEntity;
    uint8_t field_104;
    uint8_t field_105[16];

public:
    CAmmoData* GetAmmoData();
    CAmmoData* GetAmmoDataExtraCheck();
    void SetCurrentWeapon(int32_t arg1, int32_t slot, bool arg3, CPed* ped);
    int32_t GetAmountOfAmmunition(int32_t weaponSlot);
    void GiveWeapon(eWeaponType weaponType, int32_t ammo, int8_t setAsCurrent, int8_t arg4, int8_t arg5);
};
VALIDATE_OFFSET(CWeaponData, m_nActiveWeaponSlot, 0x0);
VALIDATE_OFFSET(CWeaponData, field_1C, 0x4);
VALIDATE_OFFSET(CWeaponData, field_20, 0x8);
VALIDATE_OFFSET(CWeaponData, field_24, 0xC);
VALIDATE_OFFSET(CWeaponData, field_28, 0x10);
VALIDATE_OFFSET(CWeaponData, m_pHoldingObject, 0x14);
VALIDATE_OFFSET(CWeaponData, field_30, 0x18);
VALIDATE_OFFSET(CWeaponData, field_34, 0x1C);
VALIDATE_OFFSET(CWeaponData, m_pAmmoData, 0x20);
VALIDATE_OFFSET(CWeaponData, m_aWeapons, 0x24);
VALIDATE_OFFSET(CWeaponData, field_41, 0xB4);
VALIDATE_OFFSET(CWeaponData, field_CE, 0xB6);
VALIDATE_OFFSET(CWeaponData, field_D0, 0xB8);
VALIDATE_OFFSET(CWeaponData, field_D4, 0xBC);
VALIDATE_OFFSET(CWeaponData, field_C8, 0xBD);
VALIDATE_OFFSET(CWeaponData, field_C9, 0xBE);
VALIDATE_OFFSET(CWeaponData, field_CA, 0xBF);
VALIDATE_OFFSET(CWeaponData, m_nShootRate, 0xC0);
VALIDATE_OFFSET(CWeaponData, m_nAccuracy, 0xC1);
VALIDATE_OFFSET(CWeaponData, field_CB, 0xC2);
VALIDATE_OFFSET(CWeaponData, field_CC, 0xC3);
VALIDATE_OFFSET(CWeaponData, field_CD, 0xC4);
VALIDATE_OFFSET(CWeaponData, field_E0, 0xC8);
VALIDATE_OFFSET(CWeaponData, field_98, 0xCC);
VALIDATE_OFFSET(CWeaponData, m_nMinAccuracy, 0xD0);
VALIDATE_OFFSET(CWeaponData, m_nMaxAccuracy, 0xD4);
VALIDATE_OFFSET(CWeaponData, gap_e4, 0xD8);
VALIDATE_OFFSET(CWeaponData, m_pTargetEntity, 0xE8);
VALIDATE_OFFSET(CWeaponData, field_104, 0xEC);
VALIDATE_OFFSET(CWeaponData, field_105, 0xED);
VALIDATE_SIZE(CWeaponData, 0x100);
