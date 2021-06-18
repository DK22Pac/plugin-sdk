/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBox.h"
#include "tColSurface.h"

class PLUGIN_API CColBox : public CBox {
public:
    tColSurface m_surface;

    SUPPORTED_10EN_11EN_STEAM void operator=(CColBox const &right);

    SUPPORTED_10EN_11EN_STEAM void Set(CVector &min, CVector &max, unsigned char material, unsigned char flag);
};

VALIDATE_SIZE(CColBox, 0x1C);

#include "meta/meta.CColBox.h"
