/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase/PluginBase_VC.h"
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

    inline void Cross(CVector &a, CVector &b) {
        this->x = b.z * a.y - a.z * b.y;
        this->y = a.z * b.x - a.x * b.z;
        this->z = a.x * b.y - b.x * a.y;
    }

    inline float Magnitude() {
        return sqrtf(this->x * this->x + this->y * this->y + this->z * this->z);
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

    float Normalise();
};