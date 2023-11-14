/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

bool CPed::CanSeePed(CPed* ped, bool spotted) {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("55 8B EC 83 E4 F0 81 EC ? ? ? ? 56 8B 75 08 57 8B 56 20"), this, ped, spotted);
}

void CPed::SetLastDamageEntity(CEntity* e) {
    plugin::CallMethodDyn(gpattern("53 8B D9 83 7B 38 00"), this, e);
}

void CPed::SetDuck(bool on, int32_t time) {
    plugin::CallMethodDyn(gpattern("56 8B F1 F6 86 ? ? ? ? ? 0F 85"), this, on, time);
}

void CPed::SetMoney(int32_t money) {
    plugin::CallMethodDyn(gpattern("8B 44 24 04 89 81 ? ? ? ? C2 04 00 CC CC CC 8A 44 24 04 88 81 ? ? ? ? C2 04 00 CC CC CC 8A 44 24 04"), this, money);
}

void CPed::SetArmour(float armour) {
    plugin::CallMethodDyn(gpattern("F3 0F 10 44 24 ? F3 0F 11 81 ? ? ? ? C2 04 00 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 56 57 8B 7C 24 0C 8B F1 C7 86"), this, armour);
}

void CPed::WarpIntoVehicle(CVehicle* veh, bool arg1) {
    plugin::CallMethodDyn(gpattern("8B 54 24 04 85 D2 74 21"), this, veh, arg1);
}

void CPed::RemoveHelmet(bool arg1) {
    plugin::CallMethodDyn(gpattern("56 8B F1 E8 ? ? ? ? 84 C0 74 4E"), this, arg1);
}

bool CPed::CanStartMission() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("56 8B F1 E8 ? ? ? ? 84 C0 75 0D 8B CE E8 ? ? ? ? 84 C0 75 02 5E C3 B0 01 5E C3 CC CC CC F3 0F 10 44 24"), this);
}

CVehicle* CPed::GetVehiclePedWouldEnter(CPed* ped, rage::Vector3 const& pos, bool arg2) {
    return plugin::CallAndReturnDyn<CVehicle*>(gpattern("55 8B EC 83 E4 F0 83 EC 78 56 8B 75 08 57 F7 86"), ped, &pos, arg2);
}

bool CPed::IsPedDead(CPed* ped) {
    return plugin::CallAndReturnDyn<bool>(gpattern("8B 44 24 04 80 B8 ? ? ? ? ? 74 10 8B 88 ? ? ? ? 83 F9 01 74 0E 83 F9 02 74 09 83 B8 ? ? ? ? ? 75 03"), ped);
}
