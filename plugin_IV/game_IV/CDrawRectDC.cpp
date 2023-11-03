/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDrawRectDC.h"

static uint32_t CDrawRectDC__CDrawRectDCAddr;
CDrawRectDC::CDrawRectDC(rage::Vector4 const& rect, rage::Color32 const& col) {
    plugin::CallMethodDyn<CDrawRectDC*>(CDrawRectDC__CDrawRectDCAddr, this, &rect, col);
}

template<>
void plugin::InitPatterns<CDrawRectDC>() {
    CDrawRectDC__CDrawRectDCAddr = plugin::GetPattern("8B 41 04 C7 01 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 41 04 FF 05 ? ? ? ? 8B 44 24 04 C7 01 ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? F3 0F 7E 00", 0);
}
