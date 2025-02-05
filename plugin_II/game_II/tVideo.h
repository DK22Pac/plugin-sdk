/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include <ddraw.h>
#include <d3d.h>

struct tDevice {
    unsigned long id;
    unsigned long flags;
    char* driverName;
    char* driverDesc;
    tDevice* next;
    GUID* guid;
    GUID field_18;
    unsigned long totalVideoMemory;
    unsigned long buffer;
};

struct tDisplayMode {
    unsigned long displayModeIndex;
    unsigned long deviceId;
    unsigned long width;
    unsigned long height;
    unsigned long pitch;
    unsigned long bits;
    unsigned long field_18;
    unsigned long field_1C;
    unsigned long field_20;
    unsigned long field_24;
    unsigned long field_28;
    unsigned long field_2C;
    unsigned long field_30;
    unsigned long field_34;
    tDisplayMode* field_38;
    unsigned long field_3C;
};

struct tVidVersion {
    unsigned long version;
    char versionString[255];
};

struct tVideoFunctions;

struct tVideo {
    unsigned long field_0;
    unsigned long flags;
    unsigned long width;
    unsigned long height;
    unsigned long bits;
    unsigned long displayMode;
    unsigned long field_18;
    unsigned long field_1C;
    unsigned long field_20;
    tDisplayMode* field_24;
    tDisplayMode* field_28;
    tDevice* field_2C;
    tDevice* field_30;
    unsigned long field_34;
    unsigned long field_38;
    tDisplayMode* field_3C;
    unsigned long full_screen;
    unsigned long field_44;
    unsigned long field_48;
    unsigned long field_4C;
    void* pixels;
    unsigned long pitch;
    unsigned long field_58;
    unsigned long field_5C;
    unsigned long field_60;
    unsigned long field_64;
    unsigned long field_68;
    unsigned long field_6C;
    unsigned long field_70;
    unsigned long field_74;
    unsigned long field_78;
    HINSTANCE handle;
    unsigned long activeMode;
    tVideoFunctions* field_84;
    unsigned long lastError;
    IDirectDraw7* ddraw7;
    char buffer[144];
    IDirectDraw4* ddraw4;
    GUID field_124;
    IDirectDrawSurface4* surfacePrimary;
    IDirectDrawSurface4* surface;
    DDSURFACEDESC2 surfaceDesc;
    LPDIRECTDRAWCLIPPER clipper;
    unsigned long field_1BC;
    unsigned long field_1C0;
    unsigned long field_1C4;
    DDCAPS caps;
    DDCAPS field_344;
    HWND hwnd;
};

typedef tVidVersion(__stdcall* T_Vid_GetVersion)();
typedef tVideo(__stdcall* T_Vid_Init_SYS)(HINSTANCE hInstance, unsigned short flags);
typedef int(__stdcall* T_Vid_CheckMode)(tVideo* pVideoDriver, int width, int height, int rgbBitCount);
typedef tDevice(__stdcall* T_Vid_FindDevice)(tVideo* pVideoDriver, int deviceId);
typedef tDisplayMode(__stdcall* T_Vid_FindMode)(tVideo* pVideoDriver, int mode);
typedef int(__stdcall* T_Vid_FindFirstMode)(tVideo* pVideoDriver, int rgbBitCountFilter);
typedef int(__stdcall* T_Vid_FindNextMode)(tVideo* pVideoDriver);
typedef void(__stdcall* T_Vid_CloseScreen)(tVideo* pVideoDriver);
typedef int(__stdcall* T_Vid_SetDevice)(tVideo* pVideoDriver, int deviceId);
typedef int(__stdcall* T_Vid_SetMode)(tVideo* pVideoDriver, HWND hWnd, int modeId);
typedef void(__stdcall* T_Vid_GrabSurface)(tVideo* pVideoDriver);
typedef void(__stdcall* T_Vid_ReleaseSurface)(tVideo* pVideoDriver);
typedef void(__stdcall* T_Vid_FlipBuffers)(tVideo* pVideoDriver);
typedef void(__stdcall* T_Vid_ShutDown_SYS)(tVideo* pVideoDriver);
typedef int(__stdcall* T_Vid_EnableWrites)(tVideo* pVideoDriver);
typedef int(__stdcall* T_Vid_DisableWrites)(tVideo* pVideoDriver);
typedef int(__stdcall* T_Vid_GetSurface)(tVideo* pVideoDriver);
typedef int(__stdcall* T_Vid_FreeSurface)(tVideo* pVideoDriver);
typedef int(__stdcall* T_Vid_ClearScreen)(tVideo* pVideoDriver, unsigned char aR, unsigned char aG, unsigned char aB, int aLeft, int aTop, int aRight, int aBottom);
typedef int(__stdcall* T_Vid_SetGamma)(tVideo* pVideoDriver, float a2, float a3, float a4);
typedef int(__stdcall* T_Vid_WindowProc)(tVideo* pVideoDriver, HWND hwnd, DWORD uMsg, WPARAM wParam, LPARAM lParam);
typedef int(__stdcall* T_Vid_InitDLL)(HINSTANCE hInstance, tVideoFunctions* a2);

