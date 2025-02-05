/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedAttractorManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CPedAttractorManager *&pedAttrMgr = *reinterpret_cast<CPedAttractorManager **>(GLOBAL_ADDRESS_BY_VERSION(0x786D80, 0x786D88, 0x785D88));

int addrof_o(CPedAttractorManager::BroadcastArrival, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)) = ADDRESS_BY_VERSION(0x62C1E0, 0x62C230, 0x62BEA0);
int gaddrof_o(CPedAttractorManager::BroadcastArrival, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)) = GLOBAL_ADDRESS_BY_VERSION(0x62C1E0, 0x62C230, 0x62BEA0);

bool CPedAttractorManager::BroadcastArrival(CPed *ped, CPedAttractor *attr) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, CPed *, CPedAttractor *>(gaddrof_o(CPedAttractorManager::BroadcastArrival, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)), this, ped, attr);
}

int addrof_o(CPedAttractorManager::BroadcastDeparture, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)) = ADDRESS_BY_VERSION(0x62C100, 0x62C150, 0x62BDC0);
int gaddrof_o(CPedAttractorManager::BroadcastDeparture, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)) = GLOBAL_ADDRESS_BY_VERSION(0x62C100, 0x62C150, 0x62BDC0);

bool CPedAttractorManager::BroadcastDeparture(CPed *ped, CPedAttractor *attr) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, CPed *, CPedAttractor *>(gaddrof_o(CPedAttractorManager::BroadcastDeparture, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)), this, ped, attr);
}

int addrof_o(CPedAttractorManager::DeRegisterPed, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)) = ADDRESS_BY_VERSION(0x62C2C0, 0x62C310, 0x62BF80);
int gaddrof_o(CPedAttractorManager::DeRegisterPed, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)) = GLOBAL_ADDRESS_BY_VERSION(0x62C2C0, 0x62C310, 0x62BF80);

bool CPedAttractorManager::DeRegisterPed(CPed *ped, CPedAttractor *attr) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, CPed *, CPedAttractor *>(gaddrof_o(CPedAttractorManager::DeRegisterPed, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *)), this, ped, attr);
}

int addrof(CPedAttractorManager::HasEmptySlot) = ADDRESS_BY_VERSION(0x62B0F0, 0x62B140, 0x62ADB0);
int gaddrof(CPedAttractorManager::HasEmptySlot) = GLOBAL_ADDRESS_BY_VERSION(0x62B0F0, 0x62B140, 0x62ADB0);

bool CPedAttractorManager::HasEmptySlot(C2dEffect const *effect) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, C2dEffect const *>(gaddrof(CPedAttractorManager::HasEmptySlot), this, effect);
}

int addrof(CPedAttractorManager::IsAtHeadOfQueue) = ADDRESS_BY_VERSION(0x62BEF0, 0x62BF40, 0x62BBB0);
int gaddrof(CPedAttractorManager::IsAtHeadOfQueue) = GLOBAL_ADDRESS_BY_VERSION(0x62BEF0, 0x62BF40, 0x62BBB0);

bool CPedAttractorManager::IsAtHeadOfQueue(CPed *ped, CPedAttractor *attr) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, CPed *, CPedAttractor *>(gaddrof(CPedAttractorManager::IsAtHeadOfQueue), this, ped, attr);
}

int addrof(CPedAttractorManager::IsInQueue) = ADDRESS_BY_VERSION(0x62BC40, 0x62BC90, 0x62B900);
int gaddrof(CPedAttractorManager::IsInQueue) = GLOBAL_ADDRESS_BY_VERSION(0x62BC40, 0x62BC90, 0x62B900);

bool CPedAttractorManager::IsInQueue(CPed *ped, CPedAttractor *attr) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, CPed *, CPedAttractor *>(gaddrof(CPedAttractorManager::IsInQueue), this, ped, attr);
}

int addrof(CPedAttractorManager::IsPedRegisteredWithEffect) = ADDRESS_BY_VERSION(0x62B860, 0x62B8B0, 0x62B520);
int gaddrof(CPedAttractorManager::IsPedRegisteredWithEffect) = GLOBAL_ADDRESS_BY_VERSION(0x62B860, 0x62B8B0, 0x62B520);

bool CPedAttractorManager::IsPedRegisteredWithEffect(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractorManager *, CPed *>(gaddrof(CPedAttractorManager::IsPedRegisteredWithEffect), this, ped);
}

int addrof(CPedAttractorManager::RegisterPedWithAttractor) = ADDRESS_BY_VERSION(0x62C3A0, 0x62C3F0, 0x62C060);
int gaddrof(CPedAttractorManager::RegisterPedWithAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62C3A0, 0x62C3F0, 0x62C060);

CPedAttractor *CPedAttractorManager::RegisterPedWithAttractor(CPed *ped, C2dEffect *effect, CMatrix const &matrix) {
    return plugin::CallMethodAndReturnDynGlobal<CPedAttractor *, CPedAttractorManager *, CPed *, C2dEffect *, CMatrix const &>(gaddrof(CPedAttractorManager::RegisterPedWithAttractor), this, ped, effect, matrix);
}

