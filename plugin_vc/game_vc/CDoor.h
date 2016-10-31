/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CDoor {
public:
    float fAngleInPosOne;
    float fAngleInPosTwo;
    unsigned char nAxisDirection;
    unsigned char nAxis;
    unsigned char nState;
    unsigned char __f000B;
    float fAngle;
    float fPrevAngle;
    float fVelAngle;
    CVector vecVelocity;
};
#pragma pack(pop)

VALIDATE_SIZE(CDoor, 0x24);