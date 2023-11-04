/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CKeyboardMgr.h"

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
    uint32_t LeftStickX;
    uint32_t LeftStickY;
    uint32_t RightStickX;
    uint32_t RightStickY;
    uint32_t LeftShoulder1;
    uint32_t LeftShoulder2;
    uint32_t ShockButtonL;
    uint32_t RightShoulder1;
    uint32_t RightShoulder2;
    uint32_t ShockButtonR;
    uint32_t ButtonSquare;
    uint32_t ButtonTriangle;
    uint32_t ButtonCross;
    uint32_t ButtonCircle;
    uint32_t DPadUp;
    uint32_t DPadDown;
    uint32_t DPadLeft;
    uint32_t DPadRight;
    uint32_t Start;
    uint32_t Select;

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
    static CKeyboardMgr& KeyboardMgr;
    static float& MousePosX;
    static float& MousePosY;
    static int32_t* NewMouseControllerState;
    static int32_t* OldMouseControllerState;
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
