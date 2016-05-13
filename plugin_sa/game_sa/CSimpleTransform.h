#pragma once

#include "plbase/PluginBase.h"
#include "CVector.h"

class PLUGIN_API CSimpleTransform
{
public:
	CVector m_vPosn;
	float m_fHeading;

	void UpdateRwMatrix(struct RwMatrix *out);
	void Invert(CSimpleTransform const& base);
	void UpdateMatrix(class CMatrix *out);
};

VALIDATE_SIZE(CSimpleTransform, 0x10);