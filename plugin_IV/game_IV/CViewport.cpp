/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CViewport.h"

CViewport& TheViewport = *gpatternt(CViewport, "B9 ? ? ? ? 6A 00 6A 00 C6 05", 1);

float CViewport::FindAspectRatio(bool wide) {
    return plugin::CallMethodAndReturnDyn<float, CViewport*>(gpattern("A1 ? ? ? ? 83 EC 14 57"), this, wide);
}

void CViewport::SetWidescreenBorders(bool on, int32_t delay) {
    plugin::CallMethodDyn(gpattern("56 8B F1 E8 ? ? ? ? 8B 4E 14"), this, on, delay);
}

