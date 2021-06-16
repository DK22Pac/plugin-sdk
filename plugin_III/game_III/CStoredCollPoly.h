/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CStoredCollPoly {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CStoredCollPoly)

public:
    CVector m_avecVertices[3]; //!< triangle vertices
    bool m_bValid;
};

VALIDATE_SIZE(CStoredCollPoly, 0x28);

#include "meta/meta.CStoredCollPoly.h"
