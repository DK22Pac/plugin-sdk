#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexSeekCoverUntilTargetDead : public CTaskComplex {
protected:
    CTaskComplexSeekCoverUntilTargetDead(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexSeekCoverUntilTargetDead, 0x);