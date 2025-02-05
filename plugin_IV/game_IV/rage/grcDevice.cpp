/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "grcDevice.h"

int32_t& rage::grcDevice::m_CurrentWidth = *gpatternt(int32_t, "8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2);
int32_t& rage::grcDevice::m_CurrentHeight = *gpatternt(int32_t, "8B 35 ? ? ? ? 0F 44 35 ? ? ? ? FF D7 39 05 ? ? ? ? 8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2);
