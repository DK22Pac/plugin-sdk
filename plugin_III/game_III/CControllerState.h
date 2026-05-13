/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

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
    
    //funcs
    void Clear();
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
VALIDATE_SIZE(CControllerState, 0x2A);