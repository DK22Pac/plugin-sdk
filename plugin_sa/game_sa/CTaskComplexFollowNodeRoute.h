#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFollowNodeRoute : public CTaskComplex {
protected:
    CTaskComplexFollowNodeRoute(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowNodeRoute, 0x);