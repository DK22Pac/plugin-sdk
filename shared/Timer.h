/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include <chrono>

namespace plugin {
    class Timer {
    public:
        static inline std::chrono::time_point<std::chrono::high_resolution_clock> startTime;

    public:
        inline Timer() {
            startTime = std::chrono::high_resolution_clock::now();
        }

        inline ~Timer() {

        }

    public:
        template<typename T = int32_t>
        static T GetTimeInMilliseconds() {
            return static_cast<T>(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - startTime).count());
        }

        template<typename T = double>
        static T GetTimeInSeconds() {
            return GetTimeInMilliseconds<T>() / 1000;
        }
    };
};
