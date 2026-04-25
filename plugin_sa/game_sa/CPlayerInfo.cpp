/*
    Plugin-SDK (Grand Theft Auto San Andreas) Source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerInfo.h"

CPlayerInfo::CPlayerInfo()
{
    plugin::CallMethod<0x571920, CPlayerInfo*>(this);
}

void CPlayerInfo::MakePlayerSafe(bool safe, float radius) {
    plugin::CallMethod<0x56E870, CPlayerInfo*, bool, float>(this, safe, radius);
}

// 0x5D3B00
bool CPlayerInfo::Load() {
    return plugin::CallAndReturn<bool, 0x5D3B00>();
}

// 0x5D3AC0
bool CPlayerInfo::Save() {
    return plugin::CallAndReturn<bool, 0x5D3AC0>();
}