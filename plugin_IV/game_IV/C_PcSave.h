/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class C_PcSave {
public:
    static bool& ms_bAutoSave;

public:
    static int32_t LoadSlot(int32_t slot);
    static int32_t SaveSlot(int32_t slot);
};