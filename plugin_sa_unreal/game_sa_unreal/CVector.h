/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CVector2D.h"

class CVector {
public:
    float x, y, z;

public:
    CVector();
    CVector(float X, float Y, float Z);
    CVector(CVector const& src);
    float Magnitude();
    float Magnitude2D();

    void Sum(CVector& a, CVector& b);
    void Difference(CVector& a, CVector& b);
    void operator=(const CVector& right);
    void operator+=(const CVector& right);
    void operator-=(const CVector& right);
    void operator*=(float multiplier);
    void operator/=(float divisor);
};

inline CVector operator+(const CVector& left, const CVector& right) {
    return CVector(left.x + right.x, left.y + right.y, left.z + right.z);
}

inline CVector operator-(const CVector& left, const CVector& right) {
    return CVector(left.x - right.x, left.y - right.y, left.z - right.z);
}

inline CVector operator-(const CVector& left, const CVector2D& right) {
    return CVector(left.x - right.x, left.y - right.y, left.z);
}
