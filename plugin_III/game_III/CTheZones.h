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
    static CZone* FindSmallestZonePosition(CVector const& pos);
    static CZone* FindSmallestZonePositionType(CVector const& pos, int type);
    static CZoneInfo* GetZoneInfo(CVector const& pos, bool day);
    static void GetZoneInfoForTimeOfDay(const CVector* pos, CZoneInfo* info);
    static int32_t GetLevelFromPosition(CVector const& pos);
};
