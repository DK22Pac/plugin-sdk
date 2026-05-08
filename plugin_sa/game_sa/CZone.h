/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rw/rwplcore.h"     // for RwRGBA stuct
#include "CZoneInfo.h"

enum eZoneType {
	ZONE_TYPE_NAVI = 0,		// controls text s
	ZONE_TYPE_MAP = 3
};

enum eLevelName {
	LEVEL_NAME_COUNTRY_SIDE,
	LEVEL_NAME_LOS_SANTOS,
	LEVEL_NAME_SAN_FIERRO,
	LEVEL_NAME_LAS_VENTURAS
};

class CZone {
public:
    char          m_szLabel[8];
	char          m_szTextKey[8];
	short         m_fX1;
	short         m_fY1;
	short         m_fZ1;
	short         m_fX2;
	short         m_fY2;
	short         m_fZ2;
	CZoneInfo     m_nZoneExtraIndexInfo;
	unsigned char m_nType; // see eZoneType
    unsigned char m_nLevel; // see eLevelName

	// Returns pointer to GXT name string.
	const char* GetTranslatedName();
};
VALIDATE_OFFSET(CZone, m_szLabel, 0x0);
VALIDATE_OFFSET(CZone, m_szTextKey, 0x8);
VALIDATE_OFFSET(CZone, m_fX1, 0x10);
VALIDATE_OFFSET(CZone, m_fY1, 0x12);
VALIDATE_OFFSET(CZone, m_fZ1, 0x14);
VALIDATE_OFFSET(CZone, m_fX2, 0x16);
VALIDATE_OFFSET(CZone, m_fY2, 0x18);
VALIDATE_OFFSET(CZone, m_fZ2, 0x1A);
VALIDATE_OFFSET(CZone, m_nZoneExtraIndexInfo, 0x1C);
VALIDATE_OFFSET(CZone, m_nType, 0x2D);
VALIDATE_OFFSET(CZone, m_nLevel, 0x2E);
VALIDATE_SIZE(CZone, 0x30);
