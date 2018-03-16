/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
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
    PRIORITY_REQUEST = 0x10
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
    short m_nNextIndex; // ms_pArrayBase array index
    short m_nPrevIndex; // ms_pArrayBase array index
    short m_nNextIndexOnCd;
    unsigned char m_nFlags; // see eStreamingFlags
    unsigned char m_nImgId;
    unsigned int m_nCdPosn;
    unsigned int m_nCdSize;
    unsigned char m_nLoadState; // see eStreamingLoadState
private:
    unsigned char  _pad11[3];

public:
    void Init();
    void AddToList(CStreamingInfo* listStart);
    void RemoveFromList();
    CStreamingInfo* GetNext();
    CStreamingInfo* GetPrev();
    bool InList();
    unsigned int GetCdPosn();
    unsigned int GetCdSize();
    bool GetCdPosnAndSize(unsigned int& outPosn, unsigned int& outSize);
    void SetCdPosnAndSize(unsigned int posn, unsigned int size);
};

VALIDATE_SIZE(CStreamingInfo, 0x14);
