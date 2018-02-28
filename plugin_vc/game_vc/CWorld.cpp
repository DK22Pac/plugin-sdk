/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWorld.h"

unsigned int MAX_PLAYERS = 1;
// variables
CPlayerInfo *CWorld::Players = (CPlayerInfo *)0x94AD28;
unsigned char &CWorld::PlayerInFocus = *(unsigned char *)0xA10AFB;
// Converted from CPtrList CWorld::ms_listMovingEntityPtrs 0x9B48A8
CPtrList& CWorld::ms_listMovingEntityPtrs = *(CPtrList*)0x9B48A8;
// Converted from CPtrList CWorld::ms_bigBuildingsList[3] 0x9785FC
CPtrList (&CWorld::ms_bigBuildingsList)[3] = *(CPtrList (*)[3])*(int *)0x9785FC;
bool &CWorld::bDoingCarCollisions = *(bool *)0x9B6E58;
short &CWorld::ms_nCurrentScanCode = *(short *)0xA1098E;
bool &CWorld::bIncludeDeadPeds = *(bool *)0xA10AEE;
bool &CWorld::bProcessCutsceneOnly = *(bool *)0xA10B1C;
// Converted from CEntity* CWorld::pIgnoreEntity 0xA10B29
CEntity*& CWorld::pIgnoreEntity = *(CEntity**)0xA10B29;
bool &CWorld::bIncludeBikers = *(bool *)0xA10B48;
bool &CWorld::bNoMoreCollisionTorque = *(bool *)0xA10B49;
bool &CWorld::bForceProcessControl = *(bool *)0xA10B4A;
bool &CWorld::bSecondShift = *(bool *)0xA10B70;
bool &CWorld::bIncludeCarTyres = *(bool *)0xA10B96;
// Converted from CSector CWorld::ms_aSectors[6400] 0x792D30
CSector (&CWorld::ms_aSectors)[6400] = *(CSector (*)[6400])*(int *)0x792D30;

// Converted from cdecl void CWorld::Add(CEntity *entity) 0x4DB3F0
void CWorld::Add(CEntity* entity) {
    plugin::Call<0x4DB3F0, CEntity*>(entity);
}

// Converted from cdecl void CWorld::AddParticles(void) 0x4D4BB0
void CWorld::AddParticles() {
    plugin::Call<0x4D4BB0>();
}

// Converted from cdecl void CWorld::CallOffChaseForArea(float x1,float y1,float x2,float y2) 0x4D3200
void CWorld::CallOffChaseForArea(float x1, float y1, float x2, float y2) {
    plugin::Call<0x4D3200, float, float, float, float>(x1, y1, x2, y2);
}

