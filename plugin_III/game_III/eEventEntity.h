/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eEventEntity : unsigned int {
    EVENT_ENTITY_NONE = 0,
    EVENT_ENTITY_PED = 1,
    EVENT_ENTITY_VEHICLE = 2,
    EVENT_ENTITY_OBJECT = 3
};
