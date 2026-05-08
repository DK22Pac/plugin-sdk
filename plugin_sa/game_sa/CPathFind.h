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

	void DoPathSearch(unsigned char pathType, CVector origin, CNodeAddress originAddr, 
		CVector target, CNodeAddress *pResultNodes, short *pNodesCount, int maxNodesToFind, float *pDistance, 
		float maxSearchDistance, CNodeAddress *targetAddr, float maxUnkLimit, bool oneSideOnly, 
		CNodeAddress forbiddenNodeAddr, bool includeNodesWithoutLinks, bool waterPath);

	bool IsWaterNodeNearby(CVector position, float radius);

	void SetPathsNeededAtPosition(const CVector& pos);
	void UpdateStreaming(bool bForceStreaming);

	CPathNode *GetPathNode(CNodeAddress address);

	bool Load();
	bool Save();
};
VALIDATE_OFFSET(CPathFind, info, 0x0);
VALIDATE_OFFSET(CPathFind, m_apNodesSearchLists, 0x4);
VALIDATE_OFFSET(CPathFind, m_pPathNodes, 0x804);
VALIDATE_OFFSET(CPathFind, m_pNaviNodes, 0x924);
VALIDATE_OFFSET(CPathFind, m_pNodeLinks, 0xA44);
VALIDATE_OFFSET(CPathFind, m_pLinkLengths, 0xB64);
VALIDATE_OFFSET(CPathFind, m_pPathIntersections, 0xC84);
VALIDATE_OFFSET(CPathFind, m_pNaviLinks, 0xDA4);
VALIDATE_OFFSET(CPathFind, field_EA4, 0xEA4);
VALIDATE_OFFSET(CPathFind, m_dwNumNodes, 0xFA4);
VALIDATE_OFFSET(CPathFind, m_dwNumVehicleNodes, 0x10C4);
VALIDATE_OFFSET(CPathFind, m_dwNumPedNodes, 0x11E4);
VALIDATE_OFFSET(CPathFind, m_dwNumCarPathLinks, 0x1304);
VALIDATE_OFFSET(CPathFind, m_dwNumAddresses, 0x1424);
VALIDATE_OFFSET(CPathFind, field_1544, 0x1544);
VALIDATE_OFFSET(CPathFind, m_dwTotalNumNodesInSearchList, 0x3544);
VALIDATE_OFFSET(CPathFind, char3548, 0x3548);
VALIDATE_OFFSET(CPathFind, m_dwNumForbiddenAreas, 0x3568);
VALIDATE_OFFSET(CPathFind, m_aForbiddenAreas, 0x356C);
VALIDATE_OFFSET(CPathFind, m_bForbiddenForScriptedCarsEnabled, 0x3C6C);
VALIDATE_OFFSET(CPathFind, _padding, 0x3C6D);
VALIDATE_OFFSET(CPathFind, m_fForbiddenForScrCarsX1, 0x3C70);
VALIDATE_OFFSET(CPathFind, m_fForbiddenForScrCarsX2, 0x3C74);
VALIDATE_OFFSET(CPathFind, m_fForbiddenForScrCarsY1, 0x3C78);
VALIDATE_OFFSET(CPathFind, m_fForbiddenForScrCarsY2, 0x3C7C);
VALIDATE_SIZE(CPathFind, 0x3C80);

extern PLUGIN_API CPathFind& ThePaths;
