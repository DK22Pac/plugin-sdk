/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBuilding.h"

class PLUGIN_API CTreadable : public CBuilding {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTreadable)

public:
    short m_aNodeIndicesCarNodes[12];
    short m_aNodeIndicesPedNodes[12];

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)


    // virtual function #8 (not overriden)


    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)


    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)

    SUPPORTED_10EN_11EN_STEAM bool GetIsATreadable();
};

VTABLE_DESC(CTreadable, 0x5EBFB4, 18);
VALIDATE_SIZE(CTreadable, 0x94);

#include "meta/meta.CTreadable.h"
