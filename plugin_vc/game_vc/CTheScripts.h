/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CPlayerInfo"
extern unsigned int MAX_SCRIPT_SPACE_SIZE; // default 260512

class PLUGIN_API CTheScripts {
public:
    static unsigned char *ScriptSpace; // static unsigned char ScriptSpace[MAX_SCRIPT_SPACE_SIZE]
    static int HighlightImportantArea(int a1, float a2, float a3, float a4, float a5, float a6);
    static bool IsPlayerOnAMission();
    static char IsPlayerStopped(CPlayerInfo* CPlayerInfo);
};
