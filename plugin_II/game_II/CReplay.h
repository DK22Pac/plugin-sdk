/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CReplay {
public:
    int field_0;
    int field_4;
    int ButtonForward;
    int ButtonBackward;
    int ButtonLeft;
    int ButtonRight;
    int ButtonAttack;
    int ButtonEnterExit;
    int ButtonHandbrakeJump;
    int ButtonPrevWeapon;
    int ButtonNextWeapon;
    int ButtonSpecial;
    int ButtonSpecial2;
    int field_56;
    int Mode;

public:
    bool IsPlayingBack();
    void SetButton(int button);
    void ClearButton(int button);
    bool GetButton(int button);

};
VALIDATE_OFFSET(CReplay, field_0, 0x0);
VALIDATE_OFFSET(CReplay, field_4, 0x4);
VALIDATE_OFFSET(CReplay, ButtonForward, 0x8);
VALIDATE_OFFSET(CReplay, ButtonBackward, 0xC);
VALIDATE_OFFSET(CReplay, ButtonLeft, 0x10);
VALIDATE_OFFSET(CReplay, ButtonRight, 0x14);
VALIDATE_OFFSET(CReplay, ButtonAttack, 0x18);
VALIDATE_OFFSET(CReplay, ButtonEnterExit, 0x1C);
VALIDATE_OFFSET(CReplay, ButtonHandbrakeJump, 0x20);
VALIDATE_OFFSET(CReplay, ButtonPrevWeapon, 0x24);
VALIDATE_OFFSET(CReplay, ButtonNextWeapon, 0x28);
VALIDATE_OFFSET(CReplay, ButtonSpecial, 0x2C);
VALIDATE_OFFSET(CReplay, ButtonSpecial2, 0x30);
VALIDATE_OFFSET(CReplay, field_56, 0x34);
VALIDATE_OFFSET(CReplay, Mode, 0x38);
VALIDATE_SIZE(CReplay, 0x3C);

extern CReplay* gReplay;
