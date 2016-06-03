#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFollowLeaderAnyMeans : public CTaskComplex {
protected:
    CTaskComplexFollowLeaderAnyMeans(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowLeaderAnyMeans, 0x);