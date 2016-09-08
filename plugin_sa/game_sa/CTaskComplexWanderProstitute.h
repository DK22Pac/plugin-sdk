/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexWanderStandard.h"

class PLUGIN_API CTaskComplexWanderProstitute : public CTaskComplexWanderStandard {
protected:
    CTaskComplexWanderProstitute(plugin::dummy_func_t a) : CTaskComplexWanderStandard(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWanderProstitute, 0x);