/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"

class CStreamingInfo {
public:
    CStreamingInfo *m_pNextIndex;
    CStreamingInfo *m_pPrevIndex;
    CStreamingInfo *m_pCurrIndex; // ?
    unsigned int m_nPosn;
    unsigned int m_nSize;
        
    //funcs
    CStreamingInfo* AddToList(CStreamingInfo* listStart);
    bool GetCdPosnAndSize(unsigned int& posn, unsigned int& size);
    int GetCdSize();
    CStreamingInfo* RemoveFromList();
    void SetCdPosnAndSize(unsigned int posn, unsigned int size);
};

VALIDATE_SIZE(CStreamingInfo, 0x14);