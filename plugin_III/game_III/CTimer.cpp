/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTimer.h"

bool &CTimer::m_CodePause                     = *(bool *)0x95CDB1;
unsigned int &CTimer::m_FrameCounter          = *(unsigned int *)0x9412EC;
bool &CTimer::m_UserPause                     = *(bool *)0x95CD7C;
unsigned int &CTimer::m_snPreviousTimeInMilliseconds   = *(unsigned int *)0x8F29E4;
unsigned int &CTimer::m_snTimeInMilliseconds           = *(unsigned int *)0x885B48;
unsigned int &CTimer::m_snTimeInMillisecondsNonClipped = *(unsigned int *)0x9412E8;
unsigned int &CTimer::m_snTimeInMillisecondsPauseMode  = *(unsigned int *)0x5F7614;
float &CTimer::ms_fTimeScale                  = *(float *)0x8F2C20;
float &CTimer::ms_fTimeStep                   = *(float *)0x8E2CB4;
float &CTimer::ms_fTimeStepNonClipped         = *(float *)0x8E2C4C;

int &oldPcTimer = *(int *)0x9434F4;
int &suspendPcTimer = *(int *)0x62A308;

// Converted from cdecl void CTimer::EndUserPause(void) 0x4AD4A0
void CTimer::EndUserPause() {
    plugin::Call<0x4AD4A0>();
}

// Converted from cdecl void CTimer::StartUserPause(void) 0x4AD490
void CTimer::StartUserPause() {
    plugin::Call<0x4AD490>();
}

// Converted from cdecl void CTimer::Stop(void) 0x4AD480
void CTimer::Stop() {
    plugin::Call<0x4AD480>();
}

// Converted from cdecl bool CTimer::GetIsSlowMotionActive(void) 0x4AD450
bool CTimer::GetIsSlowMotionActive() {
    return plugin::CallAndReturn<bool, 0x4AD450>();
}

// Converted from cdecl uint CTimer::GetCurrentTimeInCycles(void) 0x4AD410
unsigned int CTimer::GetCurrentTimeInCycles() {
    return plugin::CallAndReturn<unsigned int, 0x4AD410>();
}

// Converted from cdecl uint CTimer::GetCyclesPerMillisecond(void) 0x4AD3F0
unsigned int CTimer::GetCyclesPerMillisecond() {
    return plugin::CallAndReturn<unsigned int, 0x4AD3F0>();
}

// Converted from cdecl void CTimer::Resume(void) 0x4AD370
void CTimer::Resume() {
    plugin::Call<0x4AD370>();
}

// Converted from cdecl void CTimer::Suspend(void) 0x4AD310
void CTimer::Suspend() {
    plugin::Call<0x4AD310>();
}

// Converted from cdecl void CTimer::Update(void) 0x4ACF70
void CTimer::Update() {
    plugin::Call<0x4ACF70>();
}

// Converted from cdecl void CTimer::Shutdown(void) 0x4ACF60
void CTimer::Shutdown() {
    plugin::Call<0x4ACF60>();
}

// Converted from cdecl void CTimer::Initialise(void) 0x4ACE60
void CTimer::Initialise() {
    plugin::Call<0x4ACE60>();
}
