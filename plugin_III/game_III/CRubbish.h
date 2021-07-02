/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "COneSheet.h"
#include "RenderWare.h"

class PLUGIN_API CRubbish {
public:
    SUPPORTED_10EN_11EN_STEAM static COneSheet(&aSheets)[64]; // static COneSheet aSheets[64]
    SUPPORTED_10EN_11EN_STEAM static int &RubbishVisibility;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &StartMoversList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &EndMoversList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &StartEmptyList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &EndStaticsList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &EndEmptyList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &StartStaticsList;
    SUPPORTED_10EN_11EN_STEAM static bool &bRubbishInvisible;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void SetVisibility(bool visible);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void StirUp(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern float(&aAnimations)[3][34]; // float aAnimations[3][34]
SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&RubbishIndexList)[6]; // RwImVertexIndex RubbishIndexList[6]
SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&RubbishIndexList2)[6]; // RwImVertexIndex RubbishIndexList2[6]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&RubbishVertices)[4]; // RwIm3DVertex RubbishVertices[4]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpRubbishTexture)[4]; // RwTexture *gpRubbishTexture[4]

#include "meta/meta.CRubbish.h"
