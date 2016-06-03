#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexInvestigateDeadPed : public CTaskComplex {
protected:
    CTaskComplexInvestigateDeadPed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexInvestigateDeadPed, 0x);