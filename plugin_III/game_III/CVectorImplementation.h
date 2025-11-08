/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CVector2D.h"

// constructors

inline CVector::CVector(float value) {
    Set(value);
}

inline CVector::CVector(float x, float y, float z) {
    ((void(__thiscall*)(CVector*, float, float, float)) 0x46B060)(this, x, y, z);
}

inline CVector::CVector(const CVector& src) {
    *this = src;
}

inline CVector::CVector(const RwV3d& src) {
    FromRwV3d(src);
}

inline CVector::CVector(const CVector2D& xy, float z) {
    Set(xy.x, xy.y, z);
}

// assignments

inline void CVector::Set(float value) {
    Set(value, value, value);
}

inline void CVector::Set(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

inline void CVector::operator =(const CVector& src) {
    ((void (__thiscall*)(CVector*, const CVector&)) 0x46B0A0)(this, src);
}

inline void CVector::FromRwV3d(const RwV3d& src) {
    ((void (__thiscall*)(CVector*, const RwV3d&)) 0x46B0A0)(this, src); // RwV3d and CVector have same memory layout
}

inline void CVector::From2D(const CVector2D& xy, float z) {
    Set(xy.x, xy.y, z);
}

inline void CVector::FromSum(const CVector& left, const CVector& right) {
    ((void (__cdecl*)(CVector*, const CVector&, const CVector&)) 0x46AF30)(this, left, right);
}

inline void CVector::FromDiff(const CVector& left, const CVector& right) {
    ((void (__cdecl*)(CVector*, const CVector&, const CVector&)) 0x46AFB0)(this, left, right);
}

inline void CVector::FromLerp(const CVector& begin, const CVector& end, float progress) {
    *this = Lerp(begin, end, progress);
}

inline void CVector::FromCross(const CVector& left, const CVector& right) {
    ((void (__cdecl*)(CVector*, const CVector&, const CVector&)) 0x4BA350)(this, left, right);
}

inline void CVector::FromMultiply(CMatrix const& matrix, CVector const& point) {
    ((void (__cdecl*)(CVector*, const CMatrix&, const CVector&)) 0x4BA4D0)(this, matrix, point);
}

inline void CVector::FromMultiply3x3(const CMatrix& matrix, const CVector& vector) {
    ((void (__cdecl*)(CVector*, const CMatrix&, const CVector&)) 0x4BA3D0)(this, matrix, vector);
}

// conversions

inline RwV3d CVector::ToRwV3d() const {
    return RwV3d(x, y, z);
}

inline CVector2D CVector::To2D() const {
    return CVector2D(x, y);
}

// properties

inline bool CVector::operator ==(const CVector& other) const {
    return x == other.x && y == other.y && z == other.z;
}

inline bool CVector::operator !=(const CVector& other) const {
    return x != other.x || y != other.y || z != other.z;
}

inline CVector CVector::operator -() const {
    return CVector(-x, -y, -z);
}

inline float CVector::Distance(const CVector& other) const {
    return Distance(*this, other);
}

inline float CVector::Distance2D(const CVector& other) const {
    return Distance2D(*this, other);
}

inline float CVector::Distance2D(const CVector2D& other) const {
    return Distance2D(*this, other);
}

inline float CVector::Dot(const CVector& other) const {
    return Dot(*this, other);
}

inline CVector CVector::Cross(const CVector& other) const {
    return Cross(*this, other);
}

inline float CVector::Heading() const {
    return atan2(-x, y);
}

inline float CVector::Magnitude() const {
	return sqrt(MagnitudeSqr());
}

inline float CVector::MagnitudeSqr() const {
    auto s = ((double (__fastcall*)(const CVector*)) 0x46B020)(this);
    return (float)s;
}

inline float CVector::Magnitude2D() const {
    return sqrt(MagnitudeSqr2D());
}

inline float CVector::MagnitudeSqr2D() const {
    return x * x + y * y;
}

inline bool CVector::IsNormalized() const {
    return fabs(MagnitudeSqr() - 1.0f) < 0.001f;
}

inline bool CVector::IsZero() const {
    return x == 0.0f && y == 0.0f && z == 0.0f;
}

// modifiers

inline void CVector::operator +=(float value) {
    x += value;
    y += value;
    z += value;
}

inline void CVector::operator +=(const CVector& other) {
    ((void (__cdecl*)(CVector*, const CVector*, const CVector&)) 0x46AF30)(this, this, other);
}

inline void CVector::operator -=(float value) {
    x -= value;
    y -= value;
    z -= value;
}

inline void CVector::operator -=(const CVector& other) {
    ((void (__cdecl *)(CVector *, const CVector*, const CVector&)) 0x46AFB0)(this, this, other);
}

inline void CVector::operator *=(float multiplier) {
    ((void (__cdecl *)(CVector *, float, const CVector*)) 0x46AF70)(this, multiplier, this);
}

inline void CVector::operator /=(float divisor) {
    ((void (__cdecl*)(CVector*, const CVector*, float divisor)) 0x535140)(this, this, divisor);
}

inline void CVector::Normalise() {
    ((void (__thiscall*)(CVector*)) 0x4BA560)(this);
}

inline float CVector::NormaliseAndMag() {
    auto mag = Magnitude();
    *this /= mag;
    return mag;
}

// static functions

inline CVector CVector::Sum(const CVector& left, const CVector& right) {
    auto result = left;
    result += right;
    return result;
}

inline CVector CVector::Diff(const CVector& left, const CVector& right) {
    auto result = left;
    result -= right;
    return result;
}

inline float CVector::Distance(const CVector& left, const CVector& right) {
    auto result = left;
    result -= right;
    return result.Magnitude();
}

inline float CVector::Distance2D(const CVector& left, const CVector& right) {
    auto result = left.To2D();
    result -= right.To2D();
    return result.Magnitude();
}

inline float CVector::Distance2D(const CVector& left, const CVector2D& right) {
    auto result = left.To2D();
    result -= right;
    return result.Magnitude();
}

inline CVector CVector::Lerp(const CVector& begin, const CVector& end, float progress) {
    return CVector(
        std::lerp(begin.x, end.x, progress),
        std::lerp(begin.y, end.y, progress),
        std::lerp(begin.z, end.z, progress)
    );
}

inline float CVector::Dot(const CVector& left, const CVector& right) {
    return left.z * right.z + left.y * right.y + left.x * right.x;
}

inline CVector CVector::Cross(const CVector& left, const CVector &right) {
    CVector result;
    result.FromCross(left, right);
    return result;
}

inline CVector CVector::Multiply(const CMatrix& matrix, const CVector& point) {
    CVector result;
    result.FromMultiply(matrix, point);
    return result;
}

inline CVector CVector::Multiply3x3(const CMatrix& matrix, const CVector& vector) {
    CVector result;
    result.FromMultiply3x3(matrix, vector);
    return result;
}

// static operators

inline CVector operator +(float value, const CVector& vec) {
    auto result = vec;
    result += value;
    return result;
}

inline CVector operator +(const CVector& vec, float value) {
    auto result = vec;
    result += value;
    return result;
}

inline CVector operator +(const CVector& left, const CVector& right) {
    auto result = left;
    result += right;
    return result;
}

inline CVector operator -(float value, const CVector& vec) {
    auto result = CVector(value);
    result -= vec;
    return result;
}

inline CVector operator -(const CVector& vec, float value) {
    auto result = vec;
    result -= value;
    return result;
}

inline CVector operator -(const CVector& left, const CVector& right) {
    auto result = left;
    result -= right;
    return result;
}

inline CVector operator *(float value, const CVector& vec) {
    auto result = vec;
    result *= value;
    return result;
}

inline CVector operator *(const CVector& vec, float value) {
    auto result = vec;
    result *= value;
    return result;
}

inline CVector operator /(float value, const CVector& vec) {
    auto result = CVector(value);
    result.x /= vec.x;
    result.y /= vec.y;
    result.z /= vec.z;
    return result;
}

inline CVector operator /(const CVector& vec, float value) {
    auto result = vec;
    result /= value;
    return result;
}
