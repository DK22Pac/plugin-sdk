/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CWheel {
public:
    CVector vecWheelPos;
    char __p000C[4];
    CVector vecWheelAngle;
    char __p001C[12];
};
VALIDATE_OFFSET(CWheel, vecWheelPos, 0x0);
VALIDATE_OFFSET(CWheel, __p000C, 0xC);
VALIDATE_OFFSET(CWheel, vecWheelAngle, 0x10);
VALIDATE_OFFSET(CWheel, __p001C, 0x1C);
VALIDATE_SIZE(CWheel, 0x28);