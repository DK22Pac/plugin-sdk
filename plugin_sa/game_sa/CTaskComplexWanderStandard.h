/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskComplexWanderStandard : public CTaskComplexWander {
protected:
    CTaskComplexWanderStandard(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    CTaskComplexWanderStandard(int arg0, unsigned char arg1, bool arg2);
};

//VALIDATE_SIZE(CTaskComplexWanderStandard, 0x);