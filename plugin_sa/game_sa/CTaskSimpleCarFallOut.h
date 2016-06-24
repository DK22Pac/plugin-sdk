#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarFallOut : public CTaskSimple {
protected:
    CTaskSimpleCarFallOut(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarFallOut, 0x);