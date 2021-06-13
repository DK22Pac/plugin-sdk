/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CZone.h"

class PLUGIN_API CPlaceName {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPlaceName)

public:
    CZone *m_pZone;
    CZone *m_pZoneOther;
    short m_nAdditionalTimer;

    SUPPORTED_10EN_11EN_STEAM void Display();
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void Process();
};

VALIDATE_SIZE(CPlaceName, 0xC);

#include "meta/meta.CPlaceName.h"
