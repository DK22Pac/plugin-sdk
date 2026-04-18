/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eAudioType : unsigned int {
    AUDIOTYPE_PHYSICAL = 0,
    AUDIOTYPE_EXPLOSION = 1,
    AUDIOTYPE_FIRE = 2,
    AUDIOTYPE_WEATHER = 3,
    AUDIOTYPE_CRANE = 4,
    AUDIOTYPE_SCRIPTOBJECT = 5,
    AUDIOTYPE_BRIDGE = 6,
    AUDIOTYPE_COLLISION = 7,
    AUDIOTYPE_FRONTEND = 8,
    AUDIOTYPE_PROJECTILE = 9,
    AUDIOTYPE_GARAGE = 10,
    AUDIOTYPE_FIREHYDRANT = 11,
    AUDIOTYPE_WATERCANNON = 12,
    AUDIOTYPE_POLICERADIO = 13,
    TOTAL_AUDIO_TYPES = 14
};
