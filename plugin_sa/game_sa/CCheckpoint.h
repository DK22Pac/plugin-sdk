/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRGBA.h"
#include "CVector.h"

class PLUGIN_API CCheckpoint {
public:
    unsigned short m_nType;
    bool           m_bIsUsed;
    bool           m_bMustBeRenderedThisFrame;
    int            m_nIdentifier;
    CRGBA          m_colour;
    short          m_nPulsePeriod;
    short          m_nRotateRate;
    CVector        m_vecPosition;
    CVector        m_vecDirection;
    float          m_fPulseFraction;
    float          m_fSize;
    float          m_fDistanceToPlayer; //or CameraRange
    float m_multiSize;

    void Render();
};
VALIDATE_OFFSET(CCheckpoint, m_nType, 0x0);
VALIDATE_OFFSET(CCheckpoint, m_bIsUsed, 0x2);
VALIDATE_OFFSET(CCheckpoint, m_bMustBeRenderedThisFrame, 0x3);
VALIDATE_OFFSET(CCheckpoint, m_nIdentifier, 0x4);
VALIDATE_OFFSET(CCheckpoint, m_colour, 0x8);
VALIDATE_OFFSET(CCheckpoint, m_nPulsePeriod, 0xC);
VALIDATE_OFFSET(CCheckpoint, m_nRotateRate, 0xE);
VALIDATE_OFFSET(CCheckpoint, m_vecPosition, 0x10);
VALIDATE_OFFSET(CCheckpoint, m_vecDirection, 0x1C);
VALIDATE_OFFSET(CCheckpoint, m_fPulseFraction, 0x28);
VALIDATE_OFFSET(CCheckpoint, m_fSize, 0x2C);
VALIDATE_OFFSET(CCheckpoint, m_fDistanceToPlayer, 0x30);
VALIDATE_OFFSET(CCheckpoint, m_multiSize, 0x34);
VALIDATE_SIZE(CCheckpoint, 0x38);