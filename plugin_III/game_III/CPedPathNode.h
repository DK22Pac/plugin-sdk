/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CPedPathNode {
public:
    bool m_bBlockade;
    unsigned char nodeIdX;
    unsigned char nodeIdY;
    short id;
    CPedPathNode *prev;
    CPedPathNode *next;
};

VALIDATE_SIZE(CPedPathNode, 0x10);
