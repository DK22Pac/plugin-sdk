/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CAnimBlendSequence {
public:
    unsigned int m_nHash;
    unsigned short m_nFlags;
    unsigned short m_nFrameCount;
    void *m_pFrames;

    //funcs
    CAnimBlendSequence();
    void CompressKeyframes(unsigned char* arg1);
    int GetDataSize(bool arg1);
    bool MoveMemorY();
    int RemoveQuaternionFlips();
    void RemoveUncompressedData(unsigned char* arg1);
    void SetBoneTag(int hash);
    void SetName(char const* string);
    void SetNumFrames(int count, bool arg2, bool arg3, unsigned char* arg4);
    void Uncompress(unsigned char* arg1);
    ~CAnimBlendSequence();

};
VALIDATE_OFFSET(CAnimBlendSequence, m_nHash, 0x0);
VALIDATE_OFFSET(CAnimBlendSequence, m_nFlags, 0x4);
VALIDATE_OFFSET(CAnimBlendSequence, m_nFrameCount, 0x6);
VALIDATE_OFFSET(CAnimBlendSequence, m_pFrames, 0x8);
VALIDATE_SIZE(CAnimBlendSequence, 0xC);
