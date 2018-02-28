/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneMgr.h"

bool &CCutsceneMgr::ms_animLoaded = *(bool *)0x95CDA0;
CAnimBlendAssocGroup &CCutsceneMgr::ms_cutsceneAssociations = *(CAnimBlendAssocGroup *)0x709C58;
unsigned int &CCutsceneMgr::ms_cutsceneLoadStatus = *(unsigned int *)0x95CB40;
char *CCutsceneMgr::ms_cutsceneName = (char *)0x70D9D0;
CVector &CCutsceneMgr::ms_cutsceneOffset = *(CVector *)0x8F2C0C;
bool &CCutsceneMgr::ms_cutsceneProcessing = *(bool *)0x95CD9F;
float &CCutsceneMgr::ms_cutsceneTimer = *(float *)0x941548;
bool &CCutsceneMgr::ms_loaded = *(bool *)0x95CD95;
unsigned int &CCutsceneMgr::ms_numCutsceneObjs = *(unsigned int *)0x942FA4;
CDirectory **CCutsceneMgr::ms_pCutsceneDir = (CDirectory **)0x8F5F88;
CCutsceneObject **CCutsceneMgr::ms_pCutsceneObjects = (CCutsceneObject **)0x862170;
bool &CCutsceneMgr::ms_running = *(bool *)0x95CCF5;
bool &CCutsceneMgr::ms_useLodMultiplier = *(bool *)0x95CD74;

// Converted from cdecl CCutsceneHead* CCutsceneMgr::AddCutsceneHead(CObject *object,int modelIndex) 0x404CD0
CCutsceneHead* CCutsceneMgr::AddCutsceneHead(CObject* object, int modelIndex) {
    return plugin::CallAndReturn<CCutsceneHead*, 0x404CD0, CObject*, int>(object, modelIndex);
}

// Converted from cdecl CCutsceneObject* CCutsceneMgr::CreateCutsceneObject(int modelIndex) 0x404BE0
CCutsceneObject* CCutsceneMgr::CreateCutsceneObject(int modelIndex) {
    return plugin::CallAndReturn<CCutsceneObject*, 0x404BE0, int>(modelIndex);
}

// Converted from cdecl void CCutsceneMgr::DeleteCutsceneData(void) 0x4048E0
void CCutsceneMgr::DeleteCutsceneData() {
    plugin::Call<0x4048E0>();
}

// Converted from cdecl void CCutsceneMgr::FinishCutscene(void) 0x405140
void CCutsceneMgr::FinishCutscene() {
    plugin::Call<0x405140>();
}

// Converted from cdecl int CCutsceneMgr::GetCutsceneTimeInMilleseconds(void) 0x4051B0
int CCutsceneMgr::GetCutsceneTimeInMilleseconds() {
    return plugin::CallAndReturn<int, 0x4051B0>();
}

// Converted from cdecl bool CCutsceneMgr::HasCutsceneFinished(void) 0x4051F0
bool CCutsceneMgr::HasCutsceneFinished() {
    return plugin::CallAndReturn<bool, 0x4051F0>();
}

// Converted from cdecl void CCutsceneMgr::Initialise(void) 0x4045D0 
void CCutsceneMgr::Initialise() {
    plugin::Call<0x4045D0>();
}

// Converted from cdecl void CCutsceneMgr::LoadCutsceneData(char const* cutsceneName) 0x404650
void CCutsceneMgr::LoadCutsceneData(char const* cutsceneName) {
    plugin::Call<0x404650, char const*>(cutsceneName);
}

// Converted from cdecl void CCutsceneMgr::SetCutsceneAnim(char const* animName,CObject *object) 0x404D20
void CCutsceneMgr::SetCutsceneAnim(char const* animName, CObject* object) {
    plugin::Call<0x404D20, char const*, CObject*>(animName, object);
}

// Converted from cdecl void CCutsceneMgr::SetHeadAnim(char const* animName,CObject *object) 0x404D80
void CCutsceneMgr::SetHeadAnim(char const* animName, CObject* object) {
    plugin::Call<0x404D80, char const*, CObject*>(animName, object);
}

// Converted from cdecl void CCutsceneMgr::SetupCutsceneToStart(void) 0x404DC0
void CCutsceneMgr::SetupCutsceneToStart() {
    plugin::Call<0x404DC0>();
}

// Converted from cdecl void CCutsceneMgr::Shutdown(void) 0x404630
void CCutsceneMgr::Shutdown() {
    plugin::Call<0x404630>();
}

// Converted from cdecl void CCutsceneMgr::Update(void) 0x404EE0
void CCutsceneMgr::Update() {
    plugin::Call<0x404EE0>();
}

// Converted from cdecl int FindCutsceneAudioTrackId(char const* cutsceneName) 0x404530
int FindCutsceneAudioTrackId(char const* cutsceneName) {
    return plugin::CallAndReturn<int, 0x404530, char const*>(cutsceneName);
}
