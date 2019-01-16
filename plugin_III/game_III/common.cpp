/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "common.h"

// Converted from cdecl float FindPlayerHeading(void) 0x4A1220;
float FindPlayerHeading() {
    return plugin::CallAndReturn<float, 0x4A1220>();
}

// Converted from cdecl CVector& FindPlayerCentreOfWorld_NoSniperShift(void) 0x4A11C0;
CVector& FindPlayerCentreOfWorld_NoSniperShift() {
    return plugin::CallAndReturn<CVector&, 0x4A11C0>();
}

// Converted from cdecl CVector& FindPlayerCentreOfWorld(int playerId) 0x4A1170;
CVector& FindPlayerCentreOfWorld(int playerId) {
    return plugin::CallAndReturn<CVector&, 0x4A1170, int>(playerId);
}

// Converted from cdecl CPlayerPed* FindPlayerPed(void) 0x4A1150;
CPlayerPed* FindPlayerPed() {
    return plugin::CallAndReturn<CPlayerPed*, 0x4A1150>();
}

// Converted from cdecl CTrain* FindPlayerTrain(void) 0x4A1120;
CTrain* FindPlayerTrain() {
    return plugin::CallAndReturn<CTrain*, 0x4A1120>();
}

// Converted from cdecl CEntity* FindPlayerEntity(void) 0x4A10F0;
CEntity* FindPlayerEntity() {
    return plugin::CallAndReturn<CEntity*, 0x4A10F0>();
}

// Converted from cdecl CVehicle* FindPlayerVehicle(void) 0x4A10C0;
CVehicle* FindPlayerVehicle() {
    return plugin::CallAndReturn<CVehicle*, 0x4A10C0>();
}

// Converted from cdecl CVector& FindPlayerSpeed(void) 0x4A1090;
CVector& FindPlayerSpeed() {
    return plugin::CallAndReturn<CVector&, 0x4A1090>();
}

// Converted from cdecl CVector& FindPlayerCoors(void) 0x4A1030;
CVector& FindPlayerCoors() {
    return plugin::CallAndReturn<CVector&, 0x4A1030>();
}

// Converted from cdecl RwTexture* GetFirstTexture(RwTexDictionary *texDictionary) 0x5264E0
RwTexture* GetFirstTexture(RwTexDictionary* texDictionary) {
    return plugin::CallAndReturn<RwTexture*, 0x5264E0, RwTexDictionary*>(texDictionary);
}

// Converted from cdecl RwObject* GetFirstObject(RwFrame *frame) 0x526460
RwObject* GetFirstObject(RwFrame* frame) {
    return plugin::CallAndReturn<RwObject*, 0x526460, RwFrame*>(frame);
}

// Converted from cdecl RpAtomic* GetFirstAtomic(RpClump *clump) 0x526420
RpAtomic* GetFirstAtomic(RpClump* clump) {
    return plugin::CallAndReturn<RpAtomic*, 0x526420, RpClump*>(clump);
}

// Converted from cdecl void SetAmbientColours(RwRGBAReal *colours) 0x526FA0
void SetAmbientColours(RwRGBAReal* colours) {
    plugin::Call<0x526FA0, RwRGBAReal*>(colours);
}

// Converted from cdecl void SetAmbientColoursForPedsCarsAndObjects(void) 0x526F80
void SetAmbientColoursForPedsCarsAndObjects() {
    plugin::Call<0x526F80>();
}

// Converted from cdecl void SetAmbientColours(void) 0x526F60
void SetAmbientColours() {
    plugin::Call<0x526F60>();
}

// Converted from cdecl void ActivateDirectional(void) 0x526F50
void ActivateDirectional() {
    plugin::Call<0x526F50>();
}

// Converted from cdecl void DeActivateDirectional(void) 0x526F40
void DeActivateDirectional() {
    plugin::Call<0x526F40>();
}

// Converted from cdecl void ReSetAmbientAndDirectionalColours(void) 0x526F10
void ReSetAmbientAndDirectionalColours() {
    plugin::Call<0x526F10>();
}

// Converted from cdecl void SetBrightMarkerColours(float power) 0x526E60
void SetBrightMarkerColours(float power) {
    plugin::Call<0x526E60, float>(power);
}

// Converted from cdecl void SetAmbientAndDirectionalColours(float power) 0x526DE0
void SetAmbientAndDirectionalColours(float power) {
    plugin::Call<0x526DE0, float>(power);
}

// Converted from cdecl void RemoveExtraDirectionalLights(RpWorld *world) 0x526DB0
void RemoveExtraDirectionalLights(RpWorld* world) {
    plugin::Call<0x526DB0, RpWorld*>(world);
}

// Converted from cdecl void AddAnExtraDirectionalLight(RpWorld *world,float x,float y,float z,float red,float green,float blue) 0x526C70
void AddAnExtraDirectionalLight(RpWorld* world, float x, float y, float z, float red, float green, float blue) {
    plugin::Call<0x526C70, RpWorld*, float, float, float, float, float, float>(world, x, y, z, red, green, blue);
}

// Converted from cdecl void WorldReplaceNormalLightsWithScorched(RpWorld *world,float intensity) 0x526C10
void WorldReplaceNormalLightsWithScorched(RpWorld* world, float intensity) {
    plugin::Call<0x526C10, RpWorld*, float>(world, intensity);
}

// Converted from cdecl RpWorld* LightsDestroy(RpWorld *world) 0x526B40
RpWorld* LightsDestroy(RpWorld* world) {
    return plugin::CallAndReturn<RpWorld*, 0x526B40, RpWorld*>(world);
}

