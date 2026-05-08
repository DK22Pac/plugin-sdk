/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct PLUGIN_API tFlyingHandlingData {
    int m_nVehicleId;
    float m_fThrust;
    float m_fThrustFallOff;
    float m_fYaw;
    float m_fYawStab;
    float m_fSideSlip;
    float m_fRoll;
    float m_fRollStab;
    float m_fPitch;
    float m_fPitchStab;
    float m_fFormLift;
    float m_fAttackLift;
    float m_fGearUpR;
    float m_fGearDownL;
    float m_fWindMult;
    float m_fMoveRes;
    CVector m_vecTurnRes;
    CVector m_vecSpeedRes;
};
VALIDATE_OFFSET(tFlyingHandlingData, m_nVehicleId, 0x0);
VALIDATE_OFFSET(tFlyingHandlingData, m_fThrust, 0x4);
VALIDATE_OFFSET(tFlyingHandlingData, m_fThrustFallOff, 0x8);
VALIDATE_OFFSET(tFlyingHandlingData, m_fYaw, 0xC);
VALIDATE_OFFSET(tFlyingHandlingData, m_fYawStab, 0x10);
VALIDATE_OFFSET(tFlyingHandlingData, m_fSideSlip, 0x14);
VALIDATE_OFFSET(tFlyingHandlingData, m_fRoll, 0x18);
VALIDATE_OFFSET(tFlyingHandlingData, m_fRollStab, 0x1C);
VALIDATE_OFFSET(tFlyingHandlingData, m_fPitch, 0x20);
VALIDATE_OFFSET(tFlyingHandlingData, m_fPitchStab, 0x24);
VALIDATE_OFFSET(tFlyingHandlingData, m_fFormLift, 0x28);
VALIDATE_OFFSET(tFlyingHandlingData, m_fAttackLift, 0x2C);
VALIDATE_OFFSET(tFlyingHandlingData, m_fGearUpR, 0x30);
VALIDATE_OFFSET(tFlyingHandlingData, m_fGearDownL, 0x34);
VALIDATE_OFFSET(tFlyingHandlingData, m_fWindMult, 0x38);
VALIDATE_OFFSET(tFlyingHandlingData, m_fMoveRes, 0x3C);
VALIDATE_OFFSET(tFlyingHandlingData, m_vecTurnRes, 0x40);
VALIDATE_OFFSET(tFlyingHandlingData, m_vecSpeedRes, 0x4C);
VALIDATE_SIZE(tFlyingHandlingData, 0x58);
