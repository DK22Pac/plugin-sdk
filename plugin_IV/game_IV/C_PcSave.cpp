/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C_PcSave.h"
#include "Patch.h"

bool* C_PcSave__ms_bAutoSaveAddr;
bool& C_PcSave::ms_bAutoSave = *(bool*)C_PcSave__ms_bAutoSaveAddr;

static uint32_t C_PcSave__LoadSlotAddr;
int32_t C_PcSave::LoadSlot(int32_t slot) {
    return plugin::CallAndReturnDyn<int32_t>(C_PcSave__LoadSlotAddr, slot);
}

static uint32_t C_PcSave__SaveSlotAddr;
int32_t C_PcSave::SaveSlot(int32_t slot) {
    return plugin::CallAndReturnDyn<int32_t>(C_PcSave__SaveSlotAddr, slot);
}

template<>
void plugin::InitPatterns<C_PcSave>() {
    C_PcSave__ms_bAutoSaveAddr = (bool*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? 33 C0 5E 59 C3 90", 2));

    C_PcSave__LoadSlotAddr = plugin::GetPattern("A1 ? ? ? ? 83 E8 00 74 0A", 0);
    C_PcSave__SaveSlotAddr = plugin::GetPattern("56 8B 74 24 08 85 F6 79 09", 0);
}
