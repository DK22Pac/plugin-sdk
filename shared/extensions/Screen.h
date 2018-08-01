/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CRect.h"

namespace plugin {
    class screen {
    public:
        enum eScreenCoordTranslationSide {
            SIDE_ANY,
            SIDE_LEFT,
            SIDE_RIGHT,
            SIDE_TOP,
            SIDE_BOTTOM,
            SIDE_CENTER_LEFT,
            SIDE_CENTER_RIGHT,
            SIDE_CENTER_UP,
            SIDE_CENTER_DOWN
        };

        static float GetCoord(float a, eScreenCoordTranslationSide side);
        static float GetCoord(float a);
        static float GetCoordLeft(float a);
        static float GetCoordRight(float a);
        static float GetCoordTop(float a);
        static float GetCoordBottom(float a);
        static float GetCoordCenterLeft(float a);
        static float GetCoordCenterRight(float a);
        static float GetCoordCenterUp(float a);
        static float GetCoordCenterDown(float a);
        static float GetMultiplier(float a);
        static void SetBaseResolution(float res);
        static float GetBaseResolution();
        static float GetScreenHeight();
        static float GetScreenWidth();
        static float GetScreenCenterX();
        static float GetScreenCenterY();
        static float GetScreenMaxX();
        static float GetScreenMaxY();
    };
}

#define SCREEN_COORD(a) (plugin::screen::GetCoord(a))
#define SCREEN_COORD_LEFT(a) (plugin::screen::GetCoordLeft(a))
#define SCREEN_COORD_RIGHT(a) (plugin::screen::GetCoordRight(a))
#define SCREEN_COORD_TOP(a) (plugin::screen::GetCoordTop(a))
#define SCREEN_COORD_BOTTOM(a) (plugin::screen::GetCoordBottom(a))
#define SCREEN_COORD_CENTER_X (plugin::screen::GetScreenCenterX())
#define SCREEN_COORD_CENTER_Y (plugin::screen::GetScreenCenterY())
#define SCREEN_COORD_CENTER_LEFT(a) (plugin::screen::GetCoordCenterLeft(a))
#define SCREEN_COORD_CENTER_RIGHT(a) (plugin::screen::GetCoordCenterRight(a))
#define SCREEN_COORD_CENTER_UP(a) (plugin::screen::GetCoordCenterUp(a))
#define SCREEN_COORD_CENTER_DOWN(a) (plugin::screen::GetCoordCenterDown(a))
#define SCREEN_COORD_MAX_X (plugin::screen::GetScreenMaxX())
#define SCREEN_COORD_MAX_Y (plugin::screen::GetScreenMaxY())
#define SCREEN_WIDTH (plugin::screen::GetScreenWidth())
#define SCREEN_HEIGHT (plugin::screen::GetScreenHeight())
#define SCREEN_MULTIPLIER(a) (plugin::screen::GetMultiplier(a))
#define SCREEN_RECT(left, top, right, bottom) (CRect(SCREEN_COORD(left), SCREEN_COORD(top), SCREEN_COORD(right), SCREEN_COORD(bottom)))
#define SCREEN_RECT_RIGHT(left, top, right, bottom) (CRect(SCREEN_COORD_RIGHT(left), SCREEN_COORD(top), SCREEN_COORD_RIGHT(right), SCREEN_COORD(bottom)))
#define SCREEN_RECT_BOTTOM(left, top, right, bottom) (CRect(SCREEN_COORD(left), SCREEN_COORD_BOTTOM(top), SCREEN_COORD(right), SCREEN_COORD_BOTTOM(bottom)))
#define SCREEN_RECT_BOTTOM_RIGHT(left, top, right, bottom) (CRect(SCREEN_COORD_RIGHT(left), SCREEN_COORD_BOTTOM(top), SCREEN_COORD_RIGHT(right), SCREEN_COORD_BOTTOM(bottom)))
