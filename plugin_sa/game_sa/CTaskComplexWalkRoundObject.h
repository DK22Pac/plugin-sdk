#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWalkRoundObject : public CTaskComplex {
protected:
    CTaskComplexWalkRoundObject(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWalkRoundObject, 0x);