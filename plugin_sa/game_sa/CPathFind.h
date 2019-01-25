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
#include "CNodeAddress.h"
#include "CForbiddenArea.h"
#include "CCarPathLinkAddress.h"
#include "CPathIntersectionInfo.h"
#include "CCarPathLink.h"
#include "CPathNode.h"

#define NUM_PATH_MAP_AREAS 64
#define NUM_PATH_INTERIOR_AREAS 8

class PLUGIN_API CPathFind
{
public:
	CNodeAddress info;
	CPathNode *m_apNodesSearchLists[512];
	CPathNode *m_pPathNodes[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	CCarPathLink *m_pNaviNodes[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	CNodeAddress *m_pNodeLinks[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	unsigned char *m_pLinkLengths[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	CPathIntersectionInfo *m_pPathIntersections[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	CCarPathLinkAddress *m_pNaviLinks[NUM_PATH_MAP_AREAS];
	void *field_EA4[NUM_PATH_MAP_AREAS];
	unsigned int m_dwNumNodes[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	unsigned int m_dwNumVehicleNodes[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	unsigned int m_dwNumPedNodes[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	unsigned int m_dwNumCarPathLinks[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	unsigned int m_dwNumAddresses[NUM_PATH_MAP_AREAS + NUM_PATH_INTERIOR_AREAS];
	int field_1544[2048];
	unsigned int m_dwTotalNumNodesInSearchList;
	CNodeAddress char3548[8];
	unsigned int m_dwNumForbiddenAreas;
	CForbiddenArea m_aForbiddenAreas[64];
	bool m_bForbiddenForScriptedCarsEnabled;
	char _padding[3];
	float m_fForbiddenForScrCarsX1;
	float m_fForbiddenForScrCarsX2;
	float m_fForbiddenForScrCarsY1;
	float m_fForbiddenForScrCarsY2;

	//

	void DoPathSearch(unsigned char pathType, CVector origin, CNodeAddress originAddr, 
		CVector target, CNodeAddress *pResultNodes, short *pNodesCount, int maxNodesToFind, float *pDistance, 
		float maxSearchDistance, CNodeAddress *targetAddr, float maxUnkLimit, bool oneSideOnly, 
		CNodeAddress forbiddenNodeAddr, bool includeNodesWithoutLinks, bool waterPath);

	CPathNode *GetPathNode(CNodeAddress address);
};

VALIDATE_SIZE(CPathFind, 0x3C80);

extern PLUGIN_API CPathFind& ThePaths;
