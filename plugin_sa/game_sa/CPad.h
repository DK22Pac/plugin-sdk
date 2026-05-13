/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rw/skeleton.h"

// Set values to 128 unless otherwise specified
class CControllerState {
public:
    signed short LeftStickX; // move/steer left (-128?)/right (+128)
    signed short LeftStickY; // move back(+128)/forwards(-128?)
    signed short RightStickX; // numpad 6(+128)/numpad 4(-128?)
    signed short RightStickY;
    
    signed short LeftShoulder1;
    signed short LeftShoulder2;
    signed short RightShoulder1; // target / hand brake
    signed short RightShoulder2; 
    
    signed short DPadUp; // radio change up           Next radio station / Call gang forward/Recruit gang member
    signed short DPadDown; // radio change down       Previous radio station / Gang stay back/Release gang (hold)
    signed short DPadLeft; //                         Skip trip/Action / Negative talk reply
    signed short DPadRight; //                        Next user MP3 track / Positive talk reply
    
    signed short Start;                             //Pause
    signed short Select;                            //Camera modes
    
    signed short ButtonSquare; // jump / reverse      Break/Reverse / Jump/Climb
    signed short ButtonTriangle; // get in/out        Exit vehicle / Enter veihcle
    signed short ButtonCross; // sprint / accelerate  Accelerate / Sprint/Swim
    signed short ButtonCircle; // fire                Fire weapon
    
    signed short ShockButtonL;
    signed short ShockButtonR; // look behind
    
    signed short m_bChatIndicated;
    signed short m_bPedWalk;
    signed short m_bVehicleMouseLook;
    signed short m_bRadioTrackSkip;
};
VALIDATE_OFFSET(CControllerState, LeftStickX, 0x0);
VALIDATE_OFFSET(CControllerState, LeftStickY, 0x2);
VALIDATE_OFFSET(CControllerState, RightStickX, 0x4);
VALIDATE_OFFSET(CControllerState, RightStickY, 0x6);
VALIDATE_OFFSET(CControllerState, LeftShoulder1, 0x8);
VALIDATE_OFFSET(CControllerState, LeftShoulder2, 0xA);
VALIDATE_OFFSET(CControllerState, RightShoulder1, 0xC);
VALIDATE_OFFSET(CControllerState, RightShoulder2, 0xE);
VALIDATE_OFFSET(CControllerState, DPadUp, 0x10);
VALIDATE_OFFSET(CControllerState, DPadDown, 0x12);
VALIDATE_OFFSET(CControllerState, DPadLeft, 0x14);
VALIDATE_OFFSET(CControllerState, DPadRight, 0x16);
VALIDATE_OFFSET(CControllerState, Start, 0x18);
VALIDATE_OFFSET(CControllerState, Select, 0x1A);
VALIDATE_OFFSET(CControllerState, ButtonSquare, 0x1C);
VALIDATE_OFFSET(CControllerState, ButtonTriangle, 0x1E);
VALIDATE_OFFSET(CControllerState, ButtonCross, 0x20);
VALIDATE_OFFSET(CControllerState, ButtonCircle, 0x22);
VALIDATE_OFFSET(CControllerState, ShockButtonL, 0x24);
VALIDATE_OFFSET(CControllerState, ShockButtonR, 0x26);
VALIDATE_OFFSET(CControllerState, m_bChatIndicated, 0x28);
VALIDATE_OFFSET(CControllerState, m_bPedWalk, 0x2A);
VALIDATE_OFFSET(CControllerState, m_bVehicleMouseLook, 0x2C);
VALIDATE_OFFSET(CControllerState, m_bRadioTrackSkip, 0x2E);
VALIDATE_SIZE(CControllerState, 0x30);


VALIDATE_SIZE(CControllerState, 0x30);


