/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPedPathNode.h"
#include "CEntity.h"
#include "CPtrList.h"

class PLUGIN_API CPedPath {
public:
    SUPPORTED_10EN_11EN_STEAM static void AddBlockade(CEntity *entity, CPedPathNode(*pathNodes)[40], CVector *posn);
    SUPPORTED_10EN_11EN_STEAM static void AddBlockadeSectorList(CPtrList *list, CPedPathNode(*pathNodes)[40], CVector *posn);
    SUPPORTED_10EN_11EN_STEAM static void AddNodeToList(CPedPathNode *pNode, short index, CPedPathNode *pList);
    SUPPORTED_10EN_11EN_STEAM static void AddNodeToPathList(CPedPathNode *pNode, short index, CPedPathNode *pNodeList);
    SUPPORTED_10EN_11EN_STEAM static bool CalcPedRoute(unsigned char pathType, CVector position, CVector destination, CVector *pointPoses, short *pointsFound, short maxPoints);
    SUPPORTED_10EN_11EN_STEAM static void RemoveNodeFromList(CPedPathNode *node);
};

#include "meta/meta.CPedPath.h"
