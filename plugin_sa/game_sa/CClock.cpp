/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
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

unsigned short& CClock::ms_Stored_nGameClockSeconds = *(unsigned short*)VAR_CClock__ms_Stored_nGameClockSeconds;
unsigned char& CClock::ms_Stored_nGameClockMinutes = *(unsigned char*)VAR_CClock__ms_Stored_nGameClockMinutes;
unsigned char& CClock::ms_Stored_nGameClockHours = *(unsigned char*)VAR_CClock__ms_Stored_nGameClockHours;
unsigned char& CClock::ms_Stored_nGameClockMonthDay = *(unsigned char*)VAR_CClock__ms_Stored_nGameClockMonthDay;
unsigned char& CClock::ms_Stored_nGameClockMonth = *(unsigned char*)VAR_CClock__ms_Stored_nGameClockMonth;

// Current clock
unsigned char& CClock::ms_nGameClockDayOfWeek = *(unsigned char*)VAR_CClock__ms_nGameClockDayOfWeek;
unsigned short& CClock::ms_nGameClockSeconds = *(unsigned short*)VAR_CClock__ms_nGameClockSeconds;
unsigned char& CClock::ms_nGameClockMinutes = *(unsigned char*)VAR_CClock__ms_nGameClockMinutes;
unsigned char& CClock::ms_nGameClockHours = *(unsigned char*)VAR_CClock__ms_nGameClockHours;
unsigned char& CClock::ms_nGameClockDays = *(unsigned char*)VAR_CClock__ms_nGameClockMonthDay;
unsigned char& CClock::ms_nGameClockMonth = *(unsigned char*)VAR_CClock__ms_nGameClockMonth;

unsigned int& CClock::ms_nLastClockTick = *(unsigned int*)VAR_CClock__ms_nLastClockTick;

unsigned int &CClock::ms_nMillisecondsPerGameMinute = *(unsigned int *)0xB7015C;

unsigned char *CClock::daysInMonth = (unsigned char *)0x8CCF24;

// Returns true current hour is in range of two specified hours.
bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB)
{
    return plugin::CallAndReturn <bool, FUNC_CClock__GetIsTimeInRange, unsigned char, unsigned char>(hourA, hourB);
}

// Returns number of minutes to specified hour & minute.
unsigned short CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes)
{
    return plugin::CallAndReturn <unsigned short, FUNC_CClock__GetGameClockMinutesUntil, unsigned char, unsigned char>(hours, minutes);
}

// Initializes clock
void CClock::Initialise(unsigned int milisecondsPerGameMinute)
{
    plugin::Call <FUNC_CClock__Initialise, unsigned int>(milisecondsPerGameMinute);
}

// Updates a time
void CClock::Update()
{
    plugin::Call <FUNC_CClock__Update>();
}

// Normalizes game clock
// For example hour of 24 means new day and hour 1.
void CClock::NormaliseGameClock()
{
    plugin::Call <FUNC_CClock__NormaliseGameClock>();
}

// Backups a clock time
void CClock::StoreClock()
{
    plugin::Call <FUNC_CClock__StoreClock>();
}


// Restores a clock time
void CClock::RestoreClock()
{
    plugin::Call <FUNC_CClock__RestoreClock>();
}

// Sets new day
// Directions (0 = one day backwards, 1 = one day forwards)
void CClock::SetNewDay(bool timeDirection)
{
    plugin::Call <FUNC_CClock__SetNewDay, bool>(timeDirection);
}

// Sets game clock
void CClock::SetGameClock(unsigned char hours, unsigned char minutes, unsigned char day)
{
    plugin::Call <FUNC_CClock__SetGameClock, unsigned char, unsigned char, unsigned char>(hours, minutes, day);
}
