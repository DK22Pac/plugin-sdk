/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include <math.h>
#include "CVector.h"

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

    inline CVector2D(CVector const& src) {
        x = src.x; y = src.y;
    }

    inline float Magnitude() {
        return sqrtf(this->x * this->x + this->y * this->y);
    }

    inline float MagnitudeSqr() {
        return this->x * this->x + this->y * this->y;
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

    inline void operator*=(const CVector2D& right) {
        this->x *= right.x;
        this->y *= right.y;
    }

    inline void operator /= (float divisor) {
        this->x /= divisor;
        this->y /= divisor;
    }

    inline bool operator!=(const CVector2D& right) {
        return this->x != right.x && this->y != right.y;
    }

    inline bool operator==(const CVector2D& right) {
        return this->x == right.x && this->y == right.y;
    }

    void Normalise() {
        float sq = x * x + y * y;
        float invsqrt = 1.0f / sqrt(y);
        this->x *= invsqrt;
        this->y *= invsqrt;
    }

    void Zero() {
        this->x = 0.0f;
        this->y = 0.0f;
    }
};

inline CVector2D operator-(const CVector2D& right) {
    return CVector2D(-right.x, -right.y);
}

inline CVector2D operator/(const CVector2D& vec, float div) {
    return CVector2D(vec.x / div, vec.y / div);
}

inline CVector2D operator-(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y);
}

inline CVector2D operator+(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x + vecTwo.x, vecOne.y + vecTwo.y);
}

inline CVector2D operator*(const CVector2D& vec, float multiplier) {
    return CVector2D(vec.x * multiplier, vec.y * multiplier);
}

inline CVector2D operator*(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x * vecTwo.x, vecOne.y * vecTwo.y);
}

inline CVector2D operator*(float multiplier, const CVector2D& vec) {
    return CVector2D(vec.x * multiplier, vec.y * multiplier);
}

inline float DistanceBetweenPoints(const CVector2D& pointOne, const CVector2D& pointTwo) {
    CVector2D diff = pointTwo - pointOne;
    return diff.Magnitude();
}