#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexGoToPointAndStandStill.h"

class PLUGIN_API CTaskComplexGoToPointAndStandStillTimed : public CTaskComplexGoToPointAndStandStill {
protected:
    CTaskComplexGoToPointAndStandStillTimed(plugin::dummy_func_t a) : CTaskComplexGoToPointAndStandStill(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointAndStandStillTimed, 0x);