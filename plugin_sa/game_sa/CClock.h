/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CClock {
public:
    SUPPORTED_10US static unsigned char(&daysInMonth)[12]; // static unsigned char const daysInMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    SUPPORTED_10US static bool &bClockHasBeenStored;
    SUPPORTED_10US static unsigned short &ms_Stored_nGameClockSeconds;
    SUPPORTED_10US static unsigned char &ms_Stored_nGameClockMinutes;
    SUPPORTED_10US static unsigned char &ms_Stored_nGameClockHours;
    SUPPORTED_10US static unsigned char &ms_Stored_nGameClockDays;
    SUPPORTED_10US static unsigned char &ms_Stored_nGameClockMonths;
    SUPPORTED_10US static unsigned char &CurrentDay;
    SUPPORTED_10US static unsigned short &ms_nGameClockSeconds;
    SUPPORTED_10US static unsigned char &ms_nGameClockMinutes;
    SUPPORTED_10US static unsigned char &ms_nGameClockHours;
    SUPPORTED_10US static unsigned char &ms_nGameClockDays;
    SUPPORTED_10US static unsigned char &ms_nGameClockMonth;
    SUPPORTED_10US static unsigned int &ms_nLastClockTick;
    SUPPORTED_10US static unsigned int &ms_nMillisecondsPerGameMinute;

    //! Returns number of minutes to specified hour & minute.
    SUPPORTED_10US static unsigned short GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes);
    //! Returns true current hour is in range of two specified hours.
    SUPPORTED_10US static bool GetIsTimeInRange(unsigned char hourA, unsigned char hourB);
    //! Initializes clock
    SUPPORTED_10US static void Initialise(unsigned int milisecondsPerGameMinute);
    //! Normalizes game clock
    //! For example hour of 24 means new day and hour 1.
    SUPPORTED_10US static void NormaliseGameClock();
    //! Sets new day
    //! Directions (0 = one day backwards, 1 = one day forwards)
    SUPPORTED_10US static void OffsetClockByADay(unsigned int timeDirection);
    //! Restores a clock time
    SUPPORTED_10US static void RestoreClock();
    //! Sets game clock
    SUPPORTED_10US static void SetGameClock(unsigned char hours, unsigned char minutes, unsigned char day);
    //! Backups a clock time
    SUPPORTED_10US static void StoreClock();
    //! Updates a time
    SUPPORTED_10US static void Update();
};

#include "meta/meta.CClock.h"
