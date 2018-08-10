/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleDuckToggle : public CTaskSimple {
protected:
    CTaskSimpleDuckToggle(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    int m_nToggleType; // -1 toggle , 0 UnSet , 1 Set



    // -1 toggle , 0 UnSet , 1 Set
    CTaskSimpleDuckToggle(int toggleType);
    
};

VALIDATE_SIZE(CTaskSimpleDuckToggle, 0xC);
