/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CGame.h"

CGame** gGame = (CGame**)0x5EB4FC;
int* ControlKeys = (int*)0x5E8F5C; // [12]

CGame* GetGame() {
    return *gGame;
}

CPlayerPed* CGame::FindPlayerPed(unsigned char index) {
    return plugin::CallMethodAndReturn<CPlayerPed*, 0x4219E0, CGame*, unsigned char>(this, index);
}

void CGame::SwitchUserPause() {
    plugin::CallMethod<0x45BAA0, CGame*>(this);
}

void CGame::Process() {
    plugin::CallMethod<0x45C1F0, CGame*>(this);
}

void CGame::SetState(int unk, int state) {
    plugin::CallMethod<0x45A4B0, CGame*, int, int>(this, unk, state);
}

bool CGame::GetIsUserPaused() {
    return plugin::CallMethodAndReturn<bool, 0x416BC0, CGame*>(this);
}
