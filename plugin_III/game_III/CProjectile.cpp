/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CProjectile.h"

// Converted from thiscall void CProjectile::CProjectile(int modelIndex) 0x4BFE30
CProjectile::CProjectile(int modelIndex) {
    plugin::CallMethod<0x4BFE30, CProjectile *, int>(this, modelIndex);
}