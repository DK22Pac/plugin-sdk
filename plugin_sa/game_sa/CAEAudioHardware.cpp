/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAEAudioHardware.h"

CAEAudioHardware& AEAudioHardware = *(CAEAudioHardware*)0xB5F8B8;

int CAEAudioHardware::GetActiveTrackID() {
    return plugin::CallMethodAndReturn<int, 0x4D8F80, CAEAudioHardware*>(this);
}
