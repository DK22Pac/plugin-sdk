/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "ioKeyboard.h"

uint8_t** rage::ioKeyboard::sm_keys = gpatternt(uint8_t*, "C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? 5E 83 C4 14", 2); // [2][256]
uint8_t* rage::ioKeyboard::sm_CurrentState = gpatternt(uint8_t, "C6 82 ? ? ? ? ? C6 84 11", 2); // [256]
int32_t& rage::ioKeyboard::sm_Active = *gpatternt(int32_t, "89 15 ? ? ? ? C6 80", 2);
