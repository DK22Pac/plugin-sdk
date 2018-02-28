/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrixLink.h"

CMatrixLink::CMatrixLink() : CMatrix(plugin::dummy)
{
    // parent (CMatrix) constructor is dummy
	((void (__thiscall *)(CMatrixLink *))0x54F0C0)(this);
}

CMatrixLink::~CMatrixLink()
{
    // 0x54E8E0 -- This destructor is dummy
	// Let it call it's parent destructor
}

void CMatrixLink::Insert(CMatrixLink *matrixLink)
{
	((CMatrixLink * (__thiscall *)(CMatrixLink *, CMatrixLink *))0x54E8F0)(this, matrixLink);
}

void CMatrixLink::Remove()
{
	((CMatrixLink * (__thiscall *)(CMatrixLink *))0x54E910)(this);
}