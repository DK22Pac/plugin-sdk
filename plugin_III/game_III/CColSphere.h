/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CSphere.h"
#include "tColSurface.h"

class CColSphere : public CSphere {
public:
    tColSurface m_surface;

    void Set(float radius, CVector const& center, unsigned char material, unsigned char flags);
};

VALIDATE_SIZE(CColSphere, 0x14);