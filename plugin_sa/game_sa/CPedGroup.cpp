/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedGroup.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPedGroup) = ADDRESS_BY_VERSION(0x5FC150, 0, 0, 0, 0, 0);
int ctor_gaddr(CPedGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FC150, 0, 0, 0, 0, 0);

int dtor_addr(CPedGroup) = ADDRESS_BY_VERSION(0x5FC190, 0, 0, 0, 0, 0);
int dtor_gaddr(CPedGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FC190, 0, 0, 0, 0, 0);

int addrof(CPedGroup::FindDistanceToFurthestMember) = ADDRESS_BY_VERSION(0x5FB010, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::FindDistanceToFurthestMember) = GLOBAL_ADDRESS_BY_VERSION(0x5FB010, 0, 0, 0, 0, 0);

float CPedGroup::FindDistanceToFurthestMember() {
    return plugin::CallMethodAndReturnDynGlobal<float, CPedGroup *>(gaddrof(CPedGroup::FindDistanceToFurthestMember), this);
}

int addrof(CPedGroup::FindDistanceToNearestMember) = ADDRESS_BY_VERSION(0x5FB0A0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::FindDistanceToNearestMember) = GLOBAL_ADDRESS_BY_VERSION(0x5FB0A0, 0, 0, 0, 0, 0);

float CPedGroup::FindDistanceToNearestMember(CPed **ppOutNearestMember) {
    return plugin::CallMethodAndReturnDynGlobal<float, CPedGroup *, CPed **>(gaddrof(CPedGroup::FindDistanceToNearestMember), this, ppOutNearestMember);
}

int addrof(CPedGroup::Flush) = ADDRESS_BY_VERSION(0x5FB790, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::Flush) = GLOBAL_ADDRESS_BY_VERSION(0x5FB790, 0, 0, 0, 0, 0);

void CPedGroup::Flush() {
    plugin::CallMethodDynGlobal<CPedGroup *>(gaddrof(CPedGroup::Flush), this);
}

int addrof(CPedGroup::GetClosestGroupPed) = ADDRESS_BY_VERSION(0x5FACD0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::GetClosestGroupPed) = GLOBAL_ADDRESS_BY_VERSION(0x5FACD0, 0, 0, 0, 0, 0);

CPed *CPedGroup::GetClosestGroupPed(CPed *ped, float *pOutDistance) {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CPedGroup *, CPed *, float *>(gaddrof(CPedGroup::GetClosestGroupPed), this, ped, pOutDistance);
}

int addrof(CPedGroup::IsAnyoneUsingCar) = ADDRESS_BY_VERSION(0x5F7DB0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::IsAnyoneUsingCar) = GLOBAL_ADDRESS_BY_VERSION(0x5F7DB0, 0, 0, 0, 0, 0);

bool CPedGroup::IsAnyoneUsingCar(CVehicle const *vehicle) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroup *, CVehicle const *>(gaddrof(CPedGroup::IsAnyoneUsingCar), this, vehicle);
}

int addrof(CPedGroup::PlayerGaveCommand_Attack) = ADDRESS_BY_VERSION(0x5F7CC0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::PlayerGaveCommand_Attack) = GLOBAL_ADDRESS_BY_VERSION(0x5F7CC0, 0, 0, 0, 0, 0);

void CPedGroup::PlayerGaveCommand_Attack(CPed *playerPed, CPed *ped) {
    plugin::CallMethodDynGlobal<CPedGroup *, CPed *, CPed *>(gaddrof(CPedGroup::PlayerGaveCommand_Attack), this, playerPed, ped);
}

int addrof(CPedGroup::PlayerGaveCommand_Gather) = ADDRESS_BY_VERSION(0x5FAB60, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::PlayerGaveCommand_Gather) = GLOBAL_ADDRESS_BY_VERSION(0x5FAB60, 0, 0, 0, 0, 0);

void CPedGroup::PlayerGaveCommand_Gather(CPed *ped) {
    plugin::CallMethodDynGlobal<CPedGroup *, CPed *>(gaddrof(CPedGroup::PlayerGaveCommand_Gather), this, ped);
}

int addrof(CPedGroup::Process) = ADDRESS_BY_VERSION(0x5FC7E0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::Process) = GLOBAL_ADDRESS_BY_VERSION(0x5FC7E0, 0, 0, 0, 0, 0);

void CPedGroup::Process() {
    plugin::CallMethodDynGlobal<CPedGroup *>(gaddrof(CPedGroup::Process), this);
}

int addrof(CPedGroup::RemoveAllFollowers) = ADDRESS_BY_VERSION(0x5FB7D0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::RemoveAllFollowers) = GLOBAL_ADDRESS_BY_VERSION(0x5FB7D0, 0, 0, 0, 0, 0);

void CPedGroup::RemoveAllFollowers() {
    plugin::CallMethodDynGlobal<CPedGroup *>(gaddrof(CPedGroup::RemoveAllFollowers), this);
}

int addrof(CPedGroup::Teleport) = ADDRESS_BY_VERSION(0x5F7AD0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroup::Teleport) = GLOBAL_ADDRESS_BY_VERSION(0x5F7AD0, 0, 0, 0, 0, 0);

void CPedGroup::Teleport(CVector const *Pos) {
    plugin::CallMethodDynGlobal<CPedGroup *, CVector const *>(gaddrof(CPedGroup::Teleport), this, Pos);
}
