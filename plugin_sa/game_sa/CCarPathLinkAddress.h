/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CCarPathLinkAddress {
public:
    short m_nCarPathLinkId : 10;
    short m_nAreaId : 6;
};

VALIDATE_SIZE(CCarPathLinkAddress, 0x2);
