#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunAnim.h"

class PLUGIN_API CTaskSimpleHitFromBehind : public CTaskSimpleRunAnim {
protected:
    CTaskSimpleHitFromBehind(plugin::dummy_func_t a) : CTaskSimpleRunAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHitFromBehind, 0x);