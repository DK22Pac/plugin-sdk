/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskTimer.h"
#include "CAttractorScanner.h"

class PLUGIN_API CEventScanner {
public:
    int field_0;
    CTaskTimer field_4;
    CTaskTimer field_10;
    CAttractorScanner m_attractorScanner;
    CTaskTimer field_AC;
    char field_B8;
    char field_B9;
    char field_BA;
    char field_BB;
    CTaskTimer field_BC;
    CTaskTimer field_C8;
};
VALIDATE_OFFSET(CEventScanner, field_0, 0x0);
VALIDATE_OFFSET(CEventScanner, field_4, 0x4);
VALIDATE_OFFSET(CEventScanner, field_10, 0x10);
VALIDATE_OFFSET(CEventScanner, m_attractorScanner, 0x1C);
VALIDATE_OFFSET(CEventScanner, field_AC, 0xAC);
VALIDATE_OFFSET(CEventScanner, field_B8, 0xB8);
VALIDATE_OFFSET(CEventScanner, field_B9, 0xB9);
VALIDATE_OFFSET(CEventScanner, field_BA, 0xBA);
VALIDATE_OFFSET(CEventScanner, field_BB, 0xBB);
VALIDATE_OFFSET(CEventScanner, field_BC, 0xBC);
VALIDATE_OFFSET(CEventScanner, field_C8, 0xC8);
VALIDATE_SIZE(CEventScanner, 0xD4);