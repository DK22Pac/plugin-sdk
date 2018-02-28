/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWorld.h"

unsigned char &CWorld::PlayerInFocus = *(unsigned char *)0x95CD61;
CPlayerInfo *CWorld::Players = (CPlayerInfo *)0x9412F0;
bool &CWorld::bDoingCarCollisions = *(bool *)0x95CD8C;
bool &CWorld::bForceProcessControl = *(bool *)0x95CD6C;
bool &CWorld::bIncludeCarTyres = *(bool *)0x95CDAA;
bool &CWorld::bIncludeDeadPeds = *(bool *)0x95CD8F;
bool &CWorld::bNoMoreCollisionTorque = *(bool *)0x95CDCC;
bool &CWorld::bProcessCutsceneOnly = *(bool *)0x95CD8B;
bool &CWorld::bSecondShift = *(bool *)0x95CD54;
CSector *CWorld::ms_aSectors = (CSector *)0x665608;
CPtrList *CWorld::ms_bigBuildingsList = (CPtrList *)0x6FAB60;
CPtrList *CWorld::ms_listMovingEntityPtrs = (CPtrList *)0x8F433C;
short &CWorld::ms_nCurrentScanCode = *(short *)0x95CC64;
CEntity *&CWorld::pIgnoreEntity = *(CEntity **)0x8F6494;

// Converted from cdecl void CWorld::Add(CEntity *entity) 0x4AE930 
void CWorld::Add(CEntity* entity) {
    plugin::Call<0x4AE930, CEntity*>(entity);
}

// Converted from cdecl void CWorld::AddParticles(void) 0x4B4010 
void CWorld::AddParticles() {
    plugin::Call<0x4B4010>();
}

// Converted from cdecl void CWorld::CallOffChaseForArea(float x1,float y1,float x2,float y2) 0x4B5530 
void CWorld::CallOffChaseForArea(float x1, float y1, float x2, float y2) {
    plugin::Call<0x4B5530, float, float, float, float>(x1, y1, x2, y2);
}

// Converted from cdecl void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList &list,float x1,float y1,float x2,float y2,float,float,float,float) 0x4B5A60 
void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList& list, float x1, float y1, float x2, float y2, float arg5, float arg6, float arg7, float arg8) {
    plugin::Call<0x4B5A60, CPtrList&, float, float, float, float, float, float, float, float>(list, x1, y1, x2, y2, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList &list,float x1,float y1,float x2,float y2,float,float,float,float) 0x4B57B0 
void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList& list, float x1, float y1, float x2, float y2, float arg5, float arg6, float arg7, float arg8) {
    plugin::Call<0x4B57B0, CPtrList&, float, float, float, float, float, float, float, float>(list, x1, y1, x2, y2, arg5, arg6, arg7, arg8);
}

// Converted from cdecl bool CWorld::CameraToIgnoreThisObject(CEntity *entity) 0x4B5C30 
bool CWorld::CameraToIgnoreThisObject(CEntity* entity) {
    return plugin::CallAndReturn<bool, 0x4B5C30, CEntity*>(entity);
}

// Converted from cdecl void CWorld::ClearCarsFromArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4B50E0 
void CWorld::ClearCarsFromArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x4B50E0, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CWorld::ClearExcitingStuffFromArea(CVector const&point,float radius,uchar bRemoveProjectilesAndShadows) 0x4B4E70
void CWorld::ClearExcitingStuffFromArea(CVector const& point, float radius, unsigned char bRemoveProjectilesAndShadows) {
    plugin::Call<0x4B4E70, CVector const&, float, unsigned char>(point, radius, bRemoveProjectilesAndShadows);
}

// Converted from cdecl void CWorld::ClearForRestart(void) 0x4AE850 
void CWorld::ClearForRestart() {
    plugin::Call<0x4AE850>();
}

// Converted from cdecl void CWorld::ClearPedsFromArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4B52B0 
void CWorld::ClearPedsFromArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x4B52B0, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CWorld::ClearScanCodes(void) 0x4B1F60 
void CWorld::ClearScanCodes() {
    plugin::Call<0x4B1F60>();
}

// Converted from cdecl void CWorld::ExtinguishAllCarFiresInArea(CVector point,float radius) 0x4B5460 
void CWorld::ExtinguishAllCarFiresInArea(CVector point, float radius) {
    plugin::Call<0x4B5460, CVector, float>(point, radius);
}

