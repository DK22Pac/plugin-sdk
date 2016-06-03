#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimplePlayerOnFire : public CTaskSimple {
protected:
    CTaskSimplePlayerOnFire(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePlayerOnFire, 0x);