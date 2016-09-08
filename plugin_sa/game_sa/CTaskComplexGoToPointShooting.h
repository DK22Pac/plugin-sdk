/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexGoToPointAiming.h"

class PLUGIN_API CTaskComplexGoToPointShooting : public CTaskComplexGoToPointAiming {
protected:
    CTaskComplexGoToPointShooting(plugin::dummy_func_t a) : CTaskComplexGoToPointAiming(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointShooting, 0x);