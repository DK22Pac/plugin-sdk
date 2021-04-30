/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"

class PLUGIN_API CMloModelInfo : public CClumpModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CMloModelInfo)

public:
    float m_fDrawDistance;
    int m_nFirstInstance;
    int m_nLastInstance;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    SUPPORTED_10EN_11EN_STEAM void ConstructClump();
};

VTABLE_DESC(CMloModelInfo, 0x5FDF74, 7);
VALIDATE_SIZE(CMloModelInfo, 0x40);

#include "meta/meta.CMloModelInfo.h"
