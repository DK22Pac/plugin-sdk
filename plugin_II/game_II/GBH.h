/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "tVideo.h"
#include "tTexture.h"
#include "tLight.h"
#include "tVertex.h"
#include "tImage.h"

#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>

struct tPalData {
    unsigned long* originalData;
    unsigned short* data;
    unsigned long loaded;
};

typedef int(__stdcall* T_gbh_InitDLL)(tVideo*);
typedef int(__stdcall* T_gbh_Init)(int);
typedef int(__stdcall* T_gbh_CloseDLL)();
typedef float(__stdcall* T_gbh_SetWindow)(float left, float top, float right, float bottom);
typedef int* (__stdcall* T_gbh_GetGlobals)(void);
typedef int(__stdcall* T_gbh_DrawTile)(unsigned int flags, tTexture* texture, tVertex* vertices, int diffuseColour);
typedef int(__stdcall* T_gbh_DrawTilePart)(unsigned int flags, tTexture* texture, tVertex* vertices, int diffuseColour);
typedef int(__stdcall* T_gbh_DrawQuad)(int flags, tTexture* texture, tVertex* vertices, int baseColour);
typedef int(__stdcall* T_gbh_DrawQuadClipped)(int a1, int a2, int a3, int a4, int a5);
typedef int(__stdcall* T_gbh_DrawFlatRect)(float left, float top, float right, float bottom, int color);
typedef int(__stdcall* T_gbh_DrawTriangle)(int triFlags, tTexture* texture, tVertex* vertices, int diffuseColour);
typedef int(__stdcall* T_gbh_PrintBitmap)(int a1, int a2);
typedef int(__stdcall* T_gbh_SetColourDepth)(void);
typedef int(__stdcall* T_gbh_Plot)(int a1, int a2, int a3, int a4);
typedef int(__stdcall* T_gbh_ConvertColour)(unsigned char a1, unsigned char a2, unsigned char a3);
typedef tTexture* (__stdcall* T_gbh_RegisterTexture)(short width, short height, unsigned char* data, int pal_idx, char flag);
typedef int(__stdcall* T_gbh_SetCamera)(float a1, float a2, float a3, float a4);
typedef int(__stdcall* T_gbh_ResetLights)();
typedef int(__stdcall* T_gbh_AddLight)(tLight* pLight);
typedef int(__stdcall* T_gbh_SetAmbient)(float a1);
typedef int(__stdcall* T_gbh_GetUsedCache)(int a1);
typedef int(__stdcall* T_gbh_FreeTexture)(tTexture* texture);
typedef unsigned int(__stdcall* T_gbh_RegisterPalette)(int palId, unsigned long* data);
typedef int(__stdcall* T_gbh_FreePalette)(int a1);
typedef int(__stdcall* T_gbh_AssignPalette)(tTexture* texture, int palId);
typedef int(__stdcall* T_gbh_LockTexture)(tTexture*);
typedef int(__stdcall* T_gbh_UnlockTexture)(tTexture*);
typedef int(__stdcall* T_gbh_BeginScene)();
typedef double(__stdcall* T_gbh_EndScene)();
typedef int(__stdcall* T_gbh_BeginLevel)();
typedef int(__stdcall* T_gbh_EndLevel)();
typedef int(__stdcall* T_MakeScreenTable)(int result, int a2, unsigned int a3);
typedef int(__stdcall* T_ConvertColourBank)(int a1);
typedef int(__stdcall* T_SetShadeTableA)(int a1, int a2, int a3, int a4, int a5);
typedef int(__stdcall* T_gbh_InitImageTable)(int table);
typedef int(__stdcall* T_gbh_FreeImageTable)();
typedef int(__stdcall* T_gbh_LoadImage)(tImage* img);
typedef int(__stdcall* T_gbh_BlitImage)(int id, int left, int top, int right, int bottom, int x, int y);
typedef int(__stdcall* T_gbh_BlitBuffer)(int a1, int a2, int a3, int a4, int a5, int a6);
typedef int(__stdcall* T_gbh_SetMode)(tVideo* vid, HWND a2, int mode);

