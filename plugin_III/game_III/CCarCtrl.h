/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CZoneInfo.h"
#include "CPhysical.h"
#include "CBoat.h"

enum PLUGIN_API eVehicleClass : unsigned int {
    CARCLASS_POORFAMILY = 0,
    CARCLASS_RICHFAMILY = 1,
    CARCLASS_EXECUTIVE = 2,
    CARCLASS_WORKER = 3,
    CARCLASS_SPECIAL = 4,
    CARCLASS_BIG = 5,
    CARCLASS_TAXI = 6,
    TOTAL_CUSTOM_CLASSES = 7,
    CARCLASS_MAFIA = 8,
    CARCLASS_TRIAD = 9,
    CARCLASS_DIABLO = 10,
    CARCLASS_YAKUZA = 11,
    CARCLASS_YARDIE = 12,
    CARCLASS_COLOMB = 13,
    CARCLASS_NINES = 14,
    CARCLASS_FORELLI = 15,
    CARCLASS_SINDACCO = 16,
    CARCLASS_COPS = 17
};

class PLUGIN_API CCarCtrl {
public:
    SUPPORTED_10EN_11EN_STEAM static float &CarDensityMultiplier;
    SUPPORTED_10EN_11EN_STEAM static int &MaxNumberOfCarsInUse;
    SUPPORTED_10EN_11EN_STEAM static int(&CarArrays)[7][256]; // static int CarArrays[7][256]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &LastTimeFireTruckCreated;
    SUPPORTED_10EN_11EN_STEAM static int &NumAmbulancesOnDuty;
    SUPPORTED_10EN_11EN_STEAM static int(&TotalNumOfCarsOfRating)[7]; // static int TotalNumOfCarsOfRating[7]
    SUPPORTED_10EN_11EN_STEAM static int &NumLawEnforcerCars;
    SUPPORTED_10EN_11EN_STEAM static int &NumMissionCars;
    SUPPORTED_10EN_11EN_STEAM static int &NumParkedCars;
    SUPPORTED_10EN_11EN_STEAM static int &NumPermanentVehicles;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &LastTimeLawEnforcerCreated;
    SUPPORTED_10EN_11EN_STEAM static int &NumFireTrucksOnDuty;
    SUPPORTED_10EN_11EN_STEAM static int(&NextCarOfRating)[7]; // static int NextCarOfRating[7]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &LastTimeAmbulanceCreated;
    SUPPORTED_10EN_11EN_STEAM static int &NumRandomCars;
    SUPPORTED_10EN_11EN_STEAM static char &CountDownToCarsAtStart;
    SUPPORTED_10EN_11EN_STEAM static bool &bCarsGeneratedAroundCamera;

