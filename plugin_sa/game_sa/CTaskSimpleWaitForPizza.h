#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleWaitForPizza : public CTaskSimple {
protected:
    CTaskSimpleWaitForPizza(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleWaitForPizza, 0x);