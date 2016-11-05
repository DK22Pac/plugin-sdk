/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CPed.h"
#include "eWeaponType.h"

struct sPlayerPed12 {
    int field_0;
    int field_4;
    int field_8;
};

class CPlayerPed : public CPed {
public:
    void *m_pWanted; // CWanted *
    int field_5F8;
    float field_5FC;
    float field_600;
    float field_604;
    int field_608;
    unsigned char m_nChosenWeapon;
    char field_60D;
    char field_60E;
    int field_610;
    int field_614;
    int field_618;
    char field_61C;
    CPhysical *field_620;
    int field_624;
    int field_628;
    int field_62C;
    int field_630;
    int m_nAdrenalineEndTime;
    char field_638;
    char field_639;
    char field_63A;
    bool m_bAdrenaline;
    char gap63C;
    char field_63D;
    char gap63E;
    char field_63F;
    sPlayerPed12 field_640[6];
    int field_688;
    int field_68C;
    int field_690;
    int field_694;
    int field_698;
    int field_69C;
    int field_6A0;
    int field_6A4;
    int field_6A8;
    int field_6AC;
    int field_6B0;
    int field_6B4;
    short field_6B8;
    int field_6BC;
    int field_6C0;
    int field_6C4;
    int field_6C8;
    int field_6CC;
    int field_6D0;
    int field_6D4;
};

VALIDATE_SIZE(CPlayerPed, 0x6D8);