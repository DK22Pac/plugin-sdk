/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CWorld.h"

int32_t& CWorld::PlayerInFocus = *gpatternt(int32_t, "A1 ? ? ? ? 83 F8 FF 74 12", 1);
CPlayerInfo** CWorld::Players = gpatternt(CPlayerInfo*, "89 3C 9D ? ? ? ? 8B 6C 24 18", 3);

bool CWorld::ProcessLineOfSight(rage::Vector3 const& source, rage::Vector3 const& target, CColPoint* outColPoint, hitPoint* outHitPoint, uint32_t flags, uint32_t a6, uint32_t a7, uint32_t doShootThroughCheck, uint32_t a8) {
    return plugin::CallAndReturnDyn<bool>(gpattern("55 8B EC 83 E4 F0 83 EC 58 B8"), &source, &target, outColPoint, outHitPoint, flags, a6, a7, doShootThroughCheck, a8);
}

float CWorld::FindGroundZFor3DCoord(float x, float y, float z, bool* outResult, CEntity** outEntity) {
    return plugin::CallAndReturnDyn<float>(gpattern("55 8B EC 83 E4 F0 83 EC 70 FF 75 1C"), x, y, z, outResult, outEntity);
}

float CWorld::FindGroundZForCoord(float x, float y) {
    return plugin::CallAndReturnDyn<bool>(gpattern("55 8B EC 83 E4 F0 83 EC 70 FF 75 10"), x, y);
}

void CWorld::Add(CEntity* e, bool arg) {
    plugin::CallDyn(gpattern("56 8B 74 24 08 8B CE 89 35"), e, arg);
}

void CWorld::Remove(CEntity* e, bool arg) {
    plugin::CallDyn(gpattern("56 8B 74 24 08 8B CE F7 46"), e, arg);
}

