/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite.h"

void CSprite::RenderOneXLUSprite(float x, float y, float z, float halfWidth, float halfHeight,
    unsigned char red, unsigned char green, unsigned char blue, short intensity, float rhw, unsigned char alpha) {
    plugin::Call<0x576FE0, float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char>(x, y, z, halfWidth, halfHeight, red, green, blue, intensity, rhw, alpha);
}

bool CSprite::CalcScreenCoors(RwV3d const& posn, RwV3d *out, float *w, float *h, bool checkMaxVisible) {
    return plugin::CallAndReturn<bool, 0x5778B0, RwV3d const&, RwV3d *, float *, float *, bool>(posn, out, w, h, checkMaxVisible);
}
