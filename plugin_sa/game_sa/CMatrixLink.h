/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

// NOT FINISHED!

#include "PluginBase.h"
#include "CMatrix.h"
#include "CVector.h"

class PLUGIN_API CMatrixLink : public CMatrix
{
public:
	class CPlaceable  *m_pOwner;
	class CMatrixLink *m_pPrev;
	class CMatrixLink *m_pNext;

	CMatrixLink();
	~CMatrixLink();
	void Insert(CMatrixLink *matrixLink);
	void Remove();
};

VALIDATE_SIZE(CMatrixLink, 0x54);