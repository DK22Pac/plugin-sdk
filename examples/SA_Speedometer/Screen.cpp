#include "Screen.h"
#include "game_sa\RenderWare.h"

const float SCREEN_RESOLUTION_DEFAULT = 1080.0f;

float Screen::GetCoord(float a) {
    float base = RsGlobal.maximumWidth > RsGlobal.maximumHeight ? RsGlobal.maximumHeight : RsGlobal.maximumWidth;
    return static_cast<int>(a * base / SCREEN_RESOLUTION_DEFAULT);
}