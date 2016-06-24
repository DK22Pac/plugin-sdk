#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoToPointAndStandStillAndAchieveHeading : public CTaskComplex {
protected:
    CTaskComplexGoToPointAndStandStillAndAchieveHeading(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointAndStandStillAndAchieveHeading, 0x);