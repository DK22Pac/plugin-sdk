/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CBaseModelInfo.h"
#include "CColLine.h"
#include "CPlayerInfo.h"

class CWorld {
public:
    // Player data array for 1 player.
    static CPlayerInfo *Players;
    static unsigned char &PlayerInFocus;
    static CPtrList *ms_listMovingEntityPtrs;
    static CPtrList *ms_bigBuildingsList[3];
    static bool &bDoingCarCollisions;
    static int &ms_nCurrentScanCode;
    static bool &bIncludeDeadPeds;
    static bool &bProcessCutsceneOnly;
    static CEntity** pIgnoreEntity;
    static bool &bIncludeBikers;
    static bool &bNoMoreCollisionTorque;
    static bool &bForceProcessControl;
    static bool &bSecondShift;
    static bool &bIncludeCarTyres;
    static CSector *ms_aSectors[6400];

    //funcs
    static void Add(CEntity* entity);
    static void AddParticles();
    static void CallOffChaseForArea(float arg0, float arg1, float arg2, float arg3);
    static void CallOffChaseForAreaSectorListPeds(CPtrList& ptrlist, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8);
    static void CallOffChaseForAreaSectorListVehicles(CPtrList& ptrlist, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8);
    static void ClearCarsFromArea(float x1, float y1, float z1, float x2, float y2, float z2);
    static void ClearExcitingStuffFromArea(CVector const& arg0, float arg1, unsigned char arg2);
    static void ClearForRestart();
    static void ClearPedsFromArea(float x1, float y1, float z1, float x2, float y2, float z2);
    static void ClearScanCodes();
    static void ExtinguishAllCarFiresInArea(CVector position, float radius);
    static float FindGroundZFor3DCoord(float x, float y, float z, bool* arg3);
    static float FindGroundZForCoord(float x, float y);
    static int FindMissionEntitiesIntersectingCube(CVector const& arg0, CVector const& arg1, short* arg2, short arg3, CEntity** arg4, bool arg5, bool arg6, bool arg7);
    static void FindMissionEntitiesIntersectingCubeSectorList(CPtrList& ptrlist, CVector const& arg1, CVector const& arg2, short* arg3, short arg4, CEntity** arg5, bool arg6, bool arg7, bool arg8);
    static int FindObjectsInRange(CVector const& arg0, float arg1, bool arg2, short* arg3, short arg4, CEntity** arg5, bool arg6, bool arg7, bool arg8, bool arg9, bool arg10);
    static void FindObjectsInRangeSectorList(CPtrList& ptrlist, CVector const& arg1, float arg2, bool arg3, short* arg4, short arg5, CEntity** arg6);
    static int FindObjectsIntersectingAngledCollisionBox(CBox const& arg0, CMatrix const& arg1, CVector const& arg2, float arg3, float arg4, float arg5, float arg6, short* arg7, short arg8, CEntity** arg9, bool arg10, bool arg11, bool arg12, bool arg13, bool arg14);
    static void FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList& ptrlist, CBox const& arg1, CMatrix const& arg2, CVector const& arg3, short* arg4, short arg5, CEntity** arg6);
    static int FindObjectsIntersectingCube(CVector const& arg0, CVector const& arg1, short* arg2, short arg3, CEntity** arg4, bool arg5, bool arg6, bool arg7, bool arg8, bool arg9);
    static void FindObjectsIntersectingCubeSectorList(CPtrList& ptrlist, CVector const& arg1, CVector const& arg2, short* arg3, short arg4, CEntity** arg5);
    static int FindObjectsKindaColliding(CVector const& arg0, float arg1, bool arg2, short* arg3, short arg4, CEntity** arg5, bool arg6, bool arg7, bool arg8, bool arg9, bool arg10);
    static void FindObjectsKindaCollidingSectorList(CPtrList& ptrlist, CVector const& arg1, float arg2, bool arg3, short* arg4, short arg5, CEntity** arg6);
    static int FindObjectsOfTypeInRange(unsigned int arg0, CVector const& arg1, float arg2, bool arg3, short* arg4, short arg5, CEntity** arg6, bool arg7, bool arg8, bool arg9, bool arg10, bool arg11);
    static void FindObjectsOfTypeInRangeSectorList(unsigned int arg0, CPtrList& ptrlist, CVector const& arg2, float arg3, bool arg4, short* arg5, short arg6, CEntity** arg7);
    static float FindRoofZFor3DCoord(float x, float y, float z, bool* arg3);
    static bool GetIsLineOfSightClear(CVector const& origin, CVector const& target, bool arg2, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8);
    static bool GetIsLineOfSightSectorClear(CSector& arg0, CColLine const& colLine, bool arg2, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8);
    static void Initialise();
    static bool IsWanderPathClear(CVector const& arg0, CVector const& arg1, float arg2, int arg3);
    static void Process();
    static bool ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& colPoint, CEntity*& colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, bool cameraObjects, bool shootThrough);
    static bool ProcessLineOfSightSector(CSector& arg0, CColLine const& colLine, CColPoint& colPoint, float& arg3, CEntity*& colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, bool cameraObjects, bool shootThrough);
    static bool ProcessLineOfSightSectorList(CPtrList& ptrlist, CColLine const& arg1, CColPoint& colPoint, float& arg3, CEntity*& colEntity, bool arg5, bool arg6, bool arg7);
    static bool ProcessVerticalLine(CVector const& origin, float distance, CColPoint& colPoint, CEntity*& colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, CStoredCollPoly* poly);
    static bool ProcessVerticalLineSector(CSector& arg0, CColLine const& colLine, CColPoint& colPoint, CEntity*& colEntity, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8, bool arg9, CStoredCollPoly* poly);
    static void Remove(CEntity* entity);
    static void RemoveFallenCars();
    static void RemoveFallenPeds();
    static void RemoveReferencesToDeletedObject(CEntity* entity);
    static CBaseModelInfo* RepositionCertainDynamicObjects();
    static CBaseModelInfo* RepositionOneObject(CEntity* entity);
    static void SetAllCarsCanBeDamaged(bool arg0);
    static void SetCarsOnFire(float x, float y, float z, float radius, CEntity* vehicles);
    static void SetPedsChoking(float x, float y, float z, float radius, CEntity* peds);
    static void SetPedsOnFire(float x, float y, float z, float radius, CEntity* peds);
    static void ShutDown();
    static void StopAllLawEnforcersInTheirTracks();
    static void TestSphereAgainstSectorList(CPtrList& ptrlist, CVector arg1, float arg2, CEntity* entity, bool arg4);
    static void TestSphereAgainstWorld(CVector arg0, float arg1, CEntity* entity, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8);
    static void TriggerExplosion(CVector const& arg0, float arg1, float arg2, CEntity* entity, bool arg4);
    static void TriggerExplosionSectorList(CPtrList& ptrlist, CVector const& arg1, float arg2, float arg3, CEntity* entity, bool arg5);
    static void UseDetonator(CEntity* entity);
};

extern unsigned int MAX_PLAYERS; // 1