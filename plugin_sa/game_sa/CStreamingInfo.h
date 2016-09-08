/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eStreamingFlags {
    GAME_REQUIRED = 0x2,
    MISSION_REQUIRED = 0x4,
    KEEP_IN_MEMORY = 0x8,
    PRIORITY_REQUEST = 0x10
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
    short m_next; // ms_pArrayBase array index
    short m_prev; // ms_pArrayBase array index
    short m_nextOnCd;
    unsigned char m_flags; // see eStreamingFlags
    unsigned char m_imgId;
    unsigned int m_blockOffset;
    unsigned int m_blockCount;
    unsigned char m_loadState; // see eStreamingLoadState
    unsigned char  _pad[3];

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