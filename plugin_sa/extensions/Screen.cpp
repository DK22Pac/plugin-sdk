/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Screen.h"
#include "game_sa\RenderWare.h"

#define PLUGIN_SCREEN_RESOLUTION_DEFAULT 1800.0f

float gScreenResolution = PLUGIN_SCREEN_RESOLUTION_DEFAULT;

float plugin::screen::GetCoord(float a) {
    float base = RsGlobal.maximumWidth > RsGlobal.maximumHeight ? RsGlobal.maximumHeight : RsGlobal.maximumWidth;
    return static_cast<int>(a * base / gScreenResolution);
}

float plugin::screen::GetMultiplier(float a) {
    float base = RsGlobal.maximumWidth > RsGlobal.maximumHeight ? RsGlobal.maximumHeight : RsGlobal.maximumWidth;
    return a * base / gScreenResolution;
}

void plugin::screen::SetBaseResolution(float res) {
    gScreenResolution = res;
}

float plugin::screen::GetBaseResolution() {
    return gScreenResolution;
}