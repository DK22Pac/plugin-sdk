/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CStoredCollPoly {
public:
    CVector      m_aMeshVertices[3]; // triangle vertices
    bool         m_bIsActual;
    unsigned int m_nLighting;
};
VALIDATE_OFFSET(CStoredCollPoly, m_aMeshVertices, 0x0);
VALIDATE_OFFSET(CStoredCollPoly, m_bIsActual, 0x24);
VALIDATE_OFFSET(CStoredCollPoly, m_nLighting, 0x28);
VALIDATE_SIZE(CStoredCollPoly, 0x2C);
