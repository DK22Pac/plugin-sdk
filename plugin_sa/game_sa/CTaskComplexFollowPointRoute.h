#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFollowPointRoute : public CTaskComplex {
protected:
    CTaskComplexFollowPointRoute(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowPointRoute, 0x);