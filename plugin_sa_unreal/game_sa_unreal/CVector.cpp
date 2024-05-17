/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector.h"

CVector::CVector() {
    x = 0.0f; y = 0.0f; z = 0.0f;
}

CVector::CVector(float X, float Y, float Z) {
    x = X; y = Y; z = Z;
}

CVector::CVector(CVector const& src) {
    x = src.x; y = src.y; z = src.z;
}

float CVector::Magnitude() {
    return sqrtf(this->x * this->x + this->y * this->y + this->z * this->z);
}

float CVector::Magnitude2D() {
    return sqrtf(this->x * this->x + this->y * this->y);
}

void CVector::Sum(CVector& a, CVector& b) {
    this->x = a.x + b.x;
    this->y = a.y + b.y;
    this->z = a.z + b.z;
}

void CVector::Difference(CVector& a, CVector& b) {
    this->x = a.x - b.x;
    this->y = a.y - b.y;
    this->z = a.z - b.z;
}

void CVector::operator=(const CVector& right) {
    this->x = right.x;
    this->y = right.y;
    this->z = right.z;
}

void CVector::operator+=(const CVector& right) {
    this->x += right.x;
    this->y += right.y;
    this->z += right.z;
}

void CVector::operator-=(const CVector& right) {
    this->x -= right.x;
    this->y -= right.y;
    this->z -= right.z;
}

void CVector::operator *= (float multiplier) {
    this->x *= multiplier;
    this->y *= multiplier;
    this->z *= multiplier;
}

void CVector::operator/=(float divisor) {
    this->x /= divisor;
    this->y /= divisor;
    this->z /= divisor;
}