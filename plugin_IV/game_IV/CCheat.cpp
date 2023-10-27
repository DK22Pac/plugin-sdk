/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"
#include "Patch.h"

static void (**CCheat__m_aCheatFuncionsAddr)();
void (**&CCheat::m_aCheatFunctions)() = (void(**)())CCheat__m_aCheatFuncionsAddr; // [32]

static int32_t* CCheat__m_aCheatHashKeysAddr;
int32_t*& CCheat::m_aCheatHashKeys = (int32_t*)CCheat__m_aCheatHashKeysAddr; // [32]

static wchar_t* Cheat__m_CheatStringAddr;
wchar_t*& CCheat::m_CheatString = (wchar_t*)Cheat__m_CheatStringAddr; // [30]

static bool* CCheat__m_aCheatsActiveAddr;
bool*& CCheat::m_aCheatsActive = (bool*)CCheat__m_aCheatsActiveAddr; // [32]

static bool CCheat__m_bHasPlayerCheatedAddr;
bool& CCheat::m_bHasPlayerCheated = *(bool*)CCheat__m_bHasPlayerCheatedAddr;

static uint32_t CCheat__AddToCheatStringAddr;
void CCheat::AddToCheatString(wchar_t lastPressedKey) {
    plugin::CallDyn(CCheat__AddToCheatStringAddr, lastPressedKey);
}

static uint32_t CCheat__VehicleCheatAddr;
CVehicle* CCheat::VehicleCheat(int32_t vehicleId) {
    return plugin::CallAndReturnDyn<CVehicle*>(CCheat__VehicleCheatAddr, vehicleId);
}

static uint32_t CCheat__ActivateCheatAddr;
void CCheat::ActivateCheat(uint32_t id) {
    plugin::CallDyn(CCheat__ActivateCheatAddr, id);
}

static uint32_t CCheat__WeaponCheat1Addr;
void CCheat::WeaponCheat1() {
    plugin::CallDyn(CCheat__WeaponCheat1Addr);
}

static uint32_t CCheat__WeaponCheat2Addr;
void CCheat::WeaponCheat2() {
    plugin::CallDyn(CCheat__WeaponCheat2Addr);
}

static uint32_t CCheat__HealthArmourAmmoCheatAddr;
void CCheat::HealthArmourAmmoCheat() {
    plugin::CallDyn(CCheat__HealthArmourAmmoCheatAddr);
}

static uint32_t CCheat__IncreaseWantedLevelCheatAddr;
void CCheat::IncreaseWantedLevelCheat() {
    plugin::CallDyn(CCheat__IncreaseWantedLevelCheatAddr);
}

static uint32_t CCheat__ClearWantedLevelCheatAddr;
void CCheat::ClearWantedLevelCheat() {
    plugin::CallDyn(CCheat__ClearWantedLevelCheatAddr);
}

static uint32_t CCheat__ChangeWeatherCheatAddr;
void CCheat::ChangeWeatherCheat() {
    plugin::CallDyn(CCheat__ChangeWeatherCheatAddr);
}

static uint32_t CCheat__SpawnAnnihilatorAddr;
void CCheat::SpawnAnnihilator() {
    plugin::CallDyn(CCheat__SpawnAnnihilatorAddr);
}

template<>
void plugin::InitPatterns<CCheat>() {
    CCheat__m_aCheatFuncionsAddr = (void (**)())plugin::patch::GetPointer(plugin::GetPattern("8B 04 BD ? ? ? ? FF D0", 3));
    CCheat__m_aCheatHashKeysAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("39 04 B5 ? ? ? ? 74 2B", 3));
    Cheat__m_CheatStringAddr = (wchar_t*)plugin::patch::GetPointer(plugin::GetPattern("66 A3 ? ? ? ? 57", 2));
    CCheat__m_aCheatsActiveAddr = (bool*)plugin::patch::GetPointer(plugin::GetPattern("80 BE ? ? ? ? ? B9 ? ? ? ? 74 07", 2));
    CCheat__m_bHasPlayerCheatedAddr = (bool*)plugin::patch::GetPointer(plugin::GetPattern("C6 05 ? ? ? ? ? 85 C0 74 04", 2));

    CCheat__AddToCheatStringAddr = plugin::GetPattern("83 EC 24 A1 ? ? ? ? 33 C4 89 44 24 20 BA", 0);
    CCheat__VehicleCheatAddr = plugin::GetPattern("55 8B EC 83 E4 F0 81 EC ? ? ? ? 56 57 8B 7D 08 85 FF 79 08", 0);
    CCheat__ActivateCheatAddr = plugin::GetPattern("56 57 8B 7C 24 0C 8B 04 BD", 0);

    CCheat__WeaponCheat1Addr = plugin::GetPattern("E8 ? ? ? ? 6A 02 FF 35 ? ? ? ? 6A 03 E8 ? ? ? ? 83 C4 04 8B C8 E8 ? ? ? ? 50 E8 ? ? ? ? 83 C4 0C 6A 02 FF 35 ? ? ? ? 6A 05", 0);
    CCheat__WeaponCheat2Addr = plugin::GetPattern("56 E8 ? ? ? ? 83 3D ? ? ? ? ? 6A 02", 0);
    CCheat__HealthArmourAmmoCheatAddr = plugin::GetPattern("56 E8 ? ? ? ? 6A 00 E8 ? ? ? ? 6A 00", 0);
    CCheat__IncreaseWantedLevelCheatAddr = plugin::GetPattern(" E8 ? ? ? ? 6A 00 E8 ? ? ? ? 8B 88 ? ? ? ? 83 C4 04", 0);
    CCheat__ClearWantedLevelCheatAddr = plugin::GetPattern("A1 ? ? ? ? 6A 04 A3", 0);
    CCheat__ChangeWeatherCheatAddr = plugin::GetPattern("E8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A 06", 0);
    CCheat__SpawnAnnihilatorAddr = plugin::GetPattern("80 3D ? ? ? ? ? 75 40 E8 ? ? ? ? F6 80 ? ? ? ? ? 74 13 8B 80 ? ? ? ? 85 C0 74 09 83 B8 ? ? ? ? ? 74 1F FF 35 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A 07", 0);
}
