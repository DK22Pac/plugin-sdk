/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCutsceneHead.h"
#include "CDirectory.h"

class CAnimBlendAssocGroup;

class CCutsceneMgr {
public:
    // static variables
    static bool &ms_animLoaded;
    static CAnimBlendAssocGroup &ms_cutsceneAssociations;
    static unsigned int &ms_cutsceneLoadStatus;
    static char *ms_cutsceneName; // [8]
    static CVector &ms_cutsceneOffset;
    static bool &ms_cutsceneProcessing;
    static float &ms_cutsceneTimer;
    static bool &ms_loaded;
    static unsigned int &ms_numCutsceneObjs;
    static CDirectory **ms_pCutsceneDir;
    static CCutsceneObject **ms_pCutsceneObjects; // [50]
    static bool &ms_running;
    static bool &ms_useLodMultiplier;

    // static functions
    static CCutsceneHead* AddCutsceneHead(CObject* object, int modelIndex);
    static CCutsceneObject* CreateCutsceneObject(int modelIndex);
    static void DeleteCutsceneData();
    static void FinishCutscene();
    static int GetCutsceneTimeInMilleseconds();
    static bool HasCutsceneFinished();
    static void Initialise();
    static void LoadCutsceneData(char const* cutsceneName);
    static void SetCutsceneAnim(char const* animName, CObject* object);
    static void SetHeadAnim(char const* animName, CObject* object);
    static void SetupCutsceneToStart();
    static void Shutdown();
    static void Update();
};

int FindCutsceneAudioTrackId(char const* cutsceneName);
