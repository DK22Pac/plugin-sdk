/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CReferences.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CReference(&CReferences::aRefs)[800] = *reinterpret_cast<CReference(*)[800]>(GLOBAL_ADDRESS_BY_VERSION(0x70BBE0, 0x70BBE0, 0x71BD20));
PLUGIN_VARIABLE CReference *&CReferences::pEmptyList = *reinterpret_cast<CReference **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AF8, 0x8F1BAC, 0x901CEC));

int addrof(CReferences::Init) = ADDRESS_BY_VERSION(0x4A7350, 0x4A7440, 0x4A73D0);
int gaddrof(CReferences::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4A7350, 0x4A7440, 0x4A73D0);

void CReferences::Init() {
    plugin::CallDynGlobal(gaddrof(CReferences::Init));
}

int addrof(CReferences::PruneAllReferencesInWorld) = ADDRESS_BY_VERSION(0x4A75A0, 0x4A7690, 0x4A7620);
int gaddrof(CReferences::PruneAllReferencesInWorld) = GLOBAL_ADDRESS_BY_VERSION(0x4A75A0, 0x4A7690, 0x4A7620);

void CReferences::PruneAllReferencesInWorld() {
    plugin::CallDynGlobal(gaddrof(CReferences::PruneAllReferencesInWorld));
}

int addrof(CReferences::RemoveReferencesToPlayer) = ADDRESS_BY_VERSION(0x4A7570, 0x4A7660, 0x4A75F0);
int gaddrof(CReferences::RemoveReferencesToPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4A7570, 0x4A7660, 0x4A75F0);

void CReferences::RemoveReferencesToPlayer() {
    plugin::CallDynGlobal(gaddrof(CReferences::RemoveReferencesToPlayer));
}
