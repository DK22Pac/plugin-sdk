/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eEventType : unsigned int {
    EVENT_NULL = 0,
    EVENT_ASSAULT = 1,
    EVENT_RUN_REDLIGHT = 2,
    EVENT_ASSAULT_POLICE = 3,
    EVENT_GUNSHOT = 4,
    EVENT_INJURED_PED = 5,
    EVENT_DEAD_PED = 6,
    EVENT_FIRE = 7,
    EVENT_STEAL_CAR = 8,
    EVENT_HIT_AND_RUN = 9,
    EVENT_HIT_AND_RUN_COP = 10,
    EVENT_SHOOT_PED = 11,
    EVENT_SHOOT_COP = 12,
    EVENT_EXPLOSION = 13,
    EVENT_PED_SET_ON_FIRE = 14,
    EVENT_COP_SET_ON_FIRE = 15,
    EVENT_CAR_SET_ON_FIRE = 16,
    EVENT_ASSAULT_NASTYWEAPON = 17, //!< not sure
    EVENT_ICECREAM = 18,
    EVENT_ATM = 19,
    EVENT_SHOPSTALL = 20, //!< used on graffitis
    EVENT_LAST_EVENT = 21
};
