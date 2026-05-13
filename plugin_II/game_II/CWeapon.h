/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eWeaponType {
    WEAPONTYPE_UNARMED = -1,
    WEAPONTYPE_PISTOL,
    WEAPONTYPE_UZI,
    WEAPONTYPE_ROCKETLAUNCHER,
    WEAPONTYPE_ELECTROGUN,
    WEAPONTYPE_MOLOTOV,
    WEAPONTYPE_GRENADE,
    WEAPONTYPE_SHOTGUN,
    WEAPONTYPE_ELECTROBATON,
    WEAPONTYPE_FLAMETHROWER,
    WEAPONTYPE_SILENCEDUZI,
    WEAPONTYPE_DUALPISTOL,
    WEAPONTYPE_11,
    WEAPONTYPE_12,
    WEAPONTYPE_13,
    WEAPONTYPE_14,
    WEAPONTYPE_CARBOMB,
    WEAPONTYPE_CAROIL,
    WEAPONTYPE_CARMINE,
    WEAPONTYPE_CARUZI,
    WEAPONTYPE_TANKROCKETLAUNCHER,
    WEAPONTYPE_WATERCANNON,
    WEAPONTYPE_JEEPGUN,
    WEAPONTYPE_CARBOMBINSTANT,
    NUM_WEAPONTYPES,
};

class CPed;

class CWeapon {
public:
    short m_nAmmo;
    unsigned char m_nTimer;
    unsigned char field_3;
    int field_8;
    unsigned char field_9;
    unsigned char field_10;
    unsigned char field_11;
    unsigned char field_12;
    unsigned char field_13;
    unsigned char field_14;
    unsigned char field_15;
    unsigned char field_16;
    unsigned char field_17;
    unsigned char field_18;
    unsigned char field_19;
    unsigned char field_20;
    int m_nVehicleId;
    CWeapon* m_pNext;
    eWeaponType m_eType;
    unsigned char field_32;
    unsigned char field_33;
    unsigned char field_34;
    unsigned char field_35;
    CPed* m_pPed;
    unsigned char m_nRange;
    unsigned char field_41;
    unsigned char field_42;
    unsigned char field_43;
    unsigned char field_44;
    unsigned char field_45;
    unsigned char field_46;
    unsigned char field_47;

public:

};
VALIDATE_OFFSET(CWeapon, m_nAmmo, 0x0);
VALIDATE_OFFSET(CWeapon, m_nTimer, 0x2);
VALIDATE_OFFSET(CWeapon, field_3, 0x3);
VALIDATE_OFFSET(CWeapon, field_8, 0x4);
VALIDATE_OFFSET(CWeapon, field_9, 0x8);
VALIDATE_OFFSET(CWeapon, field_10, 0x9);
VALIDATE_OFFSET(CWeapon, field_11, 0xA);
VALIDATE_OFFSET(CWeapon, field_12, 0xB);
VALIDATE_OFFSET(CWeapon, field_13, 0xC);
VALIDATE_OFFSET(CWeapon, field_14, 0xD);
VALIDATE_OFFSET(CWeapon, field_15, 0xE);
VALIDATE_OFFSET(CWeapon, field_16, 0xF);
VALIDATE_OFFSET(CWeapon, field_17, 0x10);
VALIDATE_OFFSET(CWeapon, field_18, 0x11);
VALIDATE_OFFSET(CWeapon, field_19, 0x12);
VALIDATE_OFFSET(CWeapon, field_20, 0x13);
VALIDATE_OFFSET(CWeapon, m_nVehicleId, 0x14);
VALIDATE_OFFSET(CWeapon, m_pNext, 0x18);
VALIDATE_OFFSET(CWeapon, m_eType, 0x1C);
VALIDATE_OFFSET(CWeapon, field_32, 0x20);
VALIDATE_OFFSET(CWeapon, field_33, 0x21);
VALIDATE_OFFSET(CWeapon, field_34, 0x22);
VALIDATE_OFFSET(CWeapon, field_35, 0x23);
VALIDATE_OFFSET(CWeapon, m_pPed, 0x24);
VALIDATE_OFFSET(CWeapon, m_nRange, 0x28);
VALIDATE_OFFSET(CWeapon, field_41, 0x29);
VALIDATE_OFFSET(CWeapon, field_42, 0x2A);
VALIDATE_OFFSET(CWeapon, field_43, 0x2B);
VALIDATE_OFFSET(CWeapon, field_44, 0x2C);
VALIDATE_OFFSET(CWeapon, field_45, 0x2D);
VALIDATE_OFFSET(CWeapon, field_46, 0x2E);
VALIDATE_OFFSET(CWeapon, field_47, 0x2F);
VALIDATE_SIZE(CWeapon, 0x30);
