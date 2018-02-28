/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBuilding.h"

class CTreadable : public CBuilding {
public:
    //funcs

    static void* operator new(unsigned int size);
    CTreadable();

    CTreadable(const CTreadable &) = delete;
    CTreadable &operator=(const CTreadable &) = delete;
};

VALIDATE_SIZE(CTreadable, 0x64);