/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColLine.h"

CColLine::CColLine(CVector  const& start, CVector  const& end)
{
	((void (__thiscall *)(CColLine *, CVector  const&, CVector  const&))0x40EF50)(this, start, end);
}

void CColLine::Set(CVector  const& start, CVector  const& end)
{
	((void (__thiscall *)(CColLine *, CVector  const&, CVector  const&))0x40EF10)(this, start, end);
}