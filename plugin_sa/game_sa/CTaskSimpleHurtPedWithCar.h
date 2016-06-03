#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleHurtPedWithCar : public CTaskSimple {
protected:
    CTaskSimpleHurtPedWithCar(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHurtPedWithCar, 0x);