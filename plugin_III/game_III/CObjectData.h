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

VALIDATE_SIZE(CObjectInfo, 0x20);

class PLUGIN_API CObjectData {
public:
    SUPPORTED_10EN_11EN_STEAM static CObjectInfo(&ms_aObjectInfo)[168]; // static CObjectInfo ms_aObjectInfo[168]

    SUPPORTED_10EN_11EN_STEAM static void Initialise(char const *fileName);
    SUPPORTED_10EN_11EN_STEAM static void SetObjectData(int modelIndex, CObject &object);
};

#include "meta/meta.CObjectData.h"
