/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"
#include "CPathNode.h"
#include "CTreadable.h"
#include "CVector.h"
#include "CTempNode.h"
#include "CMatrix.h"

class CVehicle;

union PLUGIN_API CConnectionFlags {
    unsigned char flags;
    struct {
        unsigned char bCrossesRoad : 1;
        unsigned char bTrafficLight : 1;
    };
};

enum PLUGIN_API ePathType {
    PATH_CAR = 0,
    PATH_PED = 1
};

struct PLUGIN_API CTempDetachedNode {
    unsigned char foo[20];
};

struct PLUGIN_API CPathInfoNode {
    short x;
    short y;
    short z;
    char m_nType;
    char m_nNext;
    char m_nNumLeftLanes;
    char m_nNumRightLanes;
    unsigned char crossing : 1;
};

struct PLUGIN_API CPathInfoForObject {
    CPathInfoNode m_aNodes[12];
};

class PLUGIN_API CCarPathLink {
public:
    CVector2D m_vec2dPos;
    CVector2D m_vec2dDir;
    short m_nPathNodeIndex;
    char m_nNumLeftLanes;
    char m_nNumRightLanes;
    unsigned char m_nTrafficLightType;
    struct {
        unsigned char bBridgeLights : 1;
    } m_nFlags;
};

class PLUGIN_API CPathFind {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPathFind)

