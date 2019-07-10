/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSphere.h"
#include "tColSurface.h"
#include "CVector.h"

class PLUGIN_API CColSphere : public CSphere {
public:
    tColSurface m_surface;

    SUPPORTED_10EN_11EN_STEAM void Set(float radius, CVector &center, unsigned char material, unsigned char flag);
};

VALIDATE_SIZE(CColSphere, 0x14);

#include "meta/meta.CColSphere.h"
