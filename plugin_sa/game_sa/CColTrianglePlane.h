/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector.h"
#include "CVector.h"
#include "CColTriangle.h"

class CColTrianglePlane {
public:
	CompressedVector m_normal;
	unsigned short m_nDistance;
	unsigned char m_nOrientation;
	
	void GetNormal(CVector &out);
	void Set(CompressedVector  const* vertices, CColTriangle & triangle);
};
VALIDATE_OFFSET(CColTrianglePlane, m_normal, 0x0);
VALIDATE_OFFSET(CColTrianglePlane, m_nDistance, 0x6);
VALIDATE_OFFSET(CColTrianglePlane, m_nOrientation, 0x8);
VALIDATE_SIZE(CColTrianglePlane, 0xA);