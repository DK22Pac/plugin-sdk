#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexEnterCar.h"

class PLUGIN_API CTaskComplexOpenPassengerDoor : public CTaskComplexEnterCar {
protected:
    CTaskComplexOpenPassengerDoor(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexOpenPassengerDoor, 0x);