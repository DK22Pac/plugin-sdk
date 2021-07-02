/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CColPoint {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CColPoint)

public:
    CVector m_vecPoint;
    float m_fPointOffsetZ;
    CVector m_vecNormal;
    float m_fNormalOffsetZ;
    unsigned char m_nSurfaceTypeA;
    unsigned char m_nPieceTypeA;
    unsigned char m_nSurfaceTypeB;
    unsigned char m_nPieceTypeB;
    float m_fCollisionRadius;

    void operator=(CColPoint const &right);
};

VALIDATE_SIZE(CColPoint, 0x28);

#include "meta/meta.CColPoint.h"
