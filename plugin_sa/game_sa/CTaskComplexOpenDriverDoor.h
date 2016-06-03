#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexEnterCar.h"

class PLUGIN_API CTaskComplexOpenDriverDoor : public CTaskComplexEnterCar {
protected:
    CTaskComplexOpenDriverDoor(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexOpenDriverDoor, 0x);