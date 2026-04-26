/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CVector.h"

// constructors

inline CVector2D::CVector2D() {
    x = 0.0f;
    y = 0.0f;
}

inline CVector2D::CVector2D(float value) {
    Set(value);
}

inline CVector2D::CVector2D(float x, float y) {
    Set(x, y);
}

inline CVector2D::CVector2D(const CVector2D& src) {
    Set(src.x, src.y);
}

inline CVector2D::CVector2D(const RwV2d& src) {
    Set(src.x, src.y);
}

// assignments

inline void CVector2D::Reset() {
    Set(0.0f);
}

inline void CVector2D::Set(float value) {
    Set(value, value);
}

inline void CVector2D::Set(float x, float y) {
    this->x = x;
    this->y = y;
}

inline void CVector2D::operator =(const CVector2D& src) {
    Set(src.x, src.y);
}

inline void CVector2D::From3D(const CVector& src) {
    Set(src.x, src.y);
}

inline void CVector2D::FromSum(const CVector2D& left, const CVector2D& right) {
    *this = left;
    *this += right;
}

inline void CVector2D::FromDiff(const CVector2D& left, const CVector2D& right) {
    *this = left;
    *this -= right;
}

inline void CVector2D::FromLerp(const CVector2D& begin, const CVector2D& end, float progress) {
    *this = Lerp(begin, end, progress);
}

// conversions

inline CVector2D::operator RwV2d*() {
    return reinterpret_cast<RwV2d*>(this);
}

inline CVector2D::operator const RwV2d*() const {
    return reinterpret_cast<const RwV2d*>(this);
}

inline CVector CVector2D::To3D() const {
    return CVector(x, y, 0.0f);
}

// properties

inline bool CVector2D::operator ==(const CVector2D& other) const {
    return x == other.x && y == other.y;
}

inline bool CVector2D::operator !=(const CVector2D& other) const {
    return x != other.x || y != other.y;
}

inline CVector2D CVector2D::operator -() const {
    return CVector2D(-x, -y);
}

inline float CVector2D::Distance(const CVector2D& other) const {
    return Distance(*this, other);
}

inline float CVector2D::Dot(const CVector2D& other) const {
    return Dot(*this, other);
}

inline float CVector2D::Cross(const CVector2D& other) const {
    return Cross(*this, other);
}

inline float CVector2D::Heading() const {
    return atan2(-x, y);
}

inline float CVector2D::Magnitude() const {
    return std::sqrt(MagnitudeSqr());
}

inline float CVector2D::MagnitudeSqr() const {
    return x * x + y * y;
}

inline CVector2D CVector2D::Normalized() const {
    auto result = *this;
    result.Normalize();
    return result;
}

inline bool CVector2D::IsNormalized() const {
    return fabs(MagnitudeSqr() - 1.0f) < 0.001f;
}

inline bool CVector2D::IsZero() const {
    return x == 0.0f && y == 0.0f;
}

// modifiers

inline void CVector2D::operator +=(float value) {
    x += value;
    y += value;
}

inline void CVector2D::operator +=(const CVector2D& other) {
    x += other.x;
    y += other.y;
}

inline void CVector2D::operator -=(float value) {
    x -= value;
    y -= value;
}

inline void CVector2D::operator -=(const CVector2D& other) {
    x -= other.x;
    y -= other.y;
}

inline void CVector2D::operator *=(float multiplier) {
    x *= multiplier;
    y *= multiplier;
}

inline void CVector2D::operator /=(float divisor) {
    x /= divisor;
    y /= divisor;
}

inline void CVector2D::Normalize() {
    NormalizeAndMag();
}

inline float CVector2D::NormalizeAndMag() {
    auto length = Magnitude();
    if (length > 0.0f) *this /= length;
    return length;
}

// static functions

inline CVector2D CVector2D::Sum(const CVector2D& left, const CVector2D& right) {
    auto result = left;
    result += right;
    return result;
}

inline CVector2D CVector2D::Diff(const CVector2D& left, const CVector2D& right) {
    auto result = left;
    result -= right;
    return result;
}

inline float CVector2D::Distance(const CVector2D& left, const CVector2D& right) {
    auto result = left;
    result -= right;
    return result.Magnitude();
}

inline CVector2D CVector2D::Lerp(const CVector2D& begin, const CVector2D& end, float progress) {
    return CVector2D(
        std::lerp(begin.x, end.x, progress),
        std::lerp(begin.y, end.y, progress)
    );
}

inline float CVector2D::Dot(const CVector2D& left, const CVector2D& right) {
    return left.y * right.y + left.x * right.x;
}

inline float CVector2D::Cross(const CVector2D& left, const CVector2D &right) {
    return left.x * right.y - left.y * right.x;
}

// static operators

inline CVector2D operator +(float value, const CVector2D& vec) {
    auto result = vec;
    result += value;
    return result;
}

inline CVector2D operator +(const CVector2D& vec, float value) {
    auto result = vec;
    result += value;
    return result;
}

inline CVector2D operator +(const CVector2D& left, const CVector2D& right) {
    auto result = left;
    result += right;
    return result;
}

inline CVector2D operator -(float value, const CVector2D& vec) {
    auto result = CVector2D(value);
    result -= vec;
    return result;
}

inline CVector2D operator -(const CVector2D& vec, float value) {
    auto result = vec;
    result -= value;
    return result;
}

inline CVector2D operator -(const CVector2D& left, const CVector2D& right) {
    auto result = left;
    result -= right;
    return result;
}

inline CVector2D operator *(float value, const CVector2D& vec) {
    auto result = vec;
    result *= value;
    return result;
}

inline CVector2D operator *(const CVector2D& vec, float value) {
    auto result = vec;
    result *= value;
    return result;
}

inline CVector2D operator /(float value, const CVector2D& vec) {
    auto result = CVector2D(value);
    result.x /= vec.x;
    result.y /= vec.y;
    return result;
}

inline CVector2D operator /(const CVector2D& vec, float value) {
    auto result = vec;
    result /= value;
    return result;
}
