#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarAlign : public CTaskSimple {
protected:
    CTaskSimpleCarAlign(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarAlign, 0x);