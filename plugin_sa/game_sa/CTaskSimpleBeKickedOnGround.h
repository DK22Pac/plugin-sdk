#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleBeKickedOnGround : public CTaskSimple {
protected:
    CTaskSimpleBeKickedOnGround(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleBeKickedOnGround, 0x);