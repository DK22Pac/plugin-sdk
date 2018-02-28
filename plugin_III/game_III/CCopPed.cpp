/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCopPed.h"

// Converted from thiscall void CCopPed::ArrestPlayer(void) 0x4C2C90
void CCopPed::ArrestPlayer() {
    plugin::CallMethod<0x4C2C90, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::CCopPed(eCopType copType) 0x4C11B0
CCopPed::CCopPed(eCopType copType) : CPed(plugin::dummy) {
    plugin::CallMethod<0x4C11B0, CCopPed *, eCopType>(this, copType);
}

// Converted from thiscall void CCopPed::ClearPursuit(void) 0x4C28C0
void CCopPed::ClearPursuit() {
    plugin::CallMethod<0x4C28C0, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::CopAI(void) 0x4C1B50
void CCopPed::CopAI() {
    plugin::CallMethod<0x4C1B50, CCopPed *>(this);
}

// Converted from thiscall int CCopPed::ScanForCrimes(void) 0x4C26A0
int CCopPed::ScanForCrimes() {
    return plugin::CallMethodAndReturn<int, 0x4C26A0, CCopPed *>(this);
}

// Converted from thiscall void CCopPed::SetArrestPlayer(CPed * player) 0x4C2B00
void CCopPed::SetArrestPlayer(CPed* player) {
    plugin::CallMethod<0x4C2B00, CCopPed *, CPed*>(this, player);
}

// Converted from thiscall void CCopPed::SetPursuit(bool) 0x4C27D0
void CCopPed::SetPursuit(bool arg0) {
    plugin::CallMethod<0x4C27D0, CCopPed *, bool>(this, arg0);
}
