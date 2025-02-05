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

VALIDATE_SIZE(CWeapon, 0x30);
