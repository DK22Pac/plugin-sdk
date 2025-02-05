/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CReplay.h"

CReplay* gReplay = (CReplay*)0x5ECAC8;

bool CReplay::IsPlayingBack() {
    return plugin::CallMethodAndReturn<bool, 0x44AA60, CReplay*>(this);
}

void CReplay::SetButton(int button) {
    return plugin::CallMethod<0x45ED10, CReplay*>(this, button);
}

void CReplay::ClearButton(int button) {
    return plugin::CallMethod<0x45ED30, CReplay*>(this, button);
}

bool CReplay::GetButton(int button) {
    return plugin::CallMethodAndReturn<bool, 0x44C050, CReplay*>(this, button);
}

