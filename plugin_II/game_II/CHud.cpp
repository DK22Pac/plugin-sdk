/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CHud.h"
#include <algorithm>
#include <string.h>

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

void CHudMessage::SetHudMessage(const char* text, eMessagePriority priority) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    SetHudMessage(_SWSTRING_STATIC(1), priority);
}

void CHudMessage::SetHudMessage(const wchar_t* text, eMessagePriority priority) {
    plugin::CallMethod<0x4C6060>(this, text, priority);
}

void CHudBrief::SetHudBrief(eMessagePriority priority, const char* gxt, unsigned int timeout) {
    plugin::CallMethod<0x4C6690>(this, priority, gxt, timeout);
}

void CHudBrief::SetHudBriefStr(const char* text, short time) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    SetHudBriefStr(_SWSTRING_STATIC(1), time);
}

void CHudBrief::SetHudBriefStr(const wchar_t* text, short time) {
    SetHudBrief(eMessagePriority::MESSAGE_DISPLAY_NOW, "", -1);

    wcscpy_s(this->text, text);
    length = wcslen(this->text);
    lines = 1 + std::count_if(this->text, this->text + length, [](auto ch){ return ch == L'\n'; });

    if (time == 0) time = length * GetHud()->m_nTextSpeed; // automatic
    displayTime = time;
}

void CHudBrief::Clear(eMessagePriority priority) {
    plugin::CallMethod<0x4C6860>(this, priority);
}
