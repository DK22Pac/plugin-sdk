/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C_PcSave.h"

C_PcSave& PcSaveHelper = *(C_PcSave*)0xC17034;

void C_PcSave::PopulateSlotInfo() {
    plugin::CallMethod<0x619140, C_PcSave*>(this);
}

bool C_PcSave::DeleteSlot(int slot) {
    return plugin::CallMethodAndReturn<bool, 0x6190D0, C_PcSave*, int>(this, slot);
}

bool C_PcSave::SaveSlot(int slot) {
    return plugin::CallMethodAndReturn<bool, 0x619060, C_PcSave*, int>(this, slot);
}

void C_PcSave::SetSaveDirectory(const char* path) {
    plugin::Call<0x619040, const char*>(path);
}
