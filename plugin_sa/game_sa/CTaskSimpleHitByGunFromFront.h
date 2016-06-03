#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleRunAnim.h"

class PLUGIN_API CTaskSimpleHitByGunFromFront : public CTaskSimpleRunAnim {
protected:
    CTaskSimpleHitByGunFromFront(plugin::dummy_func_t a) : CTaskSimpleRunAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHitByGunFromFront, 0x);