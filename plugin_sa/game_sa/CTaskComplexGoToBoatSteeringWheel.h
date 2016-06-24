#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoToBoatSteeringWheel : public CTaskComplex {
protected:
    CTaskComplexGoToBoatSteeringWheel(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToBoatSteeringWheel, 0x);