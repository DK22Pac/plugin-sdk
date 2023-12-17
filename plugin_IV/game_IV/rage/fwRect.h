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
        fwRect() : left(1000000.0f), top(-1000000.0f), right(-1000000.0f), bottom(1000000.0f) {}
        fwRect(float left, float top, float right, float bottom) : left(left), top(top), right(right), bottom(bottom) {}
        
        void Grow(float x, float y) {
            this->left -= x;
            this->top -= y;
            this->right += x;
            this->bottom += y;
        }

        void Translate(float x, float y) {
            this->left += x;
            this->top += y;
            this->right += x;
            this->bottom += y;
        }
    };
}
