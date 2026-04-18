/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API ePhoneState : unsigned int {
    PHONE_INACTIVE = 0,
    PHONE_1 = 0x1,
    PHONE_2 = 0x2,
    PHONE_NO_MESSAGE = 0x3,
    PHONE_MESSAGE_ONCE = 0x4,
    PHONE_MESSAGE_REPEAT = 0x5,
    PHONE_6 = 0x6,
    PHONE_MESSAGE_SHOWN_ONCE = 0x7,
    PHONE_MESSAGE_IS_SHOWN = 0x8,
    PHONE_9 = 0x9
};
