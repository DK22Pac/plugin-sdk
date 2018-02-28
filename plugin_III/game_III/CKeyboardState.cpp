/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CKeyboardState.h"

// Converted from thiscall void CKeyboardState::Clear(void) 0x491760
void CKeyboardState::Clear() {
    plugin::CallMethod<0x491760, CKeyboardState *>(this);
}
