/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

#ifdef RW
    #include "RenderWare.h"
#else
    struct RwV2d
    {
        float x, y;
    };
#endif

struct CVector;

struct CVector2D : public RwV2d
{
public:
    // constructors
    CVector2D();
    explicit CVector2D(float value);
    CVector2D(float x, float y);
    CVector2D(const CVector2D& src);
    CVector2D(const RwV2d& src);
    
    // assignments
    void Reset(); // set to 0 0
    void Set(float value); // assign value to all components
    void Set(float x, float y);
    void operator =(const CVector2D& src);
    void From3D(const CVector& src);
    void FromSum(const CVector2D& left, const CVector2D& right); // store sum of two vectors
    void FromDiff(const CVector2D& left, const CVector2D& right); // store left - right subtraction result
    void FromLerp(const CVector2D& begin, const CVector2D& end, float progress); // store result of linear interpolation between points

    // conversions
    [[nodiscard]] operator RwV2d*();
    [[nodiscard]] operator const RwV2d*() const;
    [[nodiscard]] CVector To3D() const; // get X Y 0

    // properties
    [[nodiscard]] bool  operator ==(const CVector2D& other) const;
    [[nodiscard]] bool  operator !=(const CVector2D& other) const;
    [[nodiscard]] CVector2D operator -() const; // opposite vector
    [[nodiscard]] float Distance(const CVector2D& other) const; // distance to other
    [[nodiscard]] float Dot(const CVector2D& other) const; // dot product
    [[nodiscard]] float Cross(const CVector2D& other) const; // cross/wedge product
    [[nodiscard]] float Heading() const; // direction of XY vec in radians
    [[nodiscard]] float Magnitude() const; // length
    [[nodiscard]] float MagnitudeSqr() const; // length^2
    [[nodiscard]] CVector2D Normalized() const; // this vector scaled to 1.0 length
    [[nodiscard]] bool  IsNormalized() const; // length is 1.0 +/- 0.001
    [[nodiscard]] bool  IsZero() const; // all components are 0.0

    // modifiers
    void operator +=(float value); // add to all components
    void operator +=(const CVector2D& other);
    void operator -=(float value); // subtract from all components
    void operator -=(const CVector2D& other);
    void operator *=(float multiplier); // multiply all components
    void operator /=(float divisor); // divide all components
    void Normalize(); // scale to 1.0 length
    float NormalizeAndMag(); // normalize and return previous length

    // static functions
    [[nodiscard]] static CVector2D Sum(const CVector2D& left, const CVector2D& right); // result of left + right
    [[nodiscard]] static CVector2D Diff(const CVector2D& left, const CVector2D& right); // result of left - right
    [[nodiscard]] static float     Distance(const CVector2D& left, const CVector2D& right); // distance between points
    [[nodiscard]] static CVector2D Lerp(const CVector2D& begin, const CVector2D& end, float progress); // result of linear interpolation between points
    [[nodiscard]] static float     Dot(const CVector2D& left, const CVector2D& right); // result of dot product
    [[nodiscard]] static float     Cross(const CVector2D& left, const CVector2D& right); // result of cross/wedge product
};
VALIDATE_SIZE(CVector2D, 0x8);

// static operators
[[nodiscard]] CVector2D operator +(float value, const CVector2D& vec);
[[nodiscard]] CVector2D operator +(const CVector2D& vec, float value);
[[nodiscard]] CVector2D operator +(const CVector2D& left, const CVector2D& right);

[[nodiscard]] CVector2D operator -(float value, const CVector2D& vec);
[[nodiscard]] CVector2D operator -(const CVector2D& vec, float value);
[[nodiscard]] CVector2D operator -(const CVector2D& left, const CVector2D& right);

[[nodiscard]] CVector2D operator *(float value, const CVector2D& vec);
[[nodiscard]] CVector2D operator *(const CVector2D& vec, float value);

[[nodiscard]] CVector2D operator /(float value, const CVector2D& vec);
[[nodiscard]] CVector2D operator /(const CVector2D& vec, float value);

#include "CVector2DImplementation.h" // inlined functions
