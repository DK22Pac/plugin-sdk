#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexEnterCar.h"

class PLUGIN_API CTaskComplexEnterCarAsDriver : public CTaskComplexEnterCar {
protected:
    CTaskComplexEnterCarAsDriver(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterCarAsDriver, 0x);