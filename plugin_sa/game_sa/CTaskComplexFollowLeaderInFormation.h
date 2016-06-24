#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFollowLeaderInFormation : public CTaskComplex {
protected:
    CTaskComplexFollowLeaderInFormation(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowLeaderInFormation, 0x);