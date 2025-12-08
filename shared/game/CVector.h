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
#endif

#if defined GTA3 || defined GTAVC || defined GTASA
    #define HAS_CMATRIX
    class CMatrix;
#endif

class CVector2D;

class CVector
{
public:
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;

    // constructors
    CVector() = default;
    explicit CVector(float value);
    CVector(float x, float y, float z);
    CVector(const CVector& src);
#ifdef RW
    CVector(const RwV3d& src);
#endif
    explicit CVector(const CVector2D& xy, float z = 0.0f);
    
    // assignments
    void Reset(); // set to 0 0 0
    void Set(float value); // assign value to all components
    void Set(float x, float y, float z);
    void operator =(const CVector& src);
#ifdef RW
    void FromRwV3d(const RwV3d& src);
#endif
    void From2D(const CVector2D& xy, float z = 0.0f);
    void FromSum(const CVector& left, const CVector& right); // store sum of two vectors
    void FromDiff(const CVector& left, const CVector& right); // store left - right substraction result
    void FromLerp(const CVector& begin, const CVector& end, float progress); // store result of linear interpolation between points
    void FromCross(const CVector& left, const CVector& right); // store result of cross product
 #ifdef HAS_CMATRIX
    void FromMultiply(const CMatrix& matrix, const CVector& point); // store result of matrix and point multiplication
    void FromMultiply3x3(const CMatrix& matrix, const CVector& vector); // store result of matrix and vector multiplication
#endif

    // conversions
#ifdef RW
    RwV3d ToRwV3d() const;
#endif
    CVector2D To2D() const; // get XY

    // properties
    bool  operator ==(const CVector& other) const;
    bool  operator !=(const CVector& other) const;
    CVector operator -() const; // opposite vector
    float Distance(const CVector& other) const; // distance to other
    float Distance2D(const CVector& other) const; // XY distance to other
    float Distance2D(const CVector2D& other) const; // XY distance to other
    float Dot(const CVector& other) const; // dot product
    CVector Cross(const CVector& other) const; // cross product
    float Heading() const; // direction of XY vec in radians
    float Magnitude() const; // length
    float MagnitudeSqr() const; // length^2
    float Magnitude2D() const; // XY vec length
    float MagnitudeSqr2D() const; // XY vec length^2
    bool  IsNormalized() const; // length is 1.0 +/- 0.001
    bool  IsZero() const; // all components are 0.0

    // modifiers
    void operator +=(float value); // add to all components
    void operator +=(const CVector& other);
    void operator -=(float value); // substract from all components
    void operator -=(const CVector& other);
    void operator *=(float multiplier); // multiply all components
    void operator /=(float divisor); // divide all components
    void Normalise(); // scale to 1.0 length
    float NormaliseAndMag(); // normalize and return previous length

    // static functions
    static CVector Sum(const CVector& left, const CVector& right); // result of left + right
    static CVector Diff(const CVector& left, const CVector& right); // result of left - right
    static float   Distance(const CVector& left, const CVector& right); // distance between points
    static float   Distance2D(const CVector& left, const CVector& right); // XY distance between points
    static float   Distance2D(const CVector& left, const CVector2D& right); // XY distance between points
    static CVector Lerp(const CVector& begin, const CVector& end, float progress); // result of linear interpolation between points
    static float   Dot(const CVector& left, const CVector& right); // result of dot product
    static CVector Cross(const CVector& left, const CVector& right); // result of cross product
#ifdef HAS_CMATRIX
    static CVector Multiply(const CMatrix& matrix, const CVector& point); // result of matrix and point multiplication
    static CVector Multiply3x3(const CMatrix& matrix, const CVector& vector); // result of matrix and vector multiplication
#endif
};
VALIDATE_SIZE(CVector, 0xC);

// static operators
CVector operator +(float value, const CVector& vec);
CVector operator +(const CVector& vec, float value);
CVector operator +(const CVector& left, const CVector& right);

CVector operator -(float value, const CVector& vec);
CVector operator -(const CVector& vec, float value);
CVector operator -(const CVector& left, const CVector& right);

CVector operator *(float value, const CVector& vec);
CVector operator *(const CVector& vec, float value);

CVector operator /(float value, const CVector& vec);
CVector operator /(const CVector& vec, float value);

#include "CVectorImplementation.h" // inlined functions
