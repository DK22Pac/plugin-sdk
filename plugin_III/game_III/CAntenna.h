/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CAntenna {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAntenna)

public:
    bool m_bIsActive;
    bool m_bIsUpdatedLastFrame;
    unsigned int m_nId;
    float m_fSegmentLength;
    CVector m_avecPos[6];
    CVector m_avecSpeed[6];

    SUPPORTED_10EN_11EN_STEAM void Update(CVector dir, CVector pos);
};
VALIDATE_OFFSET(CAntenna, m_bIsActive, 0x0);
VALIDATE_OFFSET(CAntenna, m_bIsUpdatedLastFrame, 0x1);
VALIDATE_OFFSET(CAntenna, m_nId, 0x4);
VALIDATE_OFFSET(CAntenna, m_fSegmentLength, 0x8);
VALIDATE_OFFSET(CAntenna, m_avecPos, 0xC);
VALIDATE_OFFSET(CAntenna, m_avecSpeed, 0x54);
VALIDATE_SIZE(CAntenna, 0x9C);

#include "meta/meta.CAntenna.h"
