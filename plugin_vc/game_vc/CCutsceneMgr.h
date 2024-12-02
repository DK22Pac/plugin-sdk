/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCutsceneObject.h"

class CCutsceneMgr {
public:
    static char* ms_cutsceneName;
    static bool& ms_running;
    static CCutsceneObject** ms_pCutsceneObjects;
    static int32_t& ms_numCutsceneObjs;

public:
    static int32_t GetCutsceneTimeInMilliseconds();

};
