/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "COnscreenTimerEntry.h"

class PLUGIN_API COnscreenTimer {
public:
    COnscreenTimerEntry m_sEntries[1];
    bool m_bDisplay;
    bool m_bDisabled;

    SUPPORTED_10EN_11EN_STEAM void AddClock(unsigned int offset, char *gxt);
    SUPPORTED_10EN_11EN_STEAM void AddCounter(unsigned int offset, unsigned short type, char *gxt);
    SUPPORTED_10EN_11EN_STEAM void ClearClock(unsigned int offset);
    SUPPORTED_10EN_11EN_STEAM void ClearCounter(unsigned int offset);
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void Process();
    SUPPORTED_10EN_11EN_STEAM void ProcessForDisplay();
};

VALIDATE_SIZE(COnscreenTimer, 0x78);

#include "meta/meta.COnscreenTimer.h"
