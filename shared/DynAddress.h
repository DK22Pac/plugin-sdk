/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <vector>
#include <functional>

namespace plugin {

int GetBaseAddress();

int GetGlobalAddress(int address);

const int GetExternalAddress(const char* processName, int shift, int address);

}
