#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWalkRoundFire : public CTaskComplex {
protected:
    CTaskComplexWalkRoundFire(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWalkRoundFire, 0x);