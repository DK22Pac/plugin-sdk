/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "CEntity.h"

class CPedPlacement {
public:

    //funcs
    static bool FindZCoorForPed(CVector* posn);
    static bool IsPositionClearForPed(CVector const& posn, float arg1, int arg2, CEntity** entity);
    static bool IsPositionClearOfCars(CVector* posn);
};