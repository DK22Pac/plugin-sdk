#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleKillPedWithCar : public CTaskSimple {
protected:
    CTaskSimpleKillPedWithCar(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleKillPedWithCar, 0x);