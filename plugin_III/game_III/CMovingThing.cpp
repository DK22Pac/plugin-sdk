/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMovingThing.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMovingThing) = ADDRESS_BY_VERSION(0x5009B0, 0x500A90, 0x500A20);
int ctor_gaddr(CMovingThing) = GLOBAL_ADDRESS_BY_VERSION(0x5009B0, 0x500A90, 0x500A20);

int addrof(CMovingThing::AddToList) = ADDRESS_BY_VERSION(0x4FF320, 0x4FF400, 0x4FF390);
int gaddrof(CMovingThing::AddToList) = GLOBAL_ADDRESS_BY_VERSION(0x4FF320, 0x4FF400, 0x4FF390);

void CMovingThing::AddToList(CMovingThing *pThing) {
    plugin::CallMethodDynGlobal<CMovingThing *, CMovingThing *>(gaddrof(CMovingThing::AddToList), this, pThing);
}

int addrof(CMovingThing::RemoveFromList) = ADDRESS_BY_VERSION(0x4FF340, 0x4FF420, 0x4FF3B0);
int gaddrof(CMovingThing::RemoveFromList) = GLOBAL_ADDRESS_BY_VERSION(0x4FF340, 0x4FF420, 0x4FF3B0);

void CMovingThing::RemoveFromList() {
    plugin::CallMethodDynGlobal<CMovingThing *>(gaddrof(CMovingThing::RemoveFromList), this);
}

int addrof(CMovingThing::Update) = ADDRESS_BY_VERSION(0x4FF290, 0x4FF370, 0x4FF300);
int gaddrof(CMovingThing::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4FF290, 0x4FF370, 0x4FF300);

void CMovingThing::Update() {
    plugin::CallMethodDynGlobal<CMovingThing *>(gaddrof(CMovingThing::Update), this);
}
