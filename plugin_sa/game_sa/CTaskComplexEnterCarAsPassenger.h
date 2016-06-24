#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexEnterCar.h"

class PLUGIN_API CTaskComplexEnterCarAsPassenger : public CTaskComplexEnterCar {
protected:
    CTaskComplexEnterCarAsPassenger(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterCarAsPassenger, 0x);