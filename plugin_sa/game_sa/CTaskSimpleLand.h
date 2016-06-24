#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleLand : public CTaskSimple {
protected:
    CTaskSimpleLand(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleLand, 0x);