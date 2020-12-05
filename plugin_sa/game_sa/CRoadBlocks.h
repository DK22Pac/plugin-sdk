/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others work!
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

struct tRoadbloxDat {
	short areaId;
	short nodeId;
};

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

#include "meta/meta.CRoadBlocks.h"
