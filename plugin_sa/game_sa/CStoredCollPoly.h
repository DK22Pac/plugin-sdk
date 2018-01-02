/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

class PLUGIN_API CStoredCollPoly {
    CVector      m_aMeshVertices[3]; // triangle vertices
    bool         m_bIsActual;
    unsigned int m_nLighting;
};

VALIDATE_SIZE(CStoredCollPoly, 0x2C);
