/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunTimedAnim.h"

class PLUGIN_API CTaskSimpleHandsUp : public CTaskSimpleRunTimedAnim {
protected:
    CTaskSimpleHandsUp(plugin::dummy_func_t a) : CTaskSimpleRunTimedAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHandsUp, 0x);