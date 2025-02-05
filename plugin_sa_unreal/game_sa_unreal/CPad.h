/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct CControllerState {
    int16_t LeftStickX;
    int16_t LeftStickY;
    int16_t RightStickX;
    int16_t RightStickY;
    int16_t LeftShoulder1;
    int16_t LeftShoulder2;
    int16_t RightShoulder1;
    int16_t RightShoulder2;
    int16_t DPadUp;
    int16_t DPadDown;
    int16_t DPadLeft;
    int16_t DPadRight;
    int16_t Start;
    int16_t Select;
    int16_t ButtonSquare;
    int16_t ButtonTriangle;
    int16_t ButtonCross;
    int16_t ButtonCircle;
    int16_t ShockButtonL;
    int16_t ShockButtonR;
    int16_t m_bChatIndicated;
    int16_t m_bPedWalk;
    int16_t m_bVehicleMouseLook;
    int16_t m_bRadioTrackSkip;
};

VALIDATE_SIZE(CControllerState, 0x30);

class CPad {
public:
    CControllerState NewState;
    CControllerState OldState;
    int32_t currentPadId;
    int16_t SteeringLeftRightBuffer[10];
    int32_t DrunkDrivingBufferUsed;
    CControllerState PCTempKeyState;
    CControllerState PCTempJoyState;
    CControllerState PCTempMouseState;
    uint8_t Phase;
    int16_t ShakeDur;
    uint16_t DisablePlayerControls;
    uint8_t ShakeFreq;
    uint8_t JustOutOfFrontEnd;
    float fCruisingSpeed;
    uint8_t bRhythm;
    uint8_t bWheelie;
    uint8_t bStoppie;
    uint8_t bApplyGas;
    uint8_t bApplyBrake;
    uint8_t bLaneCorrection;
    uint8_t bUsingDebugCamera;
    uint8_t bUsingDebugPlayerFreeze;
    uint8_t bHasCheated;
    uint8_t bDisableForbiddenTerr;
    uint8_t bStopRhythmSprites;
    uint8_t bDoorsLocked;
    uint8_t bRegainControl;
    float fBikeStickY;
    uint8_t bApplyBrakes;
    uint8_t bDisablePlayerEnterCar;
    uint8_t bDisablePlayerDuck;
    uint8_t bDisablePlayerFireWeapon;
    uint8_t bDisablePlayerFireWeaponWithL1;
    uint8_t bDisablePlayerCycleWeapon;
    uint8_t bDisablePlayerJump;
    uint8_t bDisablePlayerDisplayVitalStats;
    uint32_t LastTimeTouched;
    int32_t AverageWeapon;
    int32_t AverageEntries;
    uint32_t NoShakeBeforeThis;
    uint8_t NoShakeFreq;
    uint8_t bHasJetPack;
    uint8_t bRocketLocked;
    uint8_t bTrainPassenger;
    uint8_t bSavedForTrain;
    uint8_t bSetSteeringMode;
    uint8_t bSetTouchLayout;
    float m_fAccelX;
    float m_fAccelY;
    float m_fAccelZ;
};

VALIDATE_SIZE(CPad, 0x158);

extern CPad* Pads;