int addrof_o(CPedAttractorManager::BroadcastArrival, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)) = ADDRESS_BY_VERSION(0x62B370, 0x62B3C0, 0x62B030);
int gaddrof_o(CPedAttractorManager::BroadcastArrival, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)) = GLOBAL_ADDRESS_BY_VERSION(0x62B370, 0x62B3C0, 0x62B030);

bool CPedAttractorManager::BroadcastArrival(CPed *ped, CPedAttractor *attr, std::vector<CPedAttractor *> &vecAttractors) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *, CPedAttractor *, std::vector<CPedAttractor *> &>(gaddrof_o(CPedAttractorManager::BroadcastArrival, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)), ped, attr, vecAttractors);
}

int addrof_o(CPedAttractorManager::BroadcastDeparture, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)) = ADDRESS_BY_VERSION(0x62B240, 0x62B290, 0x62AF00);
int gaddrof_o(CPedAttractorManager::BroadcastDeparture, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)) = GLOBAL_ADDRESS_BY_VERSION(0x62B240, 0x62B290, 0x62AF00);

bool CPedAttractorManager::BroadcastDeparture(CPed *ped, CPedAttractor *attr, std::vector<CPedAttractor *> &vecAttractors) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *, CPedAttractor *, std::vector<CPedAttractor *> &>(gaddrof_o(CPedAttractorManager::BroadcastDeparture, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)), ped, attr, vecAttractors);
}

int addrof(CPedAttractorManager::ComputeEffectPos) = ADDRESS_BY_VERSION(0x62AE20, 0x62AE70, 0x62AAE0);
int gaddrof(CPedAttractorManager::ComputeEffectPos) = GLOBAL_ADDRESS_BY_VERSION(0x62AE20, 0x62AE70, 0x62AAE0);

void CPedAttractorManager::ComputeEffectPos(C2dEffect const *effect, CMatrix const &matrix, CVector &pos) {
    plugin::CallDynGlobal<C2dEffect const *, CMatrix const &, CVector &>(gaddrof(CPedAttractorManager::ComputeEffectPos), effect, matrix, pos);
}

int addrof_o(CPedAttractorManager::DeRegisterPed, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)) = ADDRESS_BY_VERSION(0x62B3D0, 0x62B420, 0x62B090);
int gaddrof_o(CPedAttractorManager::DeRegisterPed, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)) = GLOBAL_ADDRESS_BY_VERSION(0x62B3D0, 0x62B420, 0x62B090);

bool CPedAttractorManager::DeRegisterPed(CPed *ped, CPedAttractor *attr, std::vector<CPedAttractor *> &vecAttractors) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *, CPedAttractor *, std::vector<CPedAttractor *> &>(gaddrof_o(CPedAttractorManager::DeRegisterPed, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &)), ped, attr, vecAttractors);
}

int addrof(CPedAttractorManager::IsApproachable) = ADDRESS_BY_VERSION(0x62AE80, 0x62AED0, 0x62AB40);
int gaddrof(CPedAttractorManager::IsApproachable) = GLOBAL_ADDRESS_BY_VERSION(0x62AE80, 0x62AED0, 0x62AB40);

bool CPedAttractorManager::IsApproachable(C2dEffect *effect, CMatrix const &matrix, int unk, CPed *ped) {
    return plugin::CallAndReturnDynGlobal<bool, C2dEffect *, CMatrix const &, int, CPed *>(gaddrof(CPedAttractorManager::IsApproachable), effect, matrix, unk, ped);
}

int addrof(CPedAttractorManager::RegisterPed) = ADDRESS_BY_VERSION(0x62B470, 0x62B4C0, 0x62B130);
int gaddrof(CPedAttractorManager::RegisterPed) = GLOBAL_ADDRESS_BY_VERSION(0x62B470, 0x62B4C0, 0x62B130);

CPedAttractor *CPedAttractorManager::RegisterPed(CPed *ped, C2dEffect *effect, CMatrix const &matrix, std::vector<CPedAttractor *> &vecAttractors) {
    return plugin::CallAndReturnDynGlobal<CPedAttractor *, CPed *, C2dEffect *, CMatrix const &, std::vector<CPedAttractor *> &>(gaddrof(CPedAttractorManager::RegisterPed), ped, effect, matrix, vecAttractors);
}

int addrof(GetPedAttractorManager) = ADDRESS_BY_VERSION(0x62D030, 0x62D080, 0x62CCF0);
int gaddrof(GetPedAttractorManager) = GLOBAL_ADDRESS_BY_VERSION(0x62D030, 0x62D080, 0x62CCF0);

CPedAttractorManager *GetPedAttractorManager() {
    return plugin::CallAndReturnDynGlobal<CPedAttractorManager *>(gaddrof(GetPedAttractorManager));
}
