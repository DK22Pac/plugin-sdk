/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class Color32 {
    public:
        uint8_t b, g, r, a;

        Color32() = default;
        Color32(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255)
            : r(red), g(green), b(blue), a(alpha) {
        }

        Color32(int32_t red, int32_t green, int32_t blue, int32_t alpha = 255)
            : r(static_cast<uint8_t>(red)), g(static_cast<uint8_t>(green)), b(static_cast<uint8_t>(blue)), a(static_cast<uint8_t>(alpha)) {
        }

        uint32_t GetARGB() const {
            uint32_t argb = (static_cast<int>(a) << 24) |
                (static_cast<int>(r) << 16) |
                (static_cast<int>(g) << 8) |
                static_cast<int>(b);
            return argb;
        }

        bool operator==(const Color32& other) const {
            return r == other.r && g == other.g &&
                b == other.b && a == other.a;
        }

        Color32& operator+=(const Color32& other) {
            r = static_cast<uint8_t>(min(static_cast<uint16_t>(r) + other.r, static_cast<uint16_t>(255)));
            g = static_cast<uint8_t>(min(static_cast<uint16_t>(g) + other.g, static_cast<uint16_t>(255)));
            b = static_cast<uint8_t>(min(static_cast<uint16_t>(b) + other.b, static_cast<uint16_t>(255)));
            a = static_cast<uint8_t>(min(static_cast<uint16_t>(a) + other.a, static_cast<uint16_t>(255)));
            return *this;
        }

        Color32& operator-=(const Color32& other) {
            r = static_cast<uint8_t>(max(static_cast<int>(r) - other.r, 0));
            g = static_cast<uint8_t>(max(static_cast<int>(g) - other.g, 0));
            b = static_cast<uint8_t>(max(static_cast<int>(b) - other.b, 0));
            a = static_cast<uint8_t>(max(static_cast<int>(a) - other.a, 0));
            return *this;
        }

        Color32 operator-(const Color32& other) const {
            Color32 result(*this);
            result -= other;
            return result;
        }

        Color32 operator+(const Color32& other) const {
            Color32 result(*this);
            result += other;
            return result;
        }

        Color32& operator=(const Color32& other) {
            if (this != &other) {
                r = other.r;
                g = other.g;
                b = other.b;
                a = other.a;
            }
            return *this;
        }
    };
}
