/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGameLogic.h"

// Converted from cdecl void CGameLogic::InitAtStartOfGame(void)	0x42C480	
void CGameLogic::InitAtStartOfGame() {
    plugin::Call<0x42C480>();
}

// Converted from cdecl void CGameLogic::Update(void)	0x42BB70	
void CGameLogic::Update() {
    plugin::Call<0x42BB70>();
}

// Converted from cdecl void CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed *arg1,CVector arg2,float arg3)	0x42B900	
void CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed* arg1, CVector arg2, float arg3) {
    plugin::Call<0x42B900, CPlayerPed*, CVector, float>(arg1, arg2, arg3);
}

// Converted from cdecl void CGameLogic::ClearShortCut(void)	0x42B730	
void CGameLogic::ClearShortCut() {
    plugin::Call<0x42B730>();
}

// Converted from cdecl void CGameLogic::UpdateShortCut(void)	0x42AE70	
void CGameLogic::UpdateShortCut() {
    plugin::Call<0x42AE70>();
}

// Converted from cdecl void CGameLogic::AfterDeathArrestSetUpShortCutTaxi(void)	0x42AC10	
void CGameLogic::AfterDeathArrestSetUpShortCutTaxi() {
    plugin::Call<0x42AC10>();
}

// Converted from cdecl void CGameLogic::RemoveShortCutDropOffPointForMission(void)	0x42ADE0	
void CGameLogic::RemoveShortCutDropOffPointForMission() {
    plugin::Call<0x42ADE0>();
}

void CGameLogic::PassTime(uint32_t time) {
    plugin::Call<0x42B8A0>(time);
}
