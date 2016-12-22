/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "common.h"

float &GAME_GRAVITY = *(float *)0x863984;

CVector FindPlayerCoors(int playerId)
{
	return ((CVector (__cdecl *)(int))0x56E010)(playerId);
}

CVector const& FindPlayerSpeed(int playerId)
{
	return ((CVector const& (__cdecl *)(int))0x56E090)(playerId);
}

CEntity * FindPlayerEntity(int playerId)
{
	return ((CEntity *(__cdecl *)(int))0x56E120)(playerId);
}

CVector const& FindPlayerCentreOfWorld(int playerId)
{
	return ((CVector const& (__cdecl *)(int))0x56E250)(playerId);
}

CVector const& FindPlayerCentreOfWorld_NoSniperShift(int playerId)
{
	return ((CVector const& (__cdecl *)(int))0x56E320)(playerId);
}

CVector FindPlayerCentreOfWorld_NoInteriorShift(int playerId)
{
	return ((CVector (__cdecl *)(int))0x56E400)(playerId);
}

float FindPlayerHeading(int playerId)
{
	return ((float (__cdecl *)(int))0x56E450)(playerId);
}

float FindPlayerHeight()
{
	return ((float (__cdecl *)())0x56E520)();
}

CPed * FindPlayerPed(int playerId)
{
	return ((CPed *(__cdecl *)(int))0x56E210)(playerId);
}

CVehicle * FindPlayerVehicle(int playerId, bool bIncludeRemote)
{
	return ((CVehicle *(__cdecl *)(int, bool))0x56E0D0)(playerId, bIncludeRemote);
}

bool InTwoPlayersMode()
{
	return ((bool (__cdecl *)())0x441390)();
}

CVector VectorSub(CVector const& from, CVector const& what)
{
	return ((CVector (__cdecl *)(CVector const&, CVector const&))0x40FE60)(from, what);
}

CVector Multiply3x3(CMatrix  const& matrix, CVector  const& vec)
{
	return ((CVector (__cdecl *)(CMatrix  const&, CVector  const&))0x59C790)(matrix, vec);
}

uint32_t &ClumpOffset = *(uint32_t *)0xB5F878;

AnimBlendFrameData *RpAnimBlendClumpFindFrame(RpClump *clump, char *name)
{
	return ((AnimBlendFrameData *(__cdecl *)(RpClump *, char *))0x4D62A0)(clump, name);
}

char *MakeUpperCase(char *dest, char *src)
{
	return ((char *(__cdecl *)(char *, char *))0x7186E0)(dest, src);
}

// Converted from cdecl void CreateDebugFont(void) 0x734610
void CreateDebugFont() {
    ((void(__cdecl *)())0x734610)();
}

// Converted from cdecl void DestroyDebugFont(void) 0x734620
void DestroyDebugFont() {
    ((void(__cdecl *)())0x734620)();
}

// Converted from cdecl void ObrsPrintfString(char const*,short,short) 0x734630
void ObrsPrintfString(char const* arg0, short arg1, short arg2) {
    ((void(__cdecl *)(char const*, short, short))0x734630)(arg0, arg1, arg2);
}

// Converted from cdecl void FlushObrsPrintfs(void) 0x734640
void FlushObrsPrintfs() {
    ((void(__cdecl *)())0x734640)();
}

// Converted from cdecl void DefinedState(void) 0x734650
void DefinedState() {
    ((void(__cdecl *)())0x734650)();
}

// Converted from cdecl void DefinedState2d(void) 0x734750
void DefinedState2d() {
    ((void(__cdecl *)())0x734750)();
}

// Converted from cdecl RpAtomic* GetFirstAtomicCallback(RpAtomic *atomic,void *data) 0x734810
RpAtomic* GetFirstAtomicCallback(RpAtomic* atomic, void* data) {
    return ((RpAtomic* (__cdecl *)(RpAtomic*, void*))0x734810)(atomic, data);
}

// Converted from cdecl RpAtomic* GetFirstAtomic(RpClump *clump) 0x734820
RpAtomic* GetFirstAtomic(RpClump* clump) {
    return ((RpAtomic* (__cdecl *)(RpClump*))0x734820)(clump);
}

// Converted from cdecl RpAtomic* Get2DEffectAtomicCallback(RpAtomic *atomic,void *data) 0x734850
RpAtomic* Get2DEffectAtomicCallback(RpAtomic* atomic, void* data) {
    return ((RpAtomic* (__cdecl *)(RpAtomic*, void*))0x734850)(atomic, data);
}

