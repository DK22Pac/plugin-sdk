#pragma once
#include "plbase/PluginBase.h"
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
	static bool GetIsTimeInRange(BYTE hourA, BYTE hourB);

	// Returns number of minutes to specified hour & minute.
	static WORD GetGameClockMinutesUntil(BYTE hours, BYTE minutes);

	// Initializes clock
	static void Initialise(DWORD milisecondsPerGameMinute);

	// Updates a time
	static void Update();

	// Normalizes game clock
	// For example hour of 24 means new day and hour 1.
	static void NormaliseGameClock();

	// Backups a clock time
	static void StoreClock();


	// Restores a clock time
	static void RestoreClock();

	// Sets new day
	// Directions (0 = one day backwards, 1 = one day forwards)
	static void SetNewDay(bool timeDirection);

	// Sets game clock
	static void SetGameClock(BYTE hours, BYTE minutes, BYTE day);
};