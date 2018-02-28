/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRegisteredMotionBlurStreak.h"

RxObjSpace3DVertex *StreakVertices = (RxObjSpace3DVertex *)0x77EDD4;

// Converted from thiscall void CRegisteredMotionBlurStreak::Render(void) 0x572660 
void CRegisteredMotionBlurStreak::Render() {
    plugin::CallMethod<0x572660, CRegisteredMotionBlurStreak *>(this);
}

// Converted from thiscall void CRegisteredMotionBlurStreak::CRegisteredMotionBlurStreak(void) 0x575150
CRegisteredMotionBlurStreak::CRegisteredMotionBlurStreak() {
    plugin::CallMethod<0x575150, CRegisteredMotionBlurStreak *>(this);
}