// Converted from cdecl RpAtomic* Get2DEffectAtomic(RpClump *clump) 0x734880
RpAtomic* Get2DEffectAtomic(RpClump* clump) {
    return ((RpAtomic* (__cdecl *)(RpClump*))0x734880)(clump);
}

// Converted from cdecl RwObject* GetFirstObjectCallback(RwObject *object,void *data) 0x7348B0
RwObject* GetFirstObjectCallback(RwObject* object, void* data) {
    return ((RwObject* (__cdecl *)(RwObject*, void*))0x7348B0)(object, data);
}

// Converted from cdecl RwObject* GetFirstObject(RwFrame *frame) 0x7348C0
RwObject* GetFirstObject(RwFrame* frame) {
    return ((RwObject* (__cdecl *)(RwFrame*))0x7348C0)(frame);
}

// Converted from cdecl RwFrame* GetFirstFrameCallback(RwFrame *frame,void *data) 0x7348F0
RwFrame* GetFirstFrameCallback(RwFrame* frame, void* data) {
    return ((RwFrame* (__cdecl *)(RwFrame*, void*))0x7348F0)(frame, data);
}

// Converted from cdecl RwFrame* GetFirstChild(RwFrame *frame) 0x734900
RwFrame* GetFirstChild(RwFrame* frame) {
    return ((RwFrame* (__cdecl *)(RwFrame*))0x734900)(frame);
}

// Converted from cdecl RwTexture* GetFirstTextureCallback(RwTexture *texture,void *data) 0x734930
RwTexture* GetFirstTextureCallback(RwTexture* texture, void* data) {
    return ((RwTexture* (__cdecl *)(RwTexture*, void*))0x734930)(texture, data);
}

// Converted from cdecl RwTexture* GetFirstTexture(RwTexDictionary *txd) 0x734940
RwTexture* GetFirstTexture(RwTexDictionary* txd) {
    return ((RwTexture* (__cdecl *)(RwTexDictionary*))0x734940)(txd);
}

// Converted from cdecl RpHAnimHierarchy* GetAnimHierarchyFromSkinClump(RpClump *clump) 0x734A40
RpHAnimHierarchy* GetAnimHierarchyFromSkinClump(RpClump* clump) {
    return ((RpHAnimHierarchy* (__cdecl *)(RpClump*))0x734A40)(clump);
}

// Converted from cdecl RpHAnimHierarchy* GetAnimHierarchyFromFrame(RwFrame *frame) 0x734AB0
RpHAnimHierarchy* GetAnimHierarchyFromFrame(RwFrame* frame) {
    return ((RpHAnimHierarchy* (__cdecl *)(RwFrame*))0x734AB0)(frame);
}

// Converted from cdecl RpHAnimHierarchy* GetAnimHierarchyFromClump(RpClump *clump) 0x734B10
RpHAnimHierarchy* GetAnimHierarchyFromClump(RpClump* clump) {
    return ((RpHAnimHierarchy* (__cdecl *)(RpClump*))0x734B10)(clump);
}

// Converted from cdecl RpAtomic* AtomicRemoveAnimFromSkinCB(RpAtomic *atomic,void *data) 0x734B90
RpAtomic* AtomicRemoveAnimFromSkinCB(RpAtomic* atomic, void* data) {
    return ((RpAtomic* (__cdecl *)(RpAtomic*, void*))0x734B90)(atomic, data);
}

// Converted from cdecl bool RpAtomicConvertGeometryToTL(RpAtomic *atomic) 0x734BE0
bool RpAtomicConvertGeometryToTL(RpAtomic* atomic) {
    return ((bool(__cdecl *)(RpAtomic*))0x734BE0)(atomic);
}

// Converted from cdecl bool RpAtomicConvertGeometryToTS(RpAtomic *atomic) 0x734C20
bool RpAtomicConvertGeometryToTS(RpAtomic* atomic) {
    return ((bool(__cdecl *)(RpAtomic*))0x734C20)(atomic);
}

// Converted from cdecl bool RpClumpConvertGeometryToTL(RpClump *clump) 0x734CB0
bool RpClumpConvertGeometryToTL(RpClump* clump) {
    return ((bool(__cdecl *)(RpClump*))0x734CB0)(clump);
}

// Converted from cdecl bool RpClumpConvertGeometryToTS(RpClump *clump) 0x734D30
bool RpClumpConvertGeometryToTS(RpClump* clump) {
    return ((bool(__cdecl *)(RpClump*))0x734D30)(clump);
}

