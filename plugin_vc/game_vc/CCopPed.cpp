/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCopPed.h"

// Converted from thiscall void CCopPed::ArrestPlayer(void) 0x4EB470
void CCopPed::ArrestPlayer() {
    plugin::CallMethod<0x4EB470, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::CCopPed(eCopType copType, int) 0x4ED720
CCopPed::CCopPed(eCopType copType, int arg1) : CPed(plugin::dummy) {
    plugin::CallMethod<0x4ED720, CCopPed *, eCopType, int>(this, copType, arg1);
}

// Converted from thiscall void CCopPed::ClearPursuit(void) 0x4EB770
void CCopPed::ClearPursuit() {
    plugin::CallMethod<0x4EB770, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::CopAI(void) 0x4EBC10
void CCopPed::CopAI() {
    plugin::CallMethod<0x4EBC10, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::ProcessHeliSwat(void) 0x4EB280
void CCopPed::ProcessHeliSwat() {
    plugin::CallMethod<0x4EB280, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::ProcessStingerCop(void) 0x4EB010
void CCopPed::ProcessStingerCop() {
    plugin::CallMethod<0x4EB010, CCopPed *>(this);
}

// Converted from thiscall int CCopPed::ScanForCrimes(void) 0x4EBAD0
int CCopPed::ScanForCrimes() {
    return plugin::CallMethodAndReturn<int, 0x4EBAD0, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::SetArrestPlayer(CPed * ped) 0x4EB5F0
void CCopPed::SetArrestPlayer(CPed* ped) {
    plugin::CallMethod<0x4EB5F0, CCopPed *, CPed*>(this, ped);
}

// Converted from thiscall void CCopPed::SetPursuit(bool) 0x4EB9C0
void CCopPed::SetPursuit(bool arg0) {
    plugin::CallMethod<0x4EB9C0, CCopPed *, bool>(this, arg0);
}