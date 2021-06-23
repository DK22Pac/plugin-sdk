/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"
#include "CMatrix.h"

enum PLUGIN_API eRecordStatus : unsigned char {
    RECORD_STATUS_NONE = 0,
    RECORD_STATUS_RECORD = 1,
    RECORD_STATUS_PLAYBACK_INIT = 2,
    RECORD_STATUS_PLAYBACK = 3,
    RECORD_STATUS_PLAYBACK_BEFORE_RECORDING = 4
};

class PLUGIN_API CCarStateEachFrame {
public:
    short m_nMoveSpeedX;
    short m_nMoveSpeedY;
    short m_nMoveSpeedZ;
    char m_nRightX;
    char m_nRightY;
    char m_nRightZ;
    char m_nUpX;
    char m_nUpY;
    char m_nUpZ;
    char m_nSteerAngle;
    char m_nGasPedal;
    char m_nBreakPedal;
    bool m_bIsHandbrakeOn;
    CVector m_vecPos;
};

VALIDATE_SIZE(CCarStateEachFrame, 0x1C);

class PLUGIN_API CRecordDataForChase {
public:
    SUPPORTED_10EN_11EN_STEAM static CAutomobile *(&pChaseCars)[20]; // static CAutomobile *pChaseCars[20]
    SUPPORTED_10EN_11EN_STEAM static CCarStateEachFrame *(&pBaseMemForCar)[20]; // static CCarStateEachFrame *pBaseMemForCar[20]
    SUPPORTED_10EN_11EN_STEAM static float &TimeMultiplier;
    SUPPORTED_10EN_11EN_STEAM static float &AnimTime;
    SUPPORTED_10EN_11EN_STEAM static int &FId2;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &AnimStartTime;
    SUPPORTED_10EN_11EN_STEAM static int &PositionChanges;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &CurrentCar;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &Status;

    SUPPORTED_10EN_11EN_STEAM static void CleanUpCarsForChaseScene();
    SUPPORTED_10EN_11EN_STEAM static void CleanUpChaseScene();
    SUPPORTED_10EN_11EN_STEAM static void GiveUsACar(int modelIndex, CVector pos, float angleZ, CAutomobile **pCar, unsigned char prim, unsigned char sec);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void ProcessControlCars();
    SUPPORTED_10EN_11EN_STEAM static void RemoveCarFromChase(int index);
    SUPPORTED_10EN_11EN_STEAM static void RestoreInfoForCar(CAutomobile *car, CCarStateEachFrame *carState, bool stop);
    SUPPORTED_10EN_11EN_STEAM static void RestoreInfoForMatrix(CMatrix &matrix, CCarStateEachFrame *carState);
    SUPPORTED_10EN_11EN_STEAM static void SaveOrRetrieveCarPositions();
    SUPPORTED_10EN_11EN_STEAM static void SaveOrRetrieveDataForThisFrame();
    SUPPORTED_10EN_11EN_STEAM static void SetUpCarsForChaseScene();
    SUPPORTED_10EN_11EN_STEAM static void StartChaseScene(float startTime);
    SUPPORTED_10EN_11EN_STEAM static void StoreInfoForCar(CAutomobile *car, CCarStateEachFrame *carState);
    SUPPORTED_10EN_11EN_STEAM static CVehicle *TurnChaseCarIntoScriptCar(int index);

    inline bool ShouldThisPadBeLeftAlone(unsigned char pad) {
        if (Status == RECORD_STATUS_RECORD)
            return pad != 0;

        return false;
    }
};

SUPPORTED_10EN_11EN_STEAM void RemoveUnusedCollision();

#include "meta/meta.CRecordDataForChase.h"
