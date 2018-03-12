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

VALIDATE_SIZE(tBoatHandlingData, 0x3C);