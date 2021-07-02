/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSkidmark.h"
#include "RenderWare.h"

class PLUGIN_API CSkidmarks {
public:
    SUPPORTED_10EN_11EN_STEAM static CSkidmark(&aSkidmarks)[32]; // static CSkidmark aSkidmarks[32]

    SUPPORTED_10EN_11EN_STEAM static void Clear();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterOne(unsigned int id, CVector pos, float fwdX, float fwdY, bool *isMuddy, bool *isBloody);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&SkidmarkIndexList)[96]; // RwImVertexIndex SkidmarkIndexList[96]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&SkidmarkVertices)[32]; // RwIm3DVertex SkidmarkVertices[32]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpSkidBloodTex;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpSkidTex;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpSkidMudTex;

#include "meta/meta.CSkidmarks.h"
