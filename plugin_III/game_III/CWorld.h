/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CStoredCollPoly.h"
#include "CSector.h"
#include "CColModel.h"
#include "CColPoint.h"
#include "CPlayerInfo.h"

class CWorld {
public:
    // static variables
    static unsigned char &PlayerInFocus;
    static CPlayerInfo *Players;
    static bool &bDoingCarCollisions;
    static bool &bForceProcessControl;
    static bool &bIncludeCarTyres;
    static bool &bIncludeDeadPeds;
    static bool &bNoMoreCollisionTorque;
    static bool &bProcessCutsceneOnly;
    static bool &bSecondShift;
    static CSector *ms_aSectors;
    static CPtrList *ms_bigBuildingsList;
    static CPtrList *ms_listMovingEntityPtrs;
    static short  &ms_nCurrentScanCode;
    static CEntity *&pIgnoreEntity;

    // static functions
    static void Add(CEntity* entity);
    static void AddParticles();
    static void CallOffChaseForArea(float x1, float y1, float x2, float y2);
    static void CallOffChaseForAreaSectorListPeds(CPtrList& list, float x1, float y1, float x2, float y2, float arg5, float arg6, float arg7, float arg8);
    static void CallOffChaseForAreaSectorListVehicles(CPtrList& list, float x1, float y1, float x2, float y2, float arg5, float arg6, float arg7, float arg8);
    static bool CameraToIgnoreThisObject(CEntity* entity);
    static void ClearCarsFromArea(float x1, float y1, float z1, float x2, float y2, float z2);
    static void ClearExcitingStuffFromArea(CVector const& point, float radius, unsigned char bRemoveProjectilesAndShadows);
    static void ClearForRestart();
    static void ClearPedsFromArea(float x1, float y1, float z1, float x2, float y2, float z2);
    static void ClearScanCodes();
    static void ExtinguishAllCarFiresInArea(CVector point, float radius);
    static float FindGroundZFor3DCoord(float x, float y, float z, bool* outResult);
    static float FindGroundZForCoord(float x, float y);
    static void FindMissionEntitiesIntersectingCube(CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool vehicles, bool peds, bool objects);
    static void FindMissionEntitiesIntersectingCubeSectorList(CPtrList& list, CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool vehiclesList, bool pedsList, bool objectsList);
    static void FindObjectsInRange(CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies);
    static void FindObjectsInRangeSectorList(CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities);
    static void FindObjectsIntersectingAngledCollisionBox(CColBox const& box, CMatrix const& transform, CVector const& point, float x1, float y1, float x2, float y2, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies);
    static void FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList& list, CColBox const& box, CMatrix const& transform, CVector const& poin, short* outCount, short maxCount, CEntity** outEntities);
    static void FindObjectsIntersectingCube(CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies);
    static void FindObjectsIntersectingCubeSectorList(CPtrList& list, CVector const& cornerA, CVector const& cornerB, short* outCount, short maxCount, CEntity** outEntities);
    static void FindObjectsKindaColliding(CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies);
    static void FindObjectsKindaCollidingSectorList(CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities);
    static void FindObjectsOfTypeInRange(unsigned int modelId, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies);
    static void FindObjectsOfTypeInRangeSectorList(unsigned int modelId, CPtrList& list, CVector const& point, float radius, bool b2D, short* outCount, short maxCount, CEntity** outEntities);
    static float FindRoofZFor3DCoord(float x, float y, float z, bool* outResult);
    static bool GetIsLineOfSightClear(CVector const& origin, CVector const& target, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    static bool GetIsLineOfSightSectorClear(CSector& sector, CColLine const& line, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    static bool GetIsLineOfSightSectorListClear(CPtrList& list, CColLine const& line, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    static void Initialise();
    static void Process();
    static bool ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    static bool ProcessLineOfSightSector(CSector& sector, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    static bool ProcessLineOfSightSectorList(CPtrList& list, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    static bool ProcessVerticalLine(CVector const& origin, float distance, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly);
    static bool ProcessVerticalLineSector(CSector& sector, CColLine const& line, CColPoint& outColPoint, CEntity*& outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly);
    static bool ProcessVerticalLineSectorList(CPtrList& list, CColLine const& line, CColPoint& outColPoint, float& maxTouchDistance, CEntity*& outEntity, bool doSeeThroughCheck, CStoredCollPoly* outCollPoly);
    static void Remove(CEntity* entity);
    static void RemoveEntityInsteadOfProcessingIt(CEntity* entity);
    static void RemoveFallenCars();
    static void RemoveFallenPeds();
    static void RemoveReferencesToDeletedObject(CEntity* entity);
    static void RemoveStaticObjects();
    static void RepositionCertainDynamicObjects();
    static void RepositionOneObject(CEntity* entity);
    static void SetAllCarsCanBeDamaged(bool enable);
    static void SetCarsOnFire(float x, float y, float z, float radius, CEntity* fireCreator);
    static void SetPedsOnFire(float x, float y, float z, float radius, CEntity* fireCreator);
    static void ShutDown();
    static void StopAllLawEnforcersInTheirTracks();
    static CEntity* TestSphereAgainstSectorList(CPtrList& list, CVector sphereCenter, float sphereRadius, CEntity* ignoreEntity, bool doCameraIgnoreCheck);
    static CEntity* TestSphereAgainstWorld(CVector sphereCenter, float sphereRadius, CEntity* ignoreEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck);
    static void TriggerExplosion(CVector const& point, float radius, float visibleDistance, CEntity* entity, bool processVehicleBombTimer);
    static void TriggerExplosionSectorList(CPtrList& list, CVector const& point, float radius, float visibleDistance, CEntity* entity, bool processVehicleBombTimer);
    static void UseDetonator(CEntity* creator);
};
