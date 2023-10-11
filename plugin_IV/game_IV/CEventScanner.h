/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEntityScanner.h"

struct CEventScanner_obj1 {
    CObjectScanner field_0;
    int field_C;
    int field_10;
    char field_14;
    char field_15;
    __int16 __pad;
};

struct CEventScanner_obj2 {
    CObjectScanner field_0;
    char field_C;
    char __pad_D[3];
    int field_10;
    int field_14;
    char field_18;
    char field_19;
    __int16 __pad_1A;
    int field_1C;
    int field_20;
    int field_24[9];
    int field_48[9];
    int field_6C[9];
};

struct CEventScanner_obj3
{
    CEventScanner_obj1 field_0;
    char field_18;
    char field_19;
    char field_1A;
    char __pad_1A;
};

class CEventScanner {
public:
    int field_4;
    int field_8;
    CEventScanner_obj1 field_C;
    CEventScanner_obj1 field_24;
    CEventScanner_obj2 field_3C;
    CEventScanner_obj3 field_CC;
    CEventScanner_obj1 field_E8;
    CEventScanner_obj1 field_100;
    CObjectScanner field_118;
    int field_124;
    int field_128;

public:
    virtual ~CEventScanner() {}
};

VALIDATE_SIZE(CEventScanner, 0x12C);
