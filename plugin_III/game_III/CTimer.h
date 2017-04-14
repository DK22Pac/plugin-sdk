/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"

class CTimer {
public:
    static void EndUserPause();
    static void StartUserPause();
    static void Stop();
    static bool GetIsSlowMotionActive();
    static unsigned int GetCurrentTimeInCycles();
    static unsigned int GetCyclesPerMillisecond();
    static void Resume();
    static void Suspend();
    static void Update();
    static void Shutdown();
    static void Initialise();

    static bool &m_CodePause;
    static unsigned int &m_FrameCounter;
    static bool &m_UserPause;
    static unsigned int &m_snPreviousTimeInMilliseconds;
    static unsigned int &m_snTimeInMilliseconds;
    static unsigned int &m_snTimeInMillisecondsNonClipped;
    static unsigned int &m_snTimeInMillisecondsPauseMode;
    static float &ms_fTimeScale;
    static float &ms_fTimeStep;
    static float &ms_fTimeStepNonClipped;
};

extern int &oldPcTimer;
extern int &suspendPcTimer;
