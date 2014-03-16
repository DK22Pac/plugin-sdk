#pragma once

#include "plugin/plugin.h"
#include "CVector.h"
#include "CMatrix.h"

class PLUGIN_API CSimpleTransform
{
public:
	CVector m_vPosn;
	float m_fHeading;

	void UpdateRwMatrix(RwMatrixTag *out);
	void Invert(CSimpleTransform const& base);
	void UpdateMatrix(CMatrix *out);
};

VALIDATE_SIZE(CSimpleTransform, 0x10);