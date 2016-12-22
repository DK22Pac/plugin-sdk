/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

namespace plugin {
    class screen {
    public:
        static float GetCoord(float a);
        static float GetMultiplier(float a);
        static void SetBaseResolution(float res);
        static float GetBaseResolution();
    };
}

#define SCREEN_COORD(a) (plugin::screen::GetCoord(a))
#define SCREEN_MULTIPLIER(a) (plugin::screen::GetMultiplier(a))