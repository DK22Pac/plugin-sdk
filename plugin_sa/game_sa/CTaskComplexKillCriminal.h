#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexKillCriminal : public CTaskComplex {
protected:
    CTaskComplexKillCriminal(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexKillCriminal, 0x);