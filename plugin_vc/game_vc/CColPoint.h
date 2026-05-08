/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CColPoint {
public:
    CVector  m_vecPoint;
    float field_C;
    CVector m_vNormal;
    float field_1C;
    unsigned char m_nSurfaceTypeA;
    unsigned char m_nPieceTypeA;
    unsigned char m_nSurfaceTypeB;
    unsigned char m_nPieceTypeB;
    int field_24;

    CColPoint& operator=(CColPoint const& right);
};
VALIDATE_OFFSET(CColPoint, m_vecPoint, 0x0);
VALIDATE_OFFSET(CColPoint, field_C, 0xC);
VALIDATE_OFFSET(CColPoint, m_vNormal, 0x10);
VALIDATE_OFFSET(CColPoint, field_1C, 0x1C);
VALIDATE_OFFSET(CColPoint, m_nSurfaceTypeA, 0x20);
VALIDATE_OFFSET(CColPoint, m_nPieceTypeA, 0x21);
VALIDATE_OFFSET(CColPoint, m_nSurfaceTypeB, 0x22);
VALIDATE_OFFSET(CColPoint, m_nPieceTypeB, 0x23);
VALIDATE_OFFSET(CColPoint, field_24, 0x24);
VALIDATE_SIZE(CColPoint, 0x28);