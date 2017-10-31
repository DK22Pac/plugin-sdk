/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "CPlaceable.h"

class CCamera : CPlaceable {
public:
    float Find3rdPersonQuickAimPitch();
};

extern CCamera &TheCamera;