#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleClearLookAt : public CTaskSimple {
protected:
    CTaskSimpleClearLookAt(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleClearLookAt, 0x);