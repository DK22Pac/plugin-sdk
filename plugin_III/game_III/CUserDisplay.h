/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "COnscreenTimer.h"
#include "CPager.h"
#include "CPlaceName.h"
#include "CCurrentVehicle.h"

class PLUGIN_API CUserDisplay {
public:
    SUPPORTED_10EN_11EN_STEAM static COnscreenTimer &OnscnTimer;
    SUPPORTED_10EN_11EN_STEAM static CPager &Pager;
    SUPPORTED_10EN_11EN_STEAM static CPlaceName &PlaceName;
    SUPPORTED_10EN_11EN_STEAM static CCurrentVehicle &CurrentVehicle;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Process();
};

#include "meta/meta.CUserDisplay.h"
