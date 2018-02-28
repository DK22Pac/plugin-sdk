/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGameLogic.h"

unsigned char &CGameLogic::ActivePlayers = *(unsigned char *)0x95CD5E;

// Converted from cdecl void CGameLogic::InitAtStartOfGame(void) 0x4213F0 
void CGameLogic::InitAtStartOfGame() {
    plugin::Call<0x4213F0>();
}

// Converted from cdecl void CGameLogic::Update(void) 0x421400 
void CGameLogic::Update() {
    plugin::Call<0x421400>();
}

// Converted from cdecl void CGameLogic::SortOutStreamingAndMemory(CVector const& point) 0x421A20 
void CGameLogic::SortOutStreamingAndMemory(CVector const& point) {
    plugin::Call<0x421A20, CVector const&>(point);
}

// Converted from cdecl void CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed *player,CVector posn,float angle) 0x421A60 
void CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed* player, CVector posn, float angle) {
    plugin::Call<0x421A60, CPlayerPed*, CVector, float>(player, posn, angle);
}

// Converted from cdecl void CGameLogic::PassTime(uint time) 0x421C00 
void CGameLogic::PassTime(unsigned int time) {
    plugin::Call<0x421C00, unsigned int>(time);
}
