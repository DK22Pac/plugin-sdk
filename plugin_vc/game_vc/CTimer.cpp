/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimer.h"

PLUGIN_SOURCE_FILE

int &CTimer::m_snTimeInMillisecondsPauseMode = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x691014, 0x691014, 0x69001C));
int &CTimer::m_snTimeInMilliseconds = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x974B2C, 0x974B34, 0x973B34));
float &CTimer::ms_fTimeStepNonClipped = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x9753A8, 0x9753B0, 0x9743B0));
float &CTimer::ms_fTimeStep = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x975424, 0x97542C, 0x97442C));
int &CTimer::m_snPreviousTimeInMilliseconds = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978D8C, 0x978D94, 0x977D94));
float &CTimer::ms_fTimeScale = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x97F264, 0x97F26C, 0x97E26C));
int &CTimer::m_snTimeInMillisecondsNonClipped = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D894, 0xA0D89C, 0xA0C89C));
unsigned int &CTimer::m_FrameCounter = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D898, 0xA0D8A0, 0xA0C8A0));
bool &CTimer::m_UserPause = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B36, 0xA10B3E, 0xA0FB3F));
bool &CTimer::m_CodePause = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B76, 0xA10B7F, 0xA0FB80));
int &suspendPcTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x7052F8, 0x7052F8, 0x7042F8));
int &suspendDepth = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x705310, 0x705310, 0x704310));
int &oldPcTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA10680, 0xA10688, 0xA0F688));

int addrof(CTimer::EndUserPause) = ADDRESS_BY_VERSION(0x4D0D90, 0x4D0DB0, 0x4D0C50);
int gaddrof(CTimer::EndUserPause) = GLOBAL_ADDRESS_BY_VERSION(0x4D0D90, 0x4D0DB0, 0x4D0C50);

void CTimer::EndUserPause() {
    plugin::CallDynGlobal(gaddrof(CTimer::EndUserPause));
}

int addrof(CTimer::GetCurrentTimeInCycles) = ADDRESS_BY_VERSION(0x4D0DF0, 0x4D0E10, 0x4D0CB0);
int gaddrof(CTimer::GetCurrentTimeInCycles) = GLOBAL_ADDRESS_BY_VERSION(0x4D0DF0, 0x4D0E10, 0x4D0CB0);

unsigned int CTimer::GetCurrentTimeInCycles() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CTimer::GetCurrentTimeInCycles));
}

int addrof(CTimer::GetCyclesPerMillisecond) = ADDRESS_BY_VERSION(0x4D0E30, 0x4D0E50, 0x4D0CF0);
int gaddrof(CTimer::GetCyclesPerMillisecond) = GLOBAL_ADDRESS_BY_VERSION(0x4D0E30, 0x4D0E50, 0x4D0CF0);

int CTimer::GetCyclesPerMillisecond() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CTimer::GetCyclesPerMillisecond));
}

int addrof(CTimer::GetIsSlowMotionActive) = ADDRESS_BY_VERSION(0x4D0DC0, 0x4D0DE0, 0x4D0C80);
int gaddrof(CTimer::GetIsSlowMotionActive) = GLOBAL_ADDRESS_BY_VERSION(0x4D0DC0, 0x4D0DE0, 0x4D0C80);

bool CTimer::GetIsSlowMotionActive() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CTimer::GetIsSlowMotionActive));
}

int addrof(CTimer::Initialise) = ADDRESS_BY_VERSION(0x4D1300, 0x4D1320, 0x4D11C0);
int gaddrof(CTimer::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4D1300, 0x4D1320, 0x4D11C0);

void CTimer::Initialise() {
    plugin::CallDynGlobal(gaddrof(CTimer::Initialise));
}

int addrof(CTimer::Resume) = ADDRESS_BY_VERSION(0x4D0E50, 0x4D0E70, 0x4D0D10);
int gaddrof(CTimer::Resume) = GLOBAL_ADDRESS_BY_VERSION(0x4D0E50, 0x4D0E70, 0x4D0D10);

void CTimer::Resume() {
    plugin::CallDynGlobal(gaddrof(CTimer::Resume));
}

int addrof(CTimer::Shutdown) = ADDRESS_BY_VERSION(0x4D12F0, 0x4D1310, 0x4D11B0);
int gaddrof(CTimer::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4D12F0, 0x4D1310, 0x4D11B0);

void CTimer::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CTimer::Shutdown));
}

int addrof(CTimer::StartUserPause) = ADDRESS_BY_VERSION(0x4D0DA0, 0x4D0DC0, 0x4D0C60);
int gaddrof(CTimer::StartUserPause) = GLOBAL_ADDRESS_BY_VERSION(0x4D0DA0, 0x4D0DC0, 0x4D0C60);

void CTimer::StartUserPause() {
    plugin::CallDynGlobal(gaddrof(CTimer::StartUserPause));
}

int addrof(CTimer::Stop) = ADDRESS_BY_VERSION(0x4D0DB0, 0x4D0DD0, 0x4D0C70);
int gaddrof(CTimer::Stop) = GLOBAL_ADDRESS_BY_VERSION(0x4D0DB0, 0x4D0DD0, 0x4D0C70);

void CTimer::Stop() {
    plugin::CallDynGlobal(gaddrof(CTimer::Stop));
}

int addrof(CTimer::Suspend) = ADDRESS_BY_VERSION(0x4D0ED0, 0x4D0EF0, 0x4D0D90);
int gaddrof(CTimer::Suspend) = GLOBAL_ADDRESS_BY_VERSION(0x4D0ED0, 0x4D0EF0, 0x4D0D90);

void CTimer::Suspend() {
    plugin::CallDynGlobal(gaddrof(CTimer::Suspend));
}

int addrof(CTimer::Update) = ADDRESS_BY_VERSION(0x4D0F30, 0x4D0F50, 0x4D0DF0);
int gaddrof(CTimer::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4D0F30, 0x4D0F50, 0x4D0DF0);

void CTimer::Update() {
    plugin::CallDynGlobal(gaddrof(CTimer::Update));
}
