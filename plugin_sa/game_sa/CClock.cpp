#include "CClock.h"

#define VAR_CClock__bClockHasBeenStored 0xB70144
#define VAR_CClock__ms_Stored_nGameClockSeconds 0xB70148
#define VAR_CClock__ms_Stored_nGameClockMinutes 0xB7014A
#define VAR_CClock__ms_Stored_nGameClockHours 0xB7014B
#define VAR_CClock__ms_Stored_nGameClockMonthDay 0xB7014C
#define VAR_CClock__ms_Stored_nGameClockMonth 0xB7014D

#define VAR_CClock__ms_nGameClockDayOfWeek 0xB7014E
#define VAR_CClock__ms_nGameClockSeconds 0xB70150
#define VAR_CClock__ms_nGameClockMinutes 0x0B70152
#define VAR_CClock__ms_nGameClockHours 0xB70153
#define VAR_CClock__ms_nGameClockMonthDay 0xB70154
#define VAR_CClock__ms_nGameClockMonth 0xB70155
#define VAR_CClock__ms_nLastClockTick 0xB70158

#define FUNC_CClock__GetIsTimeInRange 0x52CEE0
#define FUNC_CClock__GetGameClockMinutesUntil 0x52CEB0
#define FUNC_CClock__Initialise 0x52CD90
#define FUNC_CClock__Update 0x52CF10
#define FUNC_CClock__NormaliseGameClock 0x52CDE0
#define FUNC_CClock__StoreClock 0x52D020
#define FUNC_CClock__RestoreClock 0x52D070
#define FUNC_CClock__SetNewDay 0x52D0B0
#define FUNC_CClock__SetGameClock 0x52D150

// Stored clock
bool& CClock::bClockHasBeenStored = *(bool*)VAR_CClock__bClockHasBeenStored;

WORD& CClock::ms_Stored_nGameClockSeconds = *(WORD*)VAR_CClock__ms_Stored_nGameClockSeconds;

BYTE& CClock::ms_Stored_nGameClockMinutes = *(BYTE*)VAR_CClock__ms_Stored_nGameClockMinutes;

BYTE& CClock::ms_Stored_nGameClockHours = *(BYTE*)VAR_CClock__ms_Stored_nGameClockHours;

BYTE& CClock::ms_Stored_nGameClockMonthDay = *(BYTE*)VAR_CClock__ms_Stored_nGameClockMonthDay;

BYTE& CClock::ms_Stored_nGameClockMonth = *(BYTE*)VAR_CClock__ms_Stored_nGameClockMonth;

// Current clock
BYTE& CClock::ms_nGameClockDayOfWeek = *(BYTE*)VAR_CClock__ms_nGameClockDayOfWeek;

WORD& CClock::ms_nGameClockSeconds = *(WORD*)VAR_CClock__ms_nGameClockSeconds;

BYTE& CClock::ms_nGameClockMinutes = *(BYTE*)VAR_CClock__ms_nGameClockMinutes;

BYTE& CClock::ms_nGameClockHours = *(BYTE*)VAR_CClock__ms_nGameClockHours;

BYTE& CClock::ms_nGameClockMonthDay = *(BYTE*)VAR_CClock__ms_nGameClockMonthDay;

BYTE& CClock::ms_nGameClockMonth = *(BYTE*)VAR_CClock__ms_nGameClockMonth;

DWORD& CClock::ms_nLastClockTick = *(DWORD*)VAR_CClock__ms_nLastClockTick;

// Returns true current hour is in range of two specified hours.
bool CClock::GetIsTimeInRange(BYTE hourA, BYTE hourB)
{
	return ((bool (_cdecl*)(BYTE hourA, BYTE hourB))FUNC_CClock__GetIsTimeInRange)(hourA, hourB);
}

// Returns number of minutes to specified hour & minute.
WORD CClock::GetGameClockMinutesUntil(BYTE hours, BYTE minutes)
{
	return ((WORD (_cdecl*)(BYTE hours, BYTE minutes))FUNC_CClock__GetGameClockMinutesUntil)(hours, minutes);
}

// Initializes clock
void CClock::Initialise(DWORD milisecondsPerGameMinute)
{
	((void (_cdecl*)(DWORD milisecondsPerGameMinute))FUNC_CClock__Initialise)(milisecondsPerGameMinute);
}

// Updates a time
void CClock::Update()
{
	((void (_cdecl*)())FUNC_CClock__Update)();
}

// Normalizes game clock
// For example hour of 24 means new day and hour 1.
void CClock::NormaliseGameClock()
{
	((void (_cdecl*)())FUNC_CClock__NormaliseGameClock)();
}

// Backups a clock time
void CClock::StoreClock()
{
	((void (_cdecl*)())FUNC_CClock__StoreClock)();
}


// Restores a clock time
void CClock::RestoreClock()
{
	((void (_cdecl*)())FUNC_CClock__RestoreClock)();
}

// Sets new day
// Directions (0 = one day backwards, 1 = one day forwards)
void CClock::SetNewDay(bool timeDirection)
{
	((void (_cdecl*)(bool timeDirection))FUNC_CClock__SetNewDay)(timeDirection);
}

// Sets game clock
void CClock::SetGameClock(BYTE hours, BYTE minutes, BYTE day)
{
	((void (_cdecl*)(BYTE hours, BYTE minutes, BYTE day))FUNC_CClock__SetGameClock)(hours, minutes, day);
}