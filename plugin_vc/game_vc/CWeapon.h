/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "eWeaponType.h"

class CWeapon {
public:
    unsigned int m_nType; // see eWeaponType
    unsigned int m_nState;
    unsigned int m_nAmmoInClip;
    unsigned int m_nTotalAmmo;
    unsigned int m_nNextShotTime;
    bool m_bAddRotOffset;
private:
    char _pad15[3];
public:

    bool HasWeaponAmmoToBeUsed();
};

VALIDATE_SIZE(CWeapon, 0x18);