/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CEventHandler {
public:
    class CPed *m_pPed;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    char field_1C;
    char field_1D;
    short field_1E;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
};
VALIDATE_OFFSET(CEventHandler, m_pPed, 0x0);
VALIDATE_OFFSET(CEventHandler, field_4, 0x4);
VALIDATE_OFFSET(CEventHandler, field_8, 0x8);
VALIDATE_OFFSET(CEventHandler, field_C, 0xC);
VALIDATE_OFFSET(CEventHandler, field_10, 0x10);
VALIDATE_OFFSET(CEventHandler, field_14, 0x14);
VALIDATE_OFFSET(CEventHandler, field_18, 0x18);
VALIDATE_OFFSET(CEventHandler, field_1C, 0x1C);
VALIDATE_OFFSET(CEventHandler, field_1D, 0x1D);
VALIDATE_OFFSET(CEventHandler, field_1E, 0x1E);
VALIDATE_OFFSET(CEventHandler, field_20, 0x20);
VALIDATE_OFFSET(CEventHandler, field_24, 0x24);
VALIDATE_OFFSET(CEventHandler, field_28, 0x28);
VALIDATE_OFFSET(CEventHandler, field_2C, 0x2C);
VALIDATE_OFFSET(CEventHandler, field_30, 0x30);
VALIDATE_SIZE(CEventHandler, 0x34);