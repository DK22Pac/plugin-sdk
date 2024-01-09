/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eGamePadButtons {
    BUTTON_LEFT_STICK_X,
    BUTTON_LEFT_STICK_Y,
    BUTTON_RIGHT_STICK_X,
    BUTTON_RIGHT_STICK_Y,
    BUTTON_BUMPER_LEFT = 4,
    BUTTON_TRIGGER_LEFT = 5,
    BUTTON_BUMPER_RIGHT = 6,
    BUTTON_TRIGGER_RIGHT = 7,
    BUTTON_DPAD_UP = 8,
    BUTTON_DPAD_DOWN = 9,
    BUTTON_DPAD_LEFT = 10,
    BUTTON_DPAD_RIGHT = 11,
    BUTTON_START = 12,
    BUTTON_SELECT = 13,
    BUTTON_SQUARE = 14,
    BUTTON_TRIANGLE = 15,
    BUTTON_CROSS = 16,
    BUTTON_CIRCLE = 17,
    BUTTON_STICK_LEFT = 18,
    BUTTON_STICK_RIGHT = 19
};

class CControllerState {
public:
    int32_t LeftStickX;
    int32_t LeftStickY;
    int32_t RightStickX;
    int32_t RightStickY;
    int32_t LeftShoulder1;
    int32_t LeftShoulder2;
    int32_t ShockButtonL;
    int32_t RightShoulder1;
    int32_t RightShoulder2;
    int32_t ShockButtonR;
    int32_t ButtonSquare;
    int32_t ButtonTriangle;
    int32_t ButtonCross;
    int32_t ButtonCircle;
    int32_t DPadUp;
    int32_t DPadDown;
    int32_t DPadLeft;
    int32_t DPadRight;
    int32_t Start;
    int32_t Select;

public:
    void Clear();
};

VALIDATE_SIZE(CControllerState, 0x50);

class CPad {
public:
    int32_t* field_1;
    CControllerState NewState;
    CControllerState OldState;
    int32_t* field_4;
    int32_t ShakeDur;
    uint32_t ShakeFreq;
    uint32_t NoShakeBeforeThis;
    uint32_t NoShakeFreq;
    uint8_t field_5;
    uint8_t field_6;
    uint8_t field_7;
    uint8_t field_8;

public:
    static int32_t& CurrentPad;

public:
    void StartShake(uint32_t shakeDuration, int32_t shakeFrequency, uint32_t shakeDuration1, int32_t shakeFrequency1, int32_t shakeTime, bool force);
    void Clear();

public:
    static CPad* GetPad(int32_t padId);
    static bool HasPadInHands();
    static int32_t IsButtonPressed(int32_t padId, uint32_t buttonId);
    static bool IsButtonJustPressed(int32_t padId, uint32_t buttonId);

    static bool IsMouseButtonJustPressed(int32_t buttonId);
    static bool IsMouseButtonPressed(int32_t buttonId);

    static void GetMouseWheel(int32_t* wheel);

    static float* GetMousePos(float* x, float* y);
    static void GetMouseInput(int32_t* x, int32_t* y);

    static void StopPadsShaking();
};

VALIDATE_SIZE(CPad, 0xBC);

extern CPad* Pads;
