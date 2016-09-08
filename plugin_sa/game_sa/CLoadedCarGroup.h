/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

class PLUGIN_API CLoadedCarGroup {
public:
    short m_members[22]; // model ids
    short field_2C;
};

VALIDATE_SIZE(CLoadedCarGroup, 0x2E);