/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Screen.h"

#ifdef GTA2
#include "GBH.h"
#elif RW
#include "RenderWare.h"
#elif RAGE
#include "Rage.h"
#endif

#define PLUGIN_SCREEN_RESOLUTION_DEFAULT 1080.0f

float gScreenResolution = PLUGIN_SCREEN_RESOLUTION_DEFAULT;

float plugin::screen::GetCoord(float a) {
    float base = GetScreenWidth() > GetScreenHeight() ? static_cast<float>(GetScreenHeight()) : static_cast<float>(GetScreenWidth());
    return static_cast<float>(static_cast<int>(a * base / gScreenResolution));
}

float plugin::screen::GetCoord(float a, eScreenCoordTranslationSide side) {
    switch (side) {
    case SIDE_ANY:
        return GetCoord(a);
    case SIDE_LEFT:
        return GetCoordLeft(a);
    case SIDE_RIGHT:
        return GetCoordRight(a);
    case SIDE_TOP:
        return GetCoordTop(a);
    case SIDE_BOTTOM:
        return GetCoordBottom(a);
    case SIDE_CENTER_LEFT:
        return GetCoordCenterLeft(a);
    case SIDE_CENTER_RIGHT:
        return GetCoordCenterRight(a);
    case SIDE_CENTER_UP:
        return GetCoordCenterUp(a);
    case SIDE_CENTER_DOWN:
        return GetCoordCenterDown(a);
    }
    return 0.0f;
}

float plugin::screen::GetCoordLeft(float a) {
    return GetCoord(a);
}

float plugin::screen::GetCoordRight(float a) {
    return GetScreenWidth() - GetCoord(a);
}

float plugin::screen::GetCoordTop(float a) {
    return GetCoord(a);
}

float plugin::screen::GetCoordBottom(float a) {
    return GetScreenHeight() - GetCoord(a);
}

float plugin::screen::GetCoordCenterLeft(float a) {
    return GetScreenCenterX() - GetCoord(a);
}

float plugin::screen::GetCoordCenterRight(float a) {
    return GetScreenCenterX() + GetCoord(a);
}

float plugin::screen::GetCoordCenterUp(float a) {
    return GetScreenCenterY() - GetCoord(a);
}

float plugin::screen::GetCoordCenterDown(float a) {
    return GetScreenCenterY() + GetCoord(a);
}

float plugin::screen::GetMultiplier(float a) {
    float base = GetScreenWidth() > GetScreenHeight() ? static_cast<float>(GetScreenHeight()) : static_cast<float>(GetScreenWidth());
    return a * base / gScreenResolution;
}

void plugin::screen::SetBaseResolution(float res) {
    gScreenResolution = res;
}

float plugin::screen::GetBaseResolution() {
    return gScreenResolution;
}

float plugin::screen::GetScreenHeight() {
#ifdef GTA2
    return static_cast<float>(window_height);
#elif RW
    return static_cast<float>(RsGlobal.maximumHeight);
#elif RAGE
    return static_cast<float>(rage::grcDevice::m_CurrentHeight);
#endif
}

float plugin::screen::GetScreenWidth() {
#ifdef GTA2
    return static_cast<float>(window_width);
#elif RW
    return static_cast<float>(RsGlobal.maximumWidth);
#elif RAGE
    return static_cast<float>(rage::grcDevice::m_CurrentWidth);
#endif
}

float plugin::screen::GetScreenCenterX() {
    return GetScreenWidth() / 2.0f;
}

float plugin::screen::GetScreenCenterY() {
    return GetScreenHeight() / 2.0f;
}

float plugin::screen::GetScreenMaxX() {
    return GetScreenWidth();
}

float plugin::screen::GetScreenMaxY() {
    return GetScreenHeight();
}
