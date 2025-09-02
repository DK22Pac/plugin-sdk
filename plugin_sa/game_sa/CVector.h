/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

class CMatrix;
class CVector2D;
struct RwV3d;

class CVector {
public:
    float x, y, z;

    CVector() {
        x = 0; y = 0; z = 0;
    }
    CVector(float X, float Y, float Z);

    inline CVector(CVector const& src) {
        x = src.x; y = src.y; z = src.z;
    }

    inline CVector(RwV3d const &right) {
        FromRwV3d(right);
    }

    CVector(const CVector2D& vec2d, float zValue = 0.0f);

    CVector2D To2D() const;
    void From2D(const CVector2D& vec2d, float zValue = 0.0f);

    // Returns length of vector
    float Magnitude();

    inline float MagnitudeSqr() const {
        return x * x + y * y + z * z;
    }

    // Returns length of 2d vector
    float Magnitude2D();

    inline float MagnitudeSqr2D() const { 
        return x * x + y * y; 
    }

    // Normalises a vector
    void Normalise();

    inline void Normalise2D() {
        float sq = MagnitudeSqr2D();
        float invsqrt = 1.0f / std::sqrt(sq);
        x *= invsqrt;
        y *= invsqrt;
    }

    // Normalises a vector and returns length
    float NormaliseAndMag();

    // Performs cross calculation
    void Cross(const CVector& left, const CVector &right);

    // Adds left + right and stores result
    void Sum(const CVector& left, const CVector &right);

    // Subtracts left - right and stores result
    void Difference(const CVector& left, const CVector &right);

    inline CVector operator-() const {
        return CVector(-x, -y, -z);
    }

    inline bool operator==(const CVector& other) {
        return x == other.x && y == other.y && z == other.z;
    }

    inline bool operator!=(const CVector& other) {
        return x != other.x || y != other.y || z != other.z;
    }

    void operator=(const CVector& right);
    void operator+=(const CVector& right);
    void operator-=(const CVector& right);
    void operator *= (float multiplier);
    void operator /= (float divisor);

    // matrix * vector multiplication
    void FromMultiply(class CMatrix  const& matrix, CVector const& vector);
    void FromMultiply3x3(class CMatrix  const& matrix, CVector const& vector);

    inline void Set(float X, float Y, float Z) {
        x = X; y = Y; z = Z;
    }

    inline RwV3d ToRwV3d() const {
        return{ x, y, z };
    }

    inline void FromRwV3d(RwV3d const &rwvec) {
        x = rwvec.x; y = rwvec.y; z = rwvec.z;
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

    inline float Heading() const {
        return std::atan2(-x, y);
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

inline CVector operator*(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x * vecTwo.x, vecOne.y * vecTwo.y, vecOne.z * vecTwo.z);
}

inline CVector operator*(const RwMatrix& mat, const CVector& vec) {
    return CVector(mat.right.x * vec.x + mat.up.x * vec.y + mat.at.x * vec.z + mat.pos.x,
        mat.right.y * vec.x + mat.up.y * vec.y + mat.at.y * vec.z + mat.pos.y,
        mat.right.z * vec.x + mat.up.z * vec.y + mat.at.z * vec.z + mat.pos.z);
}

inline CVector operator/(const CVector& left, float right) {
    return CVector(left.x / right, left.y / right, left.z / right);
}

inline float DistanceBetweenPoints(const CVector &pointOne, const CVector &pointTwo) {
    CVector diff = pointTwo - pointOne;
    return diff.Magnitude();
}

inline float DotProduct(const CVector& left, const CVector& right) {
    return left.x * right.x + left.y * right.y + left.z * right.z;
}

inline CVector CrossProduct(const CVector& left, const CVector& right) {
    return CVector(left.y * right.z - left.z * right.y,
        left.z * right.x - left.x * right.z,
        left.x * right.y - left.y * right.x);
}

VALIDATE_SIZE(CVector, 0xC);