/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"

class PLUGIN_API C2deffectsModelInfo : public CClumpModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(C2deffectsModelInfo)
public:
};

VALIDATE_SIZE(C2deffectsModelInfo, 0x34);

#include "meta/meta.C2deffectsModelInfo.h"
