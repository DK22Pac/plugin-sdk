/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CControllerState.h"

// Converted from thiscall void CControllerState::Clear(void) 0x4916C0
void CControllerState::Clear() {
    plugin::CallMethod<0x4916C0, CControllerState *>(this);
}
