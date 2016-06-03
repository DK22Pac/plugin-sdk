#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexInvestigateDisturbance : public CTaskComplex {
protected:
    CTaskComplexInvestigateDisturbance(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexInvestigateDisturbance, 0x);