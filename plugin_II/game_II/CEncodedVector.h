/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct CVector2D;
struct CVector;

class CEncodedVector2D {
public:
    int x, y;

public:
    CEncodedVector2D();
    CEncodedVector2D(int x, int y);
    CEncodedVector2D(const CVector2D& src);

    CVector2D FromInt16();
};
VALIDATE_OFFSET(CEncodedVector2D, x, 0x0);
VALIDATE_OFFSET(CEncodedVector2D, y, 0x4);
VALIDATE_SIZE(CEncodedVector2D, 0x8);

class CEncodedVector {
public:
    int x, y, z;

public:
    CEncodedVector();
    CEncodedVector(int x, int y, int z);
    CEncodedVector(const CVector& src);

    CVector FromInt16();
};
VALIDATE_OFFSET(CEncodedVector, x, 0x0);
VALIDATE_OFFSET(CEncodedVector, y, 0x4);
VALIDATE_OFFSET(CEncodedVector, z, 0x8);
VALIDATE_SIZE(CEncodedVector, 0xC);
