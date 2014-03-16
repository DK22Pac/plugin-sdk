#include "CBox.h"

void CBox::Set(CVector  const& sup, CVector  const& inf)
{
	((void (__thiscall *)(CBox *, CVector  const&, CVector  const&))0x40EDE0)(this, sup, inf);
}

void CBox::Recalc()
{
	((void (__thiscall *)(CBox *))0x40EE20)(this);
}