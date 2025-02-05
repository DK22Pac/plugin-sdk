/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum eStreamingFlags {
    GAME_REQUIRED = 0x2,
    MISSION_REQUIRED = 0x4,
    KEEP_IN_MEMORY = 0x8,
    PRIORITY_REQUEST = 0x10,
    SCM_COMMAND_FLAG = 0x16
};

enum eStreamingLoadState {
    LOADSTATE_NOT_LOADED = 0,
    LOADSTATE_LOADED = 1,
    LOADSTATE_Requested = 2,
    LOADSTATE_Channeled = 3,
    LOADSTATE_Finishing = 4
};

class CStreamingInfo {
public:
    CStreamingInfo *m_pNext;
    CStreamingInfo *m_pPrev;
    unsigned char m_nLoadState; // see eStreamingLoadState
    unsigned char m_nFlags; // see eStreamingFlags
    short m_nModelIndex;
    unsigned int m_nCdPosn;
    unsigned int m_nCdSize;
};

VALIDATE_SIZE(CStreamingInfo, 0x14);
