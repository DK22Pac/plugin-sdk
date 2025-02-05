/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CVector.h"

CEncodedVector::CEncodedVector() {
    x = 0; y = 0; z = 0;
}

CEncodedVector::CEncodedVector(int X, int Y, int Z) {
    x = X; y = Y; z = Z;
}

CVector CEncodedVector::FromInt16() {
    return CVector((this->x / 16384.0f), (this->y / 16384.0f), (this->z / 16384.0f));
}

CEncodedVector2D::CEncodedVector2D() {
    x = 0; y = 0;
}

CEncodedVector2D::CEncodedVector2D(int X, int Y) {
    x = X; y = Y;
}

CVector2D CEncodedVector2D::FromInt16() {
    return CVector2D((this->x / 16384.0f), (this->y / 16384.0f));
}

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

CEncodedVector2D CVector2D::ToInt16() {
    return CEncodedVector2D((int)(this->x * 16384), (int)(this->y * 16384));
}

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

CEncodedVector CVector::ToInt16() {
    return CEncodedVector((int)(this->x * 16384), (int)(this->y * 16384), (int)(this->z * 16384));
}
