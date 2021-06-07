/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"

class PLUGIN_API CInstance : public CPlaceable {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CInstance)

public:
    unsigned int m_nModelIndex;

    // virtual function #0 (destructor)


    SUPPORTED_10EN_11EN_STEAM void Shutdown();
};

VTABLE_DESC(CInstance, 0x5FE068, 1);
VALIDATE_SIZE(CInstance, 0x50);

#include "meta/meta.CInstance.h"
