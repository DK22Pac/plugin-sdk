/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eEventStatus : unsigned int {
    EVENT_STATUS_UNATTENDED = 0,
    EVENT_STATUS_INVESTIGATED = 1,
    EVENT_STATUS_CLEARED = 2
};
