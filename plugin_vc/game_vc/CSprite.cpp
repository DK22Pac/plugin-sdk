/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite.h"

bool CSprite::CalcScreenCoors(RwV3d const& posn, RwV3d *out, float *w, float *h, bool checkMaxVisible) {
    return plugin::CallAndReturn<bool, 0x5778B0, RwV3d const&, RwV3d *, float *, float *, bool>(posn, out, w, h, checkMaxVisible);
}
