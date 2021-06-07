/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"

class PLUGIN_API CCivilianPed {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCivilianPed)

public:
    CPed ped; //!<  isbase:true

    // virtual function #0 (destructor)


    // virtual function #1 (not found)


    // virtual function #2 (not found)


    // virtual function #3 (not found)


    // virtual function #4 (not found)


    // virtual function #5 (not found)


    // virtual function #6 (not found)


    // virtual function #7 (not found)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not found)


    // virtual function #10 (not found)


    // virtual function #11 (not found)


    // virtual function #12 (not found)


    // virtual function #13 (not found)


    // virtual function #14 (not found)


    // virtual function #15 (not found)


    // virtual function #16 (not found)


    // virtual function #17 (not found)


    // virtual function #18 (not found)


    SUPPORTED_10EN_11EN_STEAM void CivilianAI();
};

VTABLE_DESC(CCivilianPed, 0x5F819C, 19);
VALIDATE_SIZE(CCivilianPed, 0x53C);

#include "meta/meta.CCivilianPed.h"
