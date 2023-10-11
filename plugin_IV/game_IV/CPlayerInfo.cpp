/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerInfo.h"
#include "Patch.h"

static uint32_t* CPlayerInfo__ms_nTimeSinceLastDeathAddr;
uint32_t& CPlayerInfo::ms_nTimeSinceLastDeath = *(uint32_t*)CPlayerInfo__ms_nTimeSinceLastDeathAddr;

static uint32_t* CPlayerInfo__ms_nTimeSinceLastArrestAddr;
uint32_t& CPlayerInfo::ms_nTimeSinceLastArrest = *(uint32_t*)CPlayerInfo__ms_nTimeSinceLastArrestAddr;

static uint32_t* CPlayerInfo__ms_aModelsKilled;
uint32_t* CPlayerInfo::ms_aModelsKilled = CPlayerInfo__ms_aModelsKilled; // 1100

static CPlayerComponents* CPlayerInfo__ms_PlayerComponents;
CPlayerComponents& ms_PlayerComponents = *(CPlayerComponents*)CPlayerInfo__ms_PlayerComponents;

static uint32_t CPlayerInfo__CPlayerInfoAddr;
CPlayerInfo::CPlayerInfo() {
    plugin::CallMethodDyn<CPlayerInfo*>(CPlayerInfo__CPlayerInfoAddr, this);
}

static uint32_t CPlayerInfo__GetPlayerNameAddr;
const char* CPlayerInfo::GetPlayerName() {
    return plugin::CallMethodAndReturnDyn<const char*>(CPlayerInfo__GetPlayerNameAddr, this);
}

static uint32_t CPlayerInfo__MakePlayerSafeAddr;
void CPlayerInfo::MakePlayerSafe(bool arg1, bool safe, float radius, bool arg4, bool arg5) {
    plugin::CallMethodDyn<CPlayerInfo*>(CPlayerInfo__MakePlayerSafeAddr, this, arg1, safe, radius, arg4, arg5);
}

static uint32_t CPlayerInfo__IsPlayerOnline;
bool CPlayerInfo::IsPlayerOnline() {
    return plugin::CallMethodAndReturnDyn<bool>(CPlayerInfo__IsPlayerOnline, this);
}

template<>
void plugin::InitPatterns<CPlayerInfo>() {
    CPlayerInfo__ms_nTimeSinceLastDeathAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? A3 ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E9", 2));
    CPlayerInfo__ms_nTimeSinceLastArrestAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? A3 ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E9", 2));
    
    CPlayerInfo__ms_aModelsKilled = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("8D 3C 85 ? ? ? ? B9", 2));
    CPlayerInfo__ms_PlayerComponents = (CPlayerComponents*)plugin::patch::GetPointer(plugin::GetPattern("88 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC FF 74 24 04", 2));

    CPlayerInfo__CPlayerInfoAddr = plugin::GetPattern("56 8B F1 E8 ? ? ? ? 8D 4E 70", 0);
    CPlayerInfo__GetPlayerNameAddr = plugin::GetPattern("8D 41 5C C3", 0);
    CPlayerInfo__MakePlayerSafeAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 1C 80 7D 08 00", 0);

    CPlayerInfo__IsPlayerOnline = plugin::GetPattern("55 8B EC 83 E4 F8 83 EC 0C 56 8B F1 E8 ? ? ? ? 84 C0 74 0C", 0);
}
