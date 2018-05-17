/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimer.h"

PLUGIN_SOURCE_FILE

int &CTimer::m_snTimeInMillisecondsPauseMode = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5F7614, 0x5F73FC, 0x6043F4));
int &CTimer::m_snTimeInMilliseconds = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B48, 0x885AF8, 0x895C38));
float &CTimer::ms_fTimeStepNonClipped = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C4C, 0x8E2D00, 0x8F2E40));
float &CTimer::ms_fTimeStep = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2CB4, 0x8E2D68, 0x8F2EA8));
int &CTimer::m_snPreviousTimeInMilliseconds = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29E4, 0x8F2A98, 0x902BD8));
float &CTimer::ms_fTimeScale = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C20, 0x8F2CD4, 0x902E14));
int &CTimer::m_snTimeInMillisecondsNonClipped = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9412E8, 0x9414A0, 0x9515E0));
unsigned int &CTimer::m_FrameCounter = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9412EC, 0x9414A4, 0x9515E4));
bool &CTimer::m_UserPause = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD7C, 0x95CF34, 0x96D074));
bool &CTimer::m_CodePause = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDB1, 0x95CF69, 0x96D0A9));
int &suspendPcTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x62A308, 0x62A308, 0x63A308));
int &suspendDepth = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x62A320, 0x62A320, 0x63A320));
int &oldPcTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9434F4, 0x9436AC, 0x9537EC));

int addrof(CTimer::EndUserPause) = ADDRESS_BY_VERSION(0x4AD4A0, 0x4AD590, 0x4AD520);
int gaddrof(CTimer::EndUserPause) = GLOBAL_ADDRESS_BY_VERSION(0x4AD4A0, 0x4AD590, 0x4AD520);

void CTimer::EndUserPause() {
    plugin::CallDynGlobal(gaddrof(CTimer::EndUserPause));
}

int addrof(CTimer::GetCurrentTimeInCycles) = ADDRESS_BY_VERSION(0x4AD410, 0x4AD500, 0x4AD490);
int gaddrof(CTimer::GetCurrentTimeInCycles) = GLOBAL_ADDRESS_BY_VERSION(0x4AD410, 0x4AD500, 0x4AD490);

unsigned int CTimer::GetCurrentTimeInCycles() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CTimer::GetCurrentTimeInCycles));
}

int addrof(CTimer::GetCyclesPerMillisecond) = ADDRESS_BY_VERSION(0x4AD3F0, 0x4AD4E0, 0x4AD470);
int gaddrof(CTimer::GetCyclesPerMillisecond) = GLOBAL_ADDRESS_BY_VERSION(0x4AD3F0, 0x4AD4E0, 0x4AD470);

int CTimer::GetCyclesPerMillisecond() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CTimer::GetCyclesPerMillisecond));
}

int addrof(CTimer::GetIsSlowMotionActive) = ADDRESS_BY_VERSION(0x4AD450, 0x4AD540, 0x4AD4D0);
int gaddrof(CTimer::GetIsSlowMotionActive) = GLOBAL_ADDRESS_BY_VERSION(0x4AD450, 0x4AD540, 0x4AD4D0);

bool CTimer::GetIsSlowMotionActive() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CTimer::GetIsSlowMotionActive));
}

int addrof(CTimer::Initialise) = ADDRESS_BY_VERSION(0x4ACE60, 0x4ACF50, 0x4ACEE0);
int gaddrof(CTimer::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4ACE60, 0x4ACF50, 0x4ACEE0);

void CTimer::Initialise() {
    plugin::CallDynGlobal(gaddrof(CTimer::Initialise));
}

int addrof(CTimer::Resume) = ADDRESS_BY_VERSION(0x4AD370, 0x4AD460, 0x4AD3F0);
int gaddrof(CTimer::Resume) = GLOBAL_ADDRESS_BY_VERSION(0x4AD370, 0x4AD460, 0x4AD3F0);

void CTimer::Resume() {
    plugin::CallDynGlobal(gaddrof(CTimer::Resume));
}

int addrof(CTimer::Shutdown) = ADDRESS_BY_VERSION(0x4ACF60, 0x4AD050, 0x4ACFE0);
int gaddrof(CTimer::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4ACF60, 0x4AD050, 0x4ACFE0);

void CTimer::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CTimer::Shutdown));
}

int addrof(CTimer::StartUserPause) = ADDRESS_BY_VERSION(0x4AD490, 0x4AD580, 0x4AD510);
int gaddrof(CTimer::StartUserPause) = GLOBAL_ADDRESS_BY_VERSION(0x4AD490, 0x4AD580, 0x4AD510);

void CTimer::StartUserPause() {
    plugin::CallDynGlobal(gaddrof(CTimer::StartUserPause));
}

int addrof(CTimer::Stop) = ADDRESS_BY_VERSION(0x4AD480, 0x4AD570, 0x4AD500);
int gaddrof(CTimer::Stop) = GLOBAL_ADDRESS_BY_VERSION(0x4AD480, 0x4AD570, 0x4AD500);

void CTimer::Stop() {
    plugin::CallDynGlobal(gaddrof(CTimer::Stop));
}

int addrof(CTimer::Suspend) = ADDRESS_BY_VERSION(0x4AD310, 0x4AD400, 0x4AD390);
int gaddrof(CTimer::Suspend) = GLOBAL_ADDRESS_BY_VERSION(0x4AD310, 0x4AD400, 0x4AD390);

void CTimer::Suspend() {
    plugin::CallDynGlobal(gaddrof(CTimer::Suspend));
}

int addrof(CTimer::Update) = ADDRESS_BY_VERSION(0x4ACF70, 0x4AD060, 0x4ACFF0);
int gaddrof(CTimer::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4ACF70, 0x4AD060, 0x4ACFF0);

void CTimer::Update() {
    plugin::CallDynGlobal(gaddrof(CTimer::Update));
}