// Converted from cdecl RpMaterial* forceLinearFilteringMatTexturesCB(RpMaterial *material,void *data) 0x734D60
RpMaterial* forceLinearFilteringMatTexturesCB(RpMaterial* material, void* data) {
    return ((RpMaterial* (__cdecl *)(RpMaterial*, void*))0x734D60)(material, data);
}

// Converted from cdecl bool SetFilterModeOnAtomicsTextures(RpAtomic *atomic,RwTextureFilterMode filtering) 0x734D80
bool SetFilterModeOnAtomicsTextures(RpAtomic* atomic, RwTextureFilterMode filtering) {
    return ((bool(__cdecl *)(RpAtomic*, RwTextureFilterMode))0x734D80)(atomic, filtering);
}

// Converted from cdecl RpAtomic* forceLinearFilteringAtomicsCB(RpAtomic *atomic,void *data) 0x734DA0
RpAtomic* forceLinearFilteringAtomicsCB(RpAtomic* atomic, void* data) {
    return ((RpAtomic* (__cdecl *)(RpAtomic*, void*))0x734DA0)(atomic, data);
}

// Converted from cdecl bool SetFilterModeOnClumpsTextures(RpClump *clump,RwTextureFilterMode filtering) 0x734DC0
bool SetFilterModeOnClumpsTextures(RpClump* clump, RwTextureFilterMode filtering) {
    return ((bool(__cdecl *)(RpClump*, RwTextureFilterMode))0x734DC0)(clump, filtering);
}

// Converted from cdecl bool RpGeometryReplaceOldMaterialWithNewMaterial(RpGeometry *geometry,RpMaterial *oldMaterial,RpMaterial *newMaterial) 0x734DE0
bool RpGeometryReplaceOldMaterialWithNewMaterial(RpGeometry* geometry, RpMaterial* oldMaterial, RpMaterial* newMaterial) {
    return ((bool(__cdecl *)(RpGeometry*, RpMaterial*, RpMaterial*))0x734DE0)(geometry, oldMaterial, newMaterial);
}

// Converted from cdecl RwTexture* RwTexDictionaryFindHashNamedTexture(RwTexDictionary *txd,uint hash) 0x734E50
RwTexture* RwTexDictionaryFindHashNamedTexture(RwTexDictionary* txd, unsigned int hash) {
    return ((RwTexture* (__cdecl *)(RwTexDictionary*, unsigned int))0x734E50)(txd, hash);
}

// Converted from cdecl RpClump* RpClumpGetBoundingSphere(RpClump *clump,RwSphere *bound,bool) 0x734FC0
RpClump* RpClumpGetBoundingSphere(RpClump* clump, RwSphere* bound, bool arg2) {
    return ((RpClump* (__cdecl *)(RpClump*, RwSphere*, bool))0x734FC0)(clump, bound, arg2);
}

// Converted from cdecl void SkinGetBonePositions(RpClump *clump) 0x735140
void SkinGetBonePositions(RpClump* clump) {
    ((void(__cdecl *)(RpClump*))0x735140)(clump);
}

// Converted from cdecl void SkinSetBonePositions(RpClump *clump) 0x7352D0
void SkinSetBonePositions(RpClump* clump) {
    ((void(__cdecl *)(RpClump*))0x7352D0)(clump);
}

// Converted from cdecl void SkinGetBonePositionsToTable(RpClump *clump,RwV3d *table) 0x735360
void SkinGetBonePositionsToTable(RpClump* clump, RwV3d* table) {
    ((void(__cdecl *)(RpClump*, RwV3d*))0x735360)(clump, table);
}

// Converted from cdecl void SetLightsWithTimeOfDayColour(RpWorld *world) 0x7354E0
void SetLightsWithTimeOfDayColour(RpWorld* world) {
    ((void(__cdecl *)(RpWorld*))0x7354E0)(world);
}

// Converted from cdecl void LightsEnable(int) 0x735720
void LightsEnable(int arg0) {
    ((void(__cdecl *)(int))0x735720)(arg0);
}

// Converted from cdecl RpWorld* LightsDestroy(RpWorld *world) 0x735730
RpWorld* LightsDestroy(RpWorld* world) {
    return ((RpWorld* (__cdecl *)(RpWorld*))0x735730)(world);
}

// Converted from cdecl void WorldReplaceNormalLightsWithScorched(RpWorld *world,float lighting) 0x7357E0
void WorldReplaceNormalLightsWithScorched(RpWorld* world, float lighting) {
    ((void(__cdecl *)(RpWorld*, float))0x7357E0)(world, lighting);
}

