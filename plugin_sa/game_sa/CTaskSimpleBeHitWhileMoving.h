#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleBeHitWhileMoving : public CTaskSimple {
protected:
    CTaskSimpleBeHitWhileMoving(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleBeHitWhileMoving, 0x);