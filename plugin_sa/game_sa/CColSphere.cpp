/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColSphere.h"

void CColSphere::Set(float radius, CVector  const& center, unsigned char material , unsigned char flags, unsigned char lighting)
{
	((void (__thiscall *)(CColSphere *, float, CVector  const&, unsigned char, unsigned char, unsigned char))0x40FD10)(this, radius, center, material , flags, lighting);
}

bool CColSphere::IntersectRay(CVector  const& rayStart, CVector  const& rayEnd, CVector& intPoint1, CVector& intPoint2)
{
	return ((bool (__thiscall *)(CColSphere *, CVector  const&, CVector  const&, CVector&, CVector&))0x40FF20)(this, rayStart, rayEnd, intPoint1 , intPoint2);
}