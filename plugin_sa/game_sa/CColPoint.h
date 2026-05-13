/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct PLUGIN_API tColLighting
{
    unsigned char day : 4;
    unsigned char night : 4;
};
VALIDATE_SIZE(tColLighting, 0x1);


class PLUGIN_API CColPoint {
public:
	/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CColPointSA.h */
	CVector       m_vecPoint;
	float field_C;
	CVector       m_vecNormal;
	float field_1C;
    // col shape 1 info
	unsigned char m_nSurfaceTypeA; // see eSurfaceType
	unsigned char m_nPieceTypeA;
    tColLighting m_nLightingA;
private:
    char _pad;
public:
    // col shape 2 info
	unsigned char m_nSurfaceTypeB; // see eSurfaceType
	unsigned char m_nPieceTypeB;
    tColLighting m_nLightingB;
private:
    char _pad2;
public:
    // col depth
	float         m_fDepth;

	void operator=(CColPoint const& right);
};
VALIDATE_OFFSET(CColPoint, m_vecPoint, 0x0);
VALIDATE_OFFSET(CColPoint, field_C, 0xC);
VALIDATE_OFFSET(CColPoint, m_vecNormal, 0x10);
VALIDATE_OFFSET(CColPoint, field_1C, 0x1C);
VALIDATE_OFFSET(CColPoint, m_nSurfaceTypeA, 0x20);
VALIDATE_OFFSET(CColPoint, m_nPieceTypeA, 0x21);
VALIDATE_OFFSET(CColPoint, m_nLightingA, 0x22);
VALIDATE_OFFSET(CColPoint, m_nSurfaceTypeB, 0x24);
VALIDATE_OFFSET(CColPoint, m_nPieceTypeB, 0x25);
VALIDATE_OFFSET(CColPoint, m_nLightingB, 0x26);
VALIDATE_OFFSET(CColPoint, m_fDepth, 0x28);
VALIDATE_SIZE(CColPoint, 0x2C);