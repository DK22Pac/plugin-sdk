/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheZones.h"

CZone* CTheZones::GetZone(unsigned short i) {
    return plugin::CallAndReturn<CZone*, 0x4B6FA0, unsigned short>(i);
}

bool CTheZones::ZoneIsEntirelyContainedWithinOtherZone(CZone* z1, CZone* z2) {
	return plugin::CallAndReturn<bool, 0x4B65F0, CZone*, CZone*>(z1, z2);
}

bool CTheZones::PointLiesWithinZone(const CVector* point, CZone* zone) {
	return plugin::CallAndReturn<bool, 0x4B6710, const CVector*, CZone*>(point, zone);
}

CZone* CTheZones::FindSmallestZonePosition(CVector const& pos) {
    return plugin::CallAndReturn<CZone*, 0x4B69B0, CVector const&>(pos);
}

CZone* CTheZones::FindSmallestZonePositionType(CVector const& pos, int type) {
    return plugin::CallAndReturn<CZone*, 0x4B6790, CVector const&, int>(pos, type);
}

CZone* CTheZones::FindSmallestZonePositionILN(CVector const& pos) {
	return plugin::CallAndReturn<CZone*, 0x4B6890, CVector const&>(pos);
}

unsigned short CTheZones::FindZoneByLabelAndReturnIndex(char* name) {
	return plugin::CallAndReturn<unsigned short, 0x4B6800, char*>(name);
}

CZoneInfo* CTheZones::GetZoneInfo(CVector const& pos, bool day) {
    return plugin::CallAndReturn<CZoneInfo*, 0x4B6A10, CVector const&, char>(pos, day);
}

void CTheZones::GetZoneInfoForTimeOfDay(const CVector* pos, CZoneInfo* info) {
    plugin::Call<0x4B6FB0, const CVector*, CZoneInfo*>(pos, info);
}

int32_t CTheZones::GetLevelFromPosition(CVector const& pos) {
    return plugin::CallAndReturn<int32_t, 0x4B6910, CVector const&>(pos);
}

void CTheZones::SetZoneCarInfo(int zoneid, unsigned char day, short carDensity,
    short gang0Num, short gang1Num, short gang2Num,
    short gang3Num, short gang4Num, short gang5Num,
    short gang6Num, short gang7Num, short gang8Num,
    short copNum,
    short car0Num, short car1Num, short car2Num,
    short car3Num, short car4Num, short car5Num)
{
    return plugin::Call<0x4B6A50, int, unsigned char, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short, short>
        (
            zoneid, day, carDensity,
            gang0Num, gang1Num, gang2Num,
            gang3Num, gang4Num, gang5Num,
            gang6Num, gang7Num, gang8Num,
            copNum,
            car0Num, car1Num, car2Num,
			car3Num, car4Num, car5Num
        );
}

void CTheZones::SetZonePedInfo(int zoneid, char day, short pedDensity,
    short gang0Density, short gang1Density, short gang2Density, short gang3Density,
    short gang4Density, short gang5Density, short gang6Density, short gang7Density,
    short gang8Density, short copDensity)
{
    return plugin::Call<0x4B6DC0, int, char, short, short, short, short, short, short, short, short, short, short, short>
        (
            zoneid, day, pedDensity,
            gang0Density, gang1Density, gang2Density, gang3Density,
            gang4Density, gang5Density, gang6Density, gang7Density,
            gang8Density, copDensity
		);
}

void CTheZones::SetCarDensity(unsigned short zoneid, unsigned char day, unsigned short cardensity) {
	return plugin::Call<0x4B6EB0, unsigned short, unsigned char, unsigned short>(zoneid, day, cardensity);
}

void CTheZones::SetPedDensity(unsigned short zoneid, unsigned char day, unsigned short peddensity) {
	return plugin::Call<0x4B6F00, unsigned short, unsigned char, unsigned short>(zoneid, day, peddensity);
}

eLevelName CTheZones::FindZoneForPoint(const CVector& pos) {
	return plugin::CallAndReturn<eLevelName, 0x4B8430, const CVector&>(pos);
}
