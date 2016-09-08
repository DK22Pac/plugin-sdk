/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CSphere.h"

#pragma pack(push, 1)
class PLUGIN_API CColSphere : public CSphere
{
public:
	unsigned __int8 m_nMaterial;
	unsigned __int8 m_nFlags;
	unsigned __int8 m_nLighting;
	unsigned __int8 m_nLight;

	void Set(float radius, CVector  const& center, unsigned char material , unsigned char flags, unsigned char lighting);
	bool IntersectRay(CVector  const& rayStart, CVector  const& rayEnd, CVector& intPoint1, CVector& intPoint2);
};
#pragma pack(pop)

VALIDATE_SIZE(CColSphere, 0x14);