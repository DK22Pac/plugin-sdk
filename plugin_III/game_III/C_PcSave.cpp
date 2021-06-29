/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C_PcSave.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE C_PcSave &PcSaveHelper = *reinterpret_cast<C_PcSave *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C60, 0x8E2D14, 0x8F2E54));

int addrof(C_PcSave::DeleteSlot) = ADDRESS_BY_VERSION(0x5922F0, 0x5925A0, 0x592490);
int gaddrof(C_PcSave::DeleteSlot) = GLOBAL_ADDRESS_BY_VERSION(0x5922F0, 0x5925A0, 0x592490);

bool C_PcSave::DeleteSlot(int slot) {
    return plugin::CallMethodAndReturnDynGlobal<bool, C_PcSave *, int>(gaddrof(C_PcSave::DeleteSlot), this, slot);
}

int addrof(C_PcSave::PcClassSaveRoutine) = ADDRESS_BY_VERSION(0x591F80, 0x592230, 0x592120);
int gaddrof(C_PcSave::PcClassSaveRoutine) = GLOBAL_ADDRESS_BY_VERSION(0x591F80, 0x592230, 0x592120);

bool C_PcSave::PcClassSaveRoutine(int file, unsigned char *data, unsigned int size) {
    return plugin::CallMethodAndReturnDynGlobal<bool, C_PcSave *, int, unsigned char *, unsigned int>(gaddrof(C_PcSave::PcClassSaveRoutine), this, file, data, size);
}

int addrof(C_PcSave::PopulateSlotInfo) = ADDRESS_BY_VERSION(0x592090, 0x592340, 0x592230);
int gaddrof(C_PcSave::PopulateSlotInfo) = GLOBAL_ADDRESS_BY_VERSION(0x592090, 0x592340, 0x592230);

void C_PcSave::PopulateSlotInfo() {
    plugin::CallMethodDynGlobal<C_PcSave *>(gaddrof(C_PcSave::PopulateSlotInfo), this);
}

int addrof(C_PcSave::SaveSlot) = ADDRESS_BY_VERSION(0x591EC0, 0x592170, 0x592060);
int gaddrof(C_PcSave::SaveSlot) = GLOBAL_ADDRESS_BY_VERSION(0x591EC0, 0x592170, 0x592060);

bool C_PcSave::SaveSlot(int slot) {
    return plugin::CallMethodAndReturnDynGlobal<bool, C_PcSave *, int>(gaddrof(C_PcSave::SaveSlot), this, slot);
}

int addrof(C_PcSave::SetSaveDirectory) = ADDRESS_BY_VERSION(0x591EA0, 0x592150, 0x592040);
int gaddrof(C_PcSave::SetSaveDirectory) = GLOBAL_ADDRESS_BY_VERSION(0x591EA0, 0x592150, 0x592040);

void C_PcSave::SetSaveDirectory(char const *path) {
    plugin::CallDynGlobal<char const *>(gaddrof(C_PcSave::SetSaveDirectory), path);
}
