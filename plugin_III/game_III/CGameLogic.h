/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlayerPed.h"

class CGameLogic {
public:
    static unsigned char &ActivePlayers;

    static void InitAtStartOfGame();
    static void Update();
    static void SortOutStreamingAndMemory(CVector const& point);
    static void RestorePlayerStuffDuringResurrection(CPlayerPed* player, CVector posn, float angle);
    static void PassTime(unsigned int time);
};
