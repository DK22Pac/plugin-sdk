/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "tVideo.h"

T_Vid_GetVersion& Vid_GetVersion = *(T_Vid_GetVersion*)0x59501C;
T_Vid_Init_SYS& Vid_Init_SYS = *(T_Vid_Init_SYS*)0x595020;
T_Vid_CheckMode& Vid_CheckMode = *(T_Vid_CheckMode*)0x595024;
T_Vid_FindMode& Vid_FindMode = *(T_Vid_FindMode*)0x595028;
T_Vid_FindFirstMode& Vid_FindFirstMode = *(T_Vid_FindFirstMode*)0x59502C;
T_Vid_FindNextMode& Vid_FindNextMode = *(T_Vid_FindNextMode*)0x595030;
T_Vid_FindDevice& Vid_FindDevice = *(T_Vid_FindDevice*)0x595034;
T_Vid_SetDevice& Vid_SetDevice = *(T_Vid_SetDevice*)0x595038;
T_Vid_CloseScreen& Vid_CloseScreen = *(T_Vid_CloseScreen*)0x59503C;
T_Vid_SetMode& Vid_SetMode = *(T_Vid_SetMode*)0x595040;
T_Vid_FlipBuffers& Vid_FlipBuffers = *(T_Vid_FlipBuffers*)0x595044;
T_Vid_ReleaseSurface& Vid_ReleaseSurface = *(T_Vid_ReleaseSurface*)0x595048;
T_Vid_GrabSurface& Vid_GrabSurface = *(T_Vid_GrabSurface*)0x59504C;
T_Vid_ShutDown_SYS& Vid_ShutDown_SYS = *(T_Vid_ShutDown_SYS*)0x595050;
T_Vid_EnableWrites& Vid_EnableWrites = *(T_Vid_EnableWrites*)0x595054;
T_Vid_DisableWrites& Vid_DisableWrites = *(T_Vid_DisableWrites*)0x595058;
T_Vid_GetSurface& Vid_GetSurface = *(T_Vid_GetSurface*)0x59505C;
T_Vid_FreeSurface& Vid_FreeSurface = *(T_Vid_FreeSurface*)0x595060;
T_Vid_ClearScreen& Vid_ClearScreen = *(T_Vid_ClearScreen*)0x595064;
T_Vid_WindowProc& Vid_WindowProc = *(T_Vid_WindowProc*)0x595068;
T_Vid_InitDLL& Vid_InitDLL = *(T_Vid_InitDLL*)0x59506C;
T_Vid_SetGamma& Vid_SetGamma = *(T_Vid_SetGamma*)0x595070;

tVideo** gVidSys = (tVideo**)0x673D20;

tVideo* GetVideoSystem() {
    return *gVidSys;
}

void ResetVideoDevice() {
    plugin::Call<0x4CC5C0>();
}
