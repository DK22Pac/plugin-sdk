/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneMgr.h"

// Converted from cdecl int CCutsceneMgr::AddCutsceneHead(CObject *object,int) 0x5B0380
int CCutsceneMgr::AddCutsceneHead(CObject* object, int arg1) {
    return plugin::CallAndReturn<int, 0x5B0380, CObject*, int>(object, arg1);
}

// Converted from cdecl void CCutsceneMgr::AppendToNextCutscene(char const*objectName,char const*animName) 0x4D5DB0
void CCutsceneMgr::AppendToNextCutscene(char const* objectName, char const* animName) {
    plugin::Call<0x4D5DB0, char const*, char const*>(objectName, animName);
}

// Converted from cdecl void CCutsceneMgr::AttachObjectToBone(CObject *attachment,CObject *object,int boneId) 0x5B0450
void CCutsceneMgr::AttachObjectToBone(CObject* attachment, CObject* object, int boneId) {
    plugin::Call<0x5B0450, CObject*, CObject*, int>(attachment, object, boneId);
}

// Converted from cdecl void CCutsceneMgr::AttachObjectToFrame(CObject *attachment,CEntity *object,char const*frameName) 0x5B0480
void CCutsceneMgr::AttachObjectToFrame(CObject* attachment, CEntity* object, char const* frameName) {
    plugin::Call<0x5B0480, CObject*, CEntity*, char const*>(attachment, object, frameName);
}

// Converted from cdecl void CCutsceneMgr::AttachObjectToParent(CObject *attachment,CEntity *object) 0x5B04B0
void CCutsceneMgr::AttachObjectToParent(CObject* attachment, CEntity* object) {
    plugin::Call<0x5B04B0, CObject*, CEntity*>(attachment, object);
}

// Converted from cdecl void CCutsceneMgr::BuildCutscenePlayer(void) 0x4D5E20
void CCutsceneMgr::BuildCutscenePlayer() {
    plugin::Call<0x4D5E20>();
}

// Converted from cdecl CCutsceneObject* CCutsceneMgr::CreateCutsceneObject(int modelId) 0x5B02A0
CCutsceneObject* CCutsceneMgr::CreateCutsceneObject(int modelId) {
    return plugin::CallAndReturn<CCutsceneObject*, 0x5B02A0, int>(modelId);
}

// Converted from cdecl void CCutsceneMgr::DeleteCutsceneData(void) 0x4D5ED0
void CCutsceneMgr::DeleteCutsceneData() {
    plugin::Call<0x4D5ED0>();
}

// Converted from cdecl void CCutsceneMgr::DeleteCutsceneData_overlay(void) 0x5AFD60
void CCutsceneMgr::DeleteCutsceneData_overlay() {
    plugin::Call<0x5AFD60>();
}

// Converted from cdecl void CCutsceneMgr::FinishCutscene(void) 0x5B04D0
void CCutsceneMgr::FinishCutscene() {
    plugin::Call<0x5B04D0>();
}

// Converted from cdecl uint CCutsceneMgr::GetCutsceneTimeInMilleseconds(void) 0x5B0550
uint64_t CCutsceneMgr::GetCutsceneTimeInMilleseconds() {
    return plugin::CallAndReturn<uint64_t, 0x5B0550>();
}

// Converted from cdecl bool CCutsceneMgr::HasCutsceneFinished(void) 0x5B0570
bool CCutsceneMgr::HasCutsceneFinished() {
    return plugin::CallAndReturn<bool, 0x5B0570>();
}

// Converted from cdecl void CCutsceneMgr::HideRequestedObjects(void) 0x5AFAD0
void CCutsceneMgr::HideRequestedObjects() {
    plugin::Call<0x5AFAD0>();
}

// Converted from cdecl void CCutsceneMgr::Initialise(void) 0x4D5A20
void CCutsceneMgr::Initialise() {
    plugin::Call<0x4D5A20>();
}

// Converted from cdecl void CCutsceneMgr::IsCutsceneSkipButtonBeingPressed(void) 0x4D5D10
void CCutsceneMgr::IsCutsceneSkipButtonBeingPressed() {
    plugin::Call<0x4D5D10>();
}

// Converted from cdecl void CCutsceneMgr::LoadAnimationUncompressed(char const*animName) 0x4D5AB0
void CCutsceneMgr::LoadAnimationUncompressed(char const* animName) {
    plugin::Call<0x4D5AB0, char const*>(animName);
}

// Converted from cdecl void CCutsceneMgr::LoadCutsceneData(char const*cutsceneName) 0x4D5E80
void CCutsceneMgr::LoadCutsceneData(char const* cutsceneName) {
    plugin::Call<0x4D5E80, char const*>(cutsceneName);
}