public:
    CPathNode m_aPathNodes[4930];
    CCarPathLink m_aCarPathLinks[2076];
    CTreadable *m_apMapObjects[1250];
    unsigned char m_anMapObjectFlags[1250];
    short m_anConnections[10260];
    short m_anDistances[10260];
    CConnectionFlags m_anConnectionFlags[10260];
    short m_anCarPathConnections[10260];
    int m_nNumPathNodes;
    int m_nNumCarPathNodes;
    int m_nNumPedPathNodes;
    short m_nNumMapObjects;
    short m_nNumConnections;
    int m_nNumCarPathLinks;
    int field_45BEC;
    unsigned char m_nNumGroups[2];
    CPathNode m_aSearchNodes[512];

    SUPPORTED_10EN_11EN_STEAM static CVector &CoorsXFormed;

    SUPPORTED_10EN_11EN_STEAM void AddNodeToList(CPathNode *node, int listId);
    SUPPORTED_10EN_11EN_STEAM void AllocatePathFindInfoMem(short numPathGroups);
    SUPPORTED_10EN_11EN_STEAM void CalcNodeCoors(short x, short y, short z, int id, CVector *out);
    SUPPORTED_10EN_11EN_STEAM float CalcRoadDensity(float x, float y);
    SUPPORTED_10EN_11EN_STEAM void CountFloodFillGroups(unsigned char type);
    SUPPORTED_10EN_11EN_STEAM void DoPathSearch(unsigned char type, CVector start, int startNodeId, CVector target, CPathNode **nodes, short *numNodes, short maxNumNodes, CVehicle *vehicle, float *dist, float distLimit, int forcedTargetNode);
    SUPPORTED_10EN_11EN_STEAM void FindNextNodeWandering(unsigned char type, CVector coors, CPathNode **lastNode, CPathNode **nextNode, unsigned char curDir, unsigned char *nextDir);
    SUPPORTED_10EN_11EN_STEAM int FindNodeClosestToCoors(CVector coors, unsigned char type, float distLimit, bool ignoreDisabled, bool ignoreBetweenLevels);
    SUPPORTED_10EN_11EN_STEAM int FindNodeClosestToCoorsFavourDirection(CVector coors, unsigned char type, float dirX, float dirY);
    SUPPORTED_10EN_11EN_STEAM float FindNodeOrientationForCarPlacement(unsigned int nodeId);
    SUPPORTED_10EN_11EN_STEAM float FindNodeOrientationForCarPlacementFacingDestination(unsigned int nodeId, float x, float y, bool towards);
    SUPPORTED_10EN_11EN_STEAM CTreadable *FindRoadObjectClosestToCoors(CVector coors, unsigned char type);
    SUPPORTED_10EN_11EN_STEAM bool GeneratePedCreationCoors(float x, float y, float minDist, float maxDist, float minDistOffScreen, float maxDistOffScreen, CVector *posn, int *pNode1, int *pNode2, float *positionBetweenNodes, CMatrix *camMatrix);
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void Load(unsigned char *buf, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM void MarkRoadsBetweenLevelsInArea(float x1, float x2, float y1, float y2, float z1, float z2);
    SUPPORTED_10EN_11EN_STEAM void MarkRoadsBetweenLevelsNodeAndNeighbours(int nodeId);
    SUPPORTED_10EN_11EN_STEAM bool NewGenerateCarCreationCoors(float x, float y, float dirX, float dirY, float spawnDist, float angleLimit, bool forward, CVector *posn, int *pNode1, int *pNode2, float *positionBetweenNodes, bool ignoreDisabled);
    SUPPORTED_10EN_11EN_STEAM void PedMarkRoadsBetweenLevelsInArea(float x1, float x2, float y1, float y2, float z1, float z2);
    SUPPORTED_10EN_11EN_STEAM void PreparePathData();
    SUPPORTED_10EN_11EN_STEAM void PreparePathDataForType(unsigned char type, CTempNode *tempNodes, CPathInfoForObject *info, float maxDist, CTempDetachedNode *detachedNodes, int numDetached);
    SUPPORTED_10EN_11EN_STEAM void RegisterMapObject(CTreadable *mapObject);
    SUPPORTED_10EN_11EN_STEAM void RemoveBadStartNode(CVector pos, CPathNode **nodes, short *nodeCount);
    SUPPORTED_10EN_11EN_STEAM void RemoveNodeFromList(CPathNode *node);
    SUPPORTED_10EN_11EN_STEAM void Save(unsigned char *buf, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM void SetLinksBridgeLights(float x1, float y1, float x2, float y2, bool enable);
    SUPPORTED_10EN_11EN_STEAM void StoreNodeInfoCar(short id, short node, char type, char next, short x, short y, short z, short width, char numLeft, char numRight);
    SUPPORTED_10EN_11EN_STEAM void StoreNodeInfoPed(short id, short node, char type, char next, short x, short y, short z, short width, bool crossing);
    SUPPORTED_10EN_11EN_STEAM void SwitchOffNodeAndNeighbours(int nodeId, bool disable);
    SUPPORTED_10EN_11EN_STEAM void SwitchPedRoadsOffInArea(float x1, float x2, float y1, float y2, float z1, float z2, bool disable);
    SUPPORTED_10EN_11EN_STEAM void SwitchRoadsInAngledArea(float x1, float y1, float z1, float x2, float y2, float z2, float length, unsigned char type, unsigned char enable);
    SUPPORTED_10EN_11EN_STEAM void SwitchRoadsOffInArea(float x1, float x2, float y1, float y2, float z1, float z2, bool disable);
    SUPPORTED_10EN_11EN_STEAM bool TestCoorsCloseness(CVector target, unsigned char type, CVector start);
    SUPPORTED_10EN_11EN_STEAM bool TestCrossesRoad(CPathNode *node1, CPathNode *node2);
    SUPPORTED_10EN_11EN_STEAM bool TestForPedTrafficLight(CPathNode *node1, CPathNode *node2);

    SUPPORTED_10EN_11EN_STEAM static bool LoadPathFindData();
};

SUPPORTED_10EN_11EN_STEAM extern int &TempListLength;
SUPPORTED_10EN_11EN_STEAM extern CPathNode *(&apNodesToBeCleared)[4995]; // CPathNode *apNodesToBeCleared[4995]
SUPPORTED_10EN_11EN_STEAM extern int &gMaxEntries;
SUPPORTED_10EN_11EN_STEAM extern CPathNode *(&pNodeList)[32]; // CPathNode *pNodeList[32]
SUPPORTED_10EN_11EN_STEAM extern CTempDetachedNode *&DetachedNodesCars;
SUPPORTED_10EN_11EN_STEAM extern CTempDetachedNode *&DetachedNodesPeds;
SUPPORTED_10EN_11EN_STEAM extern CPathInfoForObject *&InfoForTileCars;
SUPPORTED_10EN_11EN_STEAM extern CPathInfoForObject *&InfoForTilePeds;
SUPPORTED_10EN_11EN_STEAM extern CPathFind &ThePaths;

VALIDATE_SIZE(CTempDetachedNode, 0x14);
VALIDATE_SIZE(CPathInfoNode, 0xC);
VALIDATE_SIZE(CPathInfoForObject, 0x90);
VALIDATE_SIZE(CCarPathLink, 0x18);
VALIDATE_SIZE(CPathFind, 0x49BF4);

#include "meta/meta.CPathFind.h"
