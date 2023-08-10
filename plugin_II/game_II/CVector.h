/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"

class CVector;
class CVector2D;

class CEncodedVector {
public:
    int x, y, z;

public:
    CEncodedVector();
    CEncodedVector(int X, int Y, int Z);
    CVector FromInt16();
};

class CEncodedVector2D {
public:
    int x, y;

public:
    CEncodedVector2D();
    CEncodedVector2D(int X, int Y);
    CVector2D FromInt16();
};

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
    CEncodedVector2D ToInt16();

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
    CEncodedVector ToInt16();
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

inline CVector2D operator-(const CVector2D& left, const CVector& right) {
    return CVector2D(left.x - right.x, left.y - right.y);
}
