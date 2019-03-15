/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct CTrainCamNode {
    CVector m_vecPos;
    CVector m_vecTarget;
    CVector m_vecInfBound;
    CVector m_vecSupBound;
    float field_48;
    float m_fNearPlane;
};

VALIDATE_SIZE(CTrainCamNode, 0x38);
