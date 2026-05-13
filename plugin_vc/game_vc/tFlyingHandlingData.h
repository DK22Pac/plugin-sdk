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
VALIDATE_OFFSET(tFlyingHandlingData, m_dwVehicleId, 0x0);
VALIDATE_OFFSET(tFlyingHandlingData, fThrust, 0x4);
VALIDATE_OFFSET(tFlyingHandlingData, fThrustFallOff, 0x8);
VALIDATE_OFFSET(tFlyingHandlingData, fYaw, 0xC);
VALIDATE_OFFSET(tFlyingHandlingData, fYawStab, 0x10);
VALIDATE_OFFSET(tFlyingHandlingData, fSideSlip, 0x14);
VALIDATE_OFFSET(tFlyingHandlingData, fRoll, 0x18);
VALIDATE_OFFSET(tFlyingHandlingData, fRollStab, 0x1C);
VALIDATE_OFFSET(tFlyingHandlingData, fPitch, 0x20);
VALIDATE_OFFSET(tFlyingHandlingData, fPitchStab, 0x24);
VALIDATE_OFFSET(tFlyingHandlingData, fFormLift, 0x28);
VALIDATE_OFFSET(tFlyingHandlingData, fAttackLift, 0x2C);
VALIDATE_OFFSET(tFlyingHandlingData, fMoveRes, 0x30);
VALIDATE_OFFSET(tFlyingHandlingData, vecTurnRes, 0x34);
VALIDATE_OFFSET(tFlyingHandlingData, vecSpeedRes, 0x40);
VALIDATE_SIZE(tFlyingHandlingData, 0x4C);