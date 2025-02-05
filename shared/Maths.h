/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <numbers>

#undef max
#undef min
#include <utility>
#include <algorithm>
#include <cmath>

namespace plugin {
    namespace maths {
        template<typename T>
        static inline T pi() {
            return static_cast<T>(std::numbers::pi);
        }
    }
}

#define PI (plugin::maths::pi<double>())
#define TWOPI (PI*2)
