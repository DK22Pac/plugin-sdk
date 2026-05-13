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
VALIDATE_OFFSET(CPathNode, ptr, 0x0);
VALIDATE_OFFSET(CPathNode, ptr2, 0x4);
VALIDATE_OFFSET(CPathNode, m_vecPosn, 0x8);
VALIDATE_OFFSET(CPathNode, m_nSearchList, 0xE);
VALIDATE_OFFSET(CPathNode, m_nBaseLinkId, 0x10);
VALIDATE_OFFSET(CPathNode, m_nAreaId, 0x12);
VALIDATE_OFFSET(CPathNode, m_nNodeId, 0x14);
VALIDATE_OFFSET(CPathNode, m_nPathWidth, 0x16);
VALIDATE_OFFSET(CPathNode, m_nFloodFill, 0x17);
VALIDATE_SIZE(CPathNode, 0x1C);

#include "meta/meta.CPathNode.h"
