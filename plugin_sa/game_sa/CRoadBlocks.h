/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector.h"

struct tScriptRoadBlocks {
	CVector	cornerA;
	CVector	cornerB;
	char	m_nActive;
	char	m_bIsCreated;
	char	type;
	char	field_1B;
};
VALIDATE_OFFSET(tScriptRoadBlocks, cornerA, 0x0);
VALIDATE_OFFSET(tScriptRoadBlocks, cornerB, 0xC);
VALIDATE_OFFSET(tScriptRoadBlocks, m_nActive, 0x18);
VALIDATE_OFFSET(tScriptRoadBlocks, m_bIsCreated, 0x19);
VALIDATE_OFFSET(tScriptRoadBlocks, type, 0x1A);
VALIDATE_OFFSET(tScriptRoadBlocks, field_1B, 0x1B);
VALIDATE_SIZE(tScriptRoadBlocks, 0x1C);

struct tRoadbloxDat {
	short areaId;
	short nodeId;
};
VALIDATE_OFFSET(tRoadbloxDat, areaId, 0x0);
VALIDATE_OFFSET(tRoadbloxDat, nodeId, 0x2);
VALIDATE_SIZE(tRoadbloxDat, 0x4);

class PLUGIN_API CRoadBlocks {
public:
	SUPPORTED_10US static tScriptRoadBlocks(&aScriptRoadBlocks)[16]; // static tScriptRoadBlocks aScriptRoadBlocks[16]
	SUPPORTED_10US static tRoadbloxDat(&roadbloxDat)[325]; // static tRoadbloxDat roadbloxDat[325]
	SUPPORTED_10US static unsigned int &roadbloxFlags;
	SUPPORTED_10US static unsigned int &roadbloxDatSize;

	SUPPORTED_10US_11US static void RegisterScriptRoadBlock(CVector *cornerA, CVector *cornerB, byte type);
	SUPPORTED_10US_11US static void ClearScriptRoadBlocks();
	SUPPORTED_10US static void Init();
	SUPPORTED_10US_11US static void GenerateRoadBlockCopsForCar(CVehicle *car, int pedsPositionsType, byte type);
	SUPPORTED_10US_11US static void CreateRoadBlockBetween2Points(CVector *a, CVector *b, byte type);
	SUPPORTED_10US_11US static void GenerateRoadBlocks();
};
VALIDATE_SIZE(CRoadBlocks, 0x1);

#include "meta/meta.CRoadBlocks.h"
