/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskTimer.h"
#include "C2dEffect.h"

class PLUGIN_API CAttractorScanner {
public:
    char field_0;
    char _pad[3];
    CTaskTimer field_4;
    C2dEffect *m_pEffectInUse;
    int field_14;
    int field_18[10];
    int field_40[10];
    int field_68[10];
};
VALIDATE_OFFSET(CAttractorScanner, field_0, 0x0);
VALIDATE_OFFSET(CAttractorScanner, _pad, 0x1);
VALIDATE_OFFSET(CAttractorScanner, field_4, 0x4);
VALIDATE_OFFSET(CAttractorScanner, m_pEffectInUse, 0x10);
VALIDATE_OFFSET(CAttractorScanner, field_14, 0x14);
VALIDATE_OFFSET(CAttractorScanner, field_18, 0x18);
VALIDATE_OFFSET(CAttractorScanner, field_40, 0x40);
VALIDATE_OFFSET(CAttractorScanner, field_68, 0x68);
VALIDATE_SIZE(CAttractorScanner, 0x90);