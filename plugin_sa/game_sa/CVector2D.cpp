/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector2D.h"
#include "CVector.h"
#include <math.h>

float CVector2D::Magnitude()
{
	return ((float (__thiscall *)(CVector2D *))0x420860)(this);
}

void CVector2D::operator=(CVector2D const& right)
{
	((void (__thiscall *)(CVector2D *, CVector2D const&))0x43E110)(this, right);
}

bool CVector2D::operator==(const CVector2D& other) {
    return x == other.x && y == other.y;
}

bool CVector2D::operator!=(const CVector2D& other) {
    return x != other.x || y != other.y;
}

void CVector2D::operator+=(const CVector2D& right) {
    x += right.x;
    y += right.y;
}

void CVector2D::operator-=(const CVector2D& right) {
    x -= right.x;
    y -= right.y;
}

void CVector2D::operator*=(float multiplier) {
    x *= multiplier;
    y *= multiplier;
}

void CVector2D::operator/=(float divisor) {
    x /= divisor;
    y /= divisor;
}

CVector2D::CVector2D() : x(0.0f), y(0.0f) {}

CVector2D::CVector2D(float X, float Y) : x(X), y(Y) {}

CVector2D::CVector2D(const CVector& vec3d) {
    From3D(vec3d);
}

CVector2D::CVector2D(const CVector2D& src) : x(src.x), y(src.y) {}

CVector CVector2D::To3D(float zValue) const {
    return CVector(x, y, zValue);
}

void CVector2D::From3D(const CVector& vec3d) {
    x = vec3d.x;
    y = vec3d.y;
}

float CVector2D::MagnitudeSqr() const {
    return x * x + y * y;
}

void CVector2D::Sum(const CVector2D& a, const CVector2D& b) {
    x = a.x + b.x;
    y = a.y + b.y;
}

void CVector2D::Difference(const CVector2D& a, const CVector2D& b) {
    x = a.x - b.x;
    y = a.y - b.y;
}

void CVector2D::Normalize() {
    float mag = Magnitude();
    if (mag > 0.0f) {
        x /= mag;
        y /= mag;
    }
}

float CVector2D::NormaliseAndMag() {
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

float CVector2D::Dot(const CVector2D& other) const {
    return x * other.x + y * other.y;
}

float CVector2D::Cross(const CVector2D& other) const {
    return x * other.y - y * other.x;
}

bool CVector2D::IsZero() const {
    return x == 0.0f && y == 0.0f;
}

bool CVector2D::IsNormalized() const {
    return std::fabs(MagnitudeSqr() - 1.0f) < 0.001f;
}

float CVector2D::Heading() {
    return std::atan2(-x, y);
}

CVector2D operator-(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y);
}

CVector2D operator+(const CVector2D& vecOne, const CVector2D& vecTwo) {
    return CVector2D(vecOne.x + vecTwo.x, vecOne.y + vecTwo.y);
}

CVector2D operator*(const CVector2D& vec, float multiplier) {
    return CVector2D(vec.x * multiplier, vec.y * multiplier);
}

CVector2D operator*(float multiplier, const CVector2D& vec) {
    return CVector2D(vec.x * multiplier, vec.y * multiplier);
}

CVector2D operator/(const CVector2D& vec, float divisor) {
    return CVector2D(vec.x / divisor, vec.y / divisor);
}

float DistanceBetweenPoints(const CVector2D& pointOne, const CVector2D& pointTwo) {
    return (pointTwo - pointOne).Magnitude();
}