/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)

class PLUGIN_API COnscreenTimerEntry
{
public:
	uint32_t m_dwVarId;
	char   m_acDescriptionTextKey[10];
	char   m_acDisplayedText[42]; // possibly 2b padding?
	Bool   m_bEnabled;
	uint8_t  m_nTimerDirection;
	uint32_t m_dwClockBeepCountdownSecs;
};

VALIDATE_SIZE(COnscreenTimerEntry, 0x40);

class PLUGIN_API COnscreenCounterEntry
{
public:
	uint32_t m_dwVarId;
	uint32_t m_dwMaxVarValue;
	char   m_acDescriptionTextKey[10];
	uint16_t m_nType; // 0 - counter (%), 1 - line, 2 - conter counter (%/%)
	char   m_acDisplayedText[42]; // possibly 2b padding?
	Bool   m_bEnabled;
	Bool   m_bFlashWhenFirstDisplayed;
	uint8_t  m_nColourId; // color index from HudColours
};

VALIDATE_SIZE(COnscreenCounterEntry, 0x44);

class PLUGIN_API COnscreenTimer
{
public:
	COnscreenTimerEntry m_Clock;
	COnscreenCounterEntry m_aCounters[4];
	Bool m_bDisplay;
	Bool m_bPaused;
};

VALIDATE_SIZE(COnscreenTimer, 0x154);

#pragma pack(pop)