// Converted from cdecl void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList &list,float x1,float y1,float x2,float y2,float,float,float,float) 0x4D2DF0
void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList& list, float x1, float y1, float x2, float y2, float arg5, float arg6, float arg7, float arg8) {
    plugin::Call<0x4D2DF0, CPtrList&, float, float, float, float, float, float, float, float>(list, x1, y1, x2, y2, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList &list,float x1,float y1,float x2,float y2,float,float,float,float) 0x4D2F50
void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList& list, float x1, float y1, float x2, float y2, float arg5, float arg6, float arg7, float arg8) {
    plugin::Call<0x4D2F50, CPtrList&, float, float, float, float, float, float, float, float>(list, x1, y1, x2, y2, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::ClearCarsFromArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4D3700
void CWorld::ClearCarsFromArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x4D3700, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CWorld::ClearExcitingStuffFromArea(CVector const& point,float radius,uchar bRemoveProjectilesAndShadows) 0x4D38F0
void CWorld::ClearExcitingStuffFromArea(CVector const& point, float radius, unsigned char bRemoveProjectilesAndShadows) {
    plugin::Call<0x4D38F0, CVector const&, float, unsigned char>(point, radius, bRemoveProjectilesAndShadows);
}

// Converted from cdecl void CWorld::ClearForRestart(void) 0x4DB4A0
void CWorld::ClearForRestart() {
    plugin::Call<0x4DB4A0>();
}

// Converted from cdecl void CWorld::ClearPedsFromArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4D35C0
void CWorld::ClearPedsFromArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x4D35C0, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CWorld::ClearScanCodes(void) 0x4D7460
void CWorld::ClearScanCodes() {
    plugin::Call<0x4D7460>();
}

// Converted from cdecl void CWorld::ExtinguishAllCarFiresInArea(CVector point,float radius) 0x4D3480
void CWorld::ExtinguishAllCarFiresInArea(CVector point, float radius) {
    plugin::Call<0x4D3480, CVector, float>(point, radius);
}

// Converted from cdecl float CWorld::FindGroundZFor3DCoord(float x,float y,float z,bool *outResult) 0x4D53A0
float CWorld::FindGroundZFor3DCoord(float x, float y, float z, bool* outResult) {
    return plugin::CallAndReturn<float, 0x4D53A0, float, float, float, bool*>(x, y, z, outResult);
}

// Converted from cdecl float CWorld::FindGroundZForCoord(float x,float y) 0x4D5540
float CWorld::FindGroundZForCoord(float x, float y) {
    return plugin::CallAndReturn<float, 0x4D5540, float, float>(x, y);
}

// Converted from cdecl void CWorld::FindMissionEntitiesIntersectingCube(CVector const& cornerA,CVector const& cornerB,short *outCount,short maxCount,CEntity **outEntities,bool vehicles,bool peds,bool objects) 0x4D5800
void CWorld::FindMissionEntitiesIntersectingCube(CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool vehicles, bool peds, bool objects) {
    plugin::Call<0x4D5800, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool>(cornerA, cornerB, outCount, maxCount, outEntities, vehicles, peds, objects);
}

// Converted from cdecl void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList &list,CVector const& cornerA,CVector const& cornerB,short *outCount,short maxCount,CEntity **outEntities,bool vehiclesList,bool pedsList,bool objectsList) 0x4D56B0
void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList& list, CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool vehiclesList, bool pedsList, bool objectsList) {
    plugin::Call<0x4D56B0, CPtrList&, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool>(list, cornerA, cornerB, outCount, maxCount, outEntities, vehiclesList, pedsList, objectsList);
}

// Converted from cdecl void CWorld::FindObjectsInRange(CVector const& point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4D6B90
void CWorld::FindObjectsInRange(CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4D6B90, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(point, radius, b2D, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsInRangeSectorList(CPtrList &list,CVector const& point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities) 0x4D6AD0
void CWorld::FindObjectsInRangeSectorList(CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4D6AD0, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(list, point, radius, b2D, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingAngledCollisionBox(CBox const& box,CMatrix const& transform,CVector const& point,float x1,float y1,float x2,float y2,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4D5B90 
void CWorld::FindObjectsIntersectingAngledCollisionBox(CBox const& box, CMatrix const& transform, CVector const& point, float x1, float y1, float x2, float y2, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4D5B90, CBox const&, CMatrix const&, CVector const&, float, float, float, float, short*, short, CEntity**, bool, bool, bool, bool, bool>(box, transform, point, x1, y1, x2, y2, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList &list,CBox const& box,CMatrix const& transform,CVector const&point,short *outCount,short maxCount,CEntity **outEntities) 0x4D5A90
void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList& list, CBox const& box, CMatrix const& transform, CVector const& point, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4D5A90, CPtrList&, CBox const&, CMatrix const&, CVector const&, short*, short, CEntity**>(list, box, transform, point, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingCube(CVector const& cornerA,CVector const& cornerB,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4D5FB0 
void CWorld::FindObjectsIntersectingCube(CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4D5FB0, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool, bool, bool>(cornerA, cornerB, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList &list,CVector const& cornerA,CVector const& cornerB,short *outCount,short maxCount,CEntity **outEntities) 0x4D5EA0
void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList& list, CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4D5EA0, CPtrList&, CVector const&, CVector const&, short*, short, CEntity**>(list, cornerA, cornerB, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsKindaColliding(CVector const& point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4D6370 
void CWorld::FindObjectsKindaColliding(CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4D6370, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(point, radius, b2D, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsKindaCollidingSectorList(CPtrList &list,CVector const& point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities) 0x4D6280
void CWorld::FindObjectsKindaCollidingSectorList(CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4D6280, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(list, point, radius, b2D, outCount, maxCount, outEntities);
}

// Converted from cdecl void CWorld::FindObjectsOfTypeInRange(uint modelId,CVector const& point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings,bool vehicles,bool peds,bool objects,bool dummies) 0x4D6770 
void CWorld::FindObjectsOfTypeInRange(unsigned int modelId, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) {
    plugin::Call<0x4D6770, unsigned int, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(modelId, point, radius, b2D, outCount, maxCount, outEntities, buildings, vehicles, peds, objects, dummies);
}

// Converted from cdecl void CWorld::FindObjectsOfTypeInRangeSectorList(uint modelId,CPtrList &list,CVector const& point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities) 0x4D66A0
void CWorld::FindObjectsOfTypeInRangeSectorList(unsigned int modelId, CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities) {
    plugin::Call<0x4D66A0, unsigned int, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(modelId, list, point, radius, b2D, outCount, maxCount, outEntities);
}

// Converted from cdecl float CWorld::FindRoofZFor3DCoord(float x,float y,float z,bool *outResult) 0x4D51D0 
float CWorld::FindRoofZFor3DCoord(float x, float y, float z, bool* outResult) {
    return plugin::CallAndReturn<float, 0x4D51D0, float, float, float, bool*>(x, y, z, outResult);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightClear(CVector const& origin,CVector const& target,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4DA560
bool CWorld::GetIsLineOfSightClear(CVector const& origin, CVector const& target, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4DA560, CVector const&, CVector const&, bool, bool, bool, bool, bool, bool, bool>(origin, target, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightSectorClear(CSector &sector,CColLine const& line,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x4D6EC0
bool CWorld::GetIsLineOfSightSectorClear(CSector& sector, CColLine const& line, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x4D6EC0, CSector&, CColLine const&, bool, bool, bool, bool, bool, bool, bool>(sector, line, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from cdecl void CWorld::Initialise(void) 0x4DB9A0 
void CWorld::Initialise() {
    plugin::Call<0x4DB9A0>();
}

// Converted from cdecl bool CWorld::IsWanderPathClear(CVector const& origin,CVector const& target,float,int) 0x4D2620 
bool CWorld::IsWanderPathClear(CVector const& origin, CVector const& target, float arg2, int arg3) {
    return plugin::CallAndReturn<bool, 0x4D2620, CVector const&, CVector const&, float, int>(origin, target, arg2, arg3);
}

// Converted from cdecl void CWorld::Process(void) 0x4D7500 
void CWorld::Process() {
    plugin::Call<0x4D7500>();
}

// Converted from cdecl bool CWorld::ProcessLineOfSight(CVector const& origin,CVector const& target,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck,bool doShootThroughCheck) 0x4D92D0
bool CWorld::ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck, bool doShootThroughCheck) {
    return plugin::CallAndReturn<bool, 0x4D92D0, CVector const&, CVector const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, bool, bool>(origin, target, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck, doShootThroughCheck);
}

// Converted from cdecl bool CWorld::ProcessLineOfSightSector(CSector &sector,CColLine const& line,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck,bool doShootThroughCheck) 0x4D9060
bool CWorld::ProcessLineOfSightSector(CSector& sector, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck, bool doShootThroughCheck) {
    return plugin::CallAndReturn<bool, 0x4D9060, CSector&, CColLine const&, CColPoint&, float&, CEntity*&, bool, bool, bool, bool, bool, bool, bool, bool>(sector, line, outColPoint, maxTouchDistance, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck, doShootThroughCheck);
}

// Converted from cdecl bool CWorld::ProcessLineOfSightSectorList(CPtrList &list,CColLine const& line,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool doSeeThroughCheck,bool doCameraIgnoreCheck,bool doShootThroughCheck) 0x4D8C60
bool CWorld::ProcessLineOfSightSectorList(CPtrList& list, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool doSeeThroughCheck, bool doCameraIgnoreCheck, bool doShootThroughCheck) {
    return plugin::CallAndReturn<bool, 0x4D8C60, CPtrList&, CColLine const&, CColPoint&, float&, CEntity*&, bool, bool, bool>(list, line, outColPoint, maxTouchDistance, outEntity, doSeeThroughCheck, doCameraIgnoreCheck, doShootThroughCheck);
}

// Converted from cdecl bool CWorld::ProcessVerticalLine(CVector const& origin,float distance,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly) 0x4D8B00
bool CWorld::ProcessVerticalLine(CVector const& origin, float distance, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly) {
    return plugin::CallAndReturn<bool, 0x4D8B00, CVector const&, float, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*>(origin, distance, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, outCollPoly);
}

// Converted from cdecl bool CWorld::ProcessVerticalLineSector(CSector &sector,CColLine const& line,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly) 0x4D84D0
bool CWorld::ProcessVerticalLineSector(CSector& sector, CColLine const& line, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly) {
    return plugin::CallAndReturn<bool, 0x4D84D0, CSector&, CColLine const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*>(sector, line, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, outCollPoly);
}

// Converted from cdecl void CWorld::Remove(CEntity *entity) 0x4DB310
void CWorld::Remove(CEntity* entity) {
    plugin::Call<0x4DB310, CEntity*>(entity);
}

// Converted from cdecl void CWorld::RemoveFallenCars(void) 0x4D48A0 
void CWorld::RemoveFallenCars() {
    plugin::Call<0x4D48A0>();
}

// Converted from cdecl void CWorld::RemoveFallenPeds(void) 0x4D4A40 
void CWorld::RemoveFallenPeds() {
    plugin::Call<0x4D4A40>();
}

// Converted from cdecl void CWorld::RemoveReferencesToDeletedObject(CEntity *entity) 0x4D5090
void CWorld::RemoveReferencesToDeletedObject(CEntity* entity) {
    plugin::Call<0x4D5090, CEntity*>(entity);
}

// Converted from cdecl void CWorld::RepositionCertainDynamicObjects(void) 0x4D4850
void CWorld::RepositionCertainDynamicObjects() {
    plugin::Call<0x4D4850>();
}

// Converted from cdecl void CWorld::RepositionOneObject(CEntity *entity) 0x4D43A0
void CWorld::RepositionOneObject(CEntity* entity) {
    plugin::Call<0x4D43A0, CEntity*>(entity);
}

// Converted from cdecl void CWorld::SetAllCarsCanBeDamaged(bool enable) 0x4D3550 
void CWorld::SetAllCarsCanBeDamaged(bool enable) {
    plugin::Call<0x4D3550, bool>(enable);
}

// Converted from cdecl void CWorld::SetCarsOnFire(float x,float y,float z,float radius,CEntity *fireCreator) 0x4D4C30
void CWorld::SetCarsOnFire(float x, float y, float z, float radius, CEntity* fireCreator) {
    plugin::Call<0x4D4C30, float, float, float, float, CEntity*>(x, y, z, radius, fireCreator);
}

// Converted from cdecl void CWorld::SetPedsChoking(float x,float y,float z,float radius,CEntity *gasCreator) 0x4D4D90
void CWorld::SetPedsChoking(float x, float y, float z, float radius, CEntity* gasCreator) {
    plugin::Call<0x4D4D90, float, float, float, float, CEntity*>(x, y, z, radius, gasCreator);
}

// Converted from cdecl void CWorld::SetPedsOnFire(float x,float y,float z,float radius,CEntity *fireCreator) 0x4D4F30
void CWorld::SetPedsOnFire(float x, float y, float z, float radius, CEntity* fireCreator) {
    plugin::Call<0x4D4F30, float, float, float, float, CEntity*>(x, y, z, radius, fireCreator);
}

// Converted from cdecl void CWorld::ShutDown(void) 0x4DB590 
void CWorld::ShutDown() {
    plugin::Call<0x4DB590>();
}

// Converted from cdecl void CWorld::StopAllLawEnforcersInTheirTracks(void) 0x4D25B0 
void CWorld::StopAllLawEnforcersInTheirTracks() {
    plugin::Call<0x4D25B0>();
}

// Converted from cdecl CEntity* CWorld::TestSphereAgainstSectorList(CPtrList &list,CVector sphereCenter,float sphereRadius,CEntity *ignoreEntity,bool doCameraIgnoreCheck) 0x4D3C40
CEntity* CWorld::TestSphereAgainstSectorList(CPtrList& list, CVector sphereCenter, float sphereRadius, CEntity* ignoreEntity, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<CEntity*, 0x4D3C40, CPtrList&, CVector, float, CEntity*, bool>(list, sphereCenter, sphereRadius, ignoreEntity, doCameraIgnoreCheck);
}

// Converted from cdecl CEntity* CWorld::TestSphereAgainstWorld(CVector sphereCenter,float sphereRadius,CEntity *ignoreEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck) 0x4D3F40
CEntity* CWorld::TestSphereAgainstWorld(CVector sphereCenter, float sphereRadius, CEntity* ignoreEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck) {
    return plugin::CallAndReturn<CEntity*, 0x4D3F40, CVector, float, CEntity*, bool, bool, bool, bool, bool, bool>(sphereCenter, sphereRadius, ignoreEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck);
}

// Converted from cdecl void CWorld::TriggerExplosion(CVector const& point,float radius,float visibleDistance,CEntity *entity,bool processVehicleBombTimer) 0x4D82D0
void CWorld::TriggerExplosion(CVector const& point, float radius, float visibleDistance, CEntity* entity, bool processVehicleBombTimer) {
    plugin::Call<0x4D82D0, CVector const&, float, float, CEntity*, bool>(point, radius, visibleDistance, entity, processVehicleBombTimer);
}

// Converted from cdecl void CWorld::TriggerExplosionSectorList(CPtrList &list,CVector const& point,float radius,float visibleDistance,CEntity *entity,bool processVehicleBombTimer) 0x4D7B90
void CWorld::TriggerExplosionSectorList(CPtrList& list, CVector const& point, float radius, float visibleDistance, CEntity* entity, bool processVehicleBombTimer) {
    plugin::Call<0x4D7B90, CPtrList&, CVector const&, float, float, CEntity*, bool>(list, point, radius, visibleDistance, entity, processVehicleBombTimer);
}

// Converted from cdecl void CWorld::UseDetonator(CEntity *creator) 0x4D42F0
void CWorld::UseDetonator(CEntity* creator) {
    plugin::Call<0x4D42F0, CEntity*>(creator);
}