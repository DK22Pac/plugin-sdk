/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CWorld {
public:
    int FindGroundZForCoord(int* z, int x, int y);
};
VALIDATE_SIZE(CWorld, 0x1);

extern CWorld** gWorld;
extern CWorld* GetWorld();
