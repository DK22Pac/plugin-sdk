/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CIniFile {
public:
    static void LoadIniFile();

    static float &PedNumberMultiplier; // 1.0f
    static float &CarNumberMultiplier; // 1.0f
};