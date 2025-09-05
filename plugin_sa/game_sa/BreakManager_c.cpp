/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "BreakManager_c.h"

BreakManager_c& g_breakMan = *(BreakManager_c*)0xBB4240;

bool BreakManager_c::Init() {
	return plugin::CallMethodAndReturnDynGlobal<bool>(0x59E650, this);
}

void BreakManager_c::Exit() {
    plugin::CallMethodDynGlobal(0x59E660, this);
}

void BreakManager_c::Render(bool renderAlphas) {
    plugin::CallMethodDynGlobal(0x59E6A0, this, renderAlphas);
}

void BreakManager_c::ResetAll() {
    plugin::CallMethodDynGlobal(0x59E720, this);
}

void BreakManager_c::Update(float timeStep) {
    plugin::CallMethodDynGlobal(0x59E670, this, timeStep);
}
