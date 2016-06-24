#pragma once

#include "plbase/PluginBase_SA.h"
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

VALIDATE_SIZE(CAttractorScanner, 0x90);