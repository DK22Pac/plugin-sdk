/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CPlayerInfo.h"

class CWorld {
public:
    // Player data array for 1 player.
    static CPlayerInfo *Players;

    static unsigned char &PlayerInFocus;
};

extern unsigned int MAX_PLAYERS; // 1