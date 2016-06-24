/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include <math.h>

class CVector2D {
public:
    float x, y;

    inline CVector2D() {
        x = 0.0f; y = 0.0f;
    }

    inline CVector2D(float X, float Y) {
        x = X; y = Y;
    }

    inline CVector2D(CVector2D const& src) {
        x = src.x; y = src.y;
    }

    inline float Magnitude() {
        return sqrtf(this->x * this->x + this->y * this->y);
    }

    inline void Sum(CVector2D &a, CVector2D &b) {
        this->x = a.x + b.x;
        this->y = a.y + b.y;
    }

    inline void Difference(CVector2D &a, CVector2D &b) {
        this->x = a.x - b.x;
        this->y = a.y - b.y;
    }

    inline void operator=(const CVector2D& right) {
        this->x = right.x;
        this->y = right.y;
    }

    inline void operator+=(const CVector2D& right) {
        this->x += right.x;
        this->y += right.y;
    }

    inline void operator-=(const CVector2D& right) {
        this->x -= right.x;
        this->y -= right.y;
    }

    inline void operator *= (float multiplier) {
        this->x *= multiplier;
        this->y *= multiplier;
    }

    inline void operator /= (float divisor) {
        this->x /= divisor;
        this->y /= divisor;
    }
};