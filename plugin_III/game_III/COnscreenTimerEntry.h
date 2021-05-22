/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API COnscreenTimerEntry {
public:
    unsigned int m_nTimerOffset; //!< CTheScripts::ScriptSpace[offset]
    unsigned int m_nCounterOffset; //!< CTheScripts::ScriptSpace[offset]
    char m_szTimerTextKey[10];
    char m_szCounterTextKey[10];
    unsigned short m_nType;
    char m_szCounterDisplayedText[42];
    char m_szTimerDisplayedText[42];
    bool m_bTimerProcessed;
    bool m_bCounterProcessed;

    SUPPORTED_10EN_11EN_STEAM void Process();
    SUPPORTED_10EN_11EN_STEAM bool ProcessForDisplay();
    SUPPORTED_10EN_11EN_STEAM void ProcessForDisplayClock();
    SUPPORTED_10EN_11EN_STEAM void ProcessForDisplayCounter();
};

VALIDATE_SIZE(COnscreenTimerEntry, 0x74);

#include "meta/meta.COnscreenTimerEntry.h"
