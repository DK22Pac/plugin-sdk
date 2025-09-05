/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CVector;

class PLUGIN_API CVector2D
{
public:
    float x, y;
    
    inline CVector2D() {
        x = 0.0f;
        y = 0.0f;
    }

    inline CVector2D(float X, float Y) {
        x = X;
        y = Y;
    }

    CVector2D(const CVector& vec3d);
    CVector To3D(float zValue = 0.0f);
    void From3D(const CVector& vec3d);

	// Returns length of vector
	float Magnitude();
    float MagnitudeSqr() const { return x * x + y * y; }

    inline CVector2D(CVector2D const& src) {
        x = src.x; y = src.y;
    }

    inline void Sum(CVector2D &a, CVector2D &b) {
        this->x = a.x + b.x;
        this->y = a.y + b.y;
    }

    inline void Difference(CVector2D &a, CVector2D &b) {
        this->x = a.x - b.x;
        this->y = a.y - b.y;
    }

    inline CVector2D operator-() const {
        return CVector2D(-x, -y);
    }

    void operator=(const CVector2D& right);

    inline bool operator==(const CVector2D& other) {
        return x == other.x && y == other.y;
    }

    inline bool operator!=(const CVector2D& other) {
        return x != other.x || y != other.y;
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

inline CVector2D operator-(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y);
}

inline CVector2D operator+(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x + vecTwo.x, vecOne.y + vecTwo.y);
}

inline CVector2D operator*(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x * vecTwo.x, vecOne.y * vecTwo.y);
}

inline CVector2D operator*(const CVector2D& vec, float multiplier) {
    return CVector2D(vec.x * multiplier, vec.y * multiplier);
}

inline CVector2D operator*(float multiplier, const CVector2D& vec) {
    return CVector2D(vec.x * multiplier, vec.y * multiplier);
}

inline CVector2D operator/(const CVector2D& vec, float divisor) {
    return CVector2D(vec.x / divisor, vec.y / divisor);
}

inline float DistanceBetweenPoints(const CVector2D& pointOne, const CVector2D& pointTwo) {
    return (pointTwo - pointOne).Magnitude();
}

inline float DotProduct(const CVector2D& a, const CVector2D& b) {
    return a.x * b.x + a.y * b.y;
}

inline float CrossProduct(const CVector2D& a, const CVector2D& b) {
    return a.x * b.y - a.y * b.x;
}