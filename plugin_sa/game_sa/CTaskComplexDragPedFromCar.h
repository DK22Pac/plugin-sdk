#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexEnterCar.h"

class PLUGIN_API CTaskComplexDragPedFromCar : public CTaskComplexEnterCar {
protected:
    CTaskComplexDragPedFromCar(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDragPedFromCar, 0x);