/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

class CColPoint {
public:
	/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CColPointSA.h */
	CVector       m_vecPoint;
	float field_C;
	CVector       m_vecNormal;
	float field_1C;
    // col shape 1 info
	unsigned char m_nSurfaceTypeA;
	unsigned char m_nPieceTypeA;
	unsigned char m_nLightingA;
    // col shape 2 info
	unsigned char m_nSurfaceTypeB;
	unsigned char m_nPieceTypeB;
	unsigned char m_nLightingB;
    // col depth
	float         m_fDepth;

	void operator=(CColPoint const& right);
};

VALIDATE_SIZE(CColPoint, 0x2C);