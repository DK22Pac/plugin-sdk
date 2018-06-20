/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CVector.h"
#include "CColTriangle.h"
#include "CCoverPoint.h"
#include "CBuilding.h"
#include "CPtrListDoubleLink.h"

class CPed;

class PLUGIN_API CCover {
public:
    SUPPORTED_10US static unsigned int &m_NumPoints;
    SUPPORTED_10US static CCoverPoint(&m_aPoints)[100]; // static CCoverPoint m_aPoints[100]
    SUPPORTED_10US static CPtrListDoubleLink &m_ListOfProcessedBuildings;

    SUPPORTED_10US static void AddCoverPoint(int maxPeds, CEntity *coverEntity, CVector *position, char coverType, unsigned char direction);
    SUPPORTED_10US static float CalculateHorizontalSize(CColTriangle *triangle, CVector *vertPositions);
    SUPPORTED_10US static char DoLineCheckWithinObject(CColTriangle *triangle, int a2, CVector *a3, CVector *a4, CVector a5, CVector a6);
    SUPPORTED_10US static bool DoesCoverPointStillProvideCover(CCoverPoint *point, CVector position);
    SUPPORTED_10US static void Find2HighestPoints(CColTriangle *triangle, CVector *vertPositions, int &outPoint1, int &outPoint2);
    SUPPORTED_10US static CCoverPoint *FindAndReserveCoverPoint(CPed *ped, CVector &position, bool a3);
    SUPPORTED_10US static bool FindCoordinatesCoverPoint(CCoverPoint *point, CPed *ped, CVector &position, CVector &outCoordinates);
    SUPPORTED_10US static void FindCoverPointsForThisBuilding(CBuilding *building);
    SUPPORTED_10US static unsigned char FindDirFromVector(float x, float y);
    SUPPORTED_10US static CVector FindVectorFromDir(unsigned char direction);
    SUPPORTED_10US static CVector FindVectorFromFirstToMissingVertex(CColTriangle *triangle, int *a3, CVector *vertPositions);
    SUPPORTED_10US static void Init();
    SUPPORTED_10US static void RemoveCoverPointIfEntityLost(CCoverPoint *point);
    SUPPORTED_10US static void RemoveCoverPointsForThisEntity(CEntity *entity);
    SUPPORTED_10US static bool ShouldThisBuildingHaveItsCoverPointsCreated(CBuilding *building);
    SUPPORTED_10US static void Update();
};

#include "meta/meta.CCover.h"
