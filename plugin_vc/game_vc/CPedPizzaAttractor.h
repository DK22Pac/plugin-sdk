/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedAttractor.h"

class PLUGIN_API CPedPizzaAttractor : public CPedAttractor {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedPizzaAttractor)
public:

    SUPPORTED_10EN_11EN_STEAM float GetHeadOfQueueWaitTime();

    // virtual function #1 (destructor)

    SUPPORTED_10EN_11EN_STEAM ePedAttractorType GetType();
    SUPPORTED_10EN_11EN_STEAM void UpdatePedStateOnDeparture(CPed *ped);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

};

VTABLE_DESC(CPedPizzaAttractor, 0x6DBE60, 8);
VALIDATE_SIZE(CPedPizzaAttractor, 0x64);

#include "meta/meta.CPedPizzaAttractor.h"