extern T_gbh_InitDLL& gbh_InitDLL;
extern T_gbh_Init& gbh_Init;
extern T_gbh_CloseDLL& gbh_CloseDLL;
extern T_gbh_SetWindow& gbh_SetWindow;
extern T_gbh_GetGlobals& gbh_GetGlobals;
extern T_gbh_DrawTile& gbh_DrawTile;
extern T_gbh_DrawTilePart& gbh_DrawTilePart;
extern T_gbh_DrawQuad& gbh_DrawQuad;
extern T_gbh_DrawQuadClipped& gbh_DrawQuadClipped;
extern T_gbh_DrawFlatRect& gbh_DrawFlatRect;
extern T_gbh_DrawTriangle& gbh_DrawTriangle;
extern T_gbh_PrintBitmap& gbh_PrintBitmap;
extern T_gbh_SetColourDepth& gbh_SetColourDepth;
extern T_gbh_Plot& gbh_Plot;
extern T_gbh_ConvertColour& gbh_ConvertColour;
extern T_gbh_RegisterTexture& gbh_RegisterTexture;
extern T_gbh_SetCamera& gbh_SetCamera;
extern T_gbh_ResetLights& gbh_ResetLights;
extern T_gbh_AddLight& gbh_AddLight;
extern T_gbh_SetAmbient& gbh_SetAmbient;
extern T_gbh_GetUsedCache& gbh_GetUsedCache;
extern T_gbh_FreeTexture& gbh_FreeTexture;
extern T_gbh_RegisterPalette& gbh_RegisterPalette;
extern T_gbh_FreePalette& gbh_FreePalette;
extern T_gbh_AssignPalette& gbh_AssignPalette;
extern T_gbh_LockTexture& gbh_LockTexture;
extern T_gbh_UnlockTexture& gbh_UnlockTexture;
extern T_gbh_BeginScene& gbh_BeginScene;
extern T_gbh_EndScene& gbh_EndScene;
extern T_gbh_BeginLevel& gbh_BeginLevel;
extern T_gbh_EndLevel& gbh_EndLevel;
extern T_MakeScreenTable& MakeScreenTable;
extern T_ConvertColourBank& ConvertColourBank;
extern T_SetShadeTableA& SetShadeTableA;
extern T_gbh_InitImageTable& gbh_InitImageTable;
extern T_gbh_FreeImageTable& gbh_FreeImageTable;
extern T_gbh_LoadImage& gbh_LoadImage;
extern T_gbh_BlitImage& gbh_BlitImage;
extern T_gbh_BlitBuffer& gbh_BlitBuffer;
extern T_gbh_SetMode& gbh_SetMode;

extern int& window_x;
extern int& window_y;
extern int& window_width;
extern int& window_height;
extern int& full_width;
extern int& full_height;
extern char& exploding_on;
extern bool& lighting;
extern int& lightFlag;
extern char& max_frame_rate;
extern char& min_frame_rate;
extern char& start_mode;
extern char& triple_buffer;

struct tGraphics {
    tVideo* videoDriver;
    void* nextDevice;
    void* firstDevice;
    unsigned long deviceIdGen;
    unsigned long numEnums;
    void* activeDevice;
    unsigned long currentId;
    void* field_1C;
    void* field_20;
    IDirect3D3* d3d;
    IDirect3DDevice3* device;
    IDirect3DViewport3* viewPort;
    D3DVIEWPORT2 d3dViewPort;
    unsigned long pitchQ;
    IDirectDrawSurface4* surface;
};

VALIDATE_SIZE(tGraphics, 0x64);

extern tGraphics* GetGBH();
extern tPalData* GetPalData();
extern IDirect3D3* GetD3D();
extern IDirect3DDevice3* GetD3DDevice();
extern IDirectDrawSurface4* GetPrimarySurface();
extern HWND GetHWnd();
extern LPDIRECTINPUTA GetDInput();
extern void SetMousePosition(int x, int y);
extern void RenderStateSet(unsigned int type, void* value);
extern void RenderStateGet(unsigned int type, void* value);
extern void RenderPrimitive(unsigned int type, void* vertices, int size);
extern void RenderIndexedPrimitive(unsigned int type, void* vertices, int numVertices, int* indices, int numIndices);
