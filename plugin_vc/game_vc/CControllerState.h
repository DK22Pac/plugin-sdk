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
#pragma pack(pop)

VALIDATE_SIZE(CControllerState, 0x2A);

#include "meta/meta.CControllerState.h"
