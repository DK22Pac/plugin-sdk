/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedGroupMembership.h"

PLUGIN_SOURCE_FILE

float const &CPedGroupMembership::ms_fMaxSeparation = *reinterpret_cast<float const *>(GLOBAL_ADDRESS_BY_VERSION(0x86C6BC, 0, 0, 0, 0, 0));
float const &CPedGroupMembership::ms_fPlayerGroupMaxSeparation = *reinterpret_cast<float const *>(GLOBAL_ADDRESS_BY_VERSION(0x86C6C0, 0, 0, 0, 0, 0));

int ctor_addr(CPedGroupMembership) = ADDRESS_BY_VERSION(0x5F6930, 0, 0, 0, 0, 0);
int ctor_gaddr(CPedGroupMembership) = GLOBAL_ADDRESS_BY_VERSION(0x5F6930, 0, 0, 0, 0, 0);

int ctor_addr_o(CPedGroupMembership, void(CPedGroupMembership const *)) = ADDRESS_BY_VERSION(0x5FB140, 0, 0, 0, 0, 0);
int ctor_gaddr_o(CPedGroupMembership, void(CPedGroupMembership const *)) = GLOBAL_ADDRESS_BY_VERSION(0x5FB140, 0, 0, 0, 0, 0);

int dtor_addr(CPedGroupMembership) = ADDRESS_BY_VERSION(0x5FB990, 0, 0, 0, 0, 0);
int dtor_gaddr(CPedGroupMembership) = GLOBAL_ADDRESS_BY_VERSION(0x5FB990, 0, 0, 0, 0, 0);

int addrof(CPedGroupMembership::AddFollower) = ADDRESS_BY_VERSION(0x5F8020, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::AddFollower) = GLOBAL_ADDRESS_BY_VERSION(0x5F8020, 0, 0, 0, 0, 0);

void CPedGroupMembership::AddFollower(CPed *ped) {
    plugin::CallMethodDynGlobal<CPedGroupMembership *, CPed *>(gaddrof(CPedGroupMembership::AddFollower), this, ped);
}

int addrof(CPedGroupMembership::AddMember) = ADDRESS_BY_VERSION(0x5F6AE0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::AddMember) = GLOBAL_ADDRESS_BY_VERSION(0x5F6AE0, 0, 0, 0, 0, 0);

void CPedGroupMembership::AddMember(CPed *member, int memberID) {
    plugin::CallMethodDynGlobal<CPedGroupMembership *, CPed *, int>(gaddrof(CPedGroupMembership::AddMember), this, member, memberID);
}

int addrof(CPedGroupMembership::AppointNewLeader) = ADDRESS_BY_VERSION(0x5FB240, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::AppointNewLeader) = GLOBAL_ADDRESS_BY_VERSION(0x5FB240, 0, 0, 0, 0, 0);

void CPedGroupMembership::AppointNewLeader() {
    plugin::CallMethodDynGlobal<CPedGroupMembership *>(gaddrof(CPedGroupMembership::AppointNewLeader), this);
}

int addrof(CPedGroupMembership::CountMembers) = ADDRESS_BY_VERSION(0x5F6A50, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::CountMembers) = GLOBAL_ADDRESS_BY_VERSION(0x5F6A50, 0, 0, 0, 0, 0);

int CPedGroupMembership::CountMembers() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPedGroupMembership *>(gaddrof(CPedGroupMembership::CountMembers), this);
}

int addrof(CPedGroupMembership::CountMembersExcludingLeader) = ADDRESS_BY_VERSION(0x5F6AA0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::CountMembersExcludingLeader) = GLOBAL_ADDRESS_BY_VERSION(0x5F6AA0, 0, 0, 0, 0, 0);

int CPedGroupMembership::CountMembersExcludingLeader() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPedGroupMembership *>(gaddrof(CPedGroupMembership::CountMembersExcludingLeader), this);
}

int addrof(CPedGroupMembership::Flush) = ADDRESS_BY_VERSION(0x5FB160, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::Flush) = GLOBAL_ADDRESS_BY_VERSION(0x5FB160, 0, 0, 0, 0, 0);

void CPedGroupMembership::Flush() {
    plugin::CallMethodDynGlobal<CPedGroupMembership *>(gaddrof(CPedGroupMembership::Flush), this);
}

int addrof(CPedGroupMembership::From) = ADDRESS_BY_VERSION(0x5F7FE0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::From) = GLOBAL_ADDRESS_BY_VERSION(0x5F7FE0, 0, 0, 0, 0, 0);

void CPedGroupMembership::From(CPedGroupMembership const *obj) {
    plugin::CallMethodDynGlobal<CPedGroupMembership *, CPedGroupMembership const *>(gaddrof(CPedGroupMembership::From), this, obj);
}

