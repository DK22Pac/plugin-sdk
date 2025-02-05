/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CKeybrd.h"

CKeybrd** gKeybrd = (CKeybrd**)0x662128;

CKeybrd* GetKeybrd() {
    return *gKeybrd;
}

bool CKeybrd::Keydown(unsigned short key) {
    return plugin::CallMethodAndReturn<bool, 0x4611F0, CKeybrd*, unsigned short>(this, key);
}
