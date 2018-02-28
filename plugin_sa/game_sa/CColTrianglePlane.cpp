/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColTrianglePlane.h"

void CColTrianglePlane::GetNormal(CVector &out)
{
	((void (__thiscall *)(CColTrianglePlane *, CVector &))0x411610)(this, out);
}

void CColTrianglePlane::Set(CompressedVector  const* vertices, CColTriangle & triangle)
{
	((void (__thiscall *)(CColTrianglePlane *, CompressedVector  const*, CColTriangle &))0x411660)(this, vertices, triangle);
}