// Converted from cdecl void WorldReplaceScorchedLightsWithNormal(RpWorld *world) 0x735820
void WorldReplaceScorchedLightsWithNormal(RpWorld* world) {
    ((void(__cdecl *)(RpWorld*))0x735820)(world);
}

// Converted from cdecl void AddAnExtraDirectionalLight(RpWorld *world,float x,float y,float z,float red,float green,float blue) 0x735840
void AddAnExtraDirectionalLight(RpWorld* world, float x, float y, float z, float red, float green, float blue) {
    ((void(__cdecl *)(RpWorld*, float, float, float, float, float, float))0x735840)(world, x, y, z, red, green, blue);
}

// Converted from cdecl void RemoveExtraDirectionalLights(RpWorld *world) 0x7359E0
void RemoveExtraDirectionalLights(RpWorld* world) {
    ((void(__cdecl *)(RpWorld*))0x7359E0)(world);
}

// Converted from cdecl void SetAmbientAndDirectionalColours(float lighting) 0x735A20
void SetAmbientAndDirectionalColours(float lighting) {
    ((void(__cdecl *)(float))0x735A20)(lighting);
}

// Converted from cdecl void SetFlashyColours(float lighting) 0x735AB0
void SetFlashyColours(float lighting) {
    ((void(__cdecl *)(float))0x735AB0)(lighting);
}

// Converted from cdecl void SetFlashyColours_Mild(float lighting) 0x735B40
void SetFlashyColours_Mild(float lighting) {
    ((void(__cdecl *)(float))0x735B40)(lighting);
}

// Converted from cdecl void SetBrightMarkerColours(float lighting) 0x735BD0
void SetBrightMarkerColours(float lighting) {
    ((void(__cdecl *)(float))0x735BD0)(lighting);
}

// Converted from cdecl void ReSetAmbientAndDirectionalColours(void) 0x735C40
void ReSetAmbientAndDirectionalColours() {
    ((void(__cdecl *)())0x735C40)();
}

// Converted from cdecl void DeActivateDirectional(void) 0x735C70
void DeActivateDirectional() {
    ((void(__cdecl *)())0x735C70)();
}

// Converted from cdecl void ActivateDirectional(void) 0x735C80
void ActivateDirectional() {
    ((void(__cdecl *)())0x735C80)();
}

// Converted from cdecl void SetAmbientColoursToIndicateRoadGroup(int) 0x735C90
void SetAmbientColoursToIndicateRoadGroup(int arg0) {
    ((void(__cdecl *)(int))0x735C90)(arg0);
}

// Converted from cdecl void SetFullAmbient(void) 0x735D10
void SetFullAmbient() {
    ((void(__cdecl *)())0x735D10)();
}

// Converted from cdecl void SetAmbientColours(void) 0x735D30
void SetAmbientColours() {
    ((void(__cdecl *)())0x735D30)();
}

// Converted from cdecl void SetAmbientColours(RwRGBAReal *color) 0x735D50
void SetAmbientColours(RwRGBAReal* color) {
    ((void(__cdecl *)(RwRGBAReal*))0x735D50)(color);
}

// Converted from cdecl void SetDirectionalColours(RwRGBAReal *color) 0x735D70
void SetDirectionalColours(RwRGBAReal* color) {
    ((void(__cdecl *)(RwRGBAReal*))0x735D70)(color);
}

// Converted from cdecl void SetLightColoursForPedsCarsAndObjects(float lighting) 0x735D90
void SetLightColoursForPedsCarsAndObjects(float lighting) {
    ((void(__cdecl *)(float))0x735D90)(lighting);
}

// Converted from cdecl void SetLightsForInfraredVisionHeatObjects(void) 0x735E40
void SetLightsForInfraredVisionHeatObjects() {
    ((void(__cdecl *)())0x735E40)();
}

// Converted from cdecl void StoreAndSetLightsForInfraredVisionHeatObjects(void) 0x735E70
void StoreAndSetLightsForInfraredVisionHeatObjects() {
    ((void(__cdecl *)())0x735E70)();
}

// Converted from cdecl void RestoreLightsForInfraredVisionHeatObjects(void) 0x735EF0
void RestoreLightsForInfraredVisionHeatObjects() {
    ((void(__cdecl *)())0x735EF0)();
}

// Converted from cdecl void SetLightsForInfraredVisionDefaultObjects(void) 0x735F20
void SetLightsForInfraredVisionDefaultObjects() {
    ((void(__cdecl *)())0x735F20)();
}

// Converted from cdecl void SetLightsForNightVision(void) 0x735F70
void SetLightsForNightVision() {
    ((void(__cdecl *)())0x735F70)();
}