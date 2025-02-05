/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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

    inline float Magnitude2D() {
        return sqrtf(this->x * this->x + this->y * this->y);
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

    CVector operator-() const {
        return CVector(-x, -y, -z);
    }

    float Normalise();

    inline RwV3d ToRwV3d() const {
        return{ x, y, z };
    }

    inline void FromRwV3d(RwV3d const &rwvec) {
        x = rwvec.x; y = rwvec.y; z = rwvec.z;
    }

    inline void Set(float X, float Y, float Z) {
        x = X; y = Y; z = Z;
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

inline float DotProduct(const CVector& v1, const CVector& v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
