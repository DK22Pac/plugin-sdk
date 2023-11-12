/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSimpleTransform.h"

void CSimpleTransform::UpdateMatrix(rage::Matrix44* matrix) {
    plugin::CallMethodDyn(gpattern("56 8B F1 57 8B 7C 24 0C F3 0F 10 46"), this, matrix);
}

