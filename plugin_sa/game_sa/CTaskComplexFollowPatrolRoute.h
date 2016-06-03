#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFollowPatrolRoute : public CTaskComplex {
protected:
    CTaskComplexFollowPatrolRoute(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowPatrolRoute, 0x);