class CMouseControllerState {
public:
    unsigned char lmb;
    unsigned char rmb;
    unsigned char mmb;
    unsigned char wheelUp;
    unsigned char wheelDown;
    unsigned char bmx1;
    unsigned char bmx2;
    char __align;
    float z;
    float x;
    float y;
};
VALIDATE_OFFSET(CMouseControllerState, lmb, 0x0);
VALIDATE_OFFSET(CMouseControllerState, rmb, 0x1);
VALIDATE_OFFSET(CMouseControllerState, mmb, 0x2);
VALIDATE_OFFSET(CMouseControllerState, wheelUp, 0x3);
VALIDATE_OFFSET(CMouseControllerState, wheelDown, 0x4);
VALIDATE_OFFSET(CMouseControllerState, bmx1, 0x5);
VALIDATE_OFFSET(CMouseControllerState, bmx2, 0x6);
VALIDATE_OFFSET(CMouseControllerState, __align, 0x7);
VALIDATE_OFFSET(CMouseControllerState, z, 0x8);
VALIDATE_OFFSET(CMouseControllerState, x, 0xC);
VALIDATE_OFFSET(CMouseControllerState, y, 0x10);
VALIDATE_SIZE(CMouseControllerState, 0x14);


class CKeyboardState {
public:
    short FKeys[12];
    short standardKeys[256];
    short esc;
    short insert;
    short del;
    short home;
    short end;
    short pgup;
    short pgdn;
    short up;
    short down;
    short left;
    short right;
    short scroll;
    short pause;
    short numlock;
    short div;
    short mul;
    short sub;
    short add;
    short enter;
    short decimal;
    short num1;
    short num2;
    short num3;
    short num4;
    short num5;
    short num6;
    short num7;
    short num8;
    short num9;
    short num0;
    short back;
    short tab;
    short capslock;
    short extenter;
    short lshift;
    short rshift;
    short shift;
    short lctrl;
    short rctrl;
    short lmenu;
    short rmenu;
    short lwin;
    short rwin;
    short apps;
};
VALIDATE_OFFSET(CKeyboardState, FKeys, 0x0);
VALIDATE_OFFSET(CKeyboardState, standardKeys, 0x18);
VALIDATE_OFFSET(CKeyboardState, esc, 0x218);
VALIDATE_OFFSET(CKeyboardState, insert, 0x21A);
VALIDATE_OFFSET(CKeyboardState, del, 0x21C);
VALIDATE_OFFSET(CKeyboardState, home, 0x21E);
VALIDATE_OFFSET(CKeyboardState, end, 0x220);
VALIDATE_OFFSET(CKeyboardState, pgup, 0x222);
VALIDATE_OFFSET(CKeyboardState, pgdn, 0x224);
VALIDATE_OFFSET(CKeyboardState, up, 0x226);
VALIDATE_OFFSET(CKeyboardState, down, 0x228);
VALIDATE_OFFSET(CKeyboardState, left, 0x22A);
VALIDATE_OFFSET(CKeyboardState, right, 0x22C);
VALIDATE_OFFSET(CKeyboardState, scroll, 0x22E);
VALIDATE_OFFSET(CKeyboardState, pause, 0x230);
VALIDATE_OFFSET(CKeyboardState, numlock, 0x232);
VALIDATE_OFFSET(CKeyboardState, div, 0x234);
VALIDATE_OFFSET(CKeyboardState, mul, 0x236);
VALIDATE_OFFSET(CKeyboardState, sub, 0x238);
VALIDATE_OFFSET(CKeyboardState, add, 0x23A);
VALIDATE_OFFSET(CKeyboardState, enter, 0x23C);
VALIDATE_OFFSET(CKeyboardState, decimal, 0x23E);
VALIDATE_OFFSET(CKeyboardState, num1, 0x240);
VALIDATE_OFFSET(CKeyboardState, num2, 0x242);
VALIDATE_OFFSET(CKeyboardState, num3, 0x244);
VALIDATE_OFFSET(CKeyboardState, num4, 0x246);
VALIDATE_OFFSET(CKeyboardState, num5, 0x248);
VALIDATE_OFFSET(CKeyboardState, num6, 0x24A);
VALIDATE_OFFSET(CKeyboardState, num7, 0x24C);
VALIDATE_OFFSET(CKeyboardState, num8, 0x24E);
VALIDATE_OFFSET(CKeyboardState, num9, 0x250);
VALIDATE_OFFSET(CKeyboardState, num0, 0x252);
VALIDATE_OFFSET(CKeyboardState, back, 0x254);
VALIDATE_OFFSET(CKeyboardState, tab, 0x256);
VALIDATE_OFFSET(CKeyboardState, capslock, 0x258);
VALIDATE_OFFSET(CKeyboardState, extenter, 0x25A);
VALIDATE_OFFSET(CKeyboardState, lshift, 0x25C);
VALIDATE_OFFSET(CKeyboardState, rshift, 0x25E);
VALIDATE_OFFSET(CKeyboardState, shift, 0x260);
VALIDATE_OFFSET(CKeyboardState, lctrl, 0x262);
VALIDATE_OFFSET(CKeyboardState, rctrl, 0x264);
VALIDATE_OFFSET(CKeyboardState, lmenu, 0x266);
VALIDATE_OFFSET(CKeyboardState, rmenu, 0x268);
VALIDATE_OFFSET(CKeyboardState, lwin, 0x26A);
VALIDATE_OFFSET(CKeyboardState, rwin, 0x26C);
VALIDATE_OFFSET(CKeyboardState, apps, 0x26E);
VALIDATE_SIZE(CKeyboardState, 0x270);


