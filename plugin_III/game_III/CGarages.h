/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CGarage.h"

class CGarages {
public:
    // static variables
    static CGarage *aGarages; // [32] max
    static int&BankVansCollected;
    static bool &BombsAreFree;
    static bool &RespraysAreFree;
    static int&CarsCollected;
    static int&CarTypesCollected;
    static int &CrushedCarId;
    static unsigned int &LastTimeHelpMessage;
    static int&MessageNumberInString;
    static char *MessageIDString;
    static int&MessageNumberInString2;
    static unsigned int &MessageStartTime;
    static unsigned int &MessageEndTime;
    static unsigned int &NumGarages;
    static bool &PlayerInGarage;
    static int&PoliceCarsCollected;
    static unsigned int &GarageToBeTidied;
    static CStoredCar *aCarsInSafeHouse1;
    static CStoredCar *aCarsInSafeHouse2;
    static CStoredCar *aCarsInSafeHouse3;
    static bool &bCamShouldBeOutside;

    // static functions
    static void ActivateGarage(short index);
    //return CGarages::NumGarages++
    static int AddOne(CVector pointFront, CVector pointBack, unsigned char type, unsigned int vehicleModelIndex);
    //return CGarages::bCamShouldBeOutside
    static bool CameraShouldBeOutside();
    static void ChangeGarageType(short index, unsigned char type, unsigned int vehicleModelIndex);
    static void CloseHideOutGaragesBeforeSave();
    static int CountCarsInHideoutGarage(unsigned char type);
    static void DeActivateGarage(short index);
    static float FindDoorHeightForMI(unsigned int vehicleModelIndex);
    static int FindMaxNumStoredCarsForGarage(unsigned char type);
    static void GivePlayerDetonator();
    static bool HasCarBeenCrushed(int vehicleModelIndex);
    static bool HasCarBeenDroppedOffYet(short index);
    static bool HasImportExportGarageCollectedThisCar(short index, int vehicleModelIndex);
    static bool HasResprayHappened(short index);
    static bool HasThisCarBeenCollected(short index, int vehicleModelIndex);
    static void Init();
    static bool IsCarSprayable(CAutomobile* car);
    static bool IsGarageClosed(short index);
    static bool IsGarageOpen(short index);
    static bool IsModelIndexADoor(unsigned int modelIndexDoor);
    static bool IsPointInAGarageCameraZone(CVector point);
    static bool IsPointWithinAnyGarage(CVector& point);
    static bool IsPointWithinHideOutGarage(CVector& point);
    static bool IsThisCarWithinGarageArea(short index, CEntity* entity);
    static void Load(unsigned char* bufferPointer, unsigned int structSize);
    static void PlayerArrestedOrDied();
    static void PrintMessages();
    static int QueryCarsCollected(short index);
    static void Save(unsigned char* bufferPointer, unsigned int* structSize);
    static void SetAllDoorsBackToOriginalHeight();
    static void SetGarageDoorToRotate(short index);
    static void SetLeaveCameraForThisGarage(short index);
    static void SetTargetCarForMissionGarage(short index, CAutomobile* car);
    static void Shutdown();
    static void TriggerMessage(char* text, short numberInString, unsigned short time, short numberInString2);
    static void Update();
};

extern int *hGarages;
