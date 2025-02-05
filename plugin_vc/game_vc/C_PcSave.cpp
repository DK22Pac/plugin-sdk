/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C_PcSave.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE C_PcSave &PcSaveHelper = *reinterpret_cast<C_PcSave *>(GLOBAL_ADDRESS_BY_VERSION(0x9753C4, 0x9753CC, 0x9743CC));

int addrof(C_PcSave::DeleteSlot) = ADDRESS_BY_VERSION(0x61D430, 0x61D410, 0x61D070);
int gaddrof(C_PcSave::DeleteSlot) = GLOBAL_ADDRESS_BY_VERSION(0x61D430, 0x61D410, 0x61D070);

bool C_PcSave::DeleteSlot(int slot) {
    return plugin::CallMethodAndReturnDynGlobal<bool, C_PcSave *, int>(gaddrof(C_PcSave::DeleteSlot), this, slot);
}

int addrof(C_PcSave::PcClassSaveRoutine) = ADDRESS_BY_VERSION(0x61D7A0, 0x61D780, 0x61D3E0);
int gaddrof(C_PcSave::PcClassSaveRoutine) = GLOBAL_ADDRESS_BY_VERSION(0x61D7A0, 0x61D780, 0x61D3E0);

bool C_PcSave::PcClassSaveRoutine(int file, unsigned char *data, unsigned int size) {
    return plugin::CallMethodAndReturnDynGlobal<bool, C_PcSave *, int, unsigned char *, unsigned int>(gaddrof(C_PcSave::PcClassSaveRoutine), this, file, data, size);
}

int addrof(C_PcSave::PopulateSlotInfo) = ADDRESS_BY_VERSION(0x61D4A0, 0x61D480, 0x61D0E0);
int gaddrof(C_PcSave::PopulateSlotInfo) = GLOBAL_ADDRESS_BY_VERSION(0x61D4A0, 0x61D480, 0x61D0E0);

void C_PcSave::PopulateSlotInfo() {
    plugin::CallMethodDynGlobal<C_PcSave *>(gaddrof(C_PcSave::PopulateSlotInfo), this);
}

int addrof(C_PcSave::SaveSlot) = ADDRESS_BY_VERSION(0x61D8B0, 0x61D890, 0x61D4F0);
int gaddrof(C_PcSave::SaveSlot) = GLOBAL_ADDRESS_BY_VERSION(0x61D8B0, 0x61D890, 0x61D4F0);

char C_PcSave::SaveSlot(int slot) {
    return plugin::CallMethodAndReturnDynGlobal<char, C_PcSave *, int>(gaddrof(C_PcSave::SaveSlot), this, slot);
}

int addrof(C_PcSave::SetSaveDirectory) = ADDRESS_BY_VERSION(0x61D930, 0x61D910, 0x61D570);
int gaddrof(C_PcSave::SetSaveDirectory) = GLOBAL_ADDRESS_BY_VERSION(0x61D930, 0x61D910, 0x61D570);

void C_PcSave::SetSaveDirectory(char const *path) {
    plugin::CallDynGlobal<char const *>(gaddrof(C_PcSave::SetSaveDirectory), path);
}
