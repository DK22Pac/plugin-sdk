/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CCarPathLinkAddress {
public:
    short m_wCarPathLinkId : 10;
    short m_wAreaId : 6;
};

VALIDATE_SIZE(CCarPathLinkAddress, 0x2);


class CPathFind {
public:

};

extern CPathFind& ThePaths;