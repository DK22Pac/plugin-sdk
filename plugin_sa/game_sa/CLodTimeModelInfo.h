/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CLodAtomicModelInfo.h"
#include "CTimeModelInfo.h"

class PLUGIN_API CLodTimeModelInfo : public CLodAtomicModelInfo {
public:
    tTimeInfo m_lodTimeInfo;
};

VALIDATE_SIZE(CLodTimeModelInfo, 0x28);