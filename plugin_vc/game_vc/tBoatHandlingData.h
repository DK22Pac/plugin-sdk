/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"


struct tBoatHandlingData {
    int m_dwVehicleId;
    float   m_fThrustY;
    float   m_fThrustZ;
    float   m_fThrustAppZ;
    float   m_fAqPlaneForce;
    float   m_fAqPlaneLimit;
    float   m_fAqPlaneOffset;
    float   m_fWaveAudioMult;
    float   m_fLookLRBehindCamHeight;
    CVector m_vMoveRes;
    CVector m_vTurnRes;
};
VALIDATE_OFFSET(tBoatHandlingData, m_dwVehicleId, 0x0);
VALIDATE_OFFSET(tBoatHandlingData, m_fThrustY, 0x4);
VALIDATE_OFFSET(tBoatHandlingData, m_fThrustZ, 0x8);
VALIDATE_OFFSET(tBoatHandlingData, m_fThrustAppZ, 0xC);
VALIDATE_OFFSET(tBoatHandlingData, m_fAqPlaneForce, 0x10);
VALIDATE_OFFSET(tBoatHandlingData, m_fAqPlaneLimit, 0x14);
VALIDATE_OFFSET(tBoatHandlingData, m_fAqPlaneOffset, 0x18);
VALIDATE_OFFSET(tBoatHandlingData, m_fWaveAudioMult, 0x1C);
VALIDATE_OFFSET(tBoatHandlingData, m_fLookLRBehindCamHeight, 0x20);
VALIDATE_OFFSET(tBoatHandlingData, m_vMoveRes, 0x24);
VALIDATE_OFFSET(tBoatHandlingData, m_vTurnRes, 0x30);
VALIDATE_SIZE(tBoatHandlingData, 0x3C);