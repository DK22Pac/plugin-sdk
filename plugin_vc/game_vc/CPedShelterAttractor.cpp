/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedShelterAttractor.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE std::vector<CVector> &CPedShelterAttractor::ms_displacements = *reinterpret_cast<std::vector<CVector> *>(GLOBAL_ADDRESS_BY_VERSION(0x9B5F38, 0x9B5F40, 0x9B4F40));

int dtor_addr(CPedShelterAttractor) = ADDRESS_BY_VERSION(0x62D9F0, 0x62DA40, 0x62D6B0);
int dtor_gaddr(CPedShelterAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62D9F0, 0x62DA40, 0x62D6B0);

int del_dtor_addr(CPedShelterAttractor) = ADDRESS_BY_VERSION(0x62D980, 0x62D9D0, 0x62D640);
int del_dtor_gaddr(CPedShelterAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62D980, 0x62D9D0, 0x62D640);

ePedAttractorType CPedShelterAttractor::GetType() {
    return plugin::CallVirtualMethodAndReturn<ePedAttractorType, 2, CPedShelterAttractor *>(this);
}

void CPedShelterAttractor::UpdatePedStateOnDeparture(CPed *ped) {
    plugin::CallVirtualMethod<3, CPedShelterAttractor *, CPed *>(this, ped);
}

int addrof(CPedShelterAttractor::IsAtHeadOfQueue) = ADDRESS_BY_VERSION(0x62D110, 0x62D160, 0x62CDD0);
int gaddrof(CPedShelterAttractor::IsAtHeadOfQueue) = GLOBAL_ADDRESS_BY_VERSION(0x62D110, 0x62D160, 0x62CDD0);

bool CPedShelterAttractor::IsAtHeadOfQueue(CPed *ped) {
    return plugin::CallVirtualMethodAndReturn<bool, 4, CPedShelterAttractor *, CPed *>(this, ped);
}

int addrof(CPedShelterAttractor::ComputeAttractPos) = ADDRESS_BY_VERSION(0x62CED0, 0x62CF20, 0x62CB90);
int gaddrof(CPedShelterAttractor::ComputeAttractPos) = GLOBAL_ADDRESS_BY_VERSION(0x62CED0, 0x62CF20, 0x62CB90);

void CPedShelterAttractor::ComputeAttractPos(int qid, CVector &pos) {
    plugin::CallVirtualMethod<5, CPedShelterAttractor *, int, CVector &>(this, qid, pos);
}

int addrof(CPedShelterAttractor::ComputeAttractHeading) = ADDRESS_BY_VERSION(0x62CC30, 0x62CC80, 0x62C8F0);
int gaddrof(CPedShelterAttractor::ComputeAttractHeading) = GLOBAL_ADDRESS_BY_VERSION(0x62CC30, 0x62CC80, 0x62C8F0);

void CPedShelterAttractor::ComputeAttractHeading(int qid, float &heading) {
    plugin::CallVirtualMethod<6, CPedShelterAttractor *, int, float &>(this, qid, heading);
}

int addrof(CPedShelterAttractor::BroadcastDeparture) = ADDRESS_BY_VERSION(0x62C480, 0x62C4D0, 0x62C140);
int gaddrof(CPedShelterAttractor::BroadcastDeparture) = GLOBAL_ADDRESS_BY_VERSION(0x62C480, 0x62C4D0, 0x62C140);

bool CPedShelterAttractor::BroadcastDeparture(CPed *ped) {
    return plugin::CallVirtualMethodAndReturn<bool, 7, CPedShelterAttractor *, CPed *>(this, ped);
}

int addrof(CPedShelterAttractor::GetDisplacement) = ADDRESS_BY_VERSION(0x62CD20, 0x62CD70, 0x62C9E0);
int gaddrof(CPedShelterAttractor::GetDisplacement) = GLOBAL_ADDRESS_BY_VERSION(0x62CD20, 0x62CD70, 0x62C9E0);

CVector CPedShelterAttractor::GetDisplacement(int qid) {
    CVector ret_displ;
    plugin::CallDynGlobal<CVector *, int>(gaddrof(CPedShelterAttractor::GetDisplacement), &ret_displ, qid);
    return ret_displ;
}
