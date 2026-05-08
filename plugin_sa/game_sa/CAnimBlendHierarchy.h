/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendSequence.h"

class CAnimBlendHierarchy {
public:
    unsigned int m_hashKey;
    CAnimBlendSequence *m_pSequences;
    unsigned short m_nSeqCount;
    bool m_bRunningCompressed;
    char field_B;
    int m_nAnimBlockId;
    float m_fTotalTime;
    int field_14;

	//funcs

	void* AllocSequenceBlock(bool arg1);
	CAnimBlendHierarchy();
	void CalcTotalTime();
	void CalcTotalTimeCompressed();
	void RemoveAnimSequences();
	void RemoveQuaternionFlips();
	void RemoveUncompressedData();
	void SetName(char const* string);
	void Shutdown();
	void Uncompress();

};
VALIDATE_OFFSET(CAnimBlendHierarchy, m_hashKey, 0x0);
VALIDATE_OFFSET(CAnimBlendHierarchy, m_pSequences, 0x4);
VALIDATE_OFFSET(CAnimBlendHierarchy, m_nSeqCount, 0x8);
VALIDATE_OFFSET(CAnimBlendHierarchy, m_bRunningCompressed, 0xA);
VALIDATE_OFFSET(CAnimBlendHierarchy, field_B, 0xB);
VALIDATE_OFFSET(CAnimBlendHierarchy, m_nAnimBlockId, 0xC);
VALIDATE_OFFSET(CAnimBlendHierarchy, m_fTotalTime, 0x10);
VALIDATE_OFFSET(CAnimBlendHierarchy, field_14, 0x14);
VALIDATE_SIZE(CAnimBlendHierarchy, 0x18);