// Converted from cdecl RpWorld* LightsCreate(RpWorld *world) 0x5269A0
RpWorld* LightsCreate(RpWorld* world) {
    return plugin::CallAndReturn<RpWorld*, 0x5269A0, RpWorld*>(world);
}

// Converted from cdecl void SetLightsWithTimeOfDayColour(RpWorld *world) 0x526510
void SetLightsWithTimeOfDayColour(RpWorld* world) {
    plugin::Call<0x526510, RpWorld*>(world);
}

// Converted from cdecl RwFrame* GetFirstChild(RwFrame *frame) 0x5264A0
RwFrame* GetFirstChild(RwFrame* frame) {
    return plugin::CallAndReturn<RwFrame*, 0x5264A0, RwFrame*>(frame);
}

// Converted from cdecl RpAtomic* GetFirstAtomicCallback(RpAtomic *atomic, void *data) 0x526410
RpAtomic* GetFirstAtomicCallback(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x526410, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RwObject* GetFirstObjectCallback(RwObject *object, void *data) 0x526450
RwObject* GetFirstObjectCallback(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x526450, RwObject*, void*>(object, data);
}

// Converted from cdecl RwFrame* GetFirstFrameCallback(RwFrame *frame, void *data) 0x526490
RwFrame* GetFirstFrameCallback(RwFrame* frame, void* data) {
    return plugin::CallAndReturn<RwFrame*, 0x526490, RwFrame*, void*>(frame, data);
}

// Converted from cdecl RwTexture* GetFirstTextureCallback(RwTexture *texture, void *data) 0x5264D0
RwTexture* GetFirstTextureCallback(RwTexture* texture, void* data) {
    return plugin::CallAndReturn<RwTexture*, 0x5264D0, RwTexture*, void*>(texture, data);
}

// Converted from cdecl void WorldReplaceScorchedLightsWithNormal(RpWorld *world) 0x526C50
void WorldReplaceScorchedLightsWithNormal(RpWorld* world) {
    plugin::Call<0x526C50, RpWorld*>(world);
}

// Converted from cdecl void CreateDebugFont(void) 0x526300
void CreateDebugFont() {
    plugin::Call<0x526300>();
}

// Converted from cdecl void DestroyDebugFont(void) 0x526310
void DestroyDebugFont() {
    plugin::Call<0x526310>();
}

// Converted from cdecl void FlushObrsPrintfs(void) 0x526320
void FlushObrsPrintfs() {
    plugin::Call<0x526320>();
}

// Converted from cdecl void DefinedState(void) 0x526330
void DefinedState() {
    plugin::Call<0x526330>();
}

// Converted from cdecl CAnimBlendClumpData* RpAnimBlendAllocateData(RpClump *clump) 0x4052A0
CAnimBlendClumpData* RpAnimBlendAllocateData(RpClump* clump) {
    return plugin::CallAndReturn<CAnimBlendClumpData*, 0x4052A0, RpClump*>(clump);
}

AnimBlendFrameData* RpAnimBlendClumpFindFrame(RpClump* clump, char const* name) {
    return plugin::CallAndReturn<AnimBlendFrameData*, 0x405430, RpClump*, char const*>(clump, name);
}

CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, unsigned int animId) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4055C0, RpClump*, unsigned int>(clump, animId);
}

CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4031B0, RpClump*>(clump);
}

CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump, unsigned int flags) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x405750, RpClump*, unsigned int>(clump, flags);
}

CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, CAnimBlendAssociation** pAssociation, float* blendAmount) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4055F0, RpClump*, CAnimBlendAssociation**, float*>(clump, pAssociation, blendAmount);
}

CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, int n) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4056D0, RpClump*, int>(clump, n);
}

CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x405680, RpClump*>(clump);
}

CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump, int n) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x405710, RpClump*, int>(clump, n);
}

void RpAnimBlendClumpInit(RpClump* clump) {
    plugin::Call<0x405480, RpClump*>(clump);
}

bool RpAnimBlendClumpIsInitialized(RpClump* clump) {
    return plugin::CallAndReturn<bool, 0x405500, RpClump*>(clump);
}

void RpAnimBlendClumpRemoveAllAssociations(RpClump* clump) {
    plugin::Call<0x405560, RpClump*>(clump);
}

void RpAnimBlendClumpRemoveAssociations(RpClump* clump, unsigned int flags) {
    plugin::Call<0x405570, RpClump*, unsigned int>(clump, flags);
}

void RpAnimBlendClumpSetBlendDeltas(RpClump* clump, unsigned int flags, float delta) {
    plugin::Call<0x405520, RpClump*, unsigned int, float>(clump, flags, delta);
}

void RpAnimBlendClumpUpdateAnimations(RpClump* clump, float step, bool onScreen) {
    plugin::Call<0x4024B0, RpClump*, float, bool>(clump, step, onScreen);
}

CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x405780, CAnimBlendAssociation*>(association);
}

CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association, unsigned int flags) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4057A0, CAnimBlendAssociation*, unsigned int>(association, flags);
}

// Converted from cdecl bool RpAnimBlendPluginAttach() 0x4052D0
bool RpAnimBlendPluginAttach() {
    return plugin::CallAndReturn<bool, 0x4052D0>();
}

// Converted from cdecl RpClump* AnimBlendClumpDestroy(RpClump *clump) 0x405240
RpClump* AnimBlendClumpDestroy(RpClump* clump) {
    return plugin::CallAndReturn<RpClump*, 0x405240, RpClump*>(clump);
}

uint32_t &ClumpOffset = *(uint32_t *)0x8F1B84;
AnimBlendFrameData **pFrameDataFound = (AnimBlendFrameData **)0x621028;