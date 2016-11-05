/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"

// Variables
bool& CClock::bClockHasBeenStored = *(bool*)0xA10B3C;
DWORD& CClock::ms_nMillisecondsPerGameMinute = *(DWORD*)0x97F2B4;
// Stored clock
WORD& CClock::ms_Stored_nGameClockSeconds = *(WORD*)0xA10A5E;
BYTE& CClock::ms_Stored_nGameClockMinutes = *(BYTE*)0xA10B5D;
BYTE& CClock::ms_Stored_nGameClockHours = *(BYTE*)0xA10B33;
// Current clock
WORD& CClock::ms_nGameClockSeconds = *(WORD*)0xA10A3C;
BYTE& CClock::ms_nGameClockMinutes = *(BYTE*)0xA10B92;
BYTE& CClock::ms_nGameClockHours = *(BYTE*)0xA10B6B;
DWORD& CClock::ms_nLastClockTick = *(DWORD*)0xA0FDEC;

// Converted from cdecl WORD CClock::GetGameClockMinutesUntil(BYTE hours, BYTE minutes) 0x487130
WORD CClock::GetGameClockMinutesUntil(BYTE hours, BYTE minutes) {
    WORD result;
    plugin::CallAndReturn<WORD, 0x487130, WORD*, BYTE, BYTE>(&result, hours, minutes);
    return result;
}

// Converted from cdecl bool CClock::GetIsTimeInRange(BYTE hourA, BYTE hourB) 0x4870F0
bool CClock::GetIsTimeInRange(BYTE hourA, BYTE hourB) {
    return plugin::CallAndReturn<bool, 0x4870F0, BYTE, BYTE>(hourA, hourB);
}

// Converted from cdecl void CClock::Initialise(DWORD milisecondsPerGameMinute) 0x4871B0
void CClock::Initialise(DWORD milisecondsPerGameMinute) {
    plugin::Call<0x4871B0, DWORD>(milisecondsPerGameMinute);
}

// Converted from cdecl void CClock::RestoreClock(void) 0x486FB0 
void CClock::RestoreClock() {
    plugin::Call<0x486FB0>();
}

// Converted from cdecl void CClock::SetGameClock(BYTE hours, BYTE minutes) 0x487160
void CClock::SetGameClock(BYTE hours, BYTE minutes) {
    plugin::Call<0x487160, BYTE, BYTE>(hours, minutes);
}

// Converted from cdecl void CClock::StoreClock(void) 0x486FE0 
void CClock::StoreClock() {
    plugin::Call<0x486FE0>();
}