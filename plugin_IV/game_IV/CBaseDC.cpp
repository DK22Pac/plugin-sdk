/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBaseDC.h"

int32_t& CBaseDC::m_currCommandIdx = *gpatternt(int32_t, "89 15 ? ? ? ? C7 01 ? ? ? ? 8B C1", 2);

void* CBaseDC::operator new(std::size_t size) {
    return plugin::CallAndReturnDyn<void*>(gpattern("53 56 57 8B 7C 24 10 FF 74 24 14"), size, 0);
}

void CBaseDC::InitStatic(CBaseDC* dc) {
    plugin::CallDyn<CBaseDC*>(gpattern("56 57 8B 7C 24 0C 8B CF 8B 07 FF 50 08"), dc);
}

void CBaseDC::Init() {
    plugin::CallMethodDyn<CBaseDC*>(gpattern("56 57 8B F9 8B 07 FF 50 08 25"), this);
}
