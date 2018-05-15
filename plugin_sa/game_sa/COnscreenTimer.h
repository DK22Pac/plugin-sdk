/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "COnscreenTimerEntry.h"
#include "COnscreenCounterEntry.h"

class PLUGIN_API COnscreenTimer {
public:
	COnscreenTimerEntry m_Clock;
	COnscreenCounterEntry m_aCounters[4];
	bool m_bDisplay;
	bool m_bPaused;

    SUPPORTED_10US void AddClock(unsigned int varId, char *gxt, bool bTimerDirection);
    SUPPORTED_10US void AddCounter(int varId, short type, char *gxt, unsigned short counterIndex);
    //! unused
    SUPPORTED_10US void AddCounterCounter(unsigned int varId, unsigned int maxValue, char *gxt, unsigned short lineId);
    SUPPORTED_10US int ClearClock(unsigned int varId);
    SUPPORTED_10US void ClearCounter(unsigned int varId);
    SUPPORTED_10US void Init();
    SUPPORTED_10US void Process();
    SUPPORTED_10US void ProcessForDisplay();
    SUPPORTED_10US void SetClockBeepCountdownSecs(unsigned int varID, unsigned int time);
    //! unused
    SUPPORTED_10US void SetCounterColourID(unsigned int varID, unsigned char ColourID);
    SUPPORTED_10US void SetCounterFlashWhenFirstDisplayed(unsigned int varId, unsigned char bFlashWhenFirstDisplayed);
};
VALIDATE_SIZE(COnscreenTimer, 0x154);

#include "meta/meta.COnscreenTimer.h"

