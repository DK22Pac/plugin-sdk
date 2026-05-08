/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCutsceneObject.h"
#include "CDirectory.h"
#include "FxSystem_c.h"
#include "CAnimBlendAssocGroup.h"

struct tCutsceneParticleEffect {
    char        m_szEffectName[32];
    FxSystem_c *m_pFxSystem;
    int         m_nStartTime;
    int         m_nEndTime;
    int         m_nObjectId;
    char        m_szObjectPart[32];
    CVector     m_vecPosn;
    CVector     m_vecDirection;
    bool        m_bPlaying;
    bool        m_bStopped;
private:
    char _pad6A[2];
public:
};
VALIDATE_OFFSET(tCutsceneParticleEffect, m_szEffectName, 0x0);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_pFxSystem, 0x20);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_nStartTime, 0x24);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_nEndTime, 0x28);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_nObjectId, 0x2C);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_szObjectPart, 0x30);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_vecPosn, 0x50);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_vecDirection, 0x5C);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_bPlaying, 0x68);
VALIDATE_OFFSET(tCutsceneParticleEffect, m_bStopped, 0x69);
VALIDATE_SIZE(tCutsceneParticleEffect, 0x6C);

struct tCutsceneAttachment {
    int m_nCutscenePedObjectId;
    int m_nCutsceneAttachmentObjectId;
    int m_nBoneId;
};
VALIDATE_OFFSET(tCutsceneAttachment, m_nCutscenePedObjectId, 0x0);
VALIDATE_OFFSET(tCutsceneAttachment, m_nCutsceneAttachmentObjectId, 0x4);
VALIDATE_OFFSET(tCutsceneAttachment, m_nBoneId, 0x8);
VALIDATE_SIZE(tCutsceneAttachment, 0xC);

struct tCutsceneRemoval {
    CVector m_vecPosn;
    char m_szObjectName[32];
};
VALIDATE_OFFSET(tCutsceneRemoval, m_vecPosn, 0x0);
VALIDATE_OFFSET(tCutsceneRemoval, m_szObjectName, 0xC);
VALIDATE_SIZE(tCutsceneRemoval, 0x2C);

extern unsigned int MAX_NUM_CUTSCENE_OBJECTS; // default: 50
extern unsigned int MAX_NUM_CUTSCENE_PARTICLE_EFFECTS; // default: 8
extern unsigned int MAX_NUM_CUTSCENE_ITEMS_TO_HIDE; // default: 50
extern unsigned int MAX_NUM_CUTSCENE_ATTACHMENTS; // default: 50

class PLUGIN_API CCutsceneMgr {
public:
    static bool &ms_useCutsceneShadows; // always 'true', doesn't change anything
    static unsigned int &numPlayerWeaponsToRestore;
    static unsigned int *playerWeaponsToRestore_Ammo; // static unsigned int playerWeaponsToRestore_Ammo[13]
    static unsigned int *playerWeaponsToRestore_Type; // static unsigned int playerWeaponsToRestore_Type[13]
    static char (*ms_cAppendAnimName)[32]; // static char ms_cAppendAnimName[50][32]
    static char (*ms_cAppendObjectName)[32]; // static char ms_cAppendObjectName[50][32]
    static CDirectory *ms_pCutsceneDir;
    static unsigned int &ms_cutsceneLoadStatus;
    static bool &ms_animLoaded;
    static bool &ms_running;
    static bool &ms_cutsceneProcessing;
    static bool &ms_useLodMultiplier;
    static bool &ms_wasCutsceneSkipped;
    static bool &ms_hasFileInfo;
    static unsigned int &ms_numAppendObjectNames;
    static bool &restoreEverythingAfterCutscene;
    static float &m_fPrevCarDensity;
    static float &m_fPrevPedDensity;
    static tCutsceneParticleEffect *ms_pParticleEffects; // static tCutsceneParticleEffect ms_pParticleEffects[8]
    static tCutsceneRemoval *ms_crToHideItems; // static tCutsceneRemoval ms_crToHideItems[50]
    static CEntity **ms_pHiddenEntities; // static CEntity *ms_pHiddenEntities[50]
    static unsigned int &ms_numAttachObjectToBones;
    static bool *ms_bRepeatObject; // static bool ms_bRepeatObject[50]
    static tCutsceneAttachment *ms_iAttachObjectToBone; // static tCutsceneAttachment ms_iAttachObjectToBone[]
    static char (*ms_aUncompressedCutsceneAnims)[32]; // static char ms_aUncompressedCutsceneAnims[8][32]
    static int *ms_iTextDuration; // static int ms_iTextDuration[64]
    static int *ms_iTextStartTime; // static int ms_iTextStartTime[64]
    static char (*ms_cTextOutput)[8]; // static char ms_cTextOutput[40][8]
    static int *ms_iModelIndex; // static int ms_iModelIndex[50]
    static char (*ms_cLoadAnimName)[32]; // static char ms_cLoadAnimName[50][32]
    static char (*ms_cLoadObjectName)[32]; // static char ms_cLoadObjectName[50][32]
    static float &ms_cutsceneTimer;
    static char *ms_cutsceneName; // static char ms_cutsceneName[8]
    static CCutsceneObject **ms_pCutsceneObjects; // static CCutsceneObject *ms_pCutsceneObject[50]
    static unsigned int &ms_cutscenePlayStatus;
    static unsigned int &ms_numCutsceneObjs;
    static unsigned int &ms_numLoadObjectNames;
    static unsigned int &ms_numTextOutput;
    static unsigned int &ms_currTextOutput;
    static unsigned int &ms_numUncompressedCutsceneAnims;
    static unsigned int &ms_iNumHiddenEntities;
    static unsigned int &ms_iNumParticleEffects;
    static unsigned int &m_PrevExtraColour;
    static bool &m_PrevExtraColourOn;
    static bool &dataFileLoaded;
    static CAnimBlendAssocGroup &ms_cutsceneAssociations;
    static CVector &ms_cutsceneOffset;

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
    static long long GetCutsceneTimeInMilleseconds();
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
VALIDATE_SIZE(CCutsceneMgr, 0x1);

short FindCutsceneAudioTrackId(char const* cutsceneName);
void UpdateCutsceneObjectBoundingBox(RpClump* clump, int modelId);