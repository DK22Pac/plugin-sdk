/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CEventGroup {
public:
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
public:
    virtual ~CEventGroup() {}
};
VALIDATE_OFFSET(CEventGroup, field_4, 0x4);
VALIDATE_OFFSET(CEventGroup, field_8, 0x8);
VALIDATE_OFFSET(CEventGroup, field_C, 0xC);
VALIDATE_OFFSET(CEventGroup, field_10, 0x10);
VALIDATE_OFFSET(CEventGroup, field_14, 0x14);
VALIDATE_OFFSET(CEventGroup, field_18, 0x18);
VALIDATE_OFFSET(CEventGroup, field_1C, 0x1C);
VALIDATE_OFFSET(CEventGroup, field_20, 0x20);
VALIDATE_OFFSET(CEventGroup, field_24, 0x24);
VALIDATE_OFFSET(CEventGroup, field_28, 0x28);
VALIDATE_OFFSET(CEventGroup, field_2C, 0x2C);
VALIDATE_OFFSET(CEventGroup, field_30, 0x30);
VALIDATE_OFFSET(CEventGroup, field_34, 0x34);
VALIDATE_OFFSET(CEventGroup, field_38, 0x38);
VALIDATE_OFFSET(CEventGroup, field_3C, 0x3C);
VALIDATE_OFFSET(CEventGroup, field_40, 0x40);
VALIDATE_OFFSET(CEventGroup, field_44, 0x44);
VALIDATE_SIZE(CEventGroup, 0x48);
