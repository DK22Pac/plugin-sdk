/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector.h"

CVector2D CVector::To2D() const {
    return CVector2D(x, y);
}

void CVector::From2D(const CVector2D& vec2d, float zValue) {
    x = vec2d.x;
    y = vec2d.y;
    z = zValue;
}

CVector::CVector(const CVector2D& vec2d, float zValue) {
    From2D(vec2d, zValue);
}