// Converted from cdecl float CWorld::FindGroundZFor3DCoord(float x,float y,float z,bool *outResult) 0x4B3AE0
float CWorld::FindGroundZFor3DCoord(float x, float y, float z, bool* outResult) {
    return plugin::CallAndReturn<float, 0x4B3AE0, float, float, float, bool*>(x, y, z, outResult);
}

// Converted from cdecl float CWorld::FindGroundZForCoord(float x,float y) 0x4B3A80 
float CWorld::FindGroundZForCoord(float x, float y) {
    return plugin::CallAndReturn<float, 0x4B3A80, float, float>(x, y);
}

// Converted from cdecl void CWorld::FindMissionEntitiesIntersectingCube(CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities,bool vehicles,bool peds,bool objects) 0x4B3680
void CWorld::FindMissionEntitiesIntersectingCube(CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool vehicles, bool peds, bool objects) {
    plugin::Call<0x4B3680, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool>(cornerA, cornerB, outCount, maxCount, outEntities, vehicles, peds, objects);
}

// Converted from cdecl void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList &list,CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities,bool vehiclesList,bool pedsList,bool objectsList) 0x4B3920
void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList& list, CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool vehiclesList, bool pedsList, bool objectsList) {
    plugin::Call<0x4B3920, CPtrList&, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool>(list, cornerA, cornerB, outCount, maxCount, outEntities, vehiclesList, pedsList, objectsList);
}

