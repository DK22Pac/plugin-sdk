/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVector.h"
#include "CZone.h"



#pragma pack(push, 1)
class PLUGIN_API CTheZones
{
public:
	// Variables

	static eLevelName& m_CurrLevel;	
	
	// Explored teritories

	// Count: 100
	static char* ExploredTerritoriesArray;
	// Number of explored territories
	static int& TotalNumberExploredTerritories;

	// Info zones
	static short& TotalNumberOfInfoZones;
	// Count: 380
	static CZone* ZoneInfoArray;

	// Map zones
	static short& TotalNumberOfMapZones;
	// Count: 39
	static CZone* MapZoneArray;

	// Functions

	// Creates a zone
	static void CreateZone(const char *name, eZoneType type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, eLevelName island, const char *GXT_key);

	// Returns eLevelName from position
	static eLevelName GetLevelFromPosition(CVector const* pPoint);

	// Returns pointer to zone by index
	static CZone* GetInfoZone(short index);

	// Returns pointer to zone by index
	static CZone* GetMapZone(short index);

	// Returns pointer to zone by index
	static short FindZoneByLabelAndReturnIndex(const char* name, int unk2);

	// Returns pointer to zone by a point
	static CZone* FindZoneForPoint(const CVector& point, bool FindOnlyZonesType0);

	// Initializes CTheZones
	static void Init();

	// Returns true if point lies within zone
	static bool PointLiesWithinZone(CVector const* pPoint, CZone * pZone);

	// Updates CTheZones info
	static void Update();

};
#pragma pack(pop)