/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CZone.h"
#include "CZoneInfo.h"
#include "CVector.h"

class PLUGIN_API CTheZones {
public:
    static CZone* GetZone(unsigned short i);
    static bool ZoneIsEntirelyContainedWithinOtherZone(CZone* z1, CZone* z2);
    static bool PointLiesWithinZone(const CVector* point, CZone* zone);
    static CZone* FindSmallestZonePosition(CVector const& pos);
    static CZone* FindSmallestZonePositionType(CVector const& pos, int type);
    static CZone* FindSmallestZonePositionILN(CVector const& pos);
    static unsigned short FindZoneByLabelAndReturnIndex(char* name);
    static CZoneInfo* GetZoneInfo(CVector const& pos, bool day);
    static void GetZoneInfoForTimeOfDay(const CVector* pos, CZoneInfo* info);
    static int32_t GetLevelFromPosition(CVector const& pos);
	static void SetZoneCarInfo(int zoneid, unsigned char day, short carDensity,
		short gang0Num, short gang1Num, short gang2Num,
		short gang3Num, short gang4Num, short gang5Num,
		short gang6Num, short gang7Num, short gang8Num,
		short copNum,
		short car0Num, short car1Num, short car2Num,
		short car3Num, short car4Num, short car5Num);
	static void SetZonePedInfo(int zoneid, char day, short pedDensity,
		short gang0Density, short gang1Density, short gang2Density, short gang3Density,
		short gang4Density, short gang5Density, short gang6Density, short gang7Density,
		short gang8Density, short copDensity);
	static void SetCarDensity(unsigned short zoneid, unsigned char day, unsigned short cardensity);
	static void SetPedDensity(unsigned short zoneid, unsigned char day, unsigned short peddensity);
	static void SetPedGroup(unsigned short zoneid, unsigned char day, unsigned short pedgroup);
	static short FindAudioZone(CVector* pos);
	static eLevelName FindZoneForPoint(const CVector& pos);
};
