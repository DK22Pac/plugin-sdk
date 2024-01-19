/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C_PcSave.h"

bool& C_PcSave::ms_bAutoSave = *gpatternt(bool, "C7 05 ? ? ? ? ? ? ? ? 33 C0 5E 59 C3 90", 2);

int32_t C_PcSave::LoadSlot(int32_t slot) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("A1 ? ? ? ? 83 E8 00 74 0A"), slot);
}

int32_t C_PcSave::SaveSlot(int32_t slot) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("56 8B 74 24 08 85 F6 79 09"), slot);
}
