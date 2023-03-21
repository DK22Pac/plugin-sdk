/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CGlobal {
public:
    char mapName[255];
    char styleName[255];
    char scriptName[255];
    char saveName[255];
    char field_400;
    char field_401;
    char field_402;
    unsigned char saveSlot;
    char field_404;
    char field_405;
    char field_406;
    char field_407;
    int field_408[10];
    int field_430;
    int field_434;
    short field_438;
    char field_43A;
    char field_43B;
    int field_43C;
    char field_440;
    char field_441;
    char field_442;
    char field_443;
    int field_444;
    char field_448[72];
    short field_490[6];
    int field_49C[6];
    char field_4B4[192];

public:

};

VALIDATE_SIZE(CGlobal, 0x570);

extern CGlobal& gGlobal;
