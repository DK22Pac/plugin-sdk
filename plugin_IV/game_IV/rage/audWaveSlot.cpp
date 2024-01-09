/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audWaveSlot.h"

rage::audWaveSlot* rage::audWaveSlot::FindWaveSlot(const char* name) {
    return plugin::CallAndReturnDyn<rage::audWaveSlot*>(gpattern("8D 44 24 04 50 B9 ? ? ? ? E8 ? ? ? ? 85 C0"), name);
}
