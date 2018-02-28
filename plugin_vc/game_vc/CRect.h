/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"

class CRect {
public:
    float left;
    float bottom;
    float right;
    float top;

    CRect(plugin::dummy_func_t) {}

    inline CRect(float Left, float Top, float Right, float Bottom) {
        left = Left; bottom = Bottom; right = Right; top = Top;
    }

    inline CRect() {
        left = 1000000.0f;
        top = 1000000.0f;
        right = -1000000.0f;
        bottom = -1000000.0f;
    }

    inline CRect(CRect const&src) {
        left = src.left; bottom = src.bottom; right = src.right; top = src.top;
    }

    inline bool IsFlipped() {
        return left > right || top > bottom;
    }

    inline void Restrict(CRect const& restriction) {
        if (restriction.left < left)
            left = restriction.left;
        if (restriction.right > right)
            right = restriction.right;
        if (restriction.top < top)
            top = restriction.top;
        if (restriction.bottom > bottom)
            bottom = restriction.bottom;
    }

    inline void Resize(float resizeX, float resizeY) {
        left = left - resizeX;
        right = resizeX + right;
        top = top - resizeY;
        bottom = resizeY + bottom;
    }

    inline bool IsPointInside(CVector2D const& point) {
        return point.x >= left
            && point.x <= right
            && point.y >= top
            && point.y <= bottom;
    }

    inline bool IsCircleInside(CVector2D const& circleCenter, float circleRadius) {
        return left - circleRadius <= circleCenter.x
            && circleRadius + right >= circleCenter.x
            && top - circleRadius <= circleCenter.y
            && circleRadius + bottom >= circleCenter.y;
    }

    inline void SetFromCenter(float x, float y, float size) {
        left = x - size;
        top = y - size;
        right = x + size;
        bottom = y + size;
    }

    inline void GetCenter(float *x, float *y) {
        *x = (right + left) * 0.5f;
        *y = (top + bottom) * 0.5f;
    }

    inline void StretchToPoint(float x, float y) {
        if (x < left)
            left = x;
        if (x > right)
            right = x;
        if (y < top)
            top = y;
        if (y > bottom)
            bottom = y;
    }
};

VALIDATE_SIZE(CRect, 0x10);