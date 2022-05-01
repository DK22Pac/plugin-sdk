/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cDMAudio.h"

cDMAudio& DMAudio = *(cDMAudio*)0xA10B8A;

void cDMAudio::PlayFrontEndSound(unsigned short frontend, unsigned int volume) {
    plugin::CallMethod<0x5F9960, cDMAudio*, unsigned short, unsigned int>(this, frontend, volume);
}
