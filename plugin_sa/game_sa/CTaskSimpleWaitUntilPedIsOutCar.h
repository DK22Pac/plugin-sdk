#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleWaitUntilPedIsOutCar : public CTaskSimple {
protected:
    CTaskSimpleWaitUntilPedIsOutCar(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleWaitUntilPedIsOutCar, 0x);