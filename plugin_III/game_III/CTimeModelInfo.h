/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSimpleModelInfo.h"

class PLUGIN_API CTimeModelInfo : public CSimpleModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTimeModelInfo)

public:
    int m_nStartHour;
    int m_nEndHour;
    int m_nRelatedTimeModelIndex;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    SUPPORTED_10EN_11EN_STEAM CTimeModelInfo *FindOtherTimeModel();
};

VTABLE_DESC(CTimeModelInfo, 0x5FDFB8, 6);
VALIDATE_SIZE(CTimeModelInfo, 0x58);

#include "meta/meta.CTimeModelInfo.h"
