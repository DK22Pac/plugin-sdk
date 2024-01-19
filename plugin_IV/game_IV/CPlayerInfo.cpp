/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerInfo.h"
#include "Patch.h"

uint32_t& CPlayerInfo::ms_nTimeSinceLastDeath = *gpatternt(uint32_t, "C7 05 ? ? ? ? ? ? ? ? A3 ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E9", 2);
uint32_t& CPlayerInfo::ms_nTimeSinceLastArrest = *gpatternt(uint32_t, "C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? A3 ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E9", 2);
uint32_t* CPlayerInfo::ms_aModelsKilled = gpatternt(uint32_t, "8D 3C 85 ? ? ? ? B9", 2);
CPlayerComponents& ms_PlayerComponents = *gpatternt(CPlayerComponents, "88 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC FF 74 24 04", 2);

CPlayerInfo::CPlayerInfo() {
    plugin::CallMethodDyn<CPlayerInfo*>(gpattern("56 8B F1 E8 ? ? ? ? 8D 4E 70"), this);
}

const char* CPlayerInfo::GetPlayerName() {
    return plugin::CallMethodAndReturnDyn<const char*>(gpattern("8D 41 5C C3"), this);
}

void CPlayerInfo::MakePlayerSafe(bool arg1, bool safe, float radius, bool arg4, bool arg5) {
    plugin::CallMethodDyn<CPlayerInfo*>(gpattern("55 8B EC 83 E4 F0 83 EC 1C 80 7D 08 00"), this, arg1, safe, radius, arg4, arg5);
}

bool CPlayerInfo::IsPlayerOnline() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("55 8B EC 83 E4 F8 83 EC 0C 56 8B F1 E8 ? ? ? ? 84 C0 74 0C"), this);
}
