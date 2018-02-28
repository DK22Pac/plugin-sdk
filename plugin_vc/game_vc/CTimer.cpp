/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTimer.h"

bool &CTimer::m_CodePause                     = *(bool *)0xA10B76;
unsigned int &CTimer::m_FrameCounter          = *(unsigned int *)0xA0D898;
bool &CTimer::m_UserPause                     = *(bool *)0xA10B36;
unsigned int &CTimer::m_snPreviousTimeInMilliseconds   = *(unsigned int *)0x978D8C;
unsigned int &CTimer::m_snTimeInMilliseconds           = *(unsigned int *)0x974B2C;
unsigned int &CTimer::m_snTimeInMillisecondsNonClipped = *(unsigned int *)0xA0D894;
unsigned int &CTimer::m_snTimeInMillisecondsPauseMode  = *(unsigned int *)0x691014;
float &CTimer::ms_fTimeScale                  = *(float *)0x97F264;
float &CTimer::ms_fTimeStep                   = *(float *)0x975424;
float &CTimer::ms_fTimeStepNonClipped         = *(float *)0x9753A8;

int &oldPcTimer = *(int *)0xA10680;

// Converted from cdecl void CTimer::EndUserPause(void) 0x4D0D90
void CTimer::EndUserPause() {
    plugin::Call<0x4D0D90>();
}

// Converted from cdecl void CTimer::StartUserPause(void) 0x4D0DA0
void CTimer::StartUserPause() {
    plugin::Call<0x4D0DA0>();
}

// Converted from cdecl void CTimer::Stop(void) 0x4D0DB0
void CTimer::Stop() {
    plugin::Call<0x4D0DB0>();
}

// Converted from cdecl bool CTimer::GetIsSlowMotionActive(void) 0x4D0DC0
bool CTimer::GetIsSlowMotionActive() {
    return plugin::CallAndReturn<bool, 0x4D0DC0>();
}

// Converted from cdecl uint CTimer::GetCurrentTimeInCycles(void) 0x4D0DF0
unsigned int CTimer::GetCurrentTimeInCycles() {
    return plugin::CallAndReturn<unsigned int, 0x4D0DF0>();
}

// Converted from cdecl uint CTimer::GetCyclesPerMillisecond(void) 0x4D0E30
unsigned int CTimer::GetCyclesPerMillisecond() {
    return plugin::CallAndReturn<unsigned int, 0x4D0E30>();
}

// Converted from cdecl void CTimer::Resume(void) 0x4D0E50
void CTimer::Resume() {
    plugin::Call<0x4D0E50>();
}

// Converted from cdecl void CTimer::Suspend(void) 0x4D0ED0
void CTimer::Suspend() {
    plugin::Call<0x4D0ED0>();
}

// Converted from cdecl void CTimer::Update(void) 0x4D0F30
void CTimer::Update() {
    plugin::Call<0x4D0F30>();
}

// Converted from cdecl void CTimer::Shutdown(void) 0x4D12F0
void CTimer::Shutdown() {
    plugin::Call<0x4D12F0>();
}

// Converted from cdecl void CTimer::Initialise(void) 0x4D1300
void CTimer::Initialise() {
    plugin::Call<0x4D1300>();
}