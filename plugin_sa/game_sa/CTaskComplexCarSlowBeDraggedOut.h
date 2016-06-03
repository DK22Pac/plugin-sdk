#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexCarSlowBeDraggedOut : public CTaskComplex {
protected:
    CTaskComplexCarSlowBeDraggedOut(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarSlowBeDraggedOut, 0x);