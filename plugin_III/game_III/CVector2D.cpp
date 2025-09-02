/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector2D.h"

CVector CVector2D::To3D(float zValue) {
    return CVector(x, y, zValue);
}

void CVector2D::From3D(const CVector& vec3d) {
    x = vec3d.x;
    y = vec3d.y;
}

CVector::CVector(const CVector2D& vec2d, float zValue) {
    From2D(vec2d, zValue);
}

CVector2D::CVector2D(CVector const& src) {
    x = src.x; y = src.y;
}