#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunTimedAnim.h"

class PLUGIN_API CTaskSimpleChat : public CTaskSimpleRunTimedAnim {
protected:
    CTaskSimpleChat(plugin::dummy_func_t a) : CTaskSimpleRunTimedAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleChat, 0x);