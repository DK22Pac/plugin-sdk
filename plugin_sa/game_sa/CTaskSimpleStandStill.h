/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleStandStill : public CTaskSimple {
protected:
    CTaskSimpleStandStill(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CTaskSimpleStandStill(int nTime, bool arg2, bool arg3, float arg4 );   
};

//VALIDATE_SIZE(CTaskSimpleStandStill, 0x);