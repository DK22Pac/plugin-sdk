/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"

class CProjectile : public CObject {
public:
    CProjectile(int modelIndex);
};

VALIDATE_SIZE(CProjectile, 0x198);