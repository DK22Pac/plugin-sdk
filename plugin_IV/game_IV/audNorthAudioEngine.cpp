/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audNorthAudioEngine.h"

rage::audController*& audNorthAudioEngine::ms_AudioController = *gpatternt(rage::audController*, "C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? 6A 01 E8 ? ? ? ? 6A 01", 2);

