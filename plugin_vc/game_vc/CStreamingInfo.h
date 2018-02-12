/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"

enum eStreamingFlags {
    GAME_REQUEST = 0x1, // do not stream this model
    MISSION_REQUEST = 0x2, // same, but also marked as 'mission' model
    PRIORITY_REQUEST = 0x8,
    NOT_VISIBLE = 0x10 // not visible after loading?
};

enum eStreamingLoadState {
    LOADSTATE_NOT_LOADED = 0,
    LOADSTATE_LOADED = 1,
    LOADSTATE_LOADING1 = 2,
    LOADSTATE_LOADING2 = 3,
    LOADSTATE_LOADING3 = 4
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
