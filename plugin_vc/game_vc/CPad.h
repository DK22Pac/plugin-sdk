/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CControllerState.h"
#include "CKeyboardState.h"
#include "CMouseControllerState.h"

class PLUGIN_API CPad {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPad)

public:
    CControllerState NewState;
    CControllerState OldState;
    short SteeringLeftRightBuffer[10];
    int DrunkDrivingBufferUsed;
    CControllerState PCTempKeyState;
    CControllerState PCTempJoyState;
    CControllerState PCTempMouseState;
    short field_EA;
    short Mode;
    short ShakeDur;
    short DisablePlayerControls;
    char ShakeFreq;
    char bHornHistory[5];
    char iCurrHornHistory;
    char JustOutOfFrontEnd;
    char bApplyBrakes;
    char field_FB[12];
private:
    char _pad107;
public:
    int LastTimeTouched;
    int AverageWeapon;
    int AverageEntries;

    SUPPORTED_10EN_11EN_STEAM static CKeyboardState &NewKeyState;
    SUPPORTED_10EN_11EN_STEAM static CMouseControllerState &PCTempMouseControllerState;
    SUPPORTED_10EN_11EN_STEAM static CKeyboardState &OldKeyState;
    SUPPORTED_10EN_11EN_STEAM static CKeyboardState &TempKeyState;
    SUPPORTED_10EN_11EN_STEAM static CMouseControllerState &OldMouseControllerState;
    SUPPORTED_10EN_11EN_STEAM static CMouseControllerState &NewMouseControllerState;
    SUPPORTED_10EN_11EN_STEAM static char(&KeyBoardCheatString)[30]; // static char KeyBoardCheatString[30]
    SUPPORTED_10EN_11EN_STEAM static bool &m_bMapPadOneToPadTwo;
    SUPPORTED_10EN_11EN_STEAM static bool &bDisplayNoControllerMessage;
    SUPPORTED_10EN_11EN_STEAM static bool &bInvertLook4Pad;
    SUPPORTED_10EN_11EN_STEAM static bool &bHasPlayerCheated;
    SUPPORTED_10EN_11EN_STEAM static bool &bObsoleteControllerMessage;

    SUPPORTED_10EN_11EN_STEAM void AddToPCCheatString(char character);
    SUPPORTED_10EN_11EN_STEAM bool CarGunJustDown();
    SUPPORTED_10EN_11EN_STEAM bool ChangeStationJustDown();
    SUPPORTED_10EN_11EN_STEAM void Clear(char bDisablePlayerControls);
    SUPPORTED_10EN_11EN_STEAM bool CollectPickupJustDown();
    SUPPORTED_10EN_11EN_STEAM bool CycleCameraModeDownJustDown();
    SUPPORTED_10EN_11EN_STEAM bool CycleCameraModeJustDown();
    SUPPORTED_10EN_11EN_STEAM bool CycleCameraModeUpJustDown();
    SUPPORTED_10EN_11EN_STEAM bool CycleWeaponLeftJustDown();
    SUPPORTED_10EN_11EN_STEAM bool CycleWeaponRightJustDown();
    SUPPORTED_10EN_11EN_STEAM bool DuckJustDown();
    SUPPORTED_10EN_11EN_STEAM bool ExitVehicleJustDown();
    SUPPORTED_10EN_11EN_STEAM bool ForceCameraBehindPlayer();
    SUPPORTED_10EN_11EN_STEAM short GetAccelerate();
    SUPPORTED_10EN_11EN_STEAM short GetAnalogueLeftRight();
    SUPPORTED_10EN_11EN_STEAM bool GetAnaloguePadDown();
    SUPPORTED_10EN_11EN_STEAM bool GetAnaloguePadLeft();
    SUPPORTED_10EN_11EN_STEAM bool GetAnaloguePadLeftJustUp();
    SUPPORTED_10EN_11EN_STEAM bool GetAnaloguePadRight();
    SUPPORTED_10EN_11EN_STEAM bool GetAnaloguePadRightJustUp();
    SUPPORTED_10EN_11EN_STEAM bool GetAnaloguePadUp();
    SUPPORTED_10EN_11EN_STEAM short GetAnalogueUpDown();
    SUPPORTED_10EN_11EN_STEAM short GetBrake();
    SUPPORTED_10EN_11EN_STEAM bool GetCarGunFired();
    SUPPORTED_10EN_11EN_STEAM short GetCarGunLeftRight();
    SUPPORTED_10EN_11EN_STEAM short GetCarGunUpDown();
    SUPPORTED_10EN_11EN_STEAM bool GetExitVehicle();
    SUPPORTED_10EN_11EN_STEAM short GetHandBrake();
    SUPPORTED_10EN_11EN_STEAM bool GetHorn();
    SUPPORTED_10EN_11EN_STEAM bool GetLookBehindForCar();
    SUPPORTED_10EN_11EN_STEAM bool GetLookBehindForPed();
    SUPPORTED_10EN_11EN_STEAM bool GetLookLeft();
    SUPPORTED_10EN_11EN_STEAM bool GetLookRight();
    SUPPORTED_10EN_11EN_STEAM short GetPedWalkLeftRight();
    SUPPORTED_10EN_11EN_STEAM short GetPedWalkUpDown();
    SUPPORTED_10EN_11EN_STEAM bool GetSprint();
    SUPPORTED_10EN_11EN_STEAM short GetSteeringLeftRight();
    SUPPORTED_10EN_11EN_STEAM short GetSteeringUpDown();
    SUPPORTED_10EN_11EN_STEAM bool GetTarget();
    SUPPORTED_10EN_11EN_STEAM short GetWeapon();
    SUPPORTED_10EN_11EN_STEAM bool HornJustDown();
    SUPPORTED_10EN_11EN_STEAM int InputHowLongAgo();
    SUPPORTED_10EN_11EN_STEAM bool JumpJustDown();
    SUPPORTED_10EN_11EN_STEAM int LookAroundLeftRight();
    SUPPORTED_10EN_11EN_STEAM int LookAroundUpDown();
    SUPPORTED_10EN_11EN_STEAM CControllerState ReconcileTwoControllersInput(CControllerState const &controller1, CControllerState const &controller2);
    SUPPORTED_10EN_11EN_STEAM void ResetAverageWeapon();
    SUPPORTED_10EN_11EN_STEAM void SetDrunkInputDelay(int bEnable);
    SUPPORTED_10EN_11EN_STEAM bool ShiftTargetLeftJustDown();
    SUPPORTED_10EN_11EN_STEAM bool ShiftTargetRightJustDown();
    SUPPORTED_10EN_11EN_STEAM int SniperModeLookLeftRight();
    SUPPORTED_10EN_11EN_STEAM int SniperModeLookUpDown();
    SUPPORTED_10EN_11EN_STEAM bool SniperZoomIn();
    SUPPORTED_10EN_11EN_STEAM bool SniperZoomOut();
    SUPPORTED_10EN_11EN_STEAM void StartShake(short duration, unsigned char frequency);
    SUPPORTED_10EN_11EN_STEAM void StopShaking(int a1);
    SUPPORTED_10EN_11EN_STEAM bool TargetJustDown();
    SUPPORTED_10EN_11EN_STEAM void Update(int a2);
    SUPPORTED_10EN_11EN_STEAM bool WeaponJustDown();

    SUPPORTED_10EN_11EN_STEAM static void ClearMouseHistory();
    //! dummy function
    SUPPORTED_10EN_11EN_STEAM static void DoCheats();
    SUPPORTED_10EN_11EN_STEAM static void EditCodesForControls(int *outKeyCode, int a2);
    SUPPORTED_10EN_11EN_STEAM static void FixPadsAfterSave();
    SUPPORTED_10EN_11EN_STEAM static CPad *GetPad(int padNumber);
    SUPPORTED_10EN_11EN_STEAM static void PrintErrorMessage();
    SUPPORTED_10EN_11EN_STEAM static void ResetCheats();
    //! dummy function
    SUPPORTED_10EN_11EN_STEAM static void StopPadsShaking();
    SUPPORTED_10EN_11EN_STEAM static void UpdateMouse();
    SUPPORTED_10EN_11EN_STEAM static void UpdatePads();
};

SUPPORTED_10EN_11EN_STEAM extern CPad(&Pads)[2]; // CPad Pads[2]

VALIDATE_SIZE(CPad, 0x114);

#include "meta/meta.CPad.h"
