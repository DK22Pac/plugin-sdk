/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CWorld.h"
#include "Patch.h"

int32_t* CWorld__PlayerInFocusAddr = nullptr;
int32_t& CWorld::PlayerInFocus = *(int32_t*)CWorld__PlayerInFocusAddr;

CPlayerInfo** CWorld::Players = nullptr;

static uint32_t CWorld__ProcessLineOfSightAddr;
bool CWorld::ProcessLineOfSight(rage::Vector3 const& source, rage::Vector3 const& target, CColPoint* outColPoint, hitPoint* outHitPoint, uint32_t flags, uint32_t a6, uint32_t a7, uint32_t doShootThroughCheck, uint32_t a8) {
    return plugin::CallAndReturnDyn<bool>(CWorld__ProcessLineOfSightAddr, &source, &target, outColPoint, outHitPoint, flags, a6, a7, doShootThroughCheck, a8);
}

static uint32_t CWorld__FindGroundZFor3DCoordAddr;
float CWorld::FindGroundZFor3DCoord(float x, float y, float z, bool* outResult, CEntity** outEntity) {
    return plugin::CallAndReturnDyn<float>(CWorld__FindGroundZFor3DCoordAddr, x, y, z, outResult, outEntity);
}

static uint32_t CWorld__FindGroundZForCoordAddr;
float CWorld::FindGroundZForCoord(float x, float y) {
    return plugin::CallAndReturnDyn<bool>(CWorld__FindGroundZForCoordAddr, x, y);
}

static uint32_t CWorld__AddAddr;
void CWorld::Add(CEntity* e, bool arg) {
    plugin::CallDyn(CWorld__AddAddr, e, arg);
}

static uint32_t CWorld__RemoveAddr;
void CWorld::Remove(CEntity* e, bool arg) {
    plugin::CallDyn(CWorld__RemoveAddr, e, arg);
}

template<>
void plugin::InitPatterns<CWorld>() {
    CWorld__PlayerInFocusAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A1 ? ? ? ? 83 F8 FF 74 12", 1));
    CWorld::Players = (CPlayerInfo**)plugin::patch::GetPointer(plugin::GetPattern("89 3C 9D ? ? ? ? 8B 6C 24 18", 3)); 

    CWorld__ProcessLineOfSightAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 58 B8", 0);
    CWorld__FindGroundZFor3DCoordAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 70 FF 75 1C", 0);
    CWorld__FindGroundZForCoordAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 70 FF 75 10", 0);

    CWorld__AddAddr = plugin::GetPattern("56 8B 74 24 08 8B CE 89 35", 0);
    CWorld__RemoveAddr = plugin::GetPattern("56 8B 74 24 08 8B CE F7 46", 0);
}
