/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"

// Variables
bool& CClock::bClockHasBeenStored = *(bool*)0xA10B3C;
std::uint32_t& CClock::ms_nMillisecondsPerGameMinute = *(std::uint32_t*)0x97F2B4;
// Stored clock
std::uint16_t& CClock::ms_Stored_nGameClockSeconds = *(std::uint16_t*)0xA10A5E;
unsigned char& CClock::ms_Stored_nGameClockMinutes = *(unsigned char*)0xA10B5D;
unsigned char& CClock::ms_Stored_nGameClockHours = *(unsigned char*)0xA10B33;
// Current clock
std::uint16_t& CClock::ms_nGameClockSeconds = *(std::uint16_t*)0xA10A3C;
unsigned char& CClock::ms_nGameClockMinutes = *(unsigned char*)0xA10B92;
unsigned char& CClock::ms_nGameClockHours = *(unsigned char*)0xA10B6B;
std::uint32_t& CClock::ms_nLastClockTick = *(std::uint32_t*)0xA0FDEC;

// Converted from cdecl WORD CClock::GetGameClockMinutesUntil(BYTE hours, BYTE minutes) 0x487130
std::uint16_t CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes) {
    std::uint16_t result;
    plugin::CallAndReturn<std::uint16_t, 0x487130, std::uint16_t*, unsigned char, unsigned char>(&result, hours, minutes);
    return result;
}

// Converted from cdecl bool CClock::GetIsTimeInRange(BYTE hourA, BYTE hourB) 0x4870F0
bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB) {
    return plugin::CallAndReturn<bool, 0x4870F0, unsigned char, unsigned char>(hourA, hourB);
}

// Converted from cdecl void CClock::Initialise(DWORD milisecondsPerGameMinute) 0x4871B0
void CClock::Initialise(std::uint32_t milisecondsPerGameMinute) {
    plugin::Call<0x4871B0, std::uint32_t>(milisecondsPerGameMinute);
}

// Converted from cdecl void CClock::RestoreClock(void) 0x486FB0 
void CClock::RestoreClock() {
    plugin::Call<0x486FB0>();
}

// Converted from cdecl void CClock::SetGameClock(BYTE hours, BYTE minutes) 0x487160
void CClock::SetGameClock(unsigned char hours, unsigned char minutes) {
    plugin::Call<0x487160, unsigned char, unsigned char>(hours, minutes);
}

// Converted from cdecl void CClock::StoreClock(void) 0x486FE0 
void CClock::StoreClock() {
    plugin::Call<0x486FE0>();
}