#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoToPointAndStandStill : public CTaskComplex {
protected:
    CTaskComplexGoToPointAndStandStill(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointAndStandStill, 0x);