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
        static bool timerInit;
        static std::chrono::time_point<std::chrono::steady_clock> startTime;

    public:
        Timer();
        ~Timer();

    public:
        static float GetTimeInMilliseconds();
        static float GetTimeInSeconds();
    };
};
