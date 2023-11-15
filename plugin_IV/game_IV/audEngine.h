/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class audEngine {
public:
    void RequestNewSound(int32_t time);
};

extern audEngine** AudioEngine;
extern int32_t& AudioEngineTimeInMilliseconds;