// Converted from cdecl void CWorld::FindObjectsInRange(CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4B2200
void CWorld::FindObjectsInRange(CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4B2200, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(point, radius, b2D, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsInRangeSectorList(CPtrList &list,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities) 0x4B2540
void CWorld::FindObjectsInRangeSectorList(CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4B2540, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(list, point, radius, b2D, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingAngledCollisionBox(CColBox const&box,CMatrix const&transform,CVector const&point,float x1,float y1,float x2,float y2,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4B3280
void CWorld::FindObjectsIntersectingAngledCollisionBox(CColBox const& box, CMatrix const& transform, CVector const& point, float x1, float y1, float x2, float y2, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4B3280, CColBox const&, CMatrix const&, CVector const&, float, float, float, float, short*, short, CEntity**, bool, bool, bool, bool, bool>(box, transform, point, x1, y1, x2, y2, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList &list,CColBox const&box,CMatrix const&transform,CVector const&poin,short *outCount,short maxCount,CEntity **outEntities) 0x4B3590
void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList& list, CColBox const& box, CMatrix const& transform, CVector const& poin, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4B3590, CPtrList&, CColBox const&, CMatrix const&, CVector const&, short*, short, CEntity**>(list, box, transform, poin, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingCube(CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4B2E70
void CWorld::FindObjectsIntersectingCube(CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4B2E70, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool, bool, bool>(cornerA, cornerB, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList &list,CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities) 0x4B3150
void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList& list, CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4B3150, CPtrList&, CVector const&, CVector const&, short*, short, CEntity**>(list, cornerA, cornerB, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsKindaColliding(CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4B2A30
void CWorld::FindObjectsKindaColliding(CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4B2A30, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(point, radius, b2D, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsKindaCollidingSectorList(CPtrList &list,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities) 0x4B2D70
void CWorld::FindObjectsKindaCollidingSectorList(CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4B2D70, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(list, point, radius, b2D, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsOfTypeInRange(uint modelId,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4B2600
void CWorld::FindObjectsOfTypeInRange(unsigned int modelId, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4B2600, unsigned int, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(modelId, point, radius, b2D, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsOfTypeInRangeSectorList(uint modelId,CPtrList &list,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities) 0x4B2960
void CWorld::FindObjectsOfTypeInRangeSectorList(unsigned int modelId, CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4B2960, unsigned int, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(modelId, list, point, radius, b2D, outCount, maxCount, outEntities);
}

// Converted from cdecl float CWorld::FindRoofZFor3DCoord(float x,float y,float z,bool *outResult) 0x4B3B50
float CWorld::FindRoofZFor3DCoord(float x, float y, float z, bool* outResult) {
    return plugin::CallAndReturn<float, 0x4B3B50, float, float, float, bool*>(x, y, z, outResult);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightClear(CVector const&origin,CVector const&target,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4AEAA0
bool CWorld::GetIsLineOfSightClear(CVector const& origin, CVector const& target, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4AEAA0, CVector const&, CVector const&, bool, bool, bool, bool, bool, bool, bool>(origin, target, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightSectorClear(CSector &sector,CColLine const&line,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4B2000
bool CWorld::GetIsLineOfSightSectorClear(CSector& sector, CColLine const& line, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4B2000, CSector&, CColLine const&, bool, bool, bool, bool, bool, bool, bool>(sector, line, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightSectorListClear(CPtrList &list,CColLine const&line,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4B2160
bool CWorld::GetIsLineOfSightSectorListClear(CPtrList& list, CColLine const& line, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4B2160, CPtrList&, CColLine const&, bool, bool>(list, line, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl void CWorld::Initialise(void) 0x4AE410 
void CWorld::Initialise() {
    plugin::Call<0x4AE410>();
}

// Converted from cdecl void CWorld::Process(void) 0x4B1A60 
void CWorld::Process() {
    plugin::Call<0x4B1A60>();
}

// Converted from cdecl bool CWorld::ProcessLineOfSight(CVector const&origin,CVector const&target,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4AF970
bool CWorld::ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4AF970, CVector const&, CVector const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, bool>(origin, target, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl bool CWorld::ProcessLineOfSightSector(CSector &sector,CColLine const&line,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4B0A80
bool CWorld::ProcessLineOfSightSector(CSector& sector, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4B0A80, CSector&, CColLine const&, CColPoint&, float&, CEntity*&, bool, bool, bool, bool, bool, bool, bool>(sector, line, outColPoint, maxTouchDistance, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl bool CWorld::ProcessLineOfSightSectorList(CPtrList &list,CColLine const&line,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4B0C70
bool CWorld::ProcessLineOfSightSectorList(CPtrList& list, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4B0C70, CPtrList&, CColLine const&, CColPoint&, float&, CEntity*&, bool, bool>(list, line, outColPoint, maxTouchDistance, outEntity, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl bool CWorld::ProcessVerticalLine(CVector const&origin,float distance,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly) 0x4B0DE0
bool CWorld::ProcessVerticalLine(CVector const& origin, float distance, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly) {
    return plugin::CallAndReturn<bool, 0x4B0DE0, CVector const&, float, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*>(origin, distance, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, outCollPoly);
}

// Converted from cdecl bool CWorld::ProcessVerticalLineSector(CSector &sector,CColLine const&line,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly) 0x4B0EF0
bool CWorld::ProcessVerticalLineSector(CSector& sector, CColLine const& line, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly) {
    return plugin::CallAndReturn<bool, 0x4B0EF0, CSector&, CColLine const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*>(sector, line, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, outCollPoly);
}

// Converted from cdecl bool CWorld::ProcessVerticalLineSectorList(CPtrList &list,CColLine const&line,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly) 0x4B1090
bool CWorld::ProcessVerticalLineSectorList(CPtrList& list, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly) {
    return plugin::CallAndReturn<bool, 0x4B1090, CPtrList&, CColLine const&, CColPoint&, float&, CEntity*&, bool, CStoredCollPoly*>(list, line, outColPoint, maxTouchDistance, outEntity, doSeeThroughCheck, outCollPoly);
}

// Converted from cdecl void CWorld::Remove(CEntity *entity) 0x4AE9D0 
void CWorld::Remove(CEntity* entity) {
    plugin::Call<0x4AE9D0, CEntity*>(entity);
}

// Converted from cdecl void CWorld::RemoveEntityInsteadOfProcessingIt(CEntity *entity) 0x4B4E10 
void CWorld::RemoveEntityInsteadOfProcessingIt(CEntity* entity) {
    plugin::Call<0x4B4E10, CEntity*>(entity);
}

// Converted from cdecl void CWorld::RemoveFallenCars(void) 0x4B4170 
void CWorld::RemoveFallenCars() {
    plugin::Call<0x4B4170>();
}

// Converted from cdecl void CWorld::RemoveFallenPeds(void) 0x4B4060 
void CWorld::RemoveFallenPeds() {
    plugin::Call<0x4B4060>();
}

// Converted from cdecl void CWorld::RemoveReferencesToDeletedObject(CEntity *entity) 0x4B3BF0 
void CWorld::RemoveReferencesToDeletedObject(CEntity* entity) {
    plugin::Call<0x4B3BF0, CEntity*>(entity);
}

// Converted from cdecl void CWorld::RemoveStaticObjects(void) 0x4B4D50 
void CWorld::RemoveStaticObjects() {
    plugin::Call<0x4B4D50>();
}

// Converted from cdecl void CWorld::RepositionCertainDynamicObjects(void) 0x4B42B0 
void CWorld::RepositionCertainDynamicObjects() {
    plugin::Call<0x4B42B0>();
}

// Converted from cdecl void CWorld::RepositionOneObject(CEntity *entity) 0x4B4300 
void CWorld::RepositionOneObject(CEntity* entity) {
    plugin::Call<0x4B4300, CEntity*>(entity);
}

// Converted from cdecl void CWorld::SetAllCarsCanBeDamaged(bool enable) 0x4B53F0
void CWorld::SetAllCarsCanBeDamaged(bool enable) {
    plugin::Call<0x4B53F0, bool>(enable);
}

// Converted from cdecl void CWorld::SetCarsOnFire(float x,float y,float z,float radius,CEntity *fireCreator) 0x4B3E90
void CWorld::SetCarsOnFire(float x, float y, float z, float radius, CEntity* fireCreator) {
    plugin::Call<0x4B3E90, float, float, float, float, CEntity*>(x, y, z, radius, fireCreator);
}

// Converted from cdecl void CWorld::SetPedsOnFire(float x,float y,float z,float radius,CEntity *fireCreator) 0x4B3D30
void CWorld::SetPedsOnFire(float x, float y, float z, float radius, CEntity* fireCreator) {
    plugin::Call<0x4B3D30, float, float, float, float, CEntity*>(x, y, z, radius, fireCreator);
}

// Converted from cdecl void CWorld::ShutDown(void) 0x4AE450 
void CWorld::ShutDown() {
    plugin::Call<0x4AE450>();
}

// Converted from cdecl void CWorld::StopAllLawEnforcersInTheirTracks(void) 0x4B5BC0 
void CWorld::StopAllLawEnforcersInTheirTracks() {
    plugin::Call<0x4B5BC0>();
}

// Converted from cdecl CEntity* CWorld::TestSphereAgainstSectorList(CPtrList &list,CVector sphereCenter,float sphereRadius,CEntity *ignoreEntity,bool doCameraIgnoreCheck) 0x4B4AC0
CEntity* CWorld::TestSphereAgainstSectorList(CPtrList& list, CVector sphereCenter, float sphereRadius, CEntity* ignoreEntity, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<CEntity*, 0x4B4AC0, CPtrList&, CVector, float, CEntity*, bool>(list, sphereCenter, sphereRadius, ignoreEntity, doCameraIgnoreCheck);
}

// Converted from cdecl CEntity* CWorld::TestSphereAgainstWorld(CVector sphereCenter,float sphereRadius,CEntity *ignoreEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck) 0x4B4710
CEntity* CWorld::TestSphereAgainstWorld(CVector sphereCenter, float sphereRadius, CEntity* ignoreEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck) {
    return plugin::CallAndReturn<CEntity*, 0x4B4710, CVector, float, CEntity*, bool, bool, bool, bool, bool, bool>(sphereCenter, sphereRadius, ignoreEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck);
}

// Converted from cdecl void CWorld::TriggerExplosion(CVector const&point,float radius,float visibleDistance,CEntity *entity,bool processVehicleBombTimer) 0x4B1140
void CWorld::TriggerExplosion(CVector const& point, float radius, float visibleDistance, CEntity* entity, bool processVehicleBombTimer) {
    plugin::Call<0x4B1140, CVector const&, float, float, CEntity*, bool>(point, radius, visibleDistance, entity, processVehicleBombTimer);
}

// Converted from cdecl void CWorld::TriggerExplosionSectorList(CPtrList &list,CVector const&point,float radius,float visibleDistance,CEntity *entity,bool processVehicleBombTimer) 0x4B1340
void CWorld::TriggerExplosionSectorList(CPtrList& list, CVector const& point, float radius, float visibleDistance, CEntity* entity, bool processVehicleBombTimer) {
    plugin::Call<0x4B1340, CPtrList&, CVector const&, float, float, CEntity*, bool>(list, point, radius, visibleDistance, entity, processVehicleBombTimer);
}

// Converted from cdecl void CWorld::UseDetonator(CEntity *creator) 0x4B4650
void CWorld::UseDetonator(CEntity* creator) {
    plugin::Call<0x4B4650, CEntity*>(creator);
}
