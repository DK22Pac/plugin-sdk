/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite2d.h"
#include "CDrawRectDC.h"
#include "CDrawSpriteDC.h"

rage::grmShader*& CSprite2d::m_imShader = *gpatternt(rage::grmShader*, "A3 ? ? ? ? 8B 01 6A 00 68 ? ? ? ? FF 50 0C 8B 3D", 1);

void CSprite2d::SetTexture(const char* name) {
    plugin::CallMethodDyn<CSprite2d*>(gpattern("83 EC 08 57 8B F9 68"), this, name);
}

void CSprite2d::Delete() {
    plugin::CallMethodDyn<CSprite2d*>(gpattern("83 EC 08 56 8B F1 68 ? ? ? ? 8D 4C 24 08 E8 ? ? ? ? 8B 0E"), this);
}

void CSprite2d::SetRenderState() {
    plugin::CallMethodDyn(gpattern("56 8B F1 8B 0D ? ? ? ? FF 36"), this);
}

void CSprite2d::ClearRenderState() {
    plugin::CallDyn(gpattern("FF 35 ? ? ? ? 8B 0D ? ? ? ? FF 35 ? ? ? ? E8 ? ? ? ? FF 35 ? ? ? ? 8B 0D"));
}

void CSprite2d::Draw(rage::Vector2 const& pt1, rage::Vector2 const& pt2, rage::Vector2 const& pt3, rage::Vector2 const& pt4, rage::Color32 const& color) {
    plugin::CallDyn(gpattern("56 6A 04 6A 04 E8 ? ? ? ? 8B 74 24 20"), &pt1, &pt2, &pt3, &pt4, &color);
}

void CSprite2d::Draw(rage::fwRect const& rect, float z, rage::fwRect const& uv, rage::Color32 const& color, int32_t pass) {
    plugin::CallDyn(gpattern("56 6A 00 6A 00 E8 ? ? ? ? 6A 00 E8 ? ? ? ? 8B 0D ? ? ? ? 83 C4 0C FF 35 ? ? ? ? 6A 00 6A 02 E8 ? ? ? ? FF 74 24 30"), rect, z, uv, &color, pass);
}

void CSprite2d::Draw(rage::fwRect const& rect, rage::Color32 const& color) {
    plugin::CallDyn(gpattern("8B 44 24 04 6A 00 FF 74 24 0C"), &rect, &color);
}

void CSprite2d::DrawPolygon(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float z, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, rage::Color32 const& color, int32_t pass) {
    plugin::CallDyn(gpattern("56 6A 00 6A 00 E8 ? ? ? ? 6A 00 E8 ? ? ? ? 8B 0D ? ? ? ? 83 C4 0C FF 35 ? ? ? ? 6A 00 6A 02 E8 ? ? ? ? FF 74 24 50"), x1, y1, x2, y2, x3, y3, x4, y4, z, u1, v1, u2, v2, u3, v3, u4, v4, &color, pass);
}

void CSprite2d::Draw(rage::Vector3 const& pos1, rage::Vector3 const& pos2, rage::Vector3 const& pos3, rage::Vector3 const& pos4, rage::Color32 const& color) {
    plugin::CallDyn(gpattern("56 6A 04 6A 05"), &pos1, &pos2, &pos3, &pos4, &color);
}

void CSprite2d::Draw(rage::fwRect const& rect, rage::fwRect const& uv, rage::Color32 const& color) {
    plugin::CallDyn(gpattern("8B 44 24 08 6A 00 FF 74 24 10"), &rect, &uv, &color);
}

void CSprite2d::DrawRect(rage::fwRect const& rect, rage::Color32 const& col) {
    plugin::CallDyn(gpattern("6A 00 E8 ? ? ? ? 8B 44 24 08 83 C4 04"), &rect, &col);
}

void CSprite2d::DrawRect(rage::fwRect const& rect, float z, rage::Color32 const& col) {
    plugin::CallDyn(gpattern("56 6A 00 6A 00 E8 ? ? ? ? 6A 00 E8 ? ? ? ? 8B 0D ? ? ? ? 83 C4 0C FF 35 ? ? ? ? 6A 00 6A 02 E8 ? ? ? ? 8B 0D"), rect, z, &col);
}

void CSprite2d::DrawCircle(rage::Vector2 const& center, rage::Vector2 const& scale, int radius, rage::Color32 const& col, float z) {
    plugin::CallDyn(gpattern("55 8B EC 83 EC 20 A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C"), &center, &scale, radius, &col, z);
}
