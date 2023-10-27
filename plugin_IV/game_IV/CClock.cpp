/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"
#include "Patch.h"

static int32_t* CClock__ms_nGameClockDaysAddr;
int32_t& CClock::ms_nGameClockDays = *(int32_t*)CClock__ms_nGameClockDaysAddr;

static int32_t* CClock__ms_nGameClockMonthAddr;
int32_t& CClock::ms_nGameClockMonth = *(int32_t*)CClock__ms_nGameClockMonthAddr;

static int32_t* CClock__ms_nGameClockHours;
int32_t& CClock::ms_nGameClockHours = *(int32_t*)CClock__ms_nGameClockHours;

static int32_t* CClock__ms_nGameClockMinutes;
int32_t& CClock::ms_nGameClockMinutes = *(int32_t*)CClock__ms_nGameClockMinutes;

static int32_t* CClock__ms_nGameClockSeconds;
int32_t& CClock::ms_nGameClockSeconds = *(int32_t*)CClock__ms_nGameClockSeconds;

static int32_t* CClock__ms_nGameClockDayOfWeek;
int32_t& CClock::ms_nGameClockDayOfWeek = *(int32_t*)CClock__ms_nGameClockDayOfWeek;

template<>
void plugin::InitPatterns<CClock>() {
    CClock__ms_nGameClockDaysAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 8B 46 30 A3 ? ? ? ? 8B 46 34 A3 ? ? ? ? 8B 46 38 A3 ? ? ? ? 0F B6 46 3C", 1));
    CClock__ms_nGameClockMonthAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 8B 46 2C A3", 1));
    CClock__ms_nGameClockHours = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 8B 46 34 A3 ? ? ? ? 8B 46 38 A3 ? ? ? ? 0F B6 46 3C", 1));
    CClock__ms_nGameClockMinutes = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 8B 46 38 A3 ? ? ? ? 0F B6 46 3C", 1));
    CClock__ms_nGameClockSeconds = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? A1 ? ? ? ? A3 ? ? ? ? C3 CC 8B 0D", 1));
    CClock__ms_nGameClockDayOfWeek = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 0F B6 46 3C", 1));
}
