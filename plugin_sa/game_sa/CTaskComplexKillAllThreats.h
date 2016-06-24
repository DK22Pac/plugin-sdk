#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexKillAllThreats : public CTaskComplex {
protected:
    CTaskComplexKillAllThreats(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexKillAllThreats, 0x);