/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class audBank {
public:

};

class CAudAttr {
public:

};

class audEngine {
public:
    void RequestNewSound(int32_t time);
    audBank* GetBank(const char* str);
    void SetAttribute(int32_t, audBank*, int32_t, int32_t);
};

extern audEngine** AudioEngine;
extern int32_t& AudioEngineTimeInMilliseconds;
extern CAudAttr& GenericAudAttr;
