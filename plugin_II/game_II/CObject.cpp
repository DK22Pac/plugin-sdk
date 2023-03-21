/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CObject.h"

int const& CObject::GetPositionX(int* x) {
    return plugin::CallMethodAndReturn<int const&, 0x4339C0, CObject*, int*>(this, x);
}

int const& CObject::GetPositionY(int* y) {
    return plugin::CallMethodAndReturn<int const&, 0x4339E0, CObject*, int*>(this, y);
}

int const& CObject::GetPositionZ(int* z) {
    return plugin::CallMethodAndReturn<int const&, 0x433A00, CObject*, int*>(this, z);
}

short const& CObject::GetRotation(short* r) {
    return plugin::CallMethodAndReturn<short const&, 0x433A40, CObject*, short*>(this, r);
}

void CObject::SetPosition(CEncodedVector pos) {
    plugin::CallMethod<0x491E00, CObject*, CEncodedVector>(this, pos);
}

void CObject::SetRotation(short rot) {
    plugin::CallMethod<0x433A30, CObject*, short>(this, rot);
}