    SUPPORTED_10EN_11EN_STEAM static void AddToCarArray(int id, int vehicleClass);
    SUPPORTED_10EN_11EN_STEAM static int ChooseCarModel(int vehicleClass);
    SUPPORTED_10EN_11EN_STEAM static int ChooseGangCarModel(int gang);
    SUPPORTED_10EN_11EN_STEAM static int ChooseModel(CZoneInfo *info, CVector *pos, int *outVehicleClass);
    SUPPORTED_10EN_11EN_STEAM static int ChoosePoliceCarModel();
    SUPPORTED_10EN_11EN_STEAM static void ClearInterestingVehicleList();
    SUPPORTED_10EN_11EN_STEAM static int CountCarsOfType(int modelIndex);
    SUPPORTED_10EN_11EN_STEAM static void DragCarToPoint(CVehicle *vehicle, CVector *point);
    SUPPORTED_10EN_11EN_STEAM static float FindAngleToWeaveThroughTraffic(CVehicle *vehicle, CPhysical *target, float angleToTarget, float angleForward);
    SUPPORTED_10EN_11EN_STEAM static void FindLinksToGoWithTheseNodes(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static float FindMaxSteerAngle(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static float FindMaximumSpeedForThisCarInTraffic(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static unsigned char FindPathDirection(int prevNode, int curNode, int nextNode);
    SUPPORTED_10EN_11EN_STEAM static float FindSpeedMultiplier(float angleChange, float minAngle, float maxAngle, float coef);
    SUPPORTED_10EN_11EN_STEAM static void GenerateEmergencyServicesCar();
    SUPPORTED_10EN_11EN_STEAM static bool GenerateOneEmergencyServicesCar(unsigned int modelIndex, CVector point);
    SUPPORTED_10EN_11EN_STEAM static void GenerateOneRandomCar();
    SUPPORTED_10EN_11EN_STEAM static void GenerateRandomCars();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static bool IsThisVehicleInteresting(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void JoinCarWithRoadSystem(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static bool JoinCarWithRoadSystemGotoCoors(CVehicle *vehicle, CVector point, bool isProperNow);
    SUPPORTED_10EN_11EN_STEAM static bool MapCouldMoveInThisArea(float x, float y);
    SUPPORTED_10EN_11EN_STEAM static bool PickNextNodeAccordingStrategy(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void PickNextNodeRandomly(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void PickNextNodeToChaseCar(CVehicle *vehicle, float targetX, float targetY, CVehicle *target);
    SUPPORTED_10EN_11EN_STEAM static bool PickNextNodeToFollowPath(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void PossiblyRemoveVehicle(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void ReInit();
    SUPPORTED_10EN_11EN_STEAM static void RegisterVehicleOfInterest(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void RemoveDistantCars();
    SUPPORTED_10EN_11EN_STEAM static void RemoveFromInterestingVehicleList(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void ScanForPedDanger(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void SlowCarDownForCarsSectorList(CPtrList &list, CVehicle *vehicle, float x_inf, float y_inf, float x_sup, float y_sup, float *pSpeed, float curSpeed);
    SUPPORTED_10EN_11EN_STEAM static void SlowCarDownForOtherCar(CEntity *entity, CVehicle *vehicle, float *pSpeed, float curSpeed);
    SUPPORTED_10EN_11EN_STEAM static void SlowCarDownForPedsSectorList(CPtrList &list, CVehicle *vehicle, float x_inf, float y_inf, float x_sup, float y_sup, float *pSpeed, float curSpeed);
    SUPPORTED_10EN_11EN_STEAM static void SlowCarOnRailsDownForTrafficAndLights(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void SteerAIBoatWithPhysics(CBoat *boat);
    SUPPORTED_10EN_11EN_STEAM static void SteerAIBoatWithPhysicsHeadingForTarget(CBoat *boat, float targetX, float targetY, float *steerAngle, float *gasPedal, float *breakPedal);
    SUPPORTED_10EN_11EN_STEAM static void SteerAICarWithPhysics(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void SteerAICarWithPhysicsFollowPath(CVehicle *vehicle, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake);
    SUPPORTED_10EN_11EN_STEAM static void SteerAICarWithPhysicsHeadingForTarget(CVehicle *vehicle, CPhysical *target, float targetX, float targetY, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake);
    SUPPORTED_10EN_11EN_STEAM static void SteerAICarWithPhysicsTryingToBlockTarget(CVehicle *vehicle, float targetX, float targetY, float targetSpeedX, float targetSpeedY, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake);
    SUPPORTED_10EN_11EN_STEAM static void SteerAICarWithPhysicsTryingToBlockTarget_Stop(CVehicle *vehicle, float targetX, float targetY, float targetSpeedX, float targetSpeedY, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake);
    SUPPORTED_10EN_11EN_STEAM static void SteerAICarWithPhysics_OnlyMission(CVehicle *vehicle, float *steerAngle, float *gasPedal, float *breakPedal, bool *bHandBrake);
    SUPPORTED_10EN_11EN_STEAM static void SwitchVehicleToRealPhysics(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static float TestCollisionBetween2MovingRects(CVehicle *vehicleA, CVehicle *vehicleB, float projectionX, float projectionY, CVector *pForwardA, CVector *pForwardB, unsigned char id);
    SUPPORTED_10EN_11EN_STEAM static bool ThisRoadObjectCouldMove(unsigned int objectModelIndex);
    SUPPORTED_10EN_11EN_STEAM static void UpdateCarCount(CVehicle *vehicle, bool remove);
    SUPPORTED_10EN_11EN_STEAM static void UpdateCarOnRails(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void WeaveForObject(CEntity *entity, CVehicle *vehicle, float *pAngleToWeaveLeft, float *pAngleToWeaveRight);
    SUPPORTED_10EN_11EN_STEAM static void WeaveForOtherCar(CEntity *entity, CVehicle *vehicle, float *pAngleToWeaveLeft, float *pAngleToWeaveRight);
    SUPPORTED_10EN_11EN_STEAM static void WeaveForPed(CEntity *entity, CVehicle *vehicle, float *pAngleToWeaveLeft, float *pAngleToWeaveRight);
    SUPPORTED_10EN_11EN_STEAM static void WeaveThroughCarsSectorList(CPtrList &list, CVehicle *vehicle, CPhysical *target, float x_inf, float y_inf, float x_sup, float y_sup, float *pAngleToWeaveLeft, float *pAngleToWeaveRight);
    SUPPORTED_10EN_11EN_STEAM static void WeaveThroughObjectsSectorList(CPtrList &list, CVehicle *vehicle, float x_inf, float y_inf, float x_sup, float y_sup, float *pAngleToWeaveLeft, float *pAngleToWeaveRight);
    SUPPORTED_10EN_11EN_STEAM static void WeaveThroughPedsSectorList(CPtrList &list, CVehicle *vehicle, CPhysical *target, float x_inf, float y_inf, float x_sup, float y_sup, float *pAngleToWeaveLeft, float *pAngleToWeaveRight);
};

SUPPORTED_10EN_11EN_STEAM extern CVehicle *(&apCarsToKeep)[2]; // CVehicle *apCarsToKeep[2]
SUPPORTED_10EN_11EN_STEAM extern unsigned int(&aCarsToKeepTime)[2]; // unsigned int aCarsToKeepTime[2]

#include "meta/meta.CCarCtrl.h"
