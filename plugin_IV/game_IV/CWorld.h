/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CPlayerInfo.h"
#include "CColPoint.h"

enum eLineOfSightFlags {
    LINE_OF_SIGHT_FLAG_STATIC_COLLISION = 2,
    LINE_OF_SIGHT_FLAG_BUILDINGS = 4,
    LINE_OF_SIGHT_FLAG_VEHICLES = 8,
    LINE_OF_SIGHT_FLAG_PEDS_BOUNDING_BOX = 32,
    LINE_OF_SIGHT_FLAG_PEDS_COLLISION = 64,
    LINE_OF_SIGHT_FLAG_OBJECTS = 128,
};

struct hitPoint {
    void* hitEntity;
    uint8_t field_2[12];
    rage::Vector3 hitPosition;
    uint32_t field_3;
    rage::Vector3 pos;
    uint32_t field_5;
    rage::Vector3 pos2;
    uint32_t field_7;
    float field_8;
    float field_9;
    uint32_t field_10;
    uint32_t field_11;
    uint32_t field_12;
};

VALIDATE_SIZE(hitPoint, 0x54);

class CWorld {
public:
    static int32_t& PlayerInFocus;
    static CPlayerInfo** Players;

public:
    static bool ProcessLineOfSight(rage::Vector3 const& source, rage::Vector3 const& target, CColPoint* outColPoint, hitPoint* outHitPoint, uint32_t flags, uint32_t a6, uint32_t a7, uint32_t doShootThroughCheck, uint32_t a8);
    static float FindGroundZFor3DCoord(float x, float y, float z, bool* outResult, CEntity** outEntity);
    static float FindGroundZForCoord(float x, float y);
    static void Add(CEntity* e, bool arg);
    static void Remove(CEntity* e, bool arg);
};
