/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVector.h"

class CStoredCollPoly {
public:
    CVector m_aVertices[3]; // triangle vertices
    bool m_bIsActual;
private:
    char _pad[3];
};

VALIDATE_SIZE(CStoredCollPoly, 0x28);