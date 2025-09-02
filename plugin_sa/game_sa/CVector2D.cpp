/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector2D.h"
#include "CVector.h"

float CVector2D::Magnitude()
{
	return ((float (__thiscall *)(CVector2D *))0x420860)(this);
}

void CVector2D::operator=(CVector2D const& right)
{
	((void (__thiscall *)(CVector2D *, CVector2D const&))0x43E110)(this, right);
}

CVector CVector2D::To3D(float zValue) 
{
    return CVector(x, y, zValue);
}

void CVector2D::From3D(const CVector& vec3d) 
{
    x = vec3d.x;
    y = vec3d.y;
}

CVector2D::CVector2D(const CVector& vec3d)
{
    x = vec3d.x;
    y = vec3d.y;
}