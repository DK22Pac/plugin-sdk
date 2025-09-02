/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector2D.h"
#include "CVector.h"

CVector CVector2D::To3D(float zValue) const {
    return CVector(x, y, zValue);
}

void CVector2D::From3D(const CVector& vec3d) {
    x = vec3d.x;
    y = vec3d.y;
}

CVector2D::CVector2D(CVector const& src) {
    x = src.x; y = src.y;
}