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

VALIDATE_SIZE(CCollisionBox, 0x2C);
