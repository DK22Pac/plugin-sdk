#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleDie.h"

class PLUGIN_API CTaskSimpleDrown : public CTaskSimpleDie {
protected:
    CTaskSimpleDrown(plugin::dummy_func_t a) : CTaskSimpleDie(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleDrown, 0x);