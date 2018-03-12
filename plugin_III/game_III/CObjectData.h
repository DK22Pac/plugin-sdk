/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"


class CObjectData {
public:
    float m_fMass;
    float m_fTurnMass;
    float m_fAirResistance;
    float m_fElasticity;
    float m_fBuoyancy;
    float m_fUprootLimit;
    float m_fCollisionDamageMultiplier;
    char  m_bCollisionDamageEffect;
    bool  m_bSpecialCollisionResponseCases;
    bool  m_bCameraToAvoidThisObject;
    
    static void Initialise(char* filename);
    static void SetObjectData(int modelIndex, CObject& object);
};

VALIDATE_SIZE(CObjectData, 0x20);
