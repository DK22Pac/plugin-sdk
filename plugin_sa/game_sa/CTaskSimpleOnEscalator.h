#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleStandStill.h"

class PLUGIN_API CTaskSimpleOnEscalator : public CTaskSimpleStandStill {
protected:
    CTaskSimpleOnEscalator(plugin::dummy_func_t a) : CTaskSimpleStandStill(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleOnEscalator, 0x);