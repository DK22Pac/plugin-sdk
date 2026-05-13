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
VALIDATE_OFFSET(CColPoint, m_vecPoint, 0x0);
VALIDATE_OFFSET(CColPoint, m_fPointOffsetZ, 0xC);
VALIDATE_OFFSET(CColPoint, m_vecNormal, 0x10);
VALIDATE_OFFSET(CColPoint, m_fNormalOffsetZ, 0x1C);
VALIDATE_OFFSET(CColPoint, m_nSurfaceTypeA, 0x20);
VALIDATE_OFFSET(CColPoint, m_nPieceTypeA, 0x21);
VALIDATE_OFFSET(CColPoint, m_nSurfaceTypeB, 0x22);
VALIDATE_OFFSET(CColPoint, m_nPieceTypeB, 0x23);
VALIDATE_OFFSET(CColPoint, m_fCollisionRadius, 0x24);
VALIDATE_SIZE(CColPoint, 0x28);

#include "meta/meta.CColPoint.h"
