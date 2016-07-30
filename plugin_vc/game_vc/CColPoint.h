/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CVector.h"

class CColPoint {
public:
    CVector  m_vPoint;
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

VALIDATE_SIZE(CColPoint, 0x28);