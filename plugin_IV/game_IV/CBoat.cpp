/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

CBoat::CBoat(uint8_t createdBy) : CVehicle(createdBy) {
    plugin::CallMethodDyn(gpattern("56 57 FF 74 24 0C 8B F9 E8 ? ? ? ? 8D 8F"), this, createdBy);
}
