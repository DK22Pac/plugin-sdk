/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CClock {
public:
    static int32_t& ms_nGameClockDays;
    static int32_t& ms_nGameClockMonth;
    static int32_t& ms_nGameClockHours;
    static int32_t& ms_nGameClockMinutes;
    static int32_t& ms_nGameClockSeconds;

    static int32_t& ms_nGameClockDayOfWeek;
};
