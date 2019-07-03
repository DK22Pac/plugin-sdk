/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCollision.h"

// Converted from cdecl eLevelName GetCollisionInSectorList(CPtrList &list) 0x40B4E0
eLevelName GetCollisionInSectorList(CPtrList& list) {
    eLevelName result;
    plugin::CallAndReturn<eLevelName, 0x40B4E0, eLevelName*, CPtrList&>(&result, list);
    return result;
}

// Converted from cdecl eLevelName GetCollisionInSector(CSector &sector) 0x40B520
eLevelName GetCollisionInSector(CSector& sector) {
    eLevelName result;
    plugin::CallAndReturn<eLevelName, 0x40B520, eLevelName*, CSector&>(&result, sector);
    return result;
}

// Converted from cdecl void CCollision::Init(void) 0x40B380
void CCollision::Init() {
    plugin::Call<0x40B380>();
}

// Converted from cdecl void CCollision::Shutdown(void) 0x40B3A0
void CCollision::Shutdown() {
    plugin::Call<0x40B3A0>();
}

// Converted from cdecl void CCollision::Update(void) 0x40B3B0
void CCollision::Update() {
    plugin::Call<0x40B3B0>();
}

// Converted from cdecl void CCollision::LoadCollisionScreen(eLevelName levelName) 0x40B580
void CCollision::LoadCollisionScreen(eLevelName levelName) {
    plugin::Call<0x40B580, eLevelName>(levelName);
}

// Converted from cdecl void CCollision::LoadCollisionWhenINeedIt(bool) 0x40B5B0 
void CCollision::LoadCollisionWhenINeedIt(bool arg0) {
    plugin::Call<0x40B5B0, bool>(arg0);
}

// Converted from cdecl void CCollision::SortOutCollisionAfterLoad(void) 0x40B900 
void CCollision::SortOutCollisionAfterLoad() {
    plugin::Call<0x40B900>();
}

// Converted from cdecl void CCollision::CalculateTrianglePlanes(CColModel *colModel) 0x40B960
void CCollision::CalculateTrianglePlanes(CColModel* colModel) {
    plugin::Call<0x40B960, CColModel*>(colModel);
}

// Converted from cdecl bool CCollision::ProcessSphereSphere(CColSphere const& sphere1,CColSphere const& sphere2,CColPoint &colPoint,float &maxTouchDistance) 0x40B9F0
bool CCollision::ProcessSphereSphere(CColSphere const& sphere1, CColSphere const& sphere2, CColPoint& colPoint, float& maxTouchDistance) {
    return plugin::CallAndReturn<bool, 0x40B9F0, CColSphere const&, CColSphere const&, CColPoint&, float&>(sphere1, sphere2, colPoint, maxTouchDistance);
}

// Converted from cdecl bool CCollision::TestSphereBox(CColSphere const& sphere,CColBox const& box) 0x40BB70
bool CCollision::TestSphereBox(CColSphere const& sphere, CColBox const& box) {
    return plugin::CallAndReturn<bool, 0x40BB70, CColSphere const&, CColBox const&>(sphere, box);
}

// Converted from cdecl bool CCollision::ProcessSphereBox(CColSphere const& sphere,CColBox const& box,CColPoint &colPoint,float &maxTouchDistance) 0x40BC00
bool CCollision::ProcessSphereBox(CColSphere const& sphere, CColBox const& box, CColPoint& colPoint, float& maxTouchDistance) {
    return plugin::CallAndReturn<bool, 0x40BC00, CColSphere const&, CColBox const&, CColPoint&, float&>(sphere, box, colPoint, maxTouchDistance);
}

// Converted from cdecl bool CCollision::TestSphereTriangle(CColSphere const& sphere,CompressedVector const* verts,CColTriangle const& tri,CColTrianglePlane const& triPlane) 0x40C580
bool CCollision::TestSphereTriangle(CColSphere const& sphere, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane) {
    return plugin::CallAndReturn<bool, 0x40C580, CColSphere const&, CompressedVector const*, CColTriangle const&, CColTrianglePlane const&>(sphere, verts, tri, triPlane);
}

