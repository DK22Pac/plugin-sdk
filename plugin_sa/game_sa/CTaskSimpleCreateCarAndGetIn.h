#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCreateCarAndGetIn : public CTaskSimple {
protected:
    CTaskSimpleCreateCarAndGetIn(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCreateCarAndGetIn, 0x);