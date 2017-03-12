/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CCutsceneObject.h"

class CCutsceneMgr {
public:
    // dummy function
    static int AddCutsceneHead(CObject* object, int arg1);
    static void AppendToNextCutscene(char const* objectName, char const* animName);
    static void AttachObjectToBone(CObject* attachment, CObject* object, int boneId);
    static void AttachObjectToFrame(CObject* attachment, CEntity* object, char const* frameName);
    static void AttachObjectToParent(CObject* attachment, CEntity* object);
    static void BuildCutscenePlayer();
    static CCutsceneObject* CreateCutsceneObject(int modelId);
    static void DeleteCutsceneData();
    static void DeleteCutsceneData_overlay();
    static void FinishCutscene();
    static uint64_t GetCutsceneTimeInMilleseconds();
    static bool HasCutsceneFinished();
    static void HideRequestedObjects();
    static void Initialise();
    static void IsCutsceneSkipButtonBeingPressed();
    static void LoadAnimationUncompressed(char const* animName);
    static void LoadCutsceneData(char const* cutsceneName);
    static void LoadCutsceneData_loading();
    static void LoadCutsceneData_overlay(char const* cutsceneName);
    static void LoadCutsceneData_postload();
    static void LoadCutsceneData_preload();
    static void LoadEverythingBecauseCutsceneDeletedAllOfIt();
    static void RemoveCutscenePlayer();
    static void RemoveEverythingBecauseCutsceneDoesntFitInMemory();
    static void SetCutsceneAnim(char const* animName, CObject* object);
    static void SetCutsceneAnimToLoop(char const* animName);
    // dummy function
    static void SetHeadAnim(char const* animName, CObject* headObject);
    static void SetupCutsceneToStart();
    static void Shutdown();
    static void SkipCutscene();
    static void StartCutscene();
    static void Update();
    static void Update_overlay();
};

short FindCutsceneAudioTrackId(char const* cutsceneName);
void UpdateCutsceneObjectBoundingBox(RpClump* clump, int modelId);