#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleWaitUntilPedIsInCar : public CTaskSimple {
protected:
    CTaskSimpleWaitUntilPedIsInCar(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleWaitUntilPedIsInCar, 0x);