/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVirtualBase.h"

class CTimer {
public:
    static float& ms_fTimeStep;
    static float& ms_fTimeScale;
    static uint32_t& m_snPreviousTimeInMillisecondsPauseMode;
    static uint32_t& m_snTimeInMillisecondsPauseMode;
    static uint32_t& m_snPreviousTimeInMilliseconds;
    static uint32_t& m_snTimeInMilliseconds;
    static bool& m_CodePause;
    static bool& m_UserPause;
    static int32_t& m_FrameCounter;

public:
    static float GetTimeScale() { return ms_fTimeScale; }
    static float GetTimeStep() { return ms_fTimeStep; } 

    static uint32_t GetPreviousTimeInMillisecondsPauseMode() { return m_snPreviousTimeInMillisecondsPauseMode; }
    static uint32_t GetPreviousTimeInMilliseconds() { return m_snPreviousTimeInMilliseconds; }

    static uint32_t GetTimeInMillisecondsPauseMode() { return m_snTimeInMillisecondsPauseMode; }
    static uint32_t GetTimeInMilliseconds() { return m_snTimeInMilliseconds; }
    static bool GetCodePause() { return m_CodePause; }
    static bool GetUserPause() { return m_UserPause; }
    static int32_t GetFrameCounter() { return m_FrameCounter; }

public:
    static void SetTimeScale(float scale);
};
