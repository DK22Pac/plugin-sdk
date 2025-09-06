/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"

class PLUGIN_API CProjectile : public CObject {
public:
    CProjectile(int index);
};

VALIDATE_SIZE(CProjectile, 0x17C);