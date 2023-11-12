/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"
#include "Patch.h"

void (**CCheat::m_aCheatFunctions)() = (void(**)())gpatternt(void*, "8B 04 BD ? ? ? ? FF D0", 3); // [32]
int32_t* CCheat::m_aCheatHashKeys = gpatternt(int32_t, "39 04 B5 ? ? ? ? 74 2B", 3); // [32]
wchar_t* CCheat::m_CheatString = gpatternt(wchar_t, "66 A3 ? ? ? ? 57", 2); // [30]
bool* CCheat::m_aCheatsActive = gpatternt(bool, "80 BE ? ? ? ? ? B9 ? ? ? ? 74 07", 2); // [32]
bool& CCheat::m_bHasPlayerCheated = *gpatternt(bool, "C6 05 ? ? ? ? ? 85 C0 74 04", 2);

void CCheat::AddToCheatString(wchar_t lastPressedKey) {
    plugin::CallDyn(gpattern("83 EC 24 A1 ? ? ? ? 33 C4 89 44 24 20 BA"), lastPressedKey);
}

CVehicle* CCheat::VehicleCheat(int32_t vehicleId) {
    return plugin::CallAndReturnDyn<CVehicle*>(gpattern("55 8B EC 83 E4 F0 81 EC ? ? ? ? 56 57 8B 7D 08 85 FF 79 08"), vehicleId);
}

void CCheat::ActivateCheat(uint32_t id) {
    plugin::CallDyn(gpattern("56 57 8B 7C 24 0C 8B 04 BD"), id);
}

void CCheat::WeaponCheat1() {
    plugin::CallDyn(gpattern("E8 ? ? ? ? 6A 02 FF 35 ? ? ? ? 6A 03 E8 ? ? ? ? 83 C4 04 8B C8 E8 ? ? ? ? 50 E8 ? ? ? ? 83 C4 0C 6A 02 FF 35 ? ? ? ? 6A 05"));
}

void CCheat::WeaponCheat2() {
    plugin::CallDyn(gpattern("56 E8 ? ? ? ? 83 3D ? ? ? ? ? 6A 02"));
}

void CCheat::HealthArmourAmmoCheat() {
    plugin::CallDyn(gpattern("56 E8 ? ? ? ? 6A 00 E8 ? ? ? ? 6A 00"));
}

void CCheat::IncreaseWantedLevelCheat() {
    plugin::CallDyn(gpattern("E8 ? ? ? ? 6A 00 E8 ? ? ? ? 8B 88 ? ? ? ? 83 C4 04"));
}

void CCheat::ClearWantedLevelCheat() {
    plugin::CallDyn(gpattern("A1 ? ? ? ? 6A 04 A3"));
}

void CCheat::ChangeWeatherCheat() {
    plugin::CallDyn(gpattern("E8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A 06"));
}

void CCheat::SpawnAnnihilator() {
    plugin::CallDyn(gpattern("80 3D ? ? ? ? ? 75 40 E8 ? ? ? ? F6 80 ? ? ? ? ? 74 13 8B 80 ? ? ? ? 85 C0 74 09 83 B8 ? ? ? ? ? 74 1F FF 35 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 6A 07"));
}
