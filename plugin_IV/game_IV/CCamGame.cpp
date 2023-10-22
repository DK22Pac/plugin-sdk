/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamGame.h"

static uint32_t CCamGame__UpdateAddr;
void CCamGame::Update() {
    plugin::CallMethodDyn(CCamGame__UpdateAddr, this);
}
template<>
void plugin::InitPatterns<CCamGame>() {
    CCamGame__UpdateAddr = plugin::GetPattern("56 57 8B F9 8B 07 FF 50 18 8B 8F", 0);
}