struct tVideoFunctions {
    T_Vid_GetVersion* pVid_GetVersion;
    T_Vid_Init_SYS* pVid_Init_SYS;
    T_Vid_CheckMode* pVid_CheckMode;
    T_Vid_FindMode* pVid_FindMode;
    T_Vid_FindFirstMode* pVid_FindFirstMode;
    T_Vid_FindNextMode* pVid_FindNextMode;
    T_Vid_FindDevice* pVid_FindDevice;
    T_Vid_SetDevice* pVid_SetDevice;
    T_Vid_CloseScreen* pVid_CloseScreen;
    T_Vid_SetMode* pVid_SetMode;
    T_Vid_FlipBuffers* pVid_FlipBuffers;
    T_Vid_ReleaseSurface* pVid_ReleaseSurface;
    T_Vid_GrabSurface* pVid_GrabSurface;
    T_Vid_ShutDown_SYS* pVid_ShutDown_SYS;
    T_Vid_EnableWrites* pVid_EnableWrites;
    T_Vid_DisableWrites* pVid_DisableWrites;
    T_Vid_GetSurface* pVid_GetSurface;
    T_Vid_FreeSurface* pVid_FreeSurface;
    T_Vid_ClearScreen* pVid_ClearScreen;
    T_Vid_WindowProc* pVid_WindowProc;
    T_Vid_InitDLL* pVid_InitDLL;
    T_Vid_SetGamma* pVid_SetGamma;
};

extern T_Vid_GetVersion& Vid_GetVersion;
extern T_Vid_Init_SYS& Vid_Init_SYS;
extern T_Vid_CheckMode& Vid_CheckMode;
extern T_Vid_FindMode& Vid_FindMode;
extern T_Vid_FindFirstMode& Vid_FindFirstMode;
extern T_Vid_FindNextMode& Vid_FindNextMode;
extern T_Vid_FindDevice& Vid_FindDevice;
extern T_Vid_SetDevice& Vid_SetDevice;
extern T_Vid_CloseScreen& Vid_CloseScreen;
extern T_Vid_SetMode& Vid_SetMode;
extern T_Vid_FlipBuffers& Vid_FlipBuffers;
extern T_Vid_ReleaseSurface& Vid_ReleaseSurface;
extern T_Vid_GrabSurface& Vid_GrabSurface;
extern T_Vid_ShutDown_SYS& Vid_ShutDown_SYS;
extern T_Vid_EnableWrites& Vid_EnableWrites;
extern T_Vid_DisableWrites& Vid_DisableWrites;
extern T_Vid_GetSurface& Vid_GetSurface;
extern T_Vid_FreeSurface& Vid_FreeSurface;
extern T_Vid_ClearScreen& Vid_ClearScreen;
extern T_Vid_WindowProc& Vid_WindowProc;
extern T_Vid_InitDLL& Vid_InitDLL;
extern T_Vid_SetGamma& Vid_SetGamma;

extern tVideo** gVidSys;
extern tVideo* GetVideoSystem();
extern void ResetVideoDevice();
