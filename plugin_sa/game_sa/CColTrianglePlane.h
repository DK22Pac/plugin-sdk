#pragma once

#include "plbase/PluginBase_SA.h"
#include "CompressedVector.h"
#include "CVector.h"
#include "CColTriangle.h"

#pragma pack(push, 4)
class PLUGIN_API CColTrianglePlane
{
public:
	CompressedVector m_Normal;
	unsigned __int16 m_wDistance;
	unsigned __int8 m_nOrientation;
	
	void GetNormal(CVector &out);
	void Set(CompressedVector  const* vertices, CColTriangle & triangle);
};
#pragma pack(pop)

VALIDATE_SIZE(CColTrianglePlane, 0xA);