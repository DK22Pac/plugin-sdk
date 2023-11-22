/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class fwRect {
    public:
        float left;
        float top;
        float right;
        float bottom;
    public:
        fwRect() = default;
        fwRect(float left, float top, float right, float bottom) : left(left), top(top), right(right), bottom(bottom) {}
    };
}
