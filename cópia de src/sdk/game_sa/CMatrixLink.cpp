#include "CMatrixLink.h"

NOINLINE CMatrixLink::CMatrixLink()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CMatrixLink *))0x54F0C0)(this);
}

NOINLINE CMatrixLink::~CMatrixLink()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CMatrixLink *))0x54E8E0)(this);
}

void CMatrixLink::Insert(CMatrixLink *matrixLink)
{
	((CMatrixLink * (__thiscall *)(CMatrixLink *, CMatrixLink *))0x54E8F0)(this, matrixLink);
}

void CMatrixLink::Remove()
{
	((CMatrixLink * (__thiscall *)(CMatrixLink *))0x54E910)(this);
}