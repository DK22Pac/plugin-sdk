/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedGroups.h"

PLUGIN_SOURCE_FILE

short(&CPedGroups::ScriptReferenceIndex)[8] = *reinterpret_cast<short(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0xC098D0, 0, 0, 0, 0, 0));
char(&CPedGroups::ms_activeGroups)[8] = *reinterpret_cast<char(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0xC098E0, 0, 0, 0, 0, 0));
bool &CPedGroups::ms_bIsPlayerOnAMission = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xC098E8, 0, 0, 0, 0, 0));
unsigned int &CPedGroups::ms_iNoOfPlayerKills = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xC098EC, 0, 0, 0, 0, 0));
CPedGroup(&CPedGroups::ms_groups)[8] = *reinterpret_cast<CPedGroup(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0xC09920, 0, 0, 0, 0, 0));

int addrof(CPedGroups::AddGroup) = ADDRESS_BY_VERSION(0x5FB800, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::AddGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FB800, 0, 0, 0, 0, 0);

signed int CPedGroups::AddGroup() {
    return plugin::CallAndReturnDynGlobal<signed int>(gaddrof(CPedGroups::AddGroup));
}

int addrof(CPedGroups::AreInSameGroup) = ADDRESS_BY_VERSION(0x5F7F40, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::AreInSameGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5F7F40, 0, 0, 0, 0, 0);

bool CPedGroups::AreInSameGroup(CPed *ped1, CPed *ped2) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *, CPed *>(gaddrof(CPedGroups::AreInSameGroup), ped1, ped2);
}

int addrof(CPedGroups::CleanUpForShutDown) = ADDRESS_BY_VERSION(0x5FB930, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::CleanUpForShutDown) = GLOBAL_ADDRESS_BY_VERSION(0x5FB930, 0, 0, 0, 0, 0);

void CPedGroups::CleanUpForShutDown() {
    plugin::CallDynGlobal(gaddrof(CPedGroups::CleanUpForShutDown));
}

int addrof(CPedGroups::GetGroupId) = ADDRESS_BY_VERSION(0x5F7EE0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::GetGroupId) = GLOBAL_ADDRESS_BY_VERSION(0x5F7EE0, 0, 0, 0, 0, 0);

signed int CPedGroups::GetGroupId(CPedGroup *pedgrp) {
    return plugin::CallAndReturnDynGlobal<signed int, CPedGroup *>(gaddrof(CPedGroups::GetGroupId), pedgrp);
}

int addrof(CPedGroups::GetPedsGroup) = ADDRESS_BY_VERSION(0x5F7E80, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::GetPedsGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5F7E80, 0, 0, 0, 0, 0);

char *CPedGroups::GetPedsGroup(CPed *ped) {
    return plugin::CallAndReturnDynGlobal<char *, CPed *>(gaddrof(CPedGroups::GetPedsGroup), ped);
}

int addrof(CPedGroups::Init) = ADDRESS_BY_VERSION(0x5FB8C0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5FB8C0, 0, 0, 0, 0, 0);

void CPedGroups::Init() {
    plugin::CallDynGlobal(gaddrof(CPedGroups::Init));
}

int addrof(CPedGroups::IsGroupLeader) = ADDRESS_BY_VERSION(0x5F7E40, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::IsGroupLeader) = GLOBAL_ADDRESS_BY_VERSION(0x5F7E40, 0, 0, 0, 0, 0);

bool CPedGroups::IsGroupLeader(CPed *ped) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *>(gaddrof(CPedGroups::IsGroupLeader), ped);
}

int addrof(CPedGroups::IsInPlayersGroup) = ADDRESS_BY_VERSION(0x5F7F10, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::IsInPlayersGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5F7F10, 0, 0, 0, 0, 0);

char CPedGroups::IsInPlayersGroup(CPed *a1) {
    return plugin::CallAndReturnDynGlobal<char, CPed *>(gaddrof(CPedGroups::IsInPlayersGroup), a1);
}

int addrof(CPedGroups::Process) = ADDRESS_BY_VERSION(0x5FC800, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::Process) = GLOBAL_ADDRESS_BY_VERSION(0x5FC800, 0, 0, 0, 0, 0);

void CPedGroups::Process() {
    plugin::CallDynGlobal(gaddrof(CPedGroups::Process));
}

int addrof(CPedGroups::RegisterKillByPlayer) = ADDRESS_BY_VERSION(0x5F7E30, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::RegisterKillByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x5F7E30, 0, 0, 0, 0, 0);

void CPedGroups::RegisterKillByPlayer() {
    plugin::CallDynGlobal(gaddrof(CPedGroups::RegisterKillByPlayer));
}

int addrof(CPedGroups::RemoveAllFollowersFromGroup) = ADDRESS_BY_VERSION(0x5FB8A0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::RemoveAllFollowersFromGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FB8A0, 0, 0, 0, 0, 0);

void CPedGroups::RemoveAllFollowersFromGroup(int groupID) {
    plugin::CallDynGlobal<int>(gaddrof(CPedGroups::RemoveAllFollowersFromGroup), groupID);
}

int addrof(CPedGroups::RemoveGroup) = ADDRESS_BY_VERSION(0x5FB870, 0, 0, 0, 0, 0);
int gaddrof(CPedGroups::RemoveGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FB870, 0, 0, 0, 0, 0);

void CPedGroups::RemoveGroup(int groupID) {
    plugin::CallDynGlobal<int>(gaddrof(CPedGroups::RemoveGroup), groupID);
}
