/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWorld.h"

CWorld** gWorld = (CWorld**)0x662C08;

CWorld* GetWorld() {
    return *gWorld;
}

int CWorld::FindGroundZForCoord(int* z, int x, int y) {
    return plugin::CallMethodAndReturn<int, 0x46A420, CWorld*, int*, int, int>(this, z, x, y);
}
