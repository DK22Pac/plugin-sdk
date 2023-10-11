/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSimpleIkManager.h"

class CIkManager : public CSimpleIkManager {
public:
    int field_40;
    char field_44[12];
    rage::Vector4 field_50;
    rage::Vector4 field_60;
    rage::Vector4 field_70;
    rage::Vector3 field_80;
    int field_8C;
    rage::Vector4 field_90;
    rage::Vector4 field_A0;
    rage::Vector3 field_B0;
    char field_BC;
    char field_BD[3];
    int field_C0;
    int field_C4;
    int field_C8;
    int field_CC;
    int field_D0;
    int field_D4;
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    int field_F4;
    int field_F8;
    int field_FC;
    int field_100;
    int field_104;
    int field_108;
    int field_10C;
    int field_110;
    int field_114;
    int field_118;
    int field_11C;
    int field_120;
    int field_124;
    int field_128;
    int field_12C;
    int field_130;
    int field_134;
    int field_138;
    int field_13C;
    char field_140;
    char field_141[15];
    rage::Vector4 field_150;
    rage::Vector4 field_160;
};

VALIDATE_SIZE(CIkManager, 0x170);
