/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CCar.h"

void CCar::SetPosition(CEncodedVector pos) {
    plugin::CallMethod<0x4207F0, CCar*, CEncodedVector>(this, pos);
}

void CCar::SetRemap(short remap) {
    plugin::CallMethod<0x421FD0, CCar*>(this, remap);
}
