/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API ePhoneState : unsigned int {
    PHONE_FREE = 0,
    PHONE_REPORTING_CRIME = 1, //!< CCivilianPed::ProcessControl sets it but unused
    PHONE_2 = 2,
    PHONE_MESSAGE_REMOVED = 3,
    PHONE_ONETIME_MESSAGE_SET = 4,
    PHONE_REPEATED_MESSAGE_SET = 5,
    PHONE_REPEATED_MESSAGE_SHOWN_ONCE = 6,
    PHONE_ONETIME_MESSAGE_STARTED = 7,
    PHONE_REPEATED_MESSAGE_STARTED = 8,
    PHONE_9 = 9 //!< just rings, picking being handled via script. most of the time game uses this
};
