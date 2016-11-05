/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include <windows.h>

class CClock
{
public:
    // Variables
    static bool& bClockHasBeenStored;
    static DWORD& ms_nMillisecondsPerGameMinute;
    // Stored clock
    static WORD& ms_Stored_nGameClockSeconds;
    static BYTE& ms_Stored_nGameClockMinutes;
    static BYTE& ms_Stored_nGameClockHours;
    // Current clock
    static WORD& ms_nGameClockSeconds;
    static BYTE& ms_nGameClockMinutes;
    static BYTE& ms_nGameClockHours;
    static DWORD& ms_nLastClockTick;

    //funcs

    // Returns number of minutes to specified hour & minute.
    static WORD GetGameClockMinutesUntil(BYTE hours, BYTE minutes);
    // Returns true current hour is in range of two specified hours.
    static bool GetIsTimeInRange(BYTE hourA, BYTE hourB);
    // Initializes clock
    static void Initialise(DWORD milisecondsPerGameMinute);
    // Restores a clock time
    static void RestoreClock();
    // Sets game clock
    static void SetGameClock(BYTE hours, BYTE minutes);
    // Backups a clock time
    static void StoreClock();
    // Updates a time
    static void Update();
};