/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendSequence.h"
#include "CLink.h"

// A collection of sequences
class PLUGIN_API CAnimBlendHierarchy {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAnimBlendHierarchy)

public:
    char szName[24];
    CAnimBlendSequence *m_pAnimBlendSequence;
    short m_nNumSequences;
    short m_nCompressed;
    float m_fTotalLength;
    CLink<CAnimBlendHierarchy *> *linkPtr;

    SUPPORTED_10EN_11EN_STEAM void CalcTotalTime();
    SUPPORTED_10EN_11EN_STEAM void RemoveAnimSequences();
    SUPPORTED_10EN_11EN_STEAM void RemoveQuaternionFlips();
    SUPPORTED_10EN_11EN_STEAM void RemoveUncompressedData();
    SUPPORTED_10EN_11EN_STEAM void SetName(char const *name);
    SUPPORTED_10EN_11EN_STEAM void Shutdown();
    SUPPORTED_10EN_11EN_STEAM void Uncompress();
};

VALIDATE_SIZE(CAnimBlendHierarchy, 0x28);

#include "meta/meta.CAnimBlendHierarchy.h"
