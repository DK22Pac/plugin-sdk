/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedDamageResponseCalculator.h"

float& CPedDamageResponseCalculator::ms_damageFactor = *(float*)0x8A6260; // 5555.5498

// 0x4AD3F0
CPedDamageResponseCalculator::CPedDamageResponseCalculator(CEntity* entity, float fDamage, eWeaponType weaponType, uint8_t bodyPart, bool bSpeak) {
    ((void(__thiscall*)(CPedDamageResponseCalculator*, CEntity*, float, eWeaponType, uint8_t, bool))0x4AD3F0)(this, entity, fDamage, weaponType, bodyPart, bSpeak);
}

// 0x4AD430
void CPedDamageResponseCalculator::AccountForPedDamageStats(CPed* ped, CPedDamageResponse& response) {
    plugin::CallMethod<0x4AD430, CPedDamageResponseCalculator*, CPed*, CPedDamageResponse&>(this, ped, response);
}

// 0x4AD550
void CPedDamageResponseCalculator::AccountForPedArmour(CPed* ped, CPedDamageResponse& response) {
    plugin::CallMethod<0x4AD550, CPedDamageResponseCalculator*, CPed*, CPedDamageResponse&>(this, ped, response);
}

// 0x4AD610
bool CPedDamageResponseCalculator::ComputeWillForceDeath(CPed* ped, CPedDamageResponse& response) {
    return plugin::CallMethodAndReturn<bool, 0x4AD610, CPedDamageResponseCalculator*, CPed*, CPedDamageResponse&>(this, ped, response);
}

// 0x4B3210
void CPedDamageResponseCalculator::ComputeWillKillPed(CPed* ped, CPedDamageResponse& response, bool bSpeak) {
    plugin::CallMethod<0x4B3210, CPedDamageResponseCalculator*>(this, ped, response, bSpeak);
}

// 0x4B5AC0
void CPedDamageResponseCalculator::ComputeDamageResponse(CPed* ped, CPedDamageResponse& response, bool bSpeak)
{
    plugin::CallMethod<0x4B5AC0, CPedDamageResponseCalculator*, CPed*, CPedDamageResponse&, bool>(this, ped, response, bSpeak);
}
