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

    CVector();
    CVector(float X, float Y, float Z);
    CVector(const CVector& src);
    CVector(const RwV3d& right);
    CVector(const CVector2D& vec2d, float zValue = 0.0f);

    CVector2D To2D() const;
    void From2D(const CVector2D& vec2d, float zValue = 0.0f);

    float Magnitude();
    float MagnitudeSqr() const;
    float Magnitude2D();
    float MagnitudeSqr2D() const;

    void Normalise();
    float NormaliseAndMag();

    void Cross(const CVector& left, const CVector& right);
    void Sum(const CVector& left, const CVector& right);
    void Difference(const CVector& left, const CVector& right);
    
    void operator=(const CVector& right);
    bool operator==(const CVector& other);
    bool operator!=(const CVector& other);
    void operator+=(const CVector& right);
    void operator-=(const CVector& right);
    void operator*=(float multiplier);
    void operator/=(float divisor);

    void FromMultiply(const CMatrix& matrix, const CVector& vector);
    void FromMultiply3x3(const CMatrix& matrix, const CVector& vector);

    void Set(float X, float Y, float Z);
    RwV3d ToRwV3d() const;
    void FromRwV3d(const RwV3d& rwvec);

    float Dot(const CVector& other) const;
    CVector Cross(const CVector& other) const;

    bool IsZero() const;
    bool IsNormalized() const;
    float Heading();
};

CVector operator-(const CVector& vecOne, const CVector& vecTwo);
CVector operator+(const CVector& vecOne, const CVector& vecTwo);
CVector operator*(const CVector& vec, float multiplier);
CVector operator*(float multiplier, const CVector& vec);
float DistanceBetweenPoints(const CVector& pointOne, const CVector& pointTwo);

VALIDATE_SIZE(CVector, 0xC);