// Converted from cdecl bool CCollision::ProcessSphereTriangle(CColSphere const& sphere,CompressedVector const* verts,CColTriangle const& tri,CColTrianglePlane const& triPlane,CColPoint &colPoint,float &maxTouchDistance) 0x40CE30
bool CCollision::ProcessSphereTriangle(CColSphere const& sphere, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane, CColPoint& colPoint, float& maxTouchDistance) {
    return plugin::CallAndReturn<bool, 0x40CE30, CColSphere const&, CompressedVector const*, CColTriangle const&, CColTrianglePlane const&, CColPoint&, float&>(sphere, verts, tri, triPlane, colPoint, maxTouchDistance);
}

// Converted from cdecl bool CCollision::TestLineSphere(CColLine const& colLine,CColSphere const& sphere) 0x40DAA0
bool CCollision::TestLineSphere(CColLine const& colLine, CColSphere const& sphere) {
    return plugin::CallAndReturn<bool, 0x40DAA0, CColLine const&, CColSphere const&>(colLine, sphere);
}

// Converted from cdecl float CCollision::DistToLine(CVector const* lineStart,CVector const* lineEnd,CVector const* point) 0x40DC70
float CCollision::DistToLine(CVector const* lineStart, CVector const* lineEnd, CVector const* point) {
    return plugin::CallAndReturn<float, 0x40DC70, CVector const*, CVector const*, CVector const*>(lineStart, lineEnd, point);
}

// Converted from cdecl bool CCollision::ProcessLineSphere(CColLine const& colLine,CColSphere const& sphere,CColPoint &colPoint,float &depth) 0x40DE80
bool CCollision::ProcessLineSphere(CColLine const& colLine, CColSphere const& sphere, CColPoint& colPoint, float& depth) {
    return plugin::CallAndReturn<bool, 0x40DE80, CColLine const&, CColSphere const&, CColPoint&, float&>(colLine, sphere, colPoint, depth);
}

// Converted from cdecl bool CCollision::TestLineBox(CColLine const& colLine,CColBox const& colBox) 0x40E130
bool CCollision::TestLineBox(CColLine const& colLine, CColBox const& colBox) {
    return plugin::CallAndReturn<bool, 0x40E130, CColLine const&, CColBox const&>(colLine, colBox);
}

// Converted from cdecl bool CCollision::TestVerticalLineBox(CColLine const& colLine,CColBox const& colBox) 0x40E5C0
bool CCollision::TestVerticalLineBox(CColLine const& colLine, CColBox const& colBox) {
    return plugin::CallAndReturn<bool, 0x40E5C0, CColLine const&, CColBox const&>(colLine, colBox);
}

// Converted from cdecl bool CCollision::ProcessLineBox(CColLine const& colLine,CColBox const& colBox,CColPoint &colPoint,float &maxTouchDistance) 0x40E670
bool CCollision::ProcessLineBox(CColLine const& colLine, CColBox const& colBox, CColPoint& colPoint, float& maxTouchDistance) {
    return plugin::CallAndReturn<bool, 0x40E670, CColLine const&, CColBox const&, CColPoint&, float&>(colLine, colBox, colPoint, maxTouchDistance);
}

// Converted from cdecl bool CCollision::TestLineTriangle(CColLine const& colLine,CompressedVector const* verts,CColTriangle const& tri,CColTrianglePlane const& triPlane) 0x40EC10
bool CCollision::TestLineTriangle(CColLine const& colLine, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane) {
    return plugin::CallAndReturn<bool, 0x40EC10, CColLine const&, CompressedVector const*, CColTriangle const&, CColTrianglePlane const&>(colLine, verts, tri, triPlane);
}

// Converted from cdecl bool CCollision::ProcessLineTriangle(CColLine const& colLine,CompressedVector const* verts,CColTriangle const& tri,CColTrianglePlane const& triPlane,CColPoint &colPoint,float &maxTouchDistance) 0x40F140
bool CCollision::ProcessLineTriangle(CColLine const& colLine, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane, CColPoint& colPoint, float& maxTouchDistance) {
    return plugin::CallAndReturn<bool, 0x40F140, CColLine const&, CompressedVector const*, CColTriangle const&, CColTrianglePlane const&, CColPoint&, float&>(colLine, verts, tri, triPlane, colPoint, maxTouchDistance);
}

