/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimer.h"
#include "Patch.h"

static float* CTimer__ms_fTimeStepAddr = nullptr;
float& CTimer::ms_fTimeStep = *(float*)CTimer__ms_fTimeStepAddr;

static float* CTimer__ms_fTimeScaleAddr = nullptr;
float& CTimer::ms_fTimeScale = *(float*)CTimer__ms_fTimeScaleAddr;

static uint32_t* CTimer__snTimeInMillisecondsPauseModeAddr = nullptr;
uint32_t& CTimer::m_snTimeInMillisecondsPauseMode = *(uint32_t*)CTimer__snTimeInMillisecondsPauseModeAddr;

static uint32_t* CTimer__snTimeInMillisecondsAddr = nullptr;
uint32_t& CTimer::m_snTimeInMilliseconds = *(uint32_t*)CTimer__snTimeInMillisecondsAddr;

static bool* CTimer__m_CodePauseAddr = nullptr;
bool& CTimer::m_CodePause = *(bool*)CTimer__m_CodePauseAddr;

static bool* CTimer__m_UserPauseAddr = nullptr;
bool& CTimer::m_UserPause = *(bool*)CTimer__m_UserPauseAddr;

static int32_t* CTimer__m_FrameCounterAddr = nullptr;
int32_t& CTimer::m_FrameCounter = *(int32_t*)CTimer__m_FrameCounterAddr;

static uint32_t CTimer__SetTimeScaleAddr;
void CTimer::SetTimeScale(float scale) {
    plugin::CallDyn(CTimer__SetTimeScaleAddr, scale);
}

template<>
void plugin::InitPatterns<CTimer>() {
    CTimer__ms_fTimeStepAddr = (float*)plugin::patch::GetPointer(plugin::GetPattern("F3 0F 11 0D ? ? ? ? F3 0F 11 15 ? ? ? ? F3 0F 2C C0", 4));
    CTimer__ms_fTimeScaleAddr = (float*)plugin::patch::GetPointer(plugin::GetPattern("F3 0F 11 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 55", 4));

    CTimer__snTimeInMillisecondsPauseModeAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("89 0D ? ? ? ? F3 0F 11 05 ? ? ? ? A3 ? ? ? ? E8 ? ? ? ? F3 0F 10 0D ? ? ? ? F3 0F 10 44 24 ? 84 C0 74 07 0F 2F C1 77 17 EB 18 0F 2F C1 76 03 0F 28 C8 F3 0F 10 05 ? ? ? ? 0F 2F C1 77 03 0F 28 C8 80 3D", 2));
    CTimer__snTimeInMillisecondsAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("8B 0D ? ? ? ? 89 0D ? ? ? ? F3 0F 10 05", 2));
    
    CTimer__m_CodePauseAddr = (bool*)plugin::patch::GetPointer(plugin::GetPattern("0A 05 ? ? ? ? 74 0D 80 3D ? ? ? ? ? 0F 84 ? ? ? ? A1", 2));
    CTimer__m_UserPauseAddr = (bool*)plugin::patch::GetPointer(plugin::GetPattern("0A 05 ? ? ? ? 0A 05 ? ? ? ? 74 0D 80 3D ? ? ? ? ? 0F 84 ? ? ? ? A1", 2));
    
    CTimer__m_FrameCounterAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("FF 05 ? ? ? ? F3 0F 2C C0", 2));

    CTimer__SetTimeScaleAddr = plugin::GetPattern("F3 0F 10 44 24 ? F3 0F 11 05 ? ? ? ? F3 0F 11 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC 55", 0);
}
