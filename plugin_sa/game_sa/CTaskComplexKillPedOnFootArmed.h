#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexKillPedOnFootArmed : public CTaskComplex {
protected:
    CTaskComplexKillPedOnFootArmed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexKillPedOnFootArmed, 0x);