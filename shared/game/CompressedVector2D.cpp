/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CompressedVector2D.h"
#include "CompressedVector.h"

#ifdef RW
#include "RenderWare.h"
#include "CVector2D.h"
#endif

CompressedVector2D::CompressedVector2D() {
    Set(0, 0);
}

CompressedVector2D::CompressedVector2D(short X, short Y) {
    Set(X, Y);
}

CompressedVector2D::CompressedVector2D(CompressedVector2D const & rhs) {
    Set(rhs);
}

CompressedVector2D::CompressedVector2D(CompressedVector const & rhs) {
    Set(rhs);
}

#ifdef RW
CompressedVector2D::CompressedVector2D(CVector2D const & rhs) {
    Set(rhs);
}

CompressedVector2D::CompressedVector2D(RwV2d const & rhs) {
    Set(rhs);
}
#endif

void CompressedVector2D::Set(short X, short Y) {
    x = X;
    y = Y;
}

void CompressedVector2D::Set(CompressedVector2D const & rhs) {
    x = rhs.x;
    y = rhs.y;
}

void CompressedVector2D::Set(CompressedVector const & rhs) {
    x = rhs.x;
    y = rhs.y;
}

#ifdef RW
void CompressedVector2D::Set(CVector2D const & rhs) {
    x = static_cast<short>(rhs.x * 8.0f);
    y = static_cast<short>(rhs.y * 8.0f);
}

void CompressedVector2D::Set(RwV2d const & rhs) {
    x = static_cast<short>(rhs.x * 8.0f);
    y = static_cast<short>(rhs.y * 8.0f);
}

CVector2D CompressedVector2D::Uncompressed() const {
    return CVector2D(static_cast<float>(x) / 8.0f, static_cast<float>(y) / 8.0f);
}

RwV2d CompressedVector2D::ToRwV2d() const {
    RwV2d result;
    result.x = static_cast<float>(x) / 8.0f;
    result.y = static_cast<float>(y) / 8.0f;
    return result;
}
#endif

CompressedVector CompressedVector2D::To3D() const {
    return CompressedVector(x, y, 0);
}

#ifdef RW
void CompressedVector2D::Uncompress(CVector2D &out) const {
    out = Uncompressed();
}
#endif

bool CompressedVector2D::operator==(CompressedVector2D const &rhs) const {
    return x == rhs.x && y == rhs.y;
}
bool CompressedVector2D::operator!=(CompressedVector2D const &rhs) const {
    return x != rhs.x || y != rhs.y;
}
