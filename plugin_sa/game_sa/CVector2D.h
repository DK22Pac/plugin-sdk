/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CVector;

class PLUGIN_API CVector2D {
public:
    float x, y;

    CVector2D();
    CVector2D(float X, float Y);
    CVector2D(const CVector& vec3d);
    CVector2D(const CVector2D& src);

    CVector To3D(float zValue = 0.0f) const;
    void From3D(const CVector& vec3d);

    float Magnitude();
    float MagnitudeSqr() const;

    void operator=(const CVector2D& right);
    bool operator==(const CVector2D& right);
    bool operator!=(const CVector2D& right);
    void operator+=(const CVector2D& right);
    void operator-=(const CVector2D& right);
    void operator*=(float multiplier);
    void operator/=(float divisor);


    void Sum(const CVector2D& a, const CVector2D& b);
    void Difference(const CVector2D& a, const CVector2D& b);
    void Normalize();
    float NormaliseAndMag();

    float Dot(const CVector2D& other) const;
    float Cross(const CVector2D& other) const;

    bool IsZero() const;
    bool IsNormalized() const;

    float Heading();
};

CVector2D operator-(const CVector2D& vecOne, const CVector2D& vecTwo);
CVector2D operator+(const CVector2D& vecOne, const CVector2D& vecTwo);
CVector2D operator*(const CVector2D& vec, float multiplier);
CVector2D operator*(float multiplier, const CVector2D& vec);
CVector2D operator*(const CVector2D& vecOne, const CVector2D& vecTwo); // comp wise multiplication
CVector2D operator/(const CVector2D& vec, float divisor);
float DistanceBetweenPoints(const CVector2D& pointOne, const CVector2D& pointTwo);