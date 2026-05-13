/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct CMovementEventHandler {
public:
    int field_34;
    int field_38;
    
public:
    virtual ~CMovementEventHandler() {}
};
VALIDATE_OFFSET(CMovementEventHandler, field_34, 0x4);
VALIDATE_OFFSET(CMovementEventHandler, field_38, 0x8);
VALIDATE_SIZE(CMovementEventHandler, 0xC);

class CEventHandler {
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
    CMovementEventHandler field_34;

public:
    virtual ~CEventHandler() {}
};
VALIDATE_OFFSET(CEventHandler, field_4, 0x4);
VALIDATE_OFFSET(CEventHandler, field_8, 0x8);
VALIDATE_OFFSET(CEventHandler, field_C, 0xC);
VALIDATE_OFFSET(CEventHandler, field_10, 0x10);
VALIDATE_OFFSET(CEventHandler, field_14, 0x14);
VALIDATE_OFFSET(CEventHandler, field_18, 0x18);
VALIDATE_OFFSET(CEventHandler, field_1C, 0x1C);
VALIDATE_OFFSET(CEventHandler, field_20, 0x20);
VALIDATE_OFFSET(CEventHandler, field_24, 0x24);
VALIDATE_OFFSET(CEventHandler, field_28, 0x28);
VALIDATE_OFFSET(CEventHandler, field_2C, 0x2C);
VALIDATE_OFFSET(CEventHandler, field_30, 0x30);
VALIDATE_OFFSET(CEventHandler, field_34, 0x34);
VALIDATE_SIZE(CEventHandler, 0x40);

