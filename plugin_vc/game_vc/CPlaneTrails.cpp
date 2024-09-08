/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CPlaneTrails.h"


void CPlaneTrails::RegisterPoint(CVector pos, uint32_t trailIndex) {
    plugin::Call<0x54D2A0, CVector, uint32_t>(pos, trailIndex);
}
void CPlaneTrails::Update() {
    plugin::Call<0x54CCF0>();
}