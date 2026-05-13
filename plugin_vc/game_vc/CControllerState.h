/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

#pragma pack(push, 1)
class PLUGIN_API CControllerState {
public:
    short LeftStickX;
    short LeftStickY;
    short RightStickX;
    short RightStickY;
    short LeftShoulder1;
    short LeftShoulder2;
    short RightShoulder1;
    short RightShoulder2;
    short DPadUp;
    short DPadDown;
    short DPadLeft;
    short DPadRight;
    short Start;
    short Select;
    short ButtonSquare;
    short ButtonTriangle;
    short ButtonCross;
    short ButtonCircle;
    short ShockButtonL;
    short ShockButtonR;
    short RadioTrackSkip;

    SUPPORTED_10EN_11EN_STEAM bool CheckForInput();
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
VALIDATE_OFFSET(CControllerState, RadioTrackSkip, 0x28);
VALIDATE_SIZE(CControllerState, 0x2A);
#pragma pack(pop)

VALIDATE_SIZE(CControllerState, 0x2A);

#include "meta/meta.CControllerState.h"
