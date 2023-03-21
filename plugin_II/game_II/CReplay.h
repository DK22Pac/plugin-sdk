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

extern CReplay* gReplay;
