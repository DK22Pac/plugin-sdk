/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CBox.h"
#include "tColSurface.h"

class CColBox : public CBox {
public:
    tColSurface m_surface;

    void Set(CVector const& sup, CVector const& inf, unsigned char material, unsigned char flags);
    void operator=(CColBox const& right);
};

VALIDATE_SIZE(CColBox, 0x1C);