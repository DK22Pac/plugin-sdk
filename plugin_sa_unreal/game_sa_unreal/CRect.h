/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CRect {
public:
    float left;
    float bottom;
    float right;
    float top;

public:
    CRect(plugin::dummy_func_t) {
    }

    inline CRect(float Left, float Top, float Right, float Bottom) {
        left = Left; bottom = Bottom; right = Right; top = Top;
    }

    inline CRect() {
        left = 1000000.0f;
        top = 1000000.0f;
        right = -1000000.0f;
        bottom = -1000000.0f;
    }

    inline CRect(CRect const& src) {
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

    void Translate(float x, float y) {
        left += x;
        right += x;
        bottom += y;
        top += y;
    }

    void Grow(float r) {
        left -= r;
        right += r;
        top -= r;
        bottom += r;
    }

    void Grow(float l, float r) {
        left -= l;
        top -= l;
        right += r;
        bottom += r;
    }

    void Grow(float l, float r, float t, float b) {
        left -= l;
        top -= t;
        right += r;
        bottom += b;
    }
};
