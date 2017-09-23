/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"

#pragma pack(push, 1)
struct CMouseState
{
    char lmb;
    char rmb;
    char mmb;
    char wheelUp;
    char wheelDown;
    char bmx1;
    char bmx2;
    char __padding;
    long X;
    long Y;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct CKeyState
{
    short standardKey;
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
#pragma pack(pop)

#pragma pack(push, 1)
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
#pragma pack(pop)

#pragma pack(push, 1)
class CPad {
public:
    CControllerState NewState;
    CControllerState OldState;

public:
    static CMouseState &PreviousMouseState;
    static CMouseState &CurrentMouseState;
    static CKeyState &CurrentKeyState;

    static CPad * GetPad(int padNumber);

    bool CycleCameraModeJustDown();

    bool GetTarget();

    bool TargetJustDown();

    bool GetAnaloguePadLeft();
    bool GetAnaloguePadRight();

    bool GetAnaloguePadUp();
    bool GetAnaloguePadDown();
    bool GetSprint();
    bool GetCarGunFired();
    bool GetLookRight();
    bool GetLookLeft();
    bool ForceCameraBehindPlayer();

};
#pragma pack(pop)