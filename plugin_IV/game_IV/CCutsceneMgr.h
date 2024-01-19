/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CSprite2d.h"

class CCutsceneMgr {
public:
    static int32_t& ms_running;
    static rage::sysArray<CSprite2d>& ms_sprites;

public:
    static bool IsRunning();
    static void LoadSprites();
    static void UnloadSprites();
};
