#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexHitPedWithCar : public CTaskComplex {
protected:
    CTaskComplexHitPedWithCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexHitPedWithCar, 0x);