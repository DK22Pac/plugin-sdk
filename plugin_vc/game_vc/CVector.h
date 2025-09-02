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

class CMatrix;
class CVector2D;
struct RwV3d;

class CVector {
public:
    float x, y, z;

    inline CVector() {
        x = 0.0f; y = 0.0f; z = 0.0f;
    }

    inline CVector(float X, float Y, float Z) {
        x = X; y = Y; z = Z;
    }

    inline CVector(CVector const& src) {
        x = src.x; y = src.y; z = src.z;
    }
    
    inline CVector(RwV3d const &right) {
        FromRwV3d(right);
    }

    CVector(const CVector2D& vec2d, float zValue = 0.0f);

    CVector2D To2D() const;
    void From2D(const CVector2D& vec2d, float zValue = 0.0f);

    inline void Cross(CVector &a, CVector &b) {
        x = b.z * a.y - a.z * b.y;
        y = a.z * b.x - a.x * b.z;
        z = a.x * b.y - b.x * a.y;
    }

    inline float Heading() const {
        return std::atan2(-x, y);
    }

    inline float Magnitude() {
        return sqrtf(x * x + y * y + z * z);
    }

    inline float Magnitude2D() {
        return sqrtf(x * x + y * y);
    }

    inline float MagnitudeSqr() const {
        return x * x + y * y + z * z;
    }

    inline float MagnitudeSqr2D() const {
        return x * x + y * y;
    }

    inline void Sum(CVector &a, CVector &b) {
        x = a.x + b.x;
        y = a.y + b.y;
        z = a.z + b.z;
    }

    inline void Difference(CVector &a, CVector &b) {
        x = a.x - b.x;
        y = a.y - b.y;
        z = a.z - b.z;
    }

    inline void operator=(const CVector& right) {
        x = right.x;
        y = right.y;
        z = right.z;
    }

    inline void operator+=(const CVector& right) {
        x += right.x;
        y += right.y;
        z += right.z;
    }

    inline void operator-=(const CVector& right) {
        x -= right.x;
        y -= right.y;
        z -= right.z;
    }

    inline void operator *= (float multiplier) {
        x *= multiplier;
        y *= multiplier;
        z *= multiplier;
    }

    inline void operator /= (float divisor) {
        x /= divisor;
        y /= divisor;
        z /= divisor;
    }

    inline CVector operator-() const {
        return CVector(-x, -y, -z);
    }

    inline bool operator==(const CVector& other) {
        return x == other.x && y == other.y && z == other.z;
    }

    inline bool operator!=(const CVector& other) {
        return x != other.x || y != other.y || z != other.z;
    }

    float Normalise();
    inline void Normalise2D(void) {
        float sq = MagnitudeSqr2D();
        float invsqrt = 1.0f / std::sqrt(sq);
        x *= invsqrt;
        y *= invsqrt;
    }

    // Normalises a vector and returns length
    inline float NormaliseAndMag() {
        float length = Magnitude();
        if (length > 0.0f) {
            float invLength = 1.0f / length;
            x *= invLength;
            y *= invLength;
            z *= invLength;
        }
        return length;
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

    inline void Zero() {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }

    inline bool IsZero() const {
        return x == 0.0f && y == 0.0f && z == 0.0f;
    }

    inline bool IsNormalized() const {
        return std::fabs(MagnitudeSqr() - 1.0f) < 0.001f;
    }
};

inline CVector operator-(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y, vecOne.z - vecTwo.z);
}

inline CVector operator+(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x + vecTwo.x, vecOne.y + vecTwo.y, vecOne.z + vecTwo.z);
}

inline CVector operator*(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x * vecTwo.x, vecOne.y * vecTwo.y, vecOne.z * vecTwo.z);
}

inline CVector operator*(const CVector& vec, float multiplier) {
    return CVector(vec.x * multiplier, vec.y * multiplier, vec.z * multiplier);
}

inline CVector operator*(float multiplier, const CVector& vec) {
    return CVector(vec.x * multiplier, vec.y * multiplier, vec.z * multiplier);
}

inline CVector operator*(const RwMatrix& mat, const CVector& vec) {
    return CVector(mat.right.x * vec.x + mat.up.x * vec.y + mat.at.x * vec.z + mat.pos.x,
        mat.right.y * vec.x + mat.up.y * vec.y + mat.at.y * vec.z + mat.pos.y,
        mat.right.z * vec.x + mat.up.z * vec.y + mat.at.z * vec.z + mat.pos.z);
}

inline CVector operator/(const CVector& left, float right) {
    return CVector(left.x / right, left.y / right, left.z / right);
}

inline float DotProduct(const CVector& left, const CVector& right) {
    return left.x * right.x + left.y * right.y + left.z * right.z;
}

inline CVector CrossProduct(const CVector& left, const CVector& right) {
    return CVector(left.y * right.z - left.z * right.y,
        left.z * right.x - left.x * right.z,
        left.x * right.y - left.y * right.x);
}

inline float DistanceBetweenPoints(const CVector& pointOne, const CVector& pointTwo) {
    CVector diff = pointTwo - pointOne;
    return diff.Magnitude();
}