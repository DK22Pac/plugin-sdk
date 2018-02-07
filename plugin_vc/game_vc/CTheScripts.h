/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CPlayerInfo.h"

extern unsigned int MAX_SCRIPT_SPACE_SIZE; // default 260512

class PLUGIN_API CTheScripts {
public:
    static unsigned char *ScriptSpace; // static unsigned char ScriptSpace[MAX_SCRIPT_SPACE_SIZE]
};
