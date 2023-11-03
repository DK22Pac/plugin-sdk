/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

static uint32_t CPed__CanSeePedAddr;
bool CPed::CanSeePed(CPed* ped, bool spotted) {
    return plugin::CallMethodAndReturnDyn<bool>(CPed__CanSeePedAddr, this, ped, spotted);
}

static uint32_t CPed__SetLastDamageEntityAddr;
void CPed::SetLastDamageEntity(CEntity* e) {
    plugin::CallMethodDyn(CPed__SetLastDamageEntityAddr, this, e);
}

static uint32_t CPed__SetDuckAddr;
void CPed::SetDuck(bool on, int32_t time) {
    plugin::CallMethodDyn(CPed__SetDuckAddr, this, on, time);
}

static uint32_t CPed__SetMoneyAddr;
void CPed::SetMoney(int32_t money) {
    plugin::CallMethodDyn(CPed__SetMoneyAddr, this, money);
}

static uint32_t CPed__SetArmourAddr;
void CPed::SetArmour(float armour) {
    plugin::CallMethodDyn(CPed__SetArmourAddr, this, armour);
}

static uint32_t CPed__WarpIntoVehicle;
void CPed::WarpIntoVehicle(CVehicle* veh, bool arg1) {
    plugin::CallMethodDyn(CPed__WarpIntoVehicle, this, veh, arg1);
}

static uint32_t CPed__RemoveHelmet;
void CPed::RemoveHelmet(bool arg1) {
    plugin::CallMethodDyn(CPed__RemoveHelmet, this, arg1);
}

static uint32_t CPed__IsPedDeadAddr;
bool CPed::IsPedDead(CPed* ped) {
    return plugin::CallAndReturnDyn<bool>(CPed__IsPedDeadAddr, ped);
}

template<>
void plugin::InitPatterns<CPed>() {
    CPed__CanSeePedAddr = plugin::GetPattern("55 8B EC 83 E4 F0 81 EC ? ? ? ? 56 8B 75 08 57 8B 56 20", 0);
    CPed__SetLastDamageEntityAddr = plugin::GetPattern("53 8B D9 83 7B 38 00", 0);
    CPed__SetDuckAddr = plugin::GetPattern("56 8B F1 F6 86 ? ? ? ? ? 0F 85", 0);
    CPed__SetMoneyAddr = plugin::GetPattern("8B 44 24 04 89 81 ? ? ? ? C2 04 00 CC CC CC 8A 44 24 04 88 81 ? ? ? ? C2 04 00 CC CC CC 8A 44 24 04", 0);
    CPed__SetArmourAddr = plugin::GetPattern("F3 0F 10 44 24 ? F3 0F 11 81 ? ? ? ? C2 04 00 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 56 57 8B 7C 24 0C 8B F1 C7 86", 0);
    CPed__WarpIntoVehicle = plugin::GetPattern("8B 54 24 04 85 D2 74 21", 0);
    CPed__RemoveHelmet = plugin::GetPattern("56 8B F1 E8 ? ? ? ? 84 C0 74 4E", 0);
    CPed__IsPedDeadAddr = plugin::GetPattern("8B 44 24 04 80 B8 ? ? ? ? ? 74 10 8B 88 ? ? ? ? 83 F9 01 74 0E 83 F9 02 74 09 83 B8 ? ? ? ? ? 75 03", 0);
}
