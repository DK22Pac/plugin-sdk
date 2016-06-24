#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleAnim.h"

class PLUGIN_API CTaskSimpleRunAnimLoopedMiddle : public CTaskSimpleAnim {
protected:
    CTaskSimpleRunAnimLoopedMiddle(plugin::dummy_func_t a) : CTaskSimpleAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleRunAnimLoopedMiddle, 0x);