#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleRunNamedAnim.h"

class PLUGIN_API CTaskSimpleSlideToCoord : public CTaskSimpleRunNamedAnim {
protected:
    CTaskSimpleSlideToCoord(plugin::dummy_func_t a) : CTaskSimpleRunNamedAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleSlideToCoord, 0x);