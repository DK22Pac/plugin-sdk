/*
    Plugin-SDK header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

#ifdef RW
    #include "RenderWare.h"
#else
    struct RwV3d
    {
        float x, y, z;
    };
#endif

#if defined GTA3 || defined GTAVC || defined GTASA
    #define HAS_CMATRIX
    class CMatrix;
#endif

struct CVector2D;

struct CVector : public RwV3d
{
public:
    // constructors
    CVector();
    explicit CVector(float value);
    CVector(float x, float y, float z);
    CVector(const CVector& src);
    CVector(const RwV3d& src);

    explicit CVector(const CVector2D& xy, float z = 0.0f);
    
    // assignments
    void Reset(); // set to 0 0 0
    void Set(float value); // assign value to all components
    void Set(float x, float y, float z);
    void operator =(const CVector& src);
    void From2D(const CVector2D& xy, float z = 0.0f);
    void FromSum(const CVector& left, const CVector& right); // store sum of two vectors
    void FromDiff(const CVector& left, const CVector& right); // store left - right subtraction result
    void FromLerp(const CVector& begin, const CVector& end, float progress); // store result of linear interpolation between points
    void FromCross(const CVector& left, const CVector& right); // store result of cross product
 #ifdef HAS_CMATRIX
    void FromMultiply(const CMatrix& matrix, const CVector& point); // store result of matrix and point multiplication
    void FromMultiply3x3(const CMatrix& matrix, const CVector& vector); // store result of matrix and vector multiplication
#endif

    // conversions
    [[nodiscard]] operator RwV3d*();
    [[nodiscard]] operator const RwV3d*() const;
    [[nodiscard]] CVector2D To2D() const; // get XY

    // properties
    [[nodiscard]] bool  operator ==(const CVector& other) const;
    [[nodiscard]] bool  operator !=(const CVector& other) const;
    [[nodiscard]] CVector operator -() const; // opposite vector
    [[nodiscard]] float Distance(const CVector& other) const; // distance to other
    [[nodiscard]] float Distance2D(const CVector& other) const; // XY distance to other
    [[nodiscard]] float Distance2D(const CVector2D& other) const; // XY distance to other
    [[nodiscard]] float Dot(const CVector& other) const; // dot product
    [[nodiscard]] CVector Cross(const CVector& other) const; // cross product
    [[nodiscard]] float Heading() const; // direction of XY vec in radians
    [[nodiscard]] float Magnitude() const; // length
    [[nodiscard]] float MagnitudeSqr() const; // length^2
    [[nodiscard]] float Magnitude2D() const; // XY vec length
    [[nodiscard]] float MagnitudeSqr2D() const; // XY vec length^2
    [[nodiscard]] CVector Normalized() const; // this vector scaled to 1.0 length
    [[nodiscard]] bool  IsNormalized() const; // length is 1.0 +/- 0.001
    [[nodiscard]] bool  IsZero() const; // all components are 0.0

    // modifiers
    void operator +=(float value); // add to all components
    void operator +=(const CVector& other);
    void operator -=(float value); // subtract from all components
    void operator -=(const CVector& other);
    void operator *=(float multiplier); // multiply all components
    void operator /=(float divisor); // divide all components
    void Normalize(); // scale to 1.0 length
    float NormalizeAndMag(); // normalize and return previous length

    // static functions
    [[nodiscard]] static CVector Sum(const CVector& left, const CVector& right); // result of left + right
    [[nodiscard]] static CVector Diff(const CVector& left, const CVector& right); // result of left - right
    [[nodiscard]] static float   Distance(const CVector& left, const CVector& right); // distance between points
    [[nodiscard]] static float   Distance2D(const CVector& left, const CVector& right); // XY distance between points
    [[nodiscard]] static float   Distance2D(const CVector& left, const CVector2D& right); // XY distance between points
    [[nodiscard]] static CVector Lerp(const CVector& begin, const CVector& end, float progress); // result of linear interpolation between points
    [[nodiscard]] static float   Dot(const CVector& left, const CVector& right); // result of dot product
    [[nodiscard]] static CVector Cross(const CVector& left, const CVector& right); // result of cross product
#ifdef HAS_CMATRIX
    [[nodiscard]] static CVector Multiply(const CMatrix& matrix, const CVector& point); // result of matrix and point multiplication
    [[nodiscard]] static CVector Multiply3x3(const CMatrix& matrix, const CVector& vector); // result of matrix and vector multiplication
#endif
};
VALIDATE_SIZE(CVector, 0xC);

// static operators
[[nodiscard]] CVector operator +(float value, const CVector& vec);
[[nodiscard]] CVector operator +(const CVector& vec, float value);
[[nodiscard]] CVector operator +(const CVector& left, const CVector& right);

[[nodiscard]] CVector operator -(float value, const CVector& vec);
[[nodiscard]] CVector operator -(const CVector& vec, float value);
[[nodiscard]] CVector operator -(const CVector& left, const CVector& right);

[[nodiscard]] CVector operator *(float value, const CVector& vec);
[[nodiscard]] CVector operator *(const CVector& vec, float value);

[[nodiscard]] CVector operator /(float value, const CVector& vec);
[[nodiscard]] CVector operator /(const CVector& vec, float value);

#include "CVectorImplementation.h" // inlined functions
