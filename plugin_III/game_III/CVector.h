/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include <math.h>

class CVector {
public:
    float x, y, z;

    inline CVector() {}

    inline CVector(float X, float Y, float Z) {
        x = X; y = Y; z = Z;
    }

    inline CVector(CVector const& src) {
        x = src.x; y = src.y; z = src.z;
    }

    inline CVector(RwV3d const &right) {
        FromRwV3d(right);
    }

    inline void Cross(CVector &a, CVector &b) {
        this->x = b.z * a.y - a.z * b.y;
        this->y = a.z * b.x - a.x * b.z;
        this->z = a.x * b.y - b.x * a.y;
    }

    inline float Heading() const {
        return std::atan2(-x, y);
    }

    inline float Magnitude() {
        return sqrtf(this->x * this->x + this->y * this->y + this->z * this->z);
    }

    inline float MagnitudeSqr() const {
        return x * x + y * y + z * z;
    }

    inline float Magnitude2D() {
        return sqrtf(this->x * this->x + this->y * this->y);
    }

    inline float MagnitudeSqr2D() const {
        return x * x + y * y;
    }

    CVector operator-() const {
        return CVector(-x, -y, -z);
    }

    inline void Sum(CVector &a, CVector &b) {
        this->x = a.x + b.x;
        this->y = a.y + b.y;
        this->z = a.z + b.z;
    }

    inline void Difference(CVector &a, CVector &b) {
        this->x = a.x - b.x;
        this->y = a.y - b.y;
        this->z = a.z - b.z;
    }

    inline void operator=(const CVector& right) {
        this->x = right.x;
        this->y = right.y;
        this->z = right.z;
    }

    inline void operator+=(const CVector& right) {
        this->x += right.x;
        this->y += right.y;
        this->z += right.z;
    }

    inline void operator-=(const CVector& right) {
        this->x -= right.x;
        this->y -= right.y;
        this->z -= right.z;
    }

    inline void operator *= (float multiplier) {
        this->x *= multiplier;
        this->y *= multiplier;
        this->z *= multiplier;
    }

    inline void operator /= (float divisor) {
        this->x /= divisor;
        this->y /= divisor;
        this->z /= divisor;
    }

    const bool operator!=(CVector const& right) const {
        return x != right.x || y != right.y || z != right.z;
    }

    void Normalise() {
        float sq = MagnitudeSqr();
        if (sq > 0.0f) {
            float invsqrt = 1.0f / std::sqrt(sq);
            x *= invsqrt;
            y *= invsqrt;
            z *= invsqrt;
        }
        else
            x = 1.0f;
    }

    inline RwV3d ToRwV3d() const {
        return{ x, y, z };
    }

    inline void FromRwV3d(RwV3d const &rwvec) {
        x = rwvec.x; y = rwvec.y; z = rwvec.z;
    }

    inline void Set(float X, float Y, float Z) {
        x = X; y = Y; z = Z;
    }

    bool IsZero() const {
        return x == 0.0f && y == 0.0f && z == 0.0f;
    }

};

inline CVector operator-(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y, vecOne.z - vecTwo.z);
}

inline CVector operator+(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x + vecTwo.x, vecOne.y + vecTwo.y, vecOne.z + vecTwo.z);
}

inline CVector operator*(const CVector& vec, float multiplier) {
    return CVector(vec.x * multiplier, vec.y * multiplier, vec.z * multiplier);
}

inline CVector operator*(float multiplier, const CVector& vec) {
    return CVector(vec.x * multiplier, vec.y * multiplier, vec.z * multiplier);
}

inline float DistanceBetweenPoints(const CVector &pointOne, const CVector &pointTwo) {
    CVector diff = pointTwo - pointOne;
    return diff.Magnitude();
}

inline CVector operator/(const CVector& left, float right) {
    return CVector(left.x / right, left.y / right, left.z / right);
}
