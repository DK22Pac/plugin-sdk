/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBike.h"

CBike::CBike(uint8_t createdBy) : CVehicle(createdBy) {
    plugin::CallMethodDyn(gpattern("53 56 57 FF 74 24 10 8B F9"), this, createdBy);
}
