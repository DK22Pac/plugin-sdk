/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShadows.h"

RwTexture*& gpShadowCarTex = *(RwTexture**)0x8F2C90;
RwTexture*& gpShadowExplosionTex = *(RwTexture**)0x8F2A00;
RwTexture*& gpShadowHeadLightsTex = *(RwTexture**)0x95CB98;
RwTexture*& gpShadowHeliTex = *(RwTexture**)0x8E2A90;
RwTexture*& gpShadowPedTex = *(RwTexture**)0x8F59D0;
RwTexture*& gpOutline1Tex = *(RwTexture**)0x8F1B24;
RwTexture*& gpOutline2Tex = *(RwTexture**)0x8F1B04;
RwTexture*& gpOutline3Tex = *(RwTexture**)0x8F1B08;
RwTexture*& gpBloodPoolTex = *(RwTexture**)0x9415F8;
RwTexture*& gpReflectionTex = *(RwTexture**)0x8F582C;
RwTexture*& gpGoalMarkerTex = *(RwTexture**)0x94142C;
RwTexture*& gpWalkDontTex = *(RwTexture**)0x95CB4C;
RwTexture*& gpCrackedGlassTex = *(RwTexture**)0x95CB94;
RwTexture*& gpPostShadowTex = *(RwTexture**)0x8F59D4;

CPolyBunch *&CShadows::pEmptyBunchList = *(CPolyBunch **)0x8F435C;
unsigned short &CShadows::ShadowsStoredToBeRendered = *(unsigned short *)0x95CCEE;
CRegisteredShadow *CShadows::asShadowsStored = (CRegisteredShadow *)0x779058;
CPolyBunch *CShadows::aPolyBunches = (CPolyBunch *)0x86F4C8;
CStaticShadow *CShadows::aStaticShadows = (CStaticShadow *)0x773BE8;
CPermanentShadow *CShadows::aPermanentShadows = (CPermanentShadow *)0x712040;

// Converted from thiscall void CPermanentShadow::CPermanentShadow(void) 0x517900 
CPermanentShadow::CPermanentShadow() {
    plugin::CallMethod<0x517900, CPermanentShadow *>(this);
}

// Converted from thiscall void CStaticShadow::CStaticShadow(void) 0x517910 
CStaticShadow::CStaticShadow() {
    plugin::CallMethod<0x517910, CStaticShadow *>(this);
}

// Converted from thiscall void CStaticShadow::Free(void) 0x516E70
void CStaticShadow::Free() {
    plugin::CallMethod<0x516E70, CStaticShadow *>(this);
}

// Converted from thiscall void CPolyBunch::CPolyBunch(void) 0x517920 
CPolyBunch::CPolyBunch() {
    plugin::CallMethod<0x517920, CPolyBunch *>(this);
}

// Converted from thiscall void CRegisteredShadow::CRegisteredShadow(void) 0x517940 
CRegisteredShadow::CRegisteredShadow() {
    plugin::CallMethod<0x517940, CRegisteredShadow *>(this);
}

// Converted from cdecl void CShadows::RenderIndicatorShadow(uint id, uchar shadowType, RwTexture *texture, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity) 0x517810
void CShadows::RenderIndicatorShadow(unsigned int id, unsigned char shadowType, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity) {
    plugin::Call<0x517810, unsigned int, unsigned char, RwTexture*, CVector*, float, float, float, float, short>(id, shadowType, texture, posn, frontX, frontY, sideX, sideY, intensity);
}

// Converted from cdecl void CShadows::Init(void) 0x512AB0
void CShadows::Init() {
    plugin::Call<0x512AB0>();
}

// Converted from cdecl void CShadows::Shutdown(void) 0x512F20
void CShadows::Shutdown() {
    plugin::Call<0x512F20>();
}

// Converted from cdecl void CShadows::AddPermanentShadow(uchar type, RwTexture *texture, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity, uchar red, uchar green, uchar blue, float zDistance, uint time, float upDistance) 0x512FD0
void CShadows::AddPermanentShadow(unsigned char type, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, unsigned int time, float upDistance) {
    plugin::Call<0x512FD0, unsigned char, RwTexture*, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, unsigned int, float>(type, texture, posn, frontX, frontY, sideX, sideY, intensity, red, green, blue, zDistance, time, upDistance);
}

