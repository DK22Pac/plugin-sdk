/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "FxFrustumInfo_c.h"

// Converted from thiscall bool FxFrustumInfo_c::IsCollision(FxSphere_c *sphere) 0x4AA030
bool FxFrustumInfo_c::IsCollision(FxSphere_c* sphere) {
    return ((bool(__thiscall *)(FxFrustumInfo_c*, FxSphere_c*))0x4AA030)(this, sphere);
}