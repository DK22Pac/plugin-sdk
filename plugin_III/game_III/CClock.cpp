/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"

// Variables
bool& CClock::bClockHasBeenStored = *(bool*)0x95CD82;
std::uint32_t& CClock::ms_nMillisecondsPerGameMinute = *(std::uint32_t*)0x8F2C64;
// Stored clock
std::uint16_t& CClock::ms_Stored_nGameClockSeconds = *(std::uint16_t*)0x95CC9C;
unsigned char& CClock::ms_Stored_nGameClockMinutes = *(unsigned char*)0x95CD9B;
unsigned char& CClock::ms_Stored_nGameClockHours = *(unsigned char*)0x95CD7B;
// Current clock
std::uint16_t& CClock::ms_nGameClockSeconds = *(std::uint16_t*)0x95CC7C;
unsigned char& CClock::ms_nGameClockMinutes = *(unsigned char*)0x95CDC8;
unsigned char& CClock::ms_nGameClockHours = *(unsigned char*)0x95CDA6;
std::uint32_t& CClock::ms_nLastClockTick = *(std::uint32_t*)0x9430E4;

// Converted from cdecl std::uint16_t CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes) 0x4733F0
std::uint16_t CClock::GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes) {
    std::uint16_t result;
    plugin::CallAndReturn<std::uint16_t, 0x4733F0, std::uint16_t*, unsigned char, unsigned char>(&result, hours, minutes);
    return result;
}

// Converted from cdecl bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB) 0x473420
bool CClock::GetIsTimeInRange(unsigned char hourA, unsigned char hourB) {
    return plugin::CallAndReturn<bool, 0x473420, unsigned char, unsigned char>(hourA, hourB);
}

// Converted from cdecl void CClock::Initialise(std::uint32_t milisecondsPerGameMinute) 0x473370
void CClock::Initialise(std::uint32_t milisecondsPerGameMinute) {
    plugin::Call<0x473370, std::uint32_t>(milisecondsPerGameMinute);
}

// Converted from cdecl void CClock::RestoreClock(void) 0x473570 
void CClock::RestoreClock() {
    plugin::Call<0x473570>();
}

// Converted from cdecl void CClock::SetGameClock(unsigned char hours, unsigned char minutes) 0x4733C0
void CClock::SetGameClock(unsigned char hours, unsigned char minutes) {
    plugin::Call<0x4733C0, unsigned char, unsigned char>(hours, minutes);
}

// Converted from cdecl void CClock::StoreClock(void) 0x473540 
void CClock::StoreClock() {
    plugin::Call<0x473540>();
}

// Converted from cdecl void CClock::Update(void) 0x473460 
void CClock::Update() {
    plugin::Call<0x473460>();
}
