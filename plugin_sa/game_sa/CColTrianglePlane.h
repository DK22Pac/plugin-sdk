/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
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