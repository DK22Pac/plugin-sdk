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
VALIDATE_OFFSET(CGlobal, mapName, 0x0);
VALIDATE_OFFSET(CGlobal, styleName, 0xFF);
VALIDATE_OFFSET(CGlobal, scriptName, 0x1FE);
VALIDATE_OFFSET(CGlobal, saveName, 0x2FD);
VALIDATE_OFFSET(CGlobal, field_400, 0x3FC);
VALIDATE_OFFSET(CGlobal, field_401, 0x3FD);
VALIDATE_OFFSET(CGlobal, field_402, 0x3FE);
VALIDATE_OFFSET(CGlobal, saveSlot, 0x3FF);
VALIDATE_OFFSET(CGlobal, field_404, 0x400);
VALIDATE_OFFSET(CGlobal, field_405, 0x401);
VALIDATE_OFFSET(CGlobal, field_406, 0x402);
VALIDATE_OFFSET(CGlobal, field_407, 0x403);
VALIDATE_OFFSET(CGlobal, field_408, 0x404);
VALIDATE_OFFSET(CGlobal, field_430, 0x42C);
VALIDATE_OFFSET(CGlobal, field_434, 0x430);
VALIDATE_OFFSET(CGlobal, field_438, 0x434);
VALIDATE_OFFSET(CGlobal, field_43A, 0x436);
VALIDATE_OFFSET(CGlobal, field_43B, 0x437);
VALIDATE_OFFSET(CGlobal, field_43C, 0x438);
VALIDATE_OFFSET(CGlobal, field_440, 0x43C);
VALIDATE_OFFSET(CGlobal, field_441, 0x43D);
VALIDATE_OFFSET(CGlobal, field_442, 0x43E);
VALIDATE_OFFSET(CGlobal, field_443, 0x43F);
VALIDATE_OFFSET(CGlobal, field_444, 0x440);
VALIDATE_OFFSET(CGlobal, field_448, 0x444);
VALIDATE_OFFSET(CGlobal, field_490, 0x48C);
VALIDATE_OFFSET(CGlobal, field_49C, 0x498);
VALIDATE_OFFSET(CGlobal, field_4B4, 0x4B0);
VALIDATE_SIZE(CGlobal, 0x570);

extern CGlobal& gGlobal;
