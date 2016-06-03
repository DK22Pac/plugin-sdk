#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexGoToPointAiming.h"

class PLUGIN_API CTaskComplexGoToPointShooting : public CTaskComplexGoToPointAiming {
protected:
    CTaskComplexGoToPointShooting(plugin::dummy_func_t a) : CTaskComplexGoToPointAiming(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointShooting, 0x);