/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct tFlyingHandlingData {
    int m_dwVehicleId;
    float fThrust; 
    float fThrustFallOff; 
    float fYaw; 
    float fYawStab; 
    float fSideSlip; 
    float fRoll; 
    float fRollStab;
    float fPitch; 
    float fPitchStab; 
    float fFormLift; 
    float fAttackLift;
    float fMoveRes; 
    CVector vecTurnRes; 
    CVector vecSpeedRes;
};

VALIDATE_SIZE(tFlyingHandlingData, 0x4C);