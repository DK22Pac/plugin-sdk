/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "RenderWare.h"

class PLUGIN_API CCarGenerator
{
public:
    int mi;
    RwV3d pos;
    int angle;
    __int16 color1;
    __int16 color2;
    char alarm;
    char doorLock;
    char field_1A;
    char gap_1B[1];
    __int16 field_1C;
    __int16 field_1E;
    int time;
    int ProcessedVehicleHandle;
    __int16 field_28;
    char field_2A;
    char __padding;
    
    //funcs

    bool CheckForBlockage(int arg0);
    bool CheckIfWithinRangeOfAnyPlayers();
    void DoInternalProcessing();
    void Process();
    int Setup(float arg0, float arg1, float arg2, float arg3, int arg4, short arg5, short arg6, unsigned char arg7, unsigned char arg8, unsigned char arg9, unsigned short arg10, unsigned short arg11);
    void SwitchOff();
    int SwitchOn();
};

VALIDATE_SIZE(CCarGenerator, 0x2C);