class CPed;


class CPad {
public:
    CControllerState NewState;
    CControllerState OldState;
    short SteeringLeftRightBuffer[10];
    int DrunkDrivingBufferUsed;
    CControllerState PCTempKeyState;
    CControllerState PCTempJoyState;
    CControllerState PCTempMouseState;
    char Phase;
private:
    char _pad109;
public:
    short Mode;
    short ShakeDur;

    union
    {
        struct
        {
            unsigned short unk1 : 1; // eCamMode::MODE_1STPERSON leftover?
            unsigned short unk2 : 1; // unused
            unsigned short bPlayerAwaitsInGarage : 1;
            unsigned short bPlayerOnInteriorTransition : 1;
            unsigned short unk3 : 1; // unused
            unsigned short bPlayerSafe : 1;
            unsigned short bPlayerTalksOnPhone : 1; // bPlayerSafeForPhoneCall?
            unsigned short bPlayerSafeForCutscene : 1;
            unsigned short bPlayerSkipsToDestination : 1; // bPlayerSafeForDestination?
        };
        unsigned short DisablePlayerControls; 
    };
    char ShakeFreq;
    char bHornHistory[5];
    char iCurrHornHistory;
    char JustOutOfFrontEnd;
    char bApplyBrakes;
    char bDisablePlayerEnterCar;
    char bDisablePlayerDuck;
    char bDisablePlayerFireWeapon;
    char bDisablePlayerFireWeaponWithL1;
    char bDisablePlayerCycleWeapon;
    char bDisablePlayerJump;
    char bDisablePlayerDisplayVitalStats;
    int LastTimeTouched;
    int AverageWeapon;
    int AverageEntries;
    int NoShakeBeforeThis;
    char NoShakeFreq;
private:
    char _pad131[3];
public:

    // Static variables

    // mouse states
    static CMouseControllerState &PCTempMouseControllerState;
    static CMouseControllerState &NewMouseControllerState;
    static CMouseControllerState &OldMouseControllerState;
    static CKeyboardState &NewKeyState;
    static CKeyboardState& OldKeyState;
    // Functions list : Not finished