// Converted from cdecl void CShadows::StoreStaticShadow(uint id, uchar type, RwTexture *texture, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity, uchar red, uchar green, uchar blue, float zDistance, float scale, float drawDistance, bool temporaryShadow, float upDistance) 0x5130A0
void CShadows::StoreStaticShadow(unsigned int id, unsigned char type, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, float scale, float drawDistance, bool temporaryShadow, float upDistance) {
    plugin::Call<0x5130A0, unsigned int, unsigned char, RwTexture*, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, float, float, bool, float>(id, type, texture, posn, frontX, frontY, sideX, sideY, intensity, red, green, blue, zDistance, scale, drawDistance, temporaryShadow, upDistance);
}

// Converted from cdecl void CShadows::StoreShadowToBeRendered(uchar shadowTextureType, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity, uchar red, uchar green, uchar blue) 0x513550
void CShadows::StoreShadowToBeRendered(unsigned char shadowTextureType, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue) {
    plugin::Call<0x513550, unsigned char, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char>(shadowTextureType, posn, frontX, frontY, sideX, sideY, intensity, red, green, blue);
}

// Converted from cdecl void CShadows::StoreShadowToBeRendered(uchar type, RwTexture *texture, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity, uchar red, uchar green, uchar blue, float zDistance, bool drawOnWater, float scale) 0x513750
void CShadows::StoreShadowToBeRendered(unsigned char type, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, bool drawOnWater, float scale) {
    plugin::Call<0x513750, unsigned char, RwTexture*, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, bool, float>(type, texture, posn, frontX, frontY, sideX, sideY, intensity, red, green, blue, zDistance, drawOnWater, scale);
}

// Converted from cdecl void CShadows::StoreShadowForCar(CAutomobile *car) 0x513830
void CShadows::StoreShadowForCar(CAutomobile* car) {
    plugin::Call<0x513830, CAutomobile*>(car);
}

// Converted from cdecl void CShadows::StoreCarLightShadow(CVehicle *vehicle, int id, RwTexture *texture, CVector *posn, float frontX, float frontY, float sideX, float sideY, uchar red, uchar green, uchar blue, float maxViewAngle) 0x513A70
void CShadows::StoreCarLightShadow(CVehicle* vehicle, int id, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, unsigned char red, unsigned char green, unsigned char blue, float maxViewAngle) {
    plugin::Call<0x513A70, CVehicle*, int, RwTexture*, CVector*, float, float, float, float, unsigned char, unsigned char, unsigned char, float>(vehicle, id, texture, posn, frontX, frontY, sideX, sideY, red, green, blue, maxViewAngle);
}

// Converted from cdecl void CShadows::StoreShadowForPed(CPed *ped, float displacementX, float displacementY, float frontX, float frontY, float sideX, float sideY) 0x513C50
void CShadows::StoreShadowForPed(CPed* ped, float displacementX, float displacementY, float frontX, float frontY, float sideX, float sideY) {
    plugin::Call<0x513C50, CPed*, float, float, float, float, float, float>(ped, displacementX, displacementY, frontX, frontY, sideX, sideY);
}

// Converted from cdecl void CShadows::StoreShadowForPedObject(CEntity *entity, float displacementX, float displacementY, float frontX, float frontY, float sideX, float sideY) 0x513CB0
void CShadows::StoreShadowForPedObject(CEntity* entity, float displacementX, float displacementY, float frontX, float frontY, float sideX, float sideY) {
    plugin::Call<0x513CB0, CEntity*, float, float, float, float, float, float>(entity, displacementX, displacementY, frontX, frontY, sideX, sideY);
}

// Converted from cdecl void CShadows::StoreShadowForTree(CEntity *entity) 0x513E00
void CShadows::StoreShadowForTree(CEntity* entity) {
    plugin::Call<0x513E00, CEntity*>(entity);
}

