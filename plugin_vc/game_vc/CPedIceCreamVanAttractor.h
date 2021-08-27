/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedAttractor.h"

class PLUGIN_API CPedIceCreamVanAttractor : public CPedAttractor {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedIceCreamVanAttractor)
public:

    // virtual function #0 (not overriden)


    // virtual function #1 (destructor)

    SUPPORTED_10EN_11EN_STEAM ePedAttractorType GetType();
    SUPPORTED_10EN_11EN_STEAM void UpdatePedStateOnDeparture(CPed *ped);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

};

VTABLE_DESC(CPedIceCreamVanAttractor, 0x6DBE10, 8);
VALIDATE_SIZE(CPedIceCreamVanAttractor, 0x64);

#include "meta/meta.CPedIceCreamVanAttractor.h"
