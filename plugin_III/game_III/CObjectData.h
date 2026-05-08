/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"

struct PLUGIN_API CObjectInfo {
    float m_fMass;
    float m_fTurnMass;
    float m_fAirResistance;
    float m_fElasticity;
    float m_fBuoyancy;
    float m_fUprootLimit;
    float m_fCollisionDamageMultiplier;
    unsigned char m_nCollisionDamageEffect;
    unsigned char m_nSpecialCollisionResponseCases;
    bool m_bCameraToAvoidThisObject;
};
VALIDATE_OFFSET(CObjectInfo, m_fMass, 0x0);
VALIDATE_OFFSET(CObjectInfo, m_fTurnMass, 0x4);
VALIDATE_OFFSET(CObjectInfo, m_fAirResistance, 0x8);
VALIDATE_OFFSET(CObjectInfo, m_fElasticity, 0xC);
VALIDATE_OFFSET(CObjectInfo, m_fBuoyancy, 0x10);
VALIDATE_OFFSET(CObjectInfo, m_fUprootLimit, 0x14);
VALIDATE_OFFSET(CObjectInfo, m_fCollisionDamageMultiplier, 0x18);
VALIDATE_OFFSET(CObjectInfo, m_nCollisionDamageEffect, 0x1C);
VALIDATE_OFFSET(CObjectInfo, m_nSpecialCollisionResponseCases, 0x1D);
VALIDATE_OFFSET(CObjectInfo, m_bCameraToAvoidThisObject, 0x1E);
VALIDATE_SIZE(CObjectInfo, 0x20);

class PLUGIN_API CObjectData {
public:
    SUPPORTED_10EN_11EN_STEAM static CObjectInfo(&ms_aObjectInfo)[168]; // static CObjectInfo ms_aObjectInfo[168]

    SUPPORTED_10EN_11EN_STEAM static void Initialise(char const *fileName);
    SUPPORTED_10EN_11EN_STEAM static void SetObjectData(int modelIndex, CObject &object);
};
VALIDATE_SIZE(CObjectData, 0x1);

#include "meta/meta.CObjectData.h"
