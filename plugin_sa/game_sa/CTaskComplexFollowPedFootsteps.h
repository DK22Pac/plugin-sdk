#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFollowPedFootsteps : public CTaskComplex {
protected:
    CTaskComplexFollowPedFootsteps(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowPedFootsteps, 0x);