#pragma once

#include "plbase/PluginBase_SA.h"

class CIniFile {
public:
    static void LoadIniFile();

    static float &PedNumberMultiplier;
    static float &CarNumberMultiplier;
};