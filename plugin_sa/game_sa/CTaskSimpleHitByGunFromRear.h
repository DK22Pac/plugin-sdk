#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleRunAnim.h"

class PLUGIN_API CTaskSimpleHitByGunFromRear : public CTaskSimpleRunAnim {
protected:
    CTaskSimpleHitByGunFromRear(plugin::dummy_func_t a) : CTaskSimpleRunAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHitByGunFromRear, 0x);