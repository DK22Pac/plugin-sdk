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

extern CPopulation** gPopulation;
extern CPopulation* GetPopulationManager();

VALIDATE_SIZE(CPopulation, 0x80);
