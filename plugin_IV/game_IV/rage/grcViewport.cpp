/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "grcViewport.h"

rage::grcViewport* rage::grcViewport::sm_Current = gpatternt(rage::grcViewport, "8B 35 ? ? ? ? 75 ? 6A", 2);

void rage::grcViewport::SetCurrent(const rage::grcViewport* viewport, bool regenDevice) {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 56 8B 35 ? ? ? ? 75 14"), viewport, regenDevice);
}
