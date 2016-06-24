#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimplePause : public CTaskSimple {
protected:
    CTaskSimplePause(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePause, 0x);