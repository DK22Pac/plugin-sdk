/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CColModel.h"
#include "CColPoint.h"
#include "CStoredCollPoly.h"
#include "eLevelName.h"
#include "CSector.h"
#include "CMatrix.h"

class CCollision {
public:
    static void Init();
    static void Shutdown();
    static void Update();
    static void LoadCollisionScreen(eLevelName levelName);
    static void LoadCollisionWhenINeedIt(bool arg0);
    static void SortOutCollisionAfterLoad();
    static void CalculateTrianglePlanes(CColModel* colModel);
    static bool ProcessSphereSphere(CColSphere const& sphere1, CColSphere const& sphere2, CColPoint& colPoint, float& maxTouchDistance);
    static bool TestSphereBox(CColSphere const& sphere, CColBox const& box);
    static bool ProcessSphereBox(CColSphere const& sphere, CColBox const& box, CColPoint& colPoint, float& maxTouchDistance);
    static bool TestSphereTriangle(CColSphere const& sphere, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane);
    static bool ProcessSphereTriangle(CColSphere const& sphere, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane, CColPoint& colPoint, float& maxTouchDistance);
    static bool TestLineSphere(CColLine const& colLine, CColSphere const& sphere);
    static float DistToLine(CVector const* lineStart, CVector const* lineEnd, CVector const* point);
    static bool ProcessLineSphere(CColLine const& colLine, CColSphere const& sphere, CColPoint& colPoint, float& depth);
    static bool TestLineBox(CColLine const& colLine, CColBox const& colBox);
    static bool TestVerticalLineBox(CColLine const& colLine, CColBox const& colBox);
    static bool ProcessLineBox(CColLine const& colLine, CColBox const& colBox, CColPoint& colPoint, float& maxTouchDistance);
    static bool TestLineTriangle(CColLine const& colLine, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane);
    static bool ProcessLineTriangle(CColLine const& colLine, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane, CColPoint& colPoint, float& maxTouchDistance);
    static bool TestLineOfSight(CColLine const& colLine, CMatrix const& transform, CColModel& colModel, bool doSeeThroughCheck);
    static bool ProcessLineOfSight(CColLine const& colLine, CMatrix const& transform, CColModel& colModel, CColPoint& colPoint, float& maxTouchDistance, bool doSeeThroughCheck);
    static bool ProcessVerticalLineTriangle(CColLine const& colLine, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane, CColPoint& colPoint, float& maxTouchDistance, CStoredCollPoly* colPoly);
    static bool ProcessVerticalLine(CColLine const& colLine, CMatrix const& transform, CColModel& colModel, CColPoint& colPoint, float& maxTouchDistance, bool doSeeThroughCheck, CStoredCollPoly* colPoly);
    static bool IsStoredPolyStillValidVerticalLine(CVector const& lineOrigin, float lineDist, CColPoint& colPoint, CStoredCollPoly* colPoly);
    static int ProcessColModels(CMatrix const& transform1, CColModel& colModel1, CMatrix const& transform2, CColModel& colModel2, CColPoint* colPoint1, CColPoint* colPoint2, float* maxTouchDistance);
};

eLevelName GetCollisionInSectorList(CPtrList& list);
eLevelName GetCollisionInSector(CSector& sector);
