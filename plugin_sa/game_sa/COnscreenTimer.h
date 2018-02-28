/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API COnscreenTimerEntry {
public:
	unsigned int  m_nVarId;
	char          m_szDescriptionTextKey[10];
	char          m_szDisplayedText[42]; // possibly 2b padding?
	bool          m_bEnabled;
	unsigned char m_nTimerDirection;
	unsigned int  m_nClockBeepCountdownSecs;
};

VALIDATE_SIZE(COnscreenTimerEntry, 0x40);

class PLUGIN_API COnscreenCounterEntry {
public:
	unsigned int   m_nVarId;
	unsigned int   m_nMaxVarValue;
	char           m_szDescriptionTextKey[10];
	unsigned short m_nType; // 0 - counter (%), 1 - line, 2 - conter counter (%/%)
	char           m_szDisplayedText[42]; // possibly 2b padding?
	bool           m_bEnabled;
	bool           m_bFlashWhenFirstDisplayed;
	unsigned char  m_nColourId; // color index from HudColours
};

VALIDATE_SIZE(COnscreenCounterEntry, 0x44);

class PLUGIN_API COnscreenTimer {
public:
	COnscreenTimerEntry m_Clock;
	COnscreenCounterEntry m_aCounters[4];
	bool m_bDisplay;
	bool m_bPaused;
};

VALIDATE_SIZE(COnscreenTimer, 0x154);
