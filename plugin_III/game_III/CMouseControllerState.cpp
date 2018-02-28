/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CMouseControllerState.h"

// Converted from thiscall void CMouseControllerState::CMouseControllerState(void) 0x491B80 
CMouseControllerState::CMouseControllerState() {
    plugin::CallMethod<0x491B80, CMouseControllerState *>(this);
}

// Converted from thiscall void CMouseControllerState::Clear(void) 0x491BB0 
void CMouseControllerState::Clear() {
    plugin::CallMethod<0x491BB0, CMouseControllerState *>(this);
}

// Converted from thiscall int CMousePointerStateHelper::GetMouseSetUp(void) 0x491BD0 
int CMousePointerStateHelper::GetMouseSetUp() {
    return plugin::CallMethodAndReturn<int, 0x491BD0, CMousePointerStateHelper *>(this);
}