// Converted from cdecl void CShadows::StoreShadowForPole(CEntity *entity, float offsetX, float offsetY, float offsetZ, float poleHeight, float poleWidth, uint localId) 0x513E10
void CShadows::StoreShadowForPole(CEntity* entity, float offsetX, float offsetY, float offsetZ, float poleHeight, float poleWidth, unsigned int localId) {
    plugin::Call<0x513E10, CEntity*, float, float, float, float, float, unsigned int>(entity, offsetX, offsetY, offsetZ, poleHeight, poleWidth, localId);
}

// Converted from cdecl void CShadows::SetRenderModeForShadowType(uchar shadowType) 0x513FC0
void CShadows::SetRenderModeForShadowType(unsigned char shadowType) {
    plugin::Call<0x513FC0, unsigned char>(shadowType);
}

// Converted from cdecl void CShadows::RenderStoredShadows(void) 0x514010
void CShadows::RenderStoredShadows() {
    plugin::Call<0x514010>();
}

// Converted from cdecl void CShadows::RenderStaticShadows(void) 0x5145F0
void CShadows::RenderStaticShadows() {
    plugin::Call<0x5145F0>();
}

// Converted from cdecl void CShadows::GeneratePolysForStaticShadow(short staticShadowIndex) 0x514910
void CShadows::GeneratePolysForStaticShadow(short staticShadowIndex) {
    plugin::Call<0x514910, short>(staticShadowIndex);
}

// Converted from cdecl void CShadows::CastShadowSectorList(CPtrList &ptrList, float conrerAX, float cornerAY, float cornerBX, float cornerBY, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity, uchar red, uchar green, uchar blue, float zDistance, float scale, CPolyBunch **ppPolyBunch) 0x514C90
void CShadows::CastShadowSectorList(CPtrList& ptrList, float conrerAX, float cornerAY, float cornerBX, float cornerBY, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, float scale, CPolyBunch** ppPolyBunch) {
    plugin::Call<0x514C90, CPtrList&, float, float, float, float, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, float, CPolyBunch**>(ptrList, conrerAX, cornerAY, cornerBX, cornerBY, posn, frontX, frontY, sideX, sideY, intensity, red, green, blue, zDistance, scale, ppPolyBunch);
}

// Converted from cdecl void CShadows::CastShadowEntity(CEntity *entity, float conrerAX, float cornerAY, float cornerBX, float cornerBY, CVector *posn, float frontX, float frontY, float sideX, float sideY, short intensity, uchar red, uchar green, uchar blue, float zDistance, float scale, CPolyBunch **ppPolyBunch) 0x514E30
void CShadows::CastShadowEntity(CEntity* entity, float conrerAX, float cornerAY, float cornerBX, float cornerBY, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, float scale, CPolyBunch** ppPolyBunch) {
    plugin::Call<0x514E30, CEntity*, float, float, float, float, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, float, CPolyBunch**>(entity, conrerAX, cornerAY, cornerBX, cornerBY, posn, frontX, frontY, sideX, sideY, intensity, red, green, blue, zDistance, scale, ppPolyBunch);
}

// Converted from cdecl void CShadows::UpdateStaticShadows(void) 0x516BE0
void CShadows::UpdateStaticShadows() {
    plugin::Call<0x516BE0>();
}

// Converted from cdecl void CShadows::UpdatePermanentShadows(void) 0x516C40
void CShadows::UpdatePermanentShadows() {
    plugin::Call<0x516C40>();
}

// Converted from cdecl void CShadows::CalcPedShadowValues(CVector sunPosn, float *displacementX, float *displacementY, float *frontX, float *frontY, float *sideX, float *sideY) 0x516EB0
void CShadows::CalcPedShadowValues(CVector sunPosn, float* displacementX, float* displacementY, float* frontX, float* frontY, float* sideX, float* sideY) {
    plugin::Call<0x516EB0, CVector, float*, float*, float*, float*, float*, float*>(sunPosn, displacementX, displacementY, frontX, frontY, sideX, sideY);
}

// Converted from cdecl void CShadows::RenderExtraPlayerShadows(void) 0x516F90
void CShadows::RenderExtraPlayerShadows() {
    plugin::Call<0x516F90>();
}

// Converted from cdecl void CShadows::TidyUpShadows(void) 0x517570
void CShadows::TidyUpShadows() {
    plugin::Call<0x517570>();
}
