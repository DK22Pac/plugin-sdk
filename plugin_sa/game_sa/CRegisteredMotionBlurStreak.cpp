/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRegisteredMotionBlurStreak.h"

void CRegisteredMotionBlurStreak::Update() {
    plugin::CallMethod<0x721EE0, CRegisteredMotionBlurStreak *>(this);
}

// Converted from thiscall void CRegisteredMotionBlurStreak::Render(void) 0x721F70
void CRegisteredMotionBlurStreak::Render() {
    plugin::CallMethod<0x721F70, CRegisteredMotionBlurStreak *>(this);
}