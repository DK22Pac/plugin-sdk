#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWalkRoundBuildingAttempt : public CTaskComplex {
protected:
    CTaskComplexWalkRoundBuildingAttempt(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWalkRoundBuildingAttempt, 0x);