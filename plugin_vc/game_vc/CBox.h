/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CBox {
public:
    CVector m_vecMin;
    CVector m_vecMax;

    static void Set(CVector const& vecMin, CVector const& vecMax);
};

VALIDATE_SIZE(CBox, 0x18);