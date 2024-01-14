/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlaneTrail.h"


void CPlaneTrail::Render(float visibility) {
    plugin::Call<0x54D370, float>(visibility);
}