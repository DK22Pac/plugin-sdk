/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct tCamPathSplines {
	float *m_arr_PathData;//    FLOAT m_arr_PathData[MAXPATHLENGTH = 800];    
};

VALIDATE_SIZE(tCamPathSplines, 0x4);
