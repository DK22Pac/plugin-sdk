/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "GenericGameStorage.h"

bool& b_FoundRecentSavedGameWantToLoad = *(bool*)0xA10B6E;

bool CheckSlotDataValid(int32_t slot) {
    return plugin::CallAndReturnDynGlobal<bool>(0x61A6C0, slot);
}
