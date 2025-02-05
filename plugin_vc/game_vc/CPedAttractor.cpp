/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedAttractor.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CPedAttractor, void(C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float)) = ADDRESS_BY_VERSION(0x62D140, 0x62D190, 0x62CE00);
int ctor_gaddr_o(CPedAttractor, void(C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x62D140, 0x62D190, 0x62CE00);

int dtor_addr(CPedAttractor) = ADDRESS_BY_VERSION(0x62B340, 0x62B390, 0x62B000);
int dtor_gaddr(CPedAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62B340, 0x62B390, 0x62B000);

int addrof(CPedAttractor::GetHeadOfQueueWaitTime) = ADDRESS_BY_VERSION(0x520EF0, 0x520F10, 0x520DE0);
int gaddrof(CPedAttractor::GetHeadOfQueueWaitTime) = GLOBAL_ADDRESS_BY_VERSION(0x520EF0, 0x520F10, 0x520DE0);

float CPedAttractor::GetHeadOfQueueWaitTime() {
    return plugin::CallVirtualMethodAndReturn<float, 0, CPedAttractor *>(this);
}

int del_dtor_addr(CPedAttractor) = ADDRESS_BY_VERSION(0x62B2E0, 0x62B330, 0x62AFA0);
int del_dtor_gaddr(CPedAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62B2E0, 0x62B330, 0x62AFA0);

int addrof(CPedAttractor::IsAtHeadOfQueue) = ADDRESS_BY_VERSION(0x62D120, 0x62D170, 0x62CDE0);
int gaddrof(CPedAttractor::IsAtHeadOfQueue) = GLOBAL_ADDRESS_BY_VERSION(0x62D120, 0x62D170, 0x62CDE0);

bool CPedAttractor::IsAtHeadOfQueue(CPed *ped) {
    return plugin::CallVirtualMethodAndReturn<bool, 4, CPedAttractor *, CPed *>(this, ped);
}

int addrof(CPedAttractor::ComputeAttractPos) = ADDRESS_BY_VERSION(0x62CF20, 0x62CF70, 0x62CBE0);
int gaddrof(CPedAttractor::ComputeAttractPos) = GLOBAL_ADDRESS_BY_VERSION(0x62CF20, 0x62CF70, 0x62CBE0);

void CPedAttractor::ComputeAttractPos(int qid, CVector &pos) {
    plugin::CallVirtualMethod<5, CPedAttractor *, int, CVector &>(this, qid, pos);
}

int addrof(CPedAttractor::ComputeAttractHeading) = ADDRESS_BY_VERSION(0x62CC70, 0x62CCC0, 0x62C930);
int gaddrof(CPedAttractor::ComputeAttractHeading) = GLOBAL_ADDRESS_BY_VERSION(0x62CC70, 0x62CCC0, 0x62C930);

void CPedAttractor::ComputeAttractHeading(int qid, float &heading) {
    plugin::CallVirtualMethod<6, CPedAttractor *, int, float &>(this, qid, heading);
}

int addrof(CPedAttractor::BroadcastDeparture) = ADDRESS_BY_VERSION(0x62C690, 0x62C6E0, 0x62C350);
int gaddrof(CPedAttractor::BroadcastDeparture) = GLOBAL_ADDRESS_BY_VERSION(0x62C690, 0x62C6E0, 0x62C350);

bool CPedAttractor::BroadcastDeparture(CPed *ped) {
    return plugin::CallVirtualMethodAndReturn<bool, 7, CPedAttractor *, CPed *>(this, ped);
}

int addrof(CPedAttractor::BroadcastArrival) = ADDRESS_BY_VERSION(0x62C940, 0x62C990, 0x62C600);
int gaddrof(CPedAttractor::BroadcastArrival) = GLOBAL_ADDRESS_BY_VERSION(0x62C940, 0x62C990, 0x62C600);

bool CPedAttractor::BroadcastArrival(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractor *, CPed *>(gaddrof(CPedAttractor::BroadcastArrival), this, ped);
}

int addrof(CPedAttractor::DeRegisterPed) = ADDRESS_BY_VERSION(0x62CA40, 0x62CA90, 0x62C700);
int gaddrof(CPedAttractor::DeRegisterPed) = GLOBAL_ADDRESS_BY_VERSION(0x62CA40, 0x62CA90, 0x62C700);

bool CPedAttractor::DeRegisterPed(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractor *, CPed *>(gaddrof(CPedAttractor::DeRegisterPed), this, ped);
}

int addrof(CPedAttractor::GetNoOfRegisteredPeds) = ADDRESS_BY_VERSION(0x62DD60, 0x62DDB0, 0x62DA20);
int gaddrof(CPedAttractor::GetNoOfRegisteredPeds) = GLOBAL_ADDRESS_BY_VERSION(0x62DD60, 0x62DDB0, 0x62DA20);

int CPedAttractor::GetNoOfRegisteredPeds() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPedAttractor *>(gaddrof(CPedAttractor::GetNoOfRegisteredPeds), this);
}

int addrof(CPedAttractor::RegisterPed) = ADDRESS_BY_VERSION(0x62CB80, 0x62CBD0, 0x62C840);
int gaddrof(CPedAttractor::RegisterPed) = GLOBAL_ADDRESS_BY_VERSION(0x62CB80, 0x62CBD0, 0x62C840);

bool CPedAttractor::RegisterPed(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedAttractor *, CPed *>(gaddrof(CPedAttractor::RegisterPed), this, ped);
}
