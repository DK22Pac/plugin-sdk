/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct PLUGIN_API tBoatHandlingData {
    int m_nVehicleId;
    float m_fThrustY;
    float m_fThrustZ;
    float m_fThrustAppZ;
    float m_fAqPlaneForce;
    float m_fAqPlaneLimit;
    float m_fAqPlaneOffset;
    float m_fWaveAudioMult;
    float m_fLookLRBehindCamHeight;
    CVector m_vecMoveRes;
    CVector m_vecTurnRes;
};
VALIDATE_OFFSET(tBoatHandlingData, m_nVehicleId, 0x0);
VALIDATE_OFFSET(tBoatHandlingData, m_fThrustY, 0x4);
VALIDATE_OFFSET(tBoatHandlingData, m_fThrustZ, 0x8);
VALIDATE_OFFSET(tBoatHandlingData, m_fThrustAppZ, 0xC);
VALIDATE_OFFSET(tBoatHandlingData, m_fAqPlaneForce, 0x10);
VALIDATE_OFFSET(tBoatHandlingData, m_fAqPlaneLimit, 0x14);
VALIDATE_OFFSET(tBoatHandlingData, m_fAqPlaneOffset, 0x18);
VALIDATE_OFFSET(tBoatHandlingData, m_fWaveAudioMult, 0x1C);
VALIDATE_OFFSET(tBoatHandlingData, m_fLookLRBehindCamHeight, 0x20);
VALIDATE_OFFSET(tBoatHandlingData, m_vecMoveRes, 0x24);
VALIDATE_OFFSET(tBoatHandlingData, m_vecTurnRes, 0x30);
VALIDATE_SIZE(tBoatHandlingData, 0x3C);
