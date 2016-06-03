#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleBikeJacked : public CTaskSimple {
protected:
    CTaskSimpleBikeJacked(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleBikeJacked, 0x);