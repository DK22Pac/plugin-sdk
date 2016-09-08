/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleStandStill.h"

class PLUGIN_API CTaskSimpleWaitUntilAreaCodesMatch : public CTaskSimpleStandStill {
protected:
    CTaskSimpleWaitUntilAreaCodesMatch(plugin::dummy_func_t a) : CTaskSimpleStandStill(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleWaitUntilAreaCodesMatch, 0x);