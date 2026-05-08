/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

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
VALIDATE_OFFSET(CDoor, fAngleInPosOne, 0x0);
VALIDATE_OFFSET(CDoor, fAngleInPosTwo, 0x4);
VALIDATE_OFFSET(CDoor, nAxisDirection, 0x8);
VALIDATE_OFFSET(CDoor, nAxis, 0x9);
VALIDATE_OFFSET(CDoor, nState, 0xA);
VALIDATE_OFFSET(CDoor, __f000B, 0xB);
VALIDATE_OFFSET(CDoor, fAngle, 0xC);
VALIDATE_OFFSET(CDoor, fPrevAngle, 0x10);
VALIDATE_OFFSET(CDoor, fVelAngle, 0x14);
VALIDATE_OFFSET(CDoor, vecVelocity, 0x18);
VALIDATE_SIZE(CDoor, 0x24);