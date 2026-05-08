/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCar.h"

class CPopulation {
public:
    unsigned char field_0;
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned int field_4;
    unsigned char field_8;
    unsigned char field_9;
    unsigned char field_10;
    unsigned char field_11;
    unsigned int field_12;
    short field_16;
    unsigned char field_18;
    unsigned char field_19;
    unsigned int field_20;
    unsigned char field_24;
    unsigned char field_25;
    unsigned char field_26;
    unsigned char field_27;
    unsigned int field_28;
    unsigned int field_32;
    unsigned int field_36;
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_52;
    unsigned int field_56;
    unsigned int field_60;
    unsigned int field_64;
    unsigned int field_68;
    int field_72;
    int field_76;
    int field_80;
    char field_81;
    char field_82;
    int field_86;
    int field_90;
    unsigned char field_92;
    int field_96;
    int field_100;
    int field_104;
    char field_105;
    char field_106;
    char field_107;
    char field_108;
    int field_110;
    int field_114;
    char field_116;
    bool m_bFreeShopping;

public:
    CCar* SpawnCar(int x, int y, int z, short rot, int model);
};
VALIDATE_OFFSET(CPopulation, field_0, 0x0);
VALIDATE_OFFSET(CPopulation, field_1, 0x1);
VALIDATE_OFFSET(CPopulation, field_2, 0x2);
VALIDATE_OFFSET(CPopulation, field_3, 0x3);
VALIDATE_OFFSET(CPopulation, field_4, 0x4);
VALIDATE_OFFSET(CPopulation, field_8, 0x8);
VALIDATE_OFFSET(CPopulation, field_9, 0x9);
VALIDATE_OFFSET(CPopulation, field_10, 0xA);
VALIDATE_OFFSET(CPopulation, field_11, 0xB);
VALIDATE_OFFSET(CPopulation, field_12, 0xC);
VALIDATE_OFFSET(CPopulation, field_16, 0x10);
VALIDATE_OFFSET(CPopulation, field_18, 0x12);
VALIDATE_OFFSET(CPopulation, field_19, 0x13);
VALIDATE_OFFSET(CPopulation, field_20, 0x14);
VALIDATE_OFFSET(CPopulation, field_24, 0x18);
VALIDATE_OFFSET(CPopulation, field_25, 0x19);
VALIDATE_OFFSET(CPopulation, field_26, 0x1A);
VALIDATE_OFFSET(CPopulation, field_27, 0x1B);
VALIDATE_OFFSET(CPopulation, field_28, 0x1C);
VALIDATE_OFFSET(CPopulation, field_32, 0x20);
VALIDATE_OFFSET(CPopulation, field_36, 0x24);
VALIDATE_OFFSET(CPopulation, field_40, 0x28);
VALIDATE_OFFSET(CPopulation, field_44, 0x2C);
VALIDATE_OFFSET(CPopulation, field_48, 0x30);
VALIDATE_OFFSET(CPopulation, field_52, 0x34);
VALIDATE_OFFSET(CPopulation, field_56, 0x38);
VALIDATE_OFFSET(CPopulation, field_60, 0x3C);
VALIDATE_OFFSET(CPopulation, field_64, 0x40);
VALIDATE_OFFSET(CPopulation, field_68, 0x44);
VALIDATE_OFFSET(CPopulation, field_72, 0x48);
VALIDATE_OFFSET(CPopulation, field_76, 0x4C);
VALIDATE_OFFSET(CPopulation, field_80, 0x50);
VALIDATE_OFFSET(CPopulation, field_81, 0x54);
VALIDATE_OFFSET(CPopulation, field_82, 0x55);
VALIDATE_OFFSET(CPopulation, field_86, 0x58);
VALIDATE_OFFSET(CPopulation, field_90, 0x5C);
VALIDATE_OFFSET(CPopulation, field_92, 0x60);
VALIDATE_OFFSET(CPopulation, field_96, 0x64);
VALIDATE_OFFSET(CPopulation, field_100, 0x68);
VALIDATE_OFFSET(CPopulation, field_104, 0x6C);
VALIDATE_OFFSET(CPopulation, field_105, 0x70);
VALIDATE_OFFSET(CPopulation, field_106, 0x71);
VALIDATE_OFFSET(CPopulation, field_107, 0x72);
VALIDATE_OFFSET(CPopulation, field_108, 0x73);
VALIDATE_OFFSET(CPopulation, field_110, 0x74);
VALIDATE_OFFSET(CPopulation, field_114, 0x78);
VALIDATE_OFFSET(CPopulation, field_116, 0x7C);
VALIDATE_OFFSET(CPopulation, m_bFreeShopping, 0x7D);
VALIDATE_SIZE(CPopulation, 0x80);

extern CPopulation** gPopulation;
extern CPopulation* GetPopulationManager();

VALIDATE_SIZE(CPopulation, 0x80);
