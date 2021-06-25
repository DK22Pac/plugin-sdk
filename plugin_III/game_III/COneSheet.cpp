/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COneSheet.h"

PLUGIN_SOURCE_FILE

int addrof(COneSheet::AddToList) = ADDRESS_BY_VERSION(0x512650, 0x512860, 0x5127F0);
int gaddrof(COneSheet::AddToList) = GLOBAL_ADDRESS_BY_VERSION(0x512650, 0x512860, 0x5127F0);

void COneSheet::AddToList(COneSheet *list) {
    plugin::CallMethodDynGlobal<COneSheet *, COneSheet *>(gaddrof(COneSheet::AddToList), this, list);
}

int addrof(COneSheet::RemoveFromList) = ADDRESS_BY_VERSION(0x512670, 0x512880, 0x512810);
int gaddrof(COneSheet::RemoveFromList) = GLOBAL_ADDRESS_BY_VERSION(0x512670, 0x512880, 0x512810);

void COneSheet::RemoveFromList() {
    plugin::CallMethodDynGlobal<COneSheet *>(gaddrof(COneSheet::RemoveFromList), this);
}
