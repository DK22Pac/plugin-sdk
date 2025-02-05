/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CControl.h"

int32_t& CControl::m_UsingMouse = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? BE ? ? ? ? 8D 49 00", 2);

void CControl::Clear(int32_t arg1) {
    plugin::CallMethodDyn(gpattern("8B 44 24 04 56 8B F1 89 86 ? ? ? ? 89 46 04"), this, arg1);
}
