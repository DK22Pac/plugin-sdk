/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CDrawSpriteDC.h"

static uint32_t CDrawSpriteDC__CDrawSpriteDCAddr;
CDrawSpriteDC::CDrawSpriteDC(rage::Vector2 const& leftBottom, rage::Vector2 const& leftTop, rage::Vector2 const& rightBottom, rage::Vector2 const& rightTop, rage::Color32 const& col, rage::grcTexturePC* sprite) {
    plugin::CallMethodDyn<CDrawSpriteDC*>(CDrawSpriteDC__CDrawSpriteDCAddr, this, &leftBottom, &leftTop, &rightBottom, &rightTop, col, sprite);
}

template<>
void plugin::InitPatterns<CDrawSpriteDC>() {
    CDrawSpriteDC__CDrawSpriteDCAddr = plugin::GetPattern("8B D1 8B 4C 24 04 8B 42 04 C7 02 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 42 04 FF 05 ? ? ? ? C7 02 ? ? ? ? C7 42 ? ? ? ? ? 8B 01 89 42 08 8B 41 04 8B 4C 24 08 89 42 0C 8B 01 89 42 10 8B 41 04 8B 4C 24 0C 89 42 14 8B 01 89 42 18 8B 41 04 8B 4C 24 10 89 42 1C 8B 01 89 42 20 8B 41 04 89 42 24", 0);

}
