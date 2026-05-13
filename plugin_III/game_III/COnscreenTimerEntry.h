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
VALIDATE_OFFSET(COnscreenTimerEntry, m_nTimerOffset, 0x0);
VALIDATE_OFFSET(COnscreenTimerEntry, m_nCounterOffset, 0x4);
VALIDATE_OFFSET(COnscreenTimerEntry, m_szTimerTextKey, 0x8);
VALIDATE_OFFSET(COnscreenTimerEntry, m_szCounterTextKey, 0x12);
VALIDATE_OFFSET(COnscreenTimerEntry, m_nType, 0x1C);
VALIDATE_OFFSET(COnscreenTimerEntry, m_szCounterDisplayedText, 0x1E);
VALIDATE_OFFSET(COnscreenTimerEntry, m_szTimerDisplayedText, 0x48);
VALIDATE_OFFSET(COnscreenTimerEntry, m_bTimerProcessed, 0x72);
VALIDATE_OFFSET(COnscreenTimerEntry, m_bCounterProcessed, 0x73);
VALIDATE_SIZE(COnscreenTimerEntry, 0x74);

#include "meta/meta.COnscreenTimerEntry.h"
