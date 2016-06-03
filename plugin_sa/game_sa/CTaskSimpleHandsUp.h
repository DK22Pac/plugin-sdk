#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleRunTimedAnim.h"

class PLUGIN_API CTaskSimpleHandsUp : public CTaskSimpleRunTimedAnim {
protected:
    CTaskSimpleHandsUp(plugin::dummy_func_t a) : CTaskSimpleRunTimedAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHandsUp, 0x);