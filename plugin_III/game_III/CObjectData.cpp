/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CObjectData.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CObjectInfo(&CObjectData::ms_aObjectInfo)[168] = *reinterpret_cast<CObjectInfo(*)[168]>(GLOBAL_ADDRESS_BY_VERSION(0x6F4708, 0x6F4708, 0x704848));

int addrof(CObjectData::Initialise) = ADDRESS_BY_VERSION(0x4BC0E0, 0x4BC1D0, 0x4BC160);
int gaddrof(CObjectData::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4BC0E0, 0x4BC1D0, 0x4BC160);

void CObjectData::Initialise(char const *fileName) {
    plugin::CallDynGlobal<char const *>(gaddrof(CObjectData::Initialise), fileName);
}

int addrof(CObjectData::SetObjectData) = ADDRESS_BY_VERSION(0x4BC270, 0x4BC360, 0x4BC2F0);
int gaddrof(CObjectData::SetObjectData) = GLOBAL_ADDRESS_BY_VERSION(0x4BC270, 0x4BC360, 0x4BC2F0);

void CObjectData::SetObjectData(int modelIndex, CObject &object) {
    plugin::CallDynGlobal<int, CObject &>(gaddrof(CObjectData::SetObjectData), modelIndex, object);
}
