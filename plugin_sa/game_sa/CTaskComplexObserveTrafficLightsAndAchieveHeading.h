#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexObserveTrafficLightsAndAchieveHeading : public CTaskComplex {
protected:
    CTaskComplexObserveTrafficLightsAndAchieveHeading(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexObserveTrafficLightsAndAchieveHeading, 0x);