/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMouseControllerState.h"

#pragma pack(push, 1)
class PLUGIN_API CMousePointerStateHelper {
public:
    bool m_bInvertHorizontally;
    bool m_bInvertVertically;

    SUPPORTED_10EN_11EN_STEAM CMouseControllerState GetMouseSetUp();
};
#pragma pack(pop)

SUPPORTED_10EN_11EN_STEAM extern CMousePointerStateHelper &MousePointerStateHelper;

VALIDATE_SIZE(CMousePointerStateHelper, 0x2);

#include "meta/meta.CMousePointerStateHelper.h"
