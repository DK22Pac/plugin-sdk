/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"

class CClock {
public:
    // Variables
    static bool& bClockHasBeenStored;
    static std::uint32_t& ms_nMillisecondsPerGameMinute;
    // Stored clock
    static std::uint16_t& ms_Stored_nGameClockSeconds;
    static unsigned char& ms_Stored_nGameClockMinutes;
    static unsigned char& ms_Stored_nGameClockHours;
    // Current clock
    static std::uint16_t& ms_nGameClockSeconds;
    static unsigned char& ms_nGameClockMinutes;
    static unsigned char& ms_nGameClockHours;
    static std::uint32_t& ms_nLastClockTick;

    //funcs

    // Returns number of minutes to specified hour & minute.
    static std::uint16_t GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes);
    // Returns true current hour is in range of two specified hours.
    static bool GetIsTimeInRange(unsigned char hourA, unsigned char hourB);
    // Initializes clock
    static void Initialise(std::uint32_t milisecondsPerGameMinute);
    // Restores a clock time
    static void RestoreClock();
    // Sets game clock
    static void SetGameClock(unsigned char hours, unsigned char minutes);
    // Backups a clock time
    static void StoreClock();
    // Updates a time
    static void Update();
};