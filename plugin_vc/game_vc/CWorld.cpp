/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "game_vc\CWorld.h"

unsigned int MAX_PLAYERS = 1;

CPlayerInfo *CWorld::Players = (CPlayerInfo *)0x94AD28;

unsigned char &CWorld::PlayerInFocus = *(unsigned char *)0xA10AFB;