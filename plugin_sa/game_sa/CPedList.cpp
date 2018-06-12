/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedList.h"

PLUGIN_SOURCE_FILE

int addrof(CPedList::BuildListFromGroup_NoLeader) = ADDRESS_BY_VERSION(0x699DD0, 0, 0, 0, 0, 0);
int gaddrof(CPedList::BuildListFromGroup_NoLeader) = GLOBAL_ADDRESS_BY_VERSION(0x699DD0, 0, 0, 0, 0, 0);

void CPedList::BuildListFromGroup_NoLeader(CPedGroupMembership *pedGroupMemberShip) {
    plugin::CallMethodDynGlobal<CPedList *, CPedGroupMembership *>(gaddrof(CPedList::BuildListFromGroup_NoLeader), this, pedGroupMemberShip);
}

int addrof(CPedList::BuildListFromGroup_NotInCar_NoLeader) = ADDRESS_BY_VERSION(0x69A340, 0, 0, 0, 0, 0);
int gaddrof(CPedList::BuildListFromGroup_NotInCar_NoLeader) = GLOBAL_ADDRESS_BY_VERSION(0x69A340, 0, 0, 0, 0, 0);

void CPedList::BuildListFromGroup_NotInCar_NoLeader(CPedGroupMembership *pedGroupMembership) {
    plugin::CallMethodDynGlobal<CPedList *, CPedGroupMembership *>(gaddrof(CPedList::BuildListFromGroup_NotInCar_NoLeader), this, pedGroupMembership);
}

int addrof(CPedList::BuildListOfPedsOfPedType) = ADDRESS_BY_VERSION(0x69A3B0, 0, 0, 0, 0, 0);
int gaddrof(CPedList::BuildListOfPedsOfPedType) = GLOBAL_ADDRESS_BY_VERSION(0x69A3B0, 0, 0, 0, 0, 0);

void CPedList::BuildListOfPedsOfPedType(int pedtype) {
    plugin::CallMethodDynGlobal<CPedList *, int>(gaddrof(CPedList::BuildListOfPedsOfPedType), this, pedtype);
}

int addrof(CPedList::Empty) = ADDRESS_BY_VERSION(0x699DB0, 0, 0, 0, 0, 0);
int gaddrof(CPedList::Empty) = GLOBAL_ADDRESS_BY_VERSION(0x699DB0, 0, 0, 0, 0, 0);

void CPedList::Empty() {
    plugin::CallMethodDynGlobal<CPedList *>(gaddrof(CPedList::Empty), this);
}

int addrof(CPedList::ExtractPedsWithGuns) = ADDRESS_BY_VERSION(0x69A4C0, 0, 0, 0, 0, 0);
int gaddrof(CPedList::ExtractPedsWithGuns) = GLOBAL_ADDRESS_BY_VERSION(0x69A4C0, 0, 0, 0, 0, 0);

void CPedList::ExtractPedsWithGuns(CPedList *pedlist) {
    plugin::CallMethodDynGlobal<CPedList *, CPedList *>(gaddrof(CPedList::ExtractPedsWithGuns), this, pedlist);
}

int addrof(CPedList::FillUpHoles) = ADDRESS_BY_VERSION(0x699E20, 0, 0, 0, 0, 0);
int gaddrof(CPedList::FillUpHoles) = GLOBAL_ADDRESS_BY_VERSION(0x699E20, 0, 0, 0, 0, 0);

void CPedList::FillUpHoles() {
    plugin::CallMethodDynGlobal<CPedList *>(gaddrof(CPedList::FillUpHoles), this);
}

int addrof(CPedList::RemovePedsAttackingPedType) = ADDRESS_BY_VERSION(0x69A450, 0, 0, 0, 0, 0);
int gaddrof(CPedList::RemovePedsAttackingPedType) = GLOBAL_ADDRESS_BY_VERSION(0x69A450, 0, 0, 0, 0, 0);

void CPedList::RemovePedsAttackingPedType(int pedtype) {
    plugin::CallMethodDynGlobal<CPedList *, int>(gaddrof(CPedList::RemovePedsAttackingPedType), this, pedtype);
}

int addrof(CPedList::RemovePedsThatDontListenToPlayer) = ADDRESS_BY_VERSION(0x69A420, 0, 0, 0, 0, 0);
int gaddrof(CPedList::RemovePedsThatDontListenToPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x69A420, 0, 0, 0, 0, 0);

void CPedList::RemovePedsThatDontListenToPlayer() {
    plugin::CallMethodDynGlobal<CPedList *>(gaddrof(CPedList::RemovePedsThatDontListenToPlayer), this);
}
