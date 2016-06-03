#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexMoveBackAndJump : public CTaskComplex {
protected:
    CTaskComplexMoveBackAndJump(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexMoveBackAndJump, 0x);