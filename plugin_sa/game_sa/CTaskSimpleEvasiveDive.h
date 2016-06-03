#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleEvasiveDive : public CTaskSimple {
protected:
    CTaskSimpleEvasiveDive(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleEvasiveDive, 0x);