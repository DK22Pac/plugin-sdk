/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamIdle.h"

void CCamIdle::ResetStats(bool unused) {
    plugin::CallMethodDyn(gpattern("C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? 80 A1 ? ? ? ? ? 8B 81"), this, unused);
}

