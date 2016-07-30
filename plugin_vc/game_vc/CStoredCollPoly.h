/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CVector.h"

class CStoredCollPoly {
public:
    CVector m_aMeshVertices[3]; // triangle vertices
    bool m_bIsActual;
    char _pad[3];
};

VALIDATE_SIZE(CStoredCollPoly, 0x28);