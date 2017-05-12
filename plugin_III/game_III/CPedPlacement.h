/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVector.h"

class CPedPlacement {
public:
    //funcs
    static void FindZCoorForPed(CVector* position);
    static bool IsPositionClearForPed(CVector* position);
    static bool IsPositionClearOfCars(CVector* position);
};