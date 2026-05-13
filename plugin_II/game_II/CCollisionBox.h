/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CCollisionBox {
public:
    int x;
    int y;
    int z;
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y4;
    int x4;
    int y3;

public:

};
VALIDATE_OFFSET(CCollisionBox, x, 0x0);
VALIDATE_OFFSET(CCollisionBox, y, 0x4);
VALIDATE_OFFSET(CCollisionBox, z, 0x8);
VALIDATE_OFFSET(CCollisionBox, x1, 0xC);
VALIDATE_OFFSET(CCollisionBox, y1, 0x10);
VALIDATE_OFFSET(CCollisionBox, x2, 0x14);
VALIDATE_OFFSET(CCollisionBox, y2, 0x18);
VALIDATE_OFFSET(CCollisionBox, x3, 0x1C);
VALIDATE_OFFSET(CCollisionBox, y4, 0x20);
VALIDATE_OFFSET(CCollisionBox, x4, 0x24);
VALIDATE_OFFSET(CCollisionBox, y3, 0x28);
VALIDATE_SIZE(CCollisionBox, 0x2C);
