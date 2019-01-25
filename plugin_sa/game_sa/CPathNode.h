/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector.h"
#include "CVector.h"

class PLUGIN_API CPathNode {
public:
    void *ptr;
    void *ptr2;
    CompressedVector m_vecPosn;
    unsigned short m_nSearchList; //!< search list id
    short m_nBaseLinkId;
    short m_nAreaId;
    short m_nNodeId;
    unsigned char m_nPathWidth;
    unsigned char m_nFloodFill;
    
    unsigned char m_nNumLinks : 4;
    unsigned char m_nTrafficLevel : 2;
    unsigned char m_bRoadBlocks : 1;
    unsigned char m_bWaterNode : 1;

    unsigned char m_bEmergencyVehiclesOnly : 1;
    unsigned char unk1 : 1;   //!< not used in paths data files
    unsigned char m_bDontWander : 1;
    unsigned char unk2 : 1;   //!< not used in paths data files
    unsigned char m_bNotHighway : 1;
    unsigned char m_bHighway : 1;
    unsigned char unk3 : 1;	 //!< not used in paths data files
    unsigned char unk4 : 1;	 //!< not used in paths data files

    unsigned char m_nSpawnProbability : 4;
    unsigned char m_nBehaviourType : 4; //!< 1 - roadblock, 2 - parking node

    SUPPORTED_10US CVector GetNodeCoors();
};

VALIDATE_SIZE(CPathNode, 0x1C);

#include "meta/meta.CPathNode.h"
