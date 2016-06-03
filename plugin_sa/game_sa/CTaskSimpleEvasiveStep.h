#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleEvasiveStep : public CTaskSimple {
protected:
    CTaskSimpleEvasiveStep(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleEvasiveStep, 0x);