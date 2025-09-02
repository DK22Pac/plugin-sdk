/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include <math.h>

class CVector;

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

    CVector2D(CVector const& src);
    CVector To3D(float zValue = 0.0f) const;
    void From3D(const CVector& vec3d);

    inline float Magnitude() {
        return sqrtf(MagnitudeSqr());
    }

    inline float MagnitudeSqr() const {
        return x * x + y * y;
    }

    inline void Sum(CVector2D &a, CVector2D &b) {
        x = a.x + b.x;
        y = a.y + b.y;
    }

    inline void Difference(CVector2D &a, CVector2D &b) {
        x = a.x - b.x;
        y = a.y - b.y;
    }

    inline void Normalize() {
        float mag = Magnitude();
        if (mag > 0.0f) {
            x /= mag;
            y /= mag;
        }
    }

    inline float NormaliseAndMag() {
        float magSqr = MagnitudeSqr();
        if (magSqr > 0.0f) {
            float mag = std::sqrt(magSqr);
            float invMag = 1.0f / mag;
            x *= invMag;
            y *= invMag;
            return mag;
        }
        return 0.0f;
    }

    inline CVector2D operator-() const {
        return CVector2D(-x, -y);
    }

    inline void operator=(const CVector2D& right) {
        x = right.x;
        y = right.y;
    }

    inline bool operator==(const CVector2D& other) {
        return x == other.x && y == other.y;
    }

    inline bool operator!=(const CVector2D& other) {
        return x != other.x || y != other.y;
    }

    inline void operator+=(const CVector2D& right) {
        x += right.x;
        y += right.y;
    }

    inline void operator-=(const CVector2D& right) {
        x -= right.x;
        y -= right.y;
    }

    inline void operator *= (float multiplier) {
        x *= multiplier;
        y *= multiplier;
    }

    inline void operator /= (float divisor) {
        x /= divisor;
        y /= divisor;
    }

    inline void Zero() {
        x = 0.0f;
        y = 0.0f;
    }

    inline bool IsZero() const {
        return x == 0.0f && y == 0.0f;
    }

    inline bool IsNormalized() const {
        return std::fabs(MagnitudeSqr() - 1.0f) < 0.001f;
    }

    inline float Heading() {
        return std::atan2(-x, y);
    }
};

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

inline float DotProduct(const CVector2D& a, const CVector2D& b) {
    return a.x * b.x + a.y * b.y;
}

inline float CrossProduct(const CVector2D& a, const CVector2D& b) {
    return a.x * b.y - a.y * b.x;
}