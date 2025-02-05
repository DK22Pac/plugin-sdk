/*
    Plugin-SDK (Grand Theft Auto Vice City Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CVector2D {
public:
    float x, y;

public:
    CVector2D();
    CVector2D(float X, float Y);
    CVector2D(CVector2D const& src);
    float Magnitude();
    float MagnitudeSqr();
    void Sum(CVector2D& a, CVector2D& b);
    void Difference(CVector2D& a, CVector2D& b);
    void Normalise();
    void operator=(const CVector2D& right);
    void operator+=(const CVector2D& right);
    void operator-=(const CVector2D& right);
    void operator*=(float multiplier);
    void operator/=(float divisor);

    CVector2D operator-(const CVector2D& rhs) const {
        return CVector2D(x - rhs.x, y - rhs.y);
    }
    CVector2D operator+(const CVector2D& rhs) const {
        return CVector2D(x + rhs.x, y + rhs.y);
    }
    CVector2D operator/(float t) const {
        return CVector2D(x / t, y / t);
    }
};

inline CVector2D operator*(const CVector2D& left, float right) {
    return CVector2D(left.x * right, left.y * right);
}
