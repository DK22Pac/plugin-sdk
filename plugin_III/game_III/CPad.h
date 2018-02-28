/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMouseControllerState.h"
#include "CKeyboardState.h"
#include "CControllerState.h"

class CPad {
public:
    CControllerState NewState;
    CControllerState OldState;
    CControllerState PCTempKeyState;
    CControllerState PCTempJoyState;
    CControllerState PCTempMouseState;
    short wordD2;
    short m_nMode;
    short m_nShakeDur;
    char ShakeFreq;
    char byteD9;
    char byteDA;
    char byteDB;
    char byteDC;
    char byteDD;
    char byteDE;
    bool m_bDisablePlayerControls;
    char byteE0;
    char gapE1[15];
    int dwordF0;
    int dwordF4;
    int dwordF8;
        
    //variables
    static short &ReconState;
    static short &GetAnaloguePadUp_oldfStickY;
    static short &GetAnaloguePadDown_oldfStickY;
    static short &GetAnaloguePadLeft_oldfStickX;
    static short &GetAnaloguePadRight_oldfStickX;
    static short &GetAnaloguePadLeftJustUp_oldfStickX;
    static short &GetAnaloguePadRightJustUp_oldfStickX;

    static CKeyboardState &NewKeyState;
    static CKeyboardState &OldKeyState;
    static CKeyboardState &TempKeyState;

    static char *KeyBoardCheatString;
    static bool &m_bMapPadOneToPadTwo;
    static bool &bDisplayNoControllerMessage;
    static bool &bObsoleteControllerMessage;

    static CMouseControllerState &PCTempMouseControllerState;
    static CMouseControllerState &NewMouseControllerState;
    static CMouseControllerState &OldMouseControllerState;

    //funcs

    void AddToPCCheatString(char name);
    CPad();
    bool CarGunJustDown();
    bool ChangeStationJustDown();
    void Clear(bool enable);
    void ClearMouseHistory();
    bool CycleCameraModeDownJustDown();
    bool CycleCameraModeUpJustDown();
    bool CycleWeaponLeftJustDown();
    bool CycleWeaponRightJustDown();
    void DoCheats(short arg0);
    static void DoCheats();
    static void EditCodesForControls(int* arg0);
    static void EditString(char* name, int arg1);
    bool ExitVehicleJustDown();
    bool ForceCameraBehindPlayer();
    short GetAccelerate();
    static bool GetAnaloguePadDown();
    static bool GetAnaloguePadLeft();
    static bool GetAnaloguePadLeftJustUp();
    static bool GetAnaloguePadRight();
    static bool GetAnaloguePadRightJustUp();
    static bool GetAnaloguePadUp();
    short GetAnalogueUpDown();
    short GetBrake();
    bool GetCarGunFired();
    short GetCarGunLeftRight();
    short GetCarGunUpDown();
    bool GetExitVehicle();
    short GetHandBrake();
    bool GetHorn();
    bool GetLookBehindForCar();
    bool GetLookBehindForPed();
    bool GetLookLeft();
    bool GetLookRight();
    static CPad* GetPad(int padNumber);
    short GetPedWalkLeftRight();
    short GetPedWalkUpDown();
    bool GetSprint();
    short GetSteeringLeftRight();
    short GetSteeringUpDown();
    bool GetTarget();
    bool GetWeapon();
    bool HornJustDown();
    bool JumpJustDown();
    int LookAroundLeftRight();
    int LookAroundUpDown();
    static void PrintErrorMessage();
    void ProcessPCSpecificStuff();
    void ReconcileTwoControllersInput(CControllerState const& controllerA, CControllerState const& controllerB);
    void ResetAverageWeapon();
    static void ResetCheats();
    bool ShiftTargetLeftJustDown();
    bool ShiftTargetRightJustDown();
    short SniperModeLookLeftRight();
    short SniperModeLookUpDown();
    bool SniperZoomIn();
    bool SniperZoomOut();
    void StartShake(short time, unsigned char frequency);
    void StartShake_Distance(short time, unsigned char frequency, float x, float y, float z);
    void StartShake_Train(float x, float y);
    static void StopPadsShaking();
    void StopShaking(short arg0);
    bool TargetJustDown();
    void Update();
    void UpdateMouse();
    static void UpdatePads();
    bool WeaponJustDown();
    ~CPad();
};

VALIDATE_SIZE(CPad, 0xFC);