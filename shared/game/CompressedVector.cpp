/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CompressedVector.h"
#include "CompressedVector2D.h"

#ifndef GTA2
#include "RenderWare.h"
#include "CVector.h"
#endif

CompressedVector::CompressedVector() {
    Set(0, 0, 0);
}

CompressedVector::CompressedVector(short X, short Y, short Z) {
    Set(X, Y, Z);
}

CompressedVector::CompressedVector(CompressedVector const & rhs) {
    Set(rhs);
}

CompressedVector::CompressedVector(CompressedVector2D const & rhs) {
    Set(rhs);
}

#ifndef GTA2
CompressedVector::CompressedVector(CVector const & rhs) {
    Set(rhs);
}

CompressedVector::CompressedVector(RwV3d const & rhs) {
    Set(rhs);
}
#endif

void CompressedVector::Set(short X, short Y, short Z) {
    x = X;
    y = Y;
    z = Z;
}

void CompressedVector::Set(CompressedVector const & rhs) {
    x = rhs.x;
    y = rhs.y;
    z = rhs.z;
}

void CompressedVector::Set(CompressedVector2D const & rhs) {
    x = rhs.x;
    y = rhs.y;
    z = 0;
}

#ifndef GTA2
void CompressedVector::Set(CVector const & rhs) {
    x = static_cast<short>(rhs.x * 8.0f);
    y = static_cast<short>(rhs.y * 8.0f);
    z = static_cast<short>(rhs.z * 8.0f);
}

void CompressedVector::Set(RwV3d const & rhs) {
    x = static_cast<short>(rhs.x * 8.0f);
    y = static_cast<short>(rhs.y * 8.0f);
    z = static_cast<short>(rhs.z * 8.0f);
}

CVector CompressedVector::Uncompressed() const {
    return CVector(static_cast<float>(x) / 8.0f, static_cast<float>(y) / 8.0f, static_cast<float>(z) / 8.0f);
}

RwV3d CompressedVector::ToRwV3d() const {
    RwV3d result;
    result.x = static_cast<float>(x) / 8.0f;
    result.y = static_cast<float>(y) / 8.0f;
    result.z = static_cast<float>(z) / 8.0f;
    return result;
}
#endif

CompressedVector2D CompressedVector::To2D() const {
    return CompressedVector2D(x, y);
}

#ifndef GTA2
void CompressedVector::Uncompress(CVector &out) const {
    out = Uncompressed();
}
#endif

bool CompressedVector::operator==(CompressedVector const &rhs) const {
    return x == rhs.x && y == rhs.y && z == rhs.z;
}
bool CompressedVector::operator!=(CompressedVector const &rhs) const {
    return x != rhs.x || y != rhs.y || z != rhs.z;
}
