/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CHud.h"

CHud** gHud = (CHud**)0x672F40;

CHud* GetHud() {
    return *gHud;
}

bool CHudArrow::AreBothArrowTracesUsed() {
    return plugin::CallMethodAndReturn<bool, 0x4C6F80>(this);
}

bool CHudArrow::IsArrowVisible() {
    return plugin::CallMethodAndReturn<bool, 0x4C7050>(this);
}

void CHudArrow::SetSpriteId(short id) {
    plugin::CallMethod<0x4C6FE0>(this, id);
}

void CHud::DrawSprite(int id1, int id2, int x, int y, char style, int const& mode, int enableAlpha, int alpha, char unk) {
    plugin::CallStd<0x4C71B0, int, int, int, int, char, int const&, int, int, char>(id1, id2, x, y, style, mode, enableAlpha, alpha, unk);
}

void CHudMessage::SetHudMessage(wchar_t* str, int priority) {
    plugin::CallMethod<0x4C6060>(this, str, priority);
}

void CHudBrief::SetHudBrief(int priority, const char* str) {
    plugin::CallMethod<0x4C6750>(this, priority, str);
}

void CHudBrief::Clear(int priority) {
    plugin::CallMethod<0x4C6860>(this, priority);
}
