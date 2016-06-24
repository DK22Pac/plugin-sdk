#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleSetCharDecisionMaker : public CTaskSimple {
protected:
    CTaskSimpleSetCharDecisionMaker(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleSetCharDecisionMaker, 0x);