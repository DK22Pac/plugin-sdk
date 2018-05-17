/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CClock {
public:
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nMillisecondsPerGameMinute;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nLastClockTick;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &ms_nGameClockSeconds;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &ms_Stored_nGameClockSeconds;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &ms_Stored_nGameClockHours;
    SUPPORTED_10EN_11EN_STEAM static bool &bClockHasBeenStored;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &ms_Stored_nGameClockMinutes;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &ms_nGameClockHours;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &ms_nGameClockMinutes;

    //! Returns number of minutes to specified hour & minute.
    //! @param hours hour
    //! @param minutes minute
    //! @returns number of minutes
    SUPPORTED_10EN_11EN_STEAM static int GetGameClockMinutesUntil(unsigned char hours, unsigned char minutes);
    //! Returns true current hour is in range of two specified hours
    //! @param hourA hour A
    //! @param hourB hour B
    //! @returns true if current hour is in range, false otherwise
    SUPPORTED_10EN_11EN_STEAM static bool GetIsTimeInRange(unsigned char hourA, unsigned char hourB);
    //! Initializes game clock. This function is called on first game loading and on every game restart.
    //! @param milisecondsPerGameMinute miliseconds per game minute - initial value
    SUPPORTED_10EN_11EN_STEAM static void Initialise(unsigned int milisecondsPerGameMinute);
    //! Restores a clock time
    SUPPORTED_10EN_11EN_STEAM static void RestoreClock();
    //! Sets game clock
    //! @param hours clock hours (0-23)
    //! @param minutes clock minutes (0-59)
    SUPPORTED_10EN_11EN_STEAM static void SetGameClock(unsigned char hours, unsigned char minutes);
    //! Backups a clock time
    SUPPORTED_10EN_11EN_STEAM static void StoreClock();
    //! Updates a time. Called each frame from CGame::Process
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CClock.h"
