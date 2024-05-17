/*
    Plugin-SDK (Grand Theft Auto 3 Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector2D.h"

CVector2D::CVector2D() {
    x = 0.0f; y = 0.0f;
}

CVector2D::CVector2D(float X, float Y) {
    x = X; y = Y;
}

CVector2D::CVector2D(CVector2D const& src) {
    x = src.x; y = src.y;
}

float CVector2D::Magnitude() {
    return sqrtf(this->x * this->x + this->y * this->y);
}

float CVector2D::MagnitudeSqr() {
    return x * x + y * y;
}

void CVector2D::Sum(CVector2D& a, CVector2D& b) {
    this->x = a.x + b.x;
    this->y = a.y + b.y;
}

void CVector2D::Difference(CVector2D& a, CVector2D& b) {
    this->x = a.x - b.x;
    this->y = a.y - b.y;
}

void CVector2D::Normalise() {
    float sq = MagnitudeSqr();
    float invsqrt = 1.0f / sqrt(sq);
    x *= invsqrt;
    y *= invsqrt;
}

void CVector2D::operator=(const CVector2D& right) {
    this->x = right.x;
    this->y = right.y;
}

void CVector2D::operator+=(const CVector2D& right) {
    this->x += right.x;
    this->y += right.y;
}

void CVector2D::operator-=(const CVector2D& right) {
    this->x -= right.x;
    this->y -= right.y;
}

void CVector2D::operator*=(float multiplier) {
    this->x *= multiplier;
    this->y *= multiplier;
}

void CVector2D::operator/=(float divisor) {
    this->x /= divisor;
    this->y /= divisor;
}
