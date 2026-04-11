/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEncodedVector.h"
#include "CVector2D.h"
#include "CVector.h"

// 2D

CEncodedVector2D::CEncodedVector2D() {
    x = 0;
    y = 0;
}

CEncodedVector2D::CEncodedVector2D(int x, int y) {
    this->x = x;
    this->y = y;
}

CEncodedVector2D::CEncodedVector2D(const CVector2D& src) {
    x = (int)(src.x * 16384);
    y = (int)(src.y * 16384);
}

CVector2D CEncodedVector2D::FromInt16() {
    return CVector2D(x / 16384.0f, y / 16384.0f);
}

// 3D

CEncodedVector::CEncodedVector() {
    x = 0;
    y = 0;
    z = 0;
}

CEncodedVector::CEncodedVector(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

CEncodedVector::CEncodedVector(const CVector& src) {
    x = (int)(src.x * 16384);
    y = (int)(src.y * 16384);
    z = (int)(src.z * 16384);
}

CVector CEncodedVector::FromInt16() {
    return CVector(x / 16384.0f, y / 16384.0f, z / 16384.0f);
}
