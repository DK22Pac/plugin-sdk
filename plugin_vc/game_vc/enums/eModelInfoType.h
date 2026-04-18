/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <cstdint>

enum eModelInfoType : int8_t {
    MODEL_INFO_INVALID = -1,
    MODEL_INFO_NONE,
    MODEL_INFO_SIMPLE,
    MODEL_INFO_TIME = 3,
    MODEL_INFO_WEAPON,
    MODEL_INFO_CLUMP,
    MODEL_INFO_VEHICLE,
    MODEL_INFO_PED
};
