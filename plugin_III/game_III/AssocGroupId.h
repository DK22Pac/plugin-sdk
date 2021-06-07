/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API AssocGroupId : unsigned int {
    ASSOCGRP_STD = 0,
    ASSOCGRP_PLAYER = 1,
    ASSOCGRP_PLAYERROCKET = 2,
    ASSOCGRP_PLAYER1ARMED = 3,
    ASSOCGRP_PLAYER2ARMED = 4,
    ASSOCGRP_PLAYERBBBAT = 5,
    ASSOCGRP_SHUFFLE = 6,
    ASSOCGRP_OLD = 7,
    ASSOCGRP_GANG1 = 8,
    ASSOCGRP_GANG2 = 9,
    ASSOCGRP_FAT = 10,
    ASSOCGRP_OLDFAT = 11,
    ASSOCGRP_WOMAN = 12,
    ASSOCGRP_WOMANSHOP = 13,
    ASSOCGRP_BUSYWOMAN = 14,
    ASSOCGRP_SEXYWOMAN = 15,
    ASSOCGRP_OLDWOMAN = 16,
    ASSOCGRP_FATWOMAN = 17,
    ASSOCGRP_PANICCHUNKY = 18,
    ASSOCGRP_PLAYERBACK = 19,
    ASSOCGRP_PLAYERLEFT = 20,
    ASSOCGRP_PLAYERRIGHT = 21,
    ASSOCGRP_ROCKETBACK = 22,
    ASSOCGRP_ROCKETLEFT = 23,
    ASSOCGRP_ROCKETRIGHT = 24,
    NUM_ANIM_ASSOC_GROUPS = 25
};