    CPad();
    void UpdateMouse();
    void ReconcileTwoControllersInput(CControllerState const& controllerA, CControllerState const& controllerB);
    void SetDrunkInputDelay(int delay);
    void StartShake(short time, unsigned char frequency, unsigned int arg2 = 0);
    void StartShake_Distance(short time, unsigned char frequency, float x, float y, float z);
    void StartShake_Train(float x, float y);
    // dummy function
    void ProcessPCSpecificStuff();
    void StopShaking(short arg0);
    static CPad* GetPad(int padNumber);
    short GetSteeringLeftRight();
    short GetSteeringUpDown();
    short GetPedWalkLeftRight();
    short GetPedWalkUpDown();
    bool GetLookLeft();
    bool GetLookRight();
    bool GetLookBehindForCar();
    bool GetLookBehindForPed();
    bool GetHorn();
    bool HornJustDown();
    bool GetHydraulicJump();
    short GetCarGunFired();
    short CarGunJustDown();
    short GetHandBrake();
    short GetBrake();
    bool GetExitVehicle();
    bool ExitVehicleJustDown();
    unsigned char GetMeleeAttack();
    unsigned char MeleeAttackJustDown();
    short GetAccelerate();
    bool GetAccelerateJustDown();
    bool NextStationJustUp();
    bool LastStationJustUp();
    bool CycleWeaponLeftJustDown();
    bool CycleWeaponRightJustDown();
    bool GetTarget();
    bool GetDuck();
    bool DuckJustDown();
    bool GetJump();
    bool JumpJustDown();
    bool GetSprint();
    bool SprintJustDown();
    bool ShiftTargetLeftJustDown();
    bool ShiftTargetRightJustDown();
    short GetDisplayVitalStats(class CPed* ped);
    bool CollectPickupJustDown();
    bool GetForceCameraBehindPlayer();
    bool SniperZoomIn();
    bool SniperZoomOut();
    bool GetGroupControlForward();
    bool GetGroupControlBack();
    bool ConversationYesJustDown();
    bool ConversationNoJustDown();
    bool GroupControlForwardJustDown();
    bool GroupControlBackJustDown();
    void Clear(bool enablePlayerControls, bool resetPhase);
    static void UpdatePads();
    static void ClearMouseHistory();
};
VALIDATE_OFFSET(CPad, NewState, 0x0);
VALIDATE_OFFSET(CPad, OldState, 0x30);
VALIDATE_OFFSET(CPad, SteeringLeftRightBuffer, 0x60);
VALIDATE_OFFSET(CPad, DrunkDrivingBufferUsed, 0x74);
VALIDATE_OFFSET(CPad, PCTempKeyState, 0x78);
VALIDATE_OFFSET(CPad, PCTempJoyState, 0xA8);
VALIDATE_OFFSET(CPad, PCTempMouseState, 0xD8);
VALIDATE_OFFSET(CPad, Phase, 0x108);
VALIDATE_OFFSET(CPad, Mode, 0x10A);
VALIDATE_OFFSET(CPad, ShakeDur, 0x10C);
VALIDATE_OFFSET(CPad, DisablePlayerControls, 0x10E);
VALIDATE_OFFSET(CPad, ShakeFreq, 0x110);
VALIDATE_OFFSET(CPad, bHornHistory, 0x111);
VALIDATE_OFFSET(CPad, iCurrHornHistory, 0x116);
VALIDATE_OFFSET(CPad, JustOutOfFrontEnd, 0x117);
VALIDATE_OFFSET(CPad, bApplyBrakes, 0x118);
VALIDATE_OFFSET(CPad, bDisablePlayerEnterCar, 0x119);
VALIDATE_OFFSET(CPad, bDisablePlayerDuck, 0x11A);
VALIDATE_OFFSET(CPad, bDisablePlayerFireWeapon, 0x11B);
VALIDATE_OFFSET(CPad, bDisablePlayerFireWeaponWithL1, 0x11C);
VALIDATE_OFFSET(CPad, bDisablePlayerCycleWeapon, 0x11D);
VALIDATE_OFFSET(CPad, bDisablePlayerJump, 0x11E);
VALIDATE_OFFSET(CPad, bDisablePlayerDisplayVitalStats, 0x11F);
VALIDATE_OFFSET(CPad, LastTimeTouched, 0x120);
VALIDATE_OFFSET(CPad, AverageWeapon, 0x124);
VALIDATE_OFFSET(CPad, AverageEntries, 0x128);
VALIDATE_OFFSET(CPad, NoShakeBeforeThis, 0x12C);
VALIDATE_OFFSET(CPad, NoShakeFreq, 0x130);
VALIDATE_SIZE(CPad, 0x134);