int addrof(CPedGroupMembership::GetLeader) = ADDRESS_BY_VERSION(0x5F69A0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::GetLeader) = GLOBAL_ADDRESS_BY_VERSION(0x5F69A0, 0, 0, 0, 0, 0);

CPed *CPedGroupMembership::GetLeader() {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CPedGroupMembership *>(gaddrof(CPedGroupMembership::GetLeader), this);
}

int addrof(CPedGroupMembership::GetMember) = ADDRESS_BY_VERSION(0x5F69B0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::GetMember) = GLOBAL_ADDRESS_BY_VERSION(0x5F69B0, 0, 0, 0, 0, 0);

CPed *CPedGroupMembership::GetMember(int memberId) {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CPedGroupMembership *, int>(gaddrof(CPedGroupMembership::GetMember), this, memberId);
}

int addrof(CPedGroupMembership::IsFollower) = ADDRESS_BY_VERSION(0x5F69E0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::IsFollower) = GLOBAL_ADDRESS_BY_VERSION(0x5F69E0, 0, 0, 0, 0, 0);

bool CPedGroupMembership::IsFollower(CPed const *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupMembership *, CPed const *>(gaddrof(CPedGroupMembership::IsFollower), this, ped);
}

int addrof(CPedGroupMembership::IsLeader) = ADDRESS_BY_VERSION(0x5F69C0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::IsLeader) = GLOBAL_ADDRESS_BY_VERSION(0x5F69C0, 0, 0, 0, 0, 0);

bool CPedGroupMembership::IsLeader(CPed const *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupMembership *, CPed const *>(gaddrof(CPedGroupMembership::IsLeader), this, ped);
}

int addrof(CPedGroupMembership::IsMember) = ADDRESS_BY_VERSION(0x5F6A10, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::IsMember) = GLOBAL_ADDRESS_BY_VERSION(0x5F6A10, 0, 0, 0, 0, 0);

bool CPedGroupMembership::IsMember(CPed const *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupMembership *, CPed const *>(gaddrof(CPedGroupMembership::IsMember), this, ped);
}

int addrof(CPedGroupMembership::Process) = ADDRESS_BY_VERSION(0x5FBA60, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::Process) = GLOBAL_ADDRESS_BY_VERSION(0x5FBA60, 0, 0, 0, 0, 0);

void CPedGroupMembership::Process() {
    plugin::CallMethodDynGlobal<CPedGroupMembership *>(gaddrof(CPedGroupMembership::Process), this);
}

int addrof(CPedGroupMembership::RemoveAllFollowers) = ADDRESS_BY_VERSION(0x5FB190, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::RemoveAllFollowers) = GLOBAL_ADDRESS_BY_VERSION(0x5FB190, 0, 0, 0, 0, 0);

void CPedGroupMembership::RemoveAllFollowers(bool bCreatedByGameOnly) {
    plugin::CallMethodDynGlobal<CPedGroupMembership *, bool>(gaddrof(CPedGroupMembership::RemoveAllFollowers), this, bCreatedByGameOnly);
}

int addrof(CPedGroupMembership::RemoveMember) = ADDRESS_BY_VERSION(0x5F80D0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::RemoveMember) = GLOBAL_ADDRESS_BY_VERSION(0x5F80D0, 0, 0, 0, 0, 0);

void CPedGroupMembership::RemoveMember(int memberID) {
    plugin::CallMethodDynGlobal<CPedGroupMembership *, int>(gaddrof(CPedGroupMembership::RemoveMember), this, memberID);
}

int addrof(CPedGroupMembership::RemoveNFollowers) = ADDRESS_BY_VERSION(0x5FB1D0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::RemoveNFollowers) = GLOBAL_ADDRESS_BY_VERSION(0x5FB1D0, 0, 0, 0, 0, 0);

char CPedGroupMembership::RemoveNFollowers(int count) {
    return plugin::CallMethodAndReturnDynGlobal<char, CPedGroupMembership *, int>(gaddrof(CPedGroupMembership::RemoveNFollowers), this, count);
}

int addrof(CPedGroupMembership::SetLeader) = ADDRESS_BY_VERSION(0x5FB9C0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::SetLeader) = GLOBAL_ADDRESS_BY_VERSION(0x5FB9C0, 0, 0, 0, 0, 0);

void CPedGroupMembership::SetLeader(CPed *ped) {
    plugin::CallMethodDynGlobal<CPedGroupMembership *, CPed *>(gaddrof(CPedGroupMembership::SetLeader), this, ped);
}

int addrof(CPedGroupMembership::GetObjectForPedToHold) = ADDRESS_BY_VERSION(0x5F6950, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupMembership::GetObjectForPedToHold) = GLOBAL_ADDRESS_BY_VERSION(0x5F6950, 0, 0, 0, 0, 0);

signed int CPedGroupMembership::GetObjectForPedToHold() {
    return plugin::CallAndReturnDynGlobal<signed int>(gaddrof(CPedGroupMembership::GetObjectForPedToHold));
}
