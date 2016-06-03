#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleDie.h"

class PLUGIN_API CTaskSimpleDieInCar : public CTaskSimpleDie {
protected:
    CTaskSimpleDieInCar(plugin::dummy_func_t a) : CTaskSimpleDie(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleDieInCar, 0x);