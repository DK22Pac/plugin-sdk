/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

class PLUGIN_API CPtrNode {
public:
    void *pItem;
    CPtrNode *pNext;

    inline CPtrNode(void *item) : pItem(item) {}
};

VALIDATE_SIZE(CPtrNode, 8);