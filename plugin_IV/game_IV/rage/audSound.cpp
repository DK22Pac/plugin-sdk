/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audSound.h"

void rage::audSound::PrepareAndPlay(rage::audWaveSlot* slot, bool allowLoad, int32_t timeLimit) {
    plugin::CallMethodDyn(gpattern("56 8B F1 57 F6 46 39 01"), this, slot, allowLoad, timeLimit);
}
