#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleSetPedAsAutoDriver : public CTaskSimple {
protected:
    CTaskSimpleSetPedAsAutoDriver(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleSetPedAsAutoDriver, 0x);