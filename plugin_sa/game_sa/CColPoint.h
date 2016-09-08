/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CColPoint
{
public:
	/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CColPointSA.h */
	CVector         m_vPoint;
	float field_C;
	CVector         m_vNormal;
	float field_1C;
	unsigned __int8 m_nSurfaceTypeA;
	unsigned __int8 m_nPieceTypeA;
	unsigned __int8 m_nLightingA;
	unsigned __int8 m_nSurfaceTypeB;
	unsigned __int8 m_nPieceTypeB;
	unsigned __int8 m_nLightingB;
	float           m_fDepth;

	void operator=(CColPoint const& right);
};
#pragma pack(pop)

VALIDATE_SIZE(CColPoint, 0x2C);