/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHeli.h"

CHeli::CHeli(uint8_t createdBy) : CAutomobile(createdBy) {
    plugin::CallMethodDyn(gpattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 8D 8E ? ? ? ? C7 06 ? ? ? ? E8 ? ? ? ? 80 A6"), this, createdBy);
}

