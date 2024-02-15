/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace plugin {
    class Image {
    public:
        int32_t width;
        int32_t height;
        int32_t channels;
        uint8_t* pixels;

    private:
        ~Image() { }

    public:
        Image() = default;
        void Release();
    };
}
