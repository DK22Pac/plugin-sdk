/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBox.h"

void CBox::Set(CVector  const& vecMin, CVector  const& vecMax)
{
	((void (__thiscall *)(CBox *, CVector  const&, CVector  const&))0x40EDE0)(this, vecMin, vecMax);
}

void CBox::Recalc()
{
	((void (__thiscall *)(CBox *))0x40EE20)(this);
}