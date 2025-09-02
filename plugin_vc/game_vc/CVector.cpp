/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector.h"

float CVector::Normalise() {
    return ((float(__thiscall *)(CVector *))0x4DFEA0)(this);
}

CVector::CVector(const CVector2D& vec2d, float zValue) {
    From2D(vec2d, zValue);
}

CVector2D CVector::To2D() const {
    return CVector2D(x, y);
}

void CVector::From2D(const CVector2D& vec2d, float zValue) {
    x = vec2d.x;
    y = vec2d.y;
    z = zValue;
}