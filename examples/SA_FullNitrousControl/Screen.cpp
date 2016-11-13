#include "Screen.h"
#include "game_sa\RenderWare.h"

const float SCREEN_RESOLUTION_DEFAULT = 900.0f;

float Screen::GetCoord(float a) {
    float base = RsGlobal.maximumWidth > RsGlobal.maximumHeight ? RsGlobal.maximumHeight : RsGlobal.maximumWidth;
    return static_cast<int>(a * base / SCREEN_RESOLUTION_DEFAULT);
}

float Screen::GetMultiplier(float a) {
    float base = RsGlobal.maximumWidth > RsGlobal.maximumHeight ? RsGlobal.maximumHeight : RsGlobal.maximumWidth;
    return a * base / SCREEN_RESOLUTION_DEFAULT;
}