/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAtomicModelInfo.h"

class PLUGIN_API CLodAtomicModelInfo : public CAtomicModelInfo {
public:
    int16_t m_numChildren;
    int16_t m_numChildrenRendered;
};

VALIDATE_SIZE(CLodAtomicModelInfo, 0x24);