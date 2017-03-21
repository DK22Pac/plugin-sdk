/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CVector.h"

class CBox {
public:
    CVector m_vecSup;
    CVector m_vecInf;

    static void Set(CVector const& sup, CVector const& inf);
};

VALIDATE_SIZE(CBox, 0x18);