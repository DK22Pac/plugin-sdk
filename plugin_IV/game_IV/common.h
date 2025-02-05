/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPlayerPed.h"
#include "CSprite2d.h"

class common;

enum eGameEpisode : int32_t {
    EPISODE_IV,
    EPISODE_TLAD,
    EPISODE_TBOGT,
};

extern int32_t& gGameEpisode;

extern CPlayerPed* FindPlayerPed(int32_t id);
extern CVehicle* FindPlayerVehicle(int32_t id);

