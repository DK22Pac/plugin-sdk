/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheZones.h"

CZone* CTheZones::FindSmallestZonePosition(CVector const& pos) {
    return plugin::CallAndReturn<CZone*, 0x4B69B0, CVector const&>(pos);
}

CZoneInfo* CTheZones::GetZoneInfo(CVector const& pos, bool day) {
    return plugin::CallAndReturn<CZoneInfo*, 0x4B6A10, CVector const&, char>(pos, day);
}
