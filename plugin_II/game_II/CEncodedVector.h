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

class CEncodedVector {
public:
    int x, y, z;

public:
    CEncodedVector();
    CEncodedVector(int x, int y, int z);
    CEncodedVector(const CVector& src);

    CVector FromInt16();
};
