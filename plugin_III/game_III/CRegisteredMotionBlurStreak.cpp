/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRegisteredMotionBlurStreak.h"

RxObjSpace3DVertex *StreakVertices = (RxObjSpace3DVertex *)0x649974;

// Converted from thiscall void CRegisteredMotionBlurStreak::Update(void) 0x519580 
void CRegisteredMotionBlurStreak::Update() {
    plugin::CallMethod<0x519580, CRegisteredMotionBlurStreak *>(this);
}

// Converted from thiscall void CRegisteredMotionBlurStreak::Render(void) 0x519600 
void CRegisteredMotionBlurStreak::Render() {
    plugin::CallMethod<0x519600, CRegisteredMotionBlurStreak *>(this);
}

// Converted from thiscall void CRegisteredMotionBlurStreak::CRegisteredMotionBlurStreak(void) 0x51C350
CRegisteredMotionBlurStreak::CRegisteredMotionBlurStreak() {
    plugin::CallMethod<0x51C350, CRegisteredMotionBlurStreak *>(this);
}