// Converted from cdecl void CCutsceneMgr::LoadCutsceneData_loading(void) 0x5B11C0
void CCutsceneMgr::LoadCutsceneData_loading() {
    plugin::Call<0x5B11C0>();
}

// Converted from cdecl void CCutsceneMgr::LoadCutsceneData_overlay(char const*cutsceneName) 0x5B13F0
void CCutsceneMgr::LoadCutsceneData_overlay(char const* cutsceneName) {
    plugin::Call<0x5B13F0, char const*>(cutsceneName);
}

// Converted from cdecl void CCutsceneMgr::LoadCutsceneData_postload(void) 0x5AFBC0
void CCutsceneMgr::LoadCutsceneData_postload() {
    plugin::Call<0x5AFBC0>();
}

// Converted from cdecl void CCutsceneMgr::LoadCutsceneData_preload(void) 0x5B05A0
void CCutsceneMgr::LoadCutsceneData_preload() {
    plugin::Call<0x5B05A0>();
}

// Converted from cdecl void CCutsceneMgr::LoadEverythingBecauseCutsceneDeletedAllOfIt(void) 0x4D5C10
void CCutsceneMgr::LoadEverythingBecauseCutsceneDeletedAllOfIt() {
    plugin::Call<0x4D5C10>();
}

// Converted from cdecl void CCutsceneMgr::RemoveCutscenePlayer(void) 0x4D5E50
void CCutsceneMgr::RemoveCutscenePlayer() {
    plugin::Call<0x4D5E50>();
}

// Converted from cdecl void CCutsceneMgr::RemoveEverythingBecauseCutsceneDoesntFitInMemory(void) 0x4D5AF0
void CCutsceneMgr::RemoveEverythingBecauseCutsceneDoesntFitInMemory() {
    plugin::Call<0x4D5AF0>();
}

// Converted from cdecl void CCutsceneMgr::SetCutsceneAnim(char const*animName,CObject *object) 0x5B0390
void CCutsceneMgr::SetCutsceneAnim(char const* animName, CObject* object) {
    plugin::Call<0x5B0390, char const*, CObject*>(animName, object);
}

// Converted from cdecl void CCutsceneMgr::SetCutsceneAnimToLoop(char const*animName) 0x5B0420
void CCutsceneMgr::SetCutsceneAnimToLoop(char const* animName) {
    plugin::Call<0x5B0420, char const*>(animName);
}

// Converted from cdecl void CCutsceneMgr::SetHeadAnim(char const*animName,CObject *headObject) 0x5B0440
void CCutsceneMgr::SetHeadAnim(char const* animName, CObject* headObject) {
    plugin::Call<0x5B0440, char const*, CObject*>(animName, headObject);
}

// Converted from cdecl void CCutsceneMgr::SetupCutsceneToStart(void) 0x5B14D0
void CCutsceneMgr::SetupCutsceneToStart() {
    plugin::Call<0x5B14D0>();
}

// Converted from cdecl void CCutsceneMgr::Shutdown(void) 0x4D5E60
void CCutsceneMgr::Shutdown() {
    plugin::Call<0x4D5E60>();
}

// Converted from cdecl void CCutsceneMgr::SkipCutscene(void) 0x5B1700
void CCutsceneMgr::SkipCutscene() {
    plugin::Call<0x5B1700>();
}

// Converted from cdecl void CCutsceneMgr::StartCutscene(void) 0x5B1460
void CCutsceneMgr::StartCutscene() {
    plugin::Call<0x5B1460>();
}

// Converted from cdecl void CCutsceneMgr::Update(void) 0x4D5D00
void CCutsceneMgr::Update() {
    plugin::Call<0x4D5D00>();
}

// Converted from cdecl void CCutsceneMgr::Update_overlay(void) 0x5B1720
void CCutsceneMgr::Update_overlay() {
    plugin::Call<0x5B1720>();
}

// Converted from cdecl short FindCutsceneAudioTrackId(char const*cutsceneName) 0x5AFA50
short FindCutsceneAudioTrackId(char const* cutsceneName) {
    return plugin::CallAndReturn<short, 0x5AFA50, char const*>(cutsceneName);
}

// Converted from cdecl void UpdateCutsceneObjectBoundingBox(RpClump *clump,int modelId) 0x5B01E0
void UpdateCutsceneObjectBoundingBox(RpClump* clump, int modelId) {
    plugin::Call<0x5B01E0, RpClump*, int>(clump, modelId);
}