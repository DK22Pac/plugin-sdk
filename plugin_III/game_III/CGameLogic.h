/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlayerPed.h"

class PLUGIN_API CGameLogic {
public:
    SUPPORTED_10EN_11EN_STEAM static unsigned char &ActivePlayers;

    SUPPORTED_10EN_11EN_STEAM static void InitAtStartOfGame();
    SUPPORTED_10EN_11EN_STEAM static void PassTime(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM static void RestorePlayerStuffDuringResurrection(CPlayerPed *player, CVector pos, float angle);
    SUPPORTED_10EN_11EN_STEAM static void SortOutStreamingAndMemory(CVector const &pos);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CGameLogic.h"