// Converted from cdecl bool CCollision::TestLineOfSight(CColLine const& colLine,CMatrix const& transform,CColModel &colModel,bool doSeeThroughCheck) 0x40F720
bool CCollision::TestLineOfSight(CColLine const& colLine, CMatrix const& transform, CColModel& colModel, bool doSeeThroughCheck) {
    return plugin::CallAndReturn<bool, 0x40F720, CColLine const&, CMatrix const&, CColModel&, bool>(colLine, transform, colModel, doSeeThroughCheck);
}

// Converted from cdecl bool CCollision::ProcessLineOfSight(CColLine const& colLine,CMatrix const& transform,CColModel &colModel,CColPoint &colPoint,float &maxTouchDistance,bool doSeeThroughCheck) 0x40F910
bool CCollision::ProcessLineOfSight(CColLine const& colLine, CMatrix const& transform, CColModel& colModel, CColPoint& colPoint, float& maxTouchDistance, bool doSeeThroughCheck) {
    return plugin::CallAndReturn<bool, 0x40F910, CColLine const&, CMatrix const&, CColModel&, CColPoint&, float&, bool>(colLine, transform, colModel, colPoint, maxTouchDistance, doSeeThroughCheck);
}

// Converted from cdecl bool CCollision::ProcessVerticalLineTriangle(CColLine const& colLine,CompressedVector const* verts,CColTriangle const& tri,CColTrianglePlane const& triPlane,CColPoint &colPoint,float &maxTouchDistance,CStoredCollPoly *colPoly) 0x40FB50
bool CCollision::ProcessVerticalLineTriangle(CColLine const& colLine, CompressedVector const* verts, CColTriangle const& tri, CColTrianglePlane const& triPlane, CColPoint& colPoint, float& maxTouchDistance, CStoredCollPoly* colPoly) {
    return plugin::CallAndReturn<bool, 0x40FB50, CColLine const&, CompressedVector const*, CColTriangle const&, CColTrianglePlane const&, CColPoint&, float&, CStoredCollPoly*>(colLine, verts, tri, triPlane, colPoint, maxTouchDistance, colPoly);
}

// Converted from cdecl bool CCollision::ProcessVerticalLine(CColLine const& colLine,CMatrix const& transform,CColModel &colModel,CColPoint &colPoint,float &maxTouchDistance,bool doSeeThroughCheck,CStoredCollPoly *colPoly) 0x410120
bool CCollision::ProcessVerticalLine(CColLine const& colLine, CMatrix const& transform, CColModel& colModel, CColPoint& colPoint, float& maxTouchDistance, bool doSeeThroughCheck, CStoredCollPoly* colPoly) {
    return plugin::CallAndReturn<bool, 0x410120, CColLine const&, CMatrix const&, CColModel&, CColPoint&, float&, bool, CStoredCollPoly*>(colLine, transform, colModel, colPoint, maxTouchDistance, doSeeThroughCheck, colPoly);
}

// Converted from cdecl bool CCollision::IsStoredPolyStillValidVerticalLine(CVector const& lineOrigin,float lineDist,CColPoint &colPoint,CStoredCollPoly *colPoly) 0x4105A0
bool CCollision::IsStoredPolyStillValidVerticalLine(CVector const& lineOrigin, float lineDist, CColPoint& colPoint, CStoredCollPoly* colPoly) {
    return plugin::CallAndReturn<bool, 0x4105A0, CVector const&, float, CColPoint&, CStoredCollPoly*>(lineOrigin, lineDist, colPoint, colPoly);
}

// Converted from cdecl int CCollision::ProcessColModels(CMatrix const& transform1,CColModel & colModel1,CMatrix const& transform2,CColModel &colModel2,CColPoint *colPoint1,CColPoint *colPoint2,float *maxTouchDistance) 0x410BE0
int CCollision::ProcessColModels(CMatrix const& transform1, CColModel& colModel1, CMatrix const& transform2, CColModel& colModel2, CColPoint* colPoint1, CColPoint* colPoint2, float* maxTouchDistance) {
    return plugin::CallAndReturn<int, 0x410BE0, CMatrix const&, CColModel&, CMatrix const&, CColModel&, CColPoint*, CColPoint*, float*>(transform1, colModel1, transform2, colModel2, colPoint1, colPoint2, maxTouchDistance);
}
