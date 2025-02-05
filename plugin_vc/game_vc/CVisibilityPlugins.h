/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CVisibilityPlugins {
public:
    static void SetAtomicRenderCallback(RpAtomic* atomic, RpAtomicCallBackRender cb);
};
