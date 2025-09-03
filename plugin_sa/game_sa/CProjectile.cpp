/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CProjectile.h"

// Converted from thiscall void CProjectile::CProjectile(int) 0x5A4030
CProjectile::CProjectile(int index) {
    plugin::CallMethod<0x5A4030, CProjectile*, int>(this, index);
}