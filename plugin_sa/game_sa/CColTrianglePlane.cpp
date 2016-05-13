#include "CColTrianglePlane.h"

void CColTrianglePlane::GetNormal(CVector &out)
{
	((void (__thiscall *)(CColTrianglePlane *, CVector &))0x411610)(this, out);
}

void CColTrianglePlane::Set(CompressedVector  const* vertices, CColTriangle & triangle)
{
	((void (__thiscall *)(CColTrianglePlane *, CompressedVector  const*, CColTriangle &))0x411660)(this, vertices, triangle);
}