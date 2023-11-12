/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClock.h"
#include "Patch.h"

int32_t& CClock::ms_nGameClockDays = *gpatternt(int32_t, "A3 ? ? ? ? 8B 46 30 A3 ? ? ? ? 8B 46 34 A3 ? ? ? ? 8B 46 38 A3 ? ? ? ? 0F B6 46 3C", 1);
int32_t& CClock::ms_nGameClockMonth = *gpatternt(int32_t, "A3 ? ? ? ? 8B 46 2C A3", 1);
int32_t& CClock::ms_nGameClockHours = *gpatternt(int32_t, "A3 ? ? ? ? 8B 46 34 A3 ? ? ? ? 8B 46 38 A3 ? ? ? ? 0F B6 46 3C", 1);
int32_t& CClock::ms_nGameClockMinutes = *gpatternt(int32_t, "A3 ? ? ? ? 8B 46 38 A3 ? ? ? ? 0F B6 46 3C", 1);
int32_t& CClock::ms_nGameClockSeconds = *gpatternt(int32_t, "A3 ? ? ? ? A1 ? ? ? ? A3 ? ? ? ? C3 CC 8B 0D", 1);
int32_t& CClock::ms_nGameClockDayOfWeek = *gpatternt(int32_t, "A3 ? ? ? ? 0F B6 46 3C", 1);
