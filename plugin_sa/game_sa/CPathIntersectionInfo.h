/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CPathIntersectionInfo {
public:
    unsigned char m_bRoadCross : 1;
    unsigned char m_bPedTrafficLight : 1;
};

VALIDATE_SIZE(CPathIntersectionInfo, 0x1);
