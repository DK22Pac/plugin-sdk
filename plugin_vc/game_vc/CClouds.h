/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CClouds
{
public:
    //funcs
    static void Init();
    static void Render();
    static void RenderBackground(short arg0, short arg1, short arg2, short arg3, short arg4, short arg5, short arg6);
    static void RenderHorizon();
    static void Shutdown();
    static void Update();
};