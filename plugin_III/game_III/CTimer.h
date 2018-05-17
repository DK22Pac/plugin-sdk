/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CTimer {
public:
    SUPPORTED_10EN_11EN_STEAM static int &m_snTimeInMillisecondsPauseMode;
    SUPPORTED_10EN_11EN_STEAM static int &m_snTimeInMilliseconds;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fTimeStepNonClipped;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fTimeStep;
    SUPPORTED_10EN_11EN_STEAM static int &m_snPreviousTimeInMilliseconds;
    //! game speed
    SUPPORTED_10EN_11EN_STEAM static float &ms_fTimeScale;
    SUPPORTED_10EN_11EN_STEAM static int &m_snTimeInMillisecondsNonClipped;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_FrameCounter;
    SUPPORTED_10EN_11EN_STEAM static bool &m_UserPause;
    SUPPORTED_10EN_11EN_STEAM static bool &m_CodePause;

    SUPPORTED_10EN_11EN_STEAM static void EndUserPause();
    SUPPORTED_10EN_11EN_STEAM static unsigned int GetCurrentTimeInCycles();
    SUPPORTED_10EN_11EN_STEAM static int GetCyclesPerMillisecond();
    SUPPORTED_10EN_11EN_STEAM static bool GetIsSlowMotionActive();
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void Resume();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void StartUserPause();
    SUPPORTED_10EN_11EN_STEAM static void Stop();
    SUPPORTED_10EN_11EN_STEAM static void Suspend();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern int &suspendPcTimer;
SUPPORTED_10EN_11EN_STEAM extern int &suspendDepth;
SUPPORTED_10EN_11EN_STEAM extern int &oldPcTimer;

#include "meta/meta.CTimer.h"
