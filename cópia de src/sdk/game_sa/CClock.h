#pragma once
#include "plugin/plugin.h"
#include <windows.h>

class PLUGIN_API CClock
{
public:
	// Variables
	static bool& bClockHasBeenStored;

	// Stored clock
	static WORD& ms_Stored_nGameClockSeconds;

	static BYTE& ms_Stored_nGameClockMinutes;

	static BYTE& ms_Stored_nGameClockHours;

	static BYTE& ms_Stored_nGameClockMonthDay;

	static BYTE& ms_Stored_nGameClockMonth;

	// Current clock
	static BYTE& ms_nGameClockDayOfWeek;

	static WORD& ms_nGameClockSeconds;

	static BYTE& ms_nGameClockMinutes;

	static BYTE& ms_nGameClockHours;

	static BYTE& ms_nGameClockMonthDay;
	
	static BYTE& ms_nGameClockMonth;

	static DWORD& ms_nLastClockTick;

	// Functions

	// Returns true current hour is in range of two specified hours.
	static bool CClock::GetIsTimeInRange(BYTE hourA, BYTE hourB);

	// Returns number of minutes to specified hour & minute.
	static WORD CClock::GetGameClockMinutesUntil(BYTE hours, BYTE minutes);

	// Initializes clock
	static void CClock::Initialise(DWORD milisecondsPerGameMinute);

	// Updates a time
	static void CClock::Update();

	// Normalizes game clock
	// For example hour of 24 means new day and hour 1.
	static void CClock::NormaliseGameClock();

	// Backups a clock time
	static void CClock::StoreClock();


	// Restores a clock time
	static void CClock::RestoreClock();

	// Sets new day
	// Directions (0 = one day backwards, 1 = one day forwards)
	static void CClock::SetNewDay(bool timeDirection);

	// Sets game clock
	static void CClock::SetGameClock(BYTE hours, BYTE minutes, BYTE day);
};