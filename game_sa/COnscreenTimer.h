#pragma once

#include "plugin\plugin.h"

#pragma pack(push, 4)

class PLUGIN_API COnscreenTimerEntry
{
public:
	UInt32 m_dwVarId;
	char   m_acDescriptionTextKey[10];
	char   m_acDisplayedText[42]; // possibly 2b padding?
	Bool   m_bEnabled;
	UInt8  m_nTimerDirection;
	UInt32 m_dwClockBeepCountdownSecs;
};

VALIDATE_SIZE(COnscreenTimerEntry, 0x40);

class PLUGIN_API COnscreenCounterEntry
{
public:
	UInt32 m_dwVarId;
	UInt32 m_dwMaxVarValue;
	char   m_acDescriptionTextKey[10];
	UInt16 m_nType; // 0 - counter (%), 1 - line, 2 - conter counter (%/%)
	char   m_acDisplayedText[42]; // possibly 2b padding?
	Bool   m_bEnabled;
	Bool   m_bFlashWhenFirstDisplayed;
	UInt8  m_nColourId; // color index from HudColours
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