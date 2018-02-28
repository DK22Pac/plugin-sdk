/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CAutomobile.h"

struct CZoneInfo;

class CCarCtrl {
public:
    //funcs
    static int AddToLoadedVehicleArray(int arg0, int arg1, int arg2);
    static int AddToVehicleArray(int arg0, int arg1);
    static int ChooseCarModel(int arg0);
    static int ChooseCarModelToLoad(int arg0);
    static int ChooseCarRating(CZoneInfo* arg0);
    static int ChooseModel(CZoneInfo* arg0, int* arg1);
    static int ChoosePoliceCarModel();
    static void ClearInterestingVehicleList();
    static void DragCarToPoint(CVehicle* vehicle, CVector* coords);
    static float FindAngleToWeaveThroughTraffic(CVehicle* vehicle, CPhysical* physical, float arg2, float arg3);
    static int FindLinksToGoWithTheseNodes(CVehicle* vehicle);
    static float FindMaximumSpeedForThisCarInTraffic(CVehicle* vehicle);
    static char FindPathDirection(int arg0, int arg1, int arg2);
    static void GenerateEmergencyServicesCar();
    static bool GenerateOneEmergencyServicesCar(unsigned int model, CVector driveToCoord);
    static void GenerateOneRandomCar();
    static void GenerateRandomCars();
    static void Init();
    static bool IsThisVehicleInteresting(CVehicle* vehicle);
    static void JoinCarWithRoadSystem(CVehicle* vehicle);
    static bool JoinCarWithRoadSystemGotoCoors(CVehicle* vehicle, CVector arg1, bool arg2);
    static bool MapCouldMoveInThisArea(float arg0, float arg1);
    static char PickNextNodeAccordingStrategy(CVehicle* vehicle);
    static int PickNextNodeRandomly(CVehicle* vehicle);
    static int PickNextNodeToChaseCar(CVehicle* vehicle, float arg1, float arg2, CVehicle* arg3);
    static bool PickNextNodeToFollowPath(CVehicle* vehicle);
    static void PossiblyRemoveVehicle(CVehicle* vehicle);
    static void ReInit();
    static void RegisterVehicleOfInterest(CVehicle* vehicle);
    static void RemoveCarsIfThePoolGetsFull();
    static void RemoveDistantCars();
    static void RemoveFromInterestingVehicleList(CVehicle* vehicle);
    static void RemoveFromLoadedVehicleArray(int arg0, int arg1);
    static void ScanForPedDanger(CVehicle* vehicle);
    static void SlowCarDownForCarsSectorList(CPtrList& ptrlist, CVehicle* vehicle, float arg2, float arg3, float arg4, float arg5, float* arg6, float arg7);
    static void SlowCarDownForOtherCar(CEntity* entity, CVehicle* vehicle, float* arg2, float arg3);
    static void SlowCarDownForPedsSectorList(CPtrList& ptrlist, CVehicle* vehicle, float arg2, float arg3, float arg4, float arg5, float* arg6, float arg7);
    static void SlowCarOnRailsDownForTrafficAndLights(CVehicle* vehicle);
    static void SteerAIBoatWithPhysicsAttackingPlayer(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4);
    static void SteerAIBoatWithPhysicsHeadingForTarget(CVehicle* vehicle, float arg1, float arg2, float* arg3, float* arg4, float* arg5);
    static void SteerAICarBlockingPlayerForwardAndBack(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4);
    static void SteerAICarWithPhysics(CVehicle* vehicle);
    static void SteerAICarWithPhysicsFollowPath(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4);
    static void SteerAICarWithPhysicsHeadingForTarget(CVehicle* vehicle, CPhysical* arg1, float arg2, float arg3, float* arg4, float* arg5, float* arg6, bool* arg7);
    static void SteerAICarWithPhysicsTryingToBlockTarget_Stop(CVehicle* vehicle, float arg1, float arg2, float arg3, float arg4, float* arg5, float* arg6, float* arg7, bool* arg8);
    static void SteerAICarWithPhysics_OnlyMission(CVehicle* vehicle, float* arg1, float* arg2, float* arg3, bool* arg4);
    static void SteerAIHeliTowardsTargetCoors(CAutomobile* automobile);
    static void SteerAIPlaneTowardsTargetCoors(CAutomobile* automobile);
    static void SwitchVehicleToRealPhysics(CVehicle* vehicle);
    static float TestCollisionBetween2MovingRects(CVehicle* vehicle, CVehicle* arg1, float arg2, float arg3, CVector* arg4, CVector* arg5, unsigned char arg6);
    static void UpdateCarCount(CVehicle* vehicle, unsigned char arg1);
    static void UpdateCarOnRails(CVehicle* vehicle);
    static void WeaveThroughCarsSectorList(CPtrList& ptrlist, CVehicle* vehicle, CPhysical* arg2, float arg3, float arg4, float arg5, float arg6, float* arg7, float* arg8);
    static void WeaveThroughObjectsSectorList(CPtrList& ptrlist, CVehicle* vehicle, float arg2, float arg3, float arg4, float arg5, float* arg6, float* arg7);
    static void WeaveThroughPedsSectorList(CPtrList& ptrlist, CVehicle* vehicle, CPhysical* arg2, float arg3, float arg4, float arg5, float arg6, float* arg7, float* arg8);
};
