#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexFallAndStayDown : public CTaskComplex {
protected:
    CTaskComplexFallAndStayDown(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFallAndStayDown, 0x);