/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlayerPed.h"

class CGameLogic {
public:
	static void InitAtStartOfGame();
    static void Update();
    static void RestorePlayerStuffDuringResurrection(CPlayerPed* arg1, CVector arg2, float arg3);
    static void ClearShortCut();
    static void UpdateShortCut();
    static void AfterDeathArrestSetUpShortCutTaxi();
    static void RemoveShortCutDropOffPointForMission();
	
};