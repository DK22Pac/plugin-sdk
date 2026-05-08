/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API tBikeHandlingData {
    int m_nVehicleId;
    float m_fLeanFwdCOM;
    float m_fLeanFwdForce;
    float m_fLeanBakCOM;
    float m_fLeanBakForce;
    float m_fMaxLean;
    float m_fFullAnimLean;
    float m_fDesLean;
    float m_fSpeedSteer;
    float m_fSlipSteer;
    float m_fNoPlayerCOMz;
    float m_fWheelieAng;
    float m_fStoppieAng;
    float m_fWheelieSteer;
    float m_fWheelieStabMult;
    float m_fStoppieStabMult;
};
VALIDATE_OFFSET(tBikeHandlingData, m_nVehicleId, 0x0);
VALIDATE_OFFSET(tBikeHandlingData, m_fLeanFwdCOM, 0x4);
VALIDATE_OFFSET(tBikeHandlingData, m_fLeanFwdForce, 0x8);
VALIDATE_OFFSET(tBikeHandlingData, m_fLeanBakCOM, 0xC);
VALIDATE_OFFSET(tBikeHandlingData, m_fLeanBakForce, 0x10);
VALIDATE_OFFSET(tBikeHandlingData, m_fMaxLean, 0x14);
VALIDATE_OFFSET(tBikeHandlingData, m_fFullAnimLean, 0x18);
VALIDATE_OFFSET(tBikeHandlingData, m_fDesLean, 0x1C);
VALIDATE_OFFSET(tBikeHandlingData, m_fSpeedSteer, 0x20);
VALIDATE_OFFSET(tBikeHandlingData, m_fSlipSteer, 0x24);
VALIDATE_OFFSET(tBikeHandlingData, m_fNoPlayerCOMz, 0x28);
VALIDATE_OFFSET(tBikeHandlingData, m_fWheelieAng, 0x2C);
VALIDATE_OFFSET(tBikeHandlingData, m_fStoppieAng, 0x30);
VALIDATE_OFFSET(tBikeHandlingData, m_fWheelieSteer, 0x34);
VALIDATE_OFFSET(tBikeHandlingData, m_fWheelieStabMult, 0x38);
VALIDATE_OFFSET(tBikeHandlingData, m_fStoppieStabMult, 0x3C);
VALIDATE_SIZE(tBikeHandlingData, 0x40);
