/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"
#include "RenderWare.h"

class PLUGIN_API CXtraCompsModelInfo : public CClumpModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CXtraCompsModelInfo)

public:
    unsigned int m_nModelIndex;

    // virtual function #0 (destructor)

    SUPPORTED_10EN_11EN_STEAM void Shutdown();

    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM RwObject *CreateInstance();

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetClump(RpClump *clump);
};

VTABLE_DESC(CXtraCompsModelInfo, 0x5FE044, 7);
VALIDATE_SIZE(CXtraCompsModelInfo, 0x38);

#include "meta/meta.CXtraCompsModelInfo.h"
