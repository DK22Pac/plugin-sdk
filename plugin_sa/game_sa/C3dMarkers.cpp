/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C3dMarkers.h"

unsigned int MAX_NUM_3DMARKERS = 32;
unsigned int MAX_NUM_USER_3DMARKERS = 5;
unsigned int MAX_NUM_DIRECTION_ARROWS = 5;

unsigned char &C3dMarkers::m_colDiamond = *(unsigned char *)0x8D5D8B;
tDirectionArrow *C3dMarkers::ms_directionArrows = (tDirectionArrow *)0xC802E8;
CRGBA &C3dMarkers::m_user3dMarkerColor = *(CRGBA *)0xC7C620;
tUser3dMarker *C3dMarkers::ms_user3dMarkers = (tUser3dMarker *)0xC80258;
bool &C3dMarkers::IgnoreRenderLimit = *(bool *)0xC7C704;
float &C3dMarkers::m_angleDiamond = *(float *)0xC7C700;
unsigned int &C3dMarkers::NumActiveMarkers = *(unsigned int *)0xC7C6D8;
C3dMarker *C3dMarkers::m_aMarkerArray = (C3dMarker *)0xC7DD58;
RpClump **C3dMarkers::m_pRpClumpArray = (RpClump **)0xC7C6DC;

// Converted from cdecl int C3dMarkers::DirectionArrowFindFirstFreeSlot(void) 0x721120
int C3dMarkers::DirectionArrowFindFirstFreeSlot() {
    return plugin::CallAndReturn<int, 0x721120>();
}

// Converted from cdecl void C3dMarkers::DirectionArrowSet(CVector posn,float size,int red,int green,int blue,int alpha,float dir_x,float dir_y,float dir_z) 0x721140
void C3dMarkers::DirectionArrowSet(CVector posn, float size, int red, int green, int blue, int alpha, float dir_x, float dir_y, float dir_z) {
    plugin::Call<0x721140, CVector, float, int, int, int, int, float, float, float>(posn, size, red, green, blue, alpha, dir_x, dir_y, dir_z);
}

// Converted from cdecl void C3dMarkers::DirectionArrowsDraw(void) 0x7211F0
void C3dMarkers::DirectionArrowsDraw() {
    plugin::Call<0x7211F0>();
}

// Converted from cdecl void C3dMarkers::DirectionArrowsInit(void) 0x721100
void C3dMarkers::DirectionArrowsInit() {
    plugin::Call<0x721100>();
}

// Converted from cdecl void C3dMarkers::ForceRender(uchar bEnable) 0x722870
void C3dMarkers::ForceRender(unsigned char bEnable) {
    plugin::Call<0x722870, unsigned char>(bEnable);
}

// Converted from cdecl void C3dMarkers::Init(void) 0x724E40
void C3dMarkers::Init() {
    plugin::Call<0x724E40>();
}

// Converted from cdecl RpClump* C3dMarkers::LoadMarker(char const*modelName) 0x722810
RpClump* C3dMarkers::LoadMarker(char const* modelName) {
    return plugin::CallAndReturn<RpClump*, 0x722810, char const*>(modelName);
}

// Converted from cdecl bool C3dMarkers::LoadUser3dMarkers(void) 0x5D42E0
bool C3dMarkers::LoadUser3dMarkers() {
    return plugin::CallAndReturn<bool, 0x5D42E0>();
}

// Converted from cdecl C3dMarker* C3dMarkers::PlaceMarker(uint id,ushort type,CVector &posn,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate,float nrm_x,float nrm_y,float nrm_z,bool zCheck) 0x725120
C3dMarker* C3dMarkers::PlaceMarker(unsigned int id, unsigned short type, CVector& posn, float size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned short pulsePeriod, float pulseFraction, short rotateRate, float nrm_x, float nrm_y, float nrm_z, bool zCheck) {
    return plugin::CallAndReturn<C3dMarker*, 0x725120, unsigned int, unsigned short, CVector&, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short, float, float, float, bool>(id, type, posn, size, red, green, blue, alpha, pulsePeriod, pulseFraction, rotateRate, nrm_x, nrm_y, nrm_z, zCheck);
}

// Converted from cdecl void C3dMarkers::PlaceMarkerCone(uint id,CVector &posn,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate,uchar bEnableCollision) 0x726D40
void C3dMarkers::PlaceMarkerCone(unsigned int id, CVector& posn, float size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned short pulsePeriod, float pulseFraction, short rotateRate, unsigned char bEnableCollision) {
    plugin::Call<0x726D40, unsigned int, CVector&, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short, unsigned char>(id, posn, size, red, green, blue, alpha, pulsePeriod, pulseFraction, rotateRate, bEnableCollision);
}

// Converted from cdecl void C3dMarkers::PlaceMarkerSet(uint id,ushort type,CVector &posn,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate) 0x725BA0
void C3dMarkers::PlaceMarkerSet(unsigned int id, unsigned short type, CVector& posn, float size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned short pulsePeriod, float pulseFraction, short rotateRate) {
    plugin::Call<0x725BA0, unsigned int, unsigned short, CVector&, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short>(id, type, posn, size, red, green, blue, alpha, pulsePeriod, pulseFraction, rotateRate);
}

// Converted from cdecl void C3dMarkers::Render(void) 0x725040
void C3dMarkers::Render() {
    plugin::Call<0x725040>();
}

// Converted from cdecl void C3dMarkers::SaveUser3dMarkers(void) 0x5D4300
void C3dMarkers::SaveUser3dMarkers() {
    plugin::Call<0x5D4300>();
}

// Converted from cdecl void C3dMarkers::Shutdown(void) 0x722710
void C3dMarkers::Shutdown() {
    plugin::Call<0x722710>();
}

// Converted from cdecl void C3dMarkers::Update(void) 0x7227B0
void C3dMarkers::Update() {
    plugin::Call<0x7227B0>();
}

// Converted from cdecl RpAtomic* C3dMarkers::User3dMarkerAtomicCB(RpAtomic *atomic,void *data) 0x7210D0
RpAtomic* C3dMarkers::User3dMarkerAtomicCB(RpAtomic* atomic, void* _IGNORED_ data) {
    return plugin::CallAndReturn<RpAtomic*, 0x7210D0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl void C3dMarkers::User3dMarkerDelete(int slotIndex) 0x721090
void C3dMarkers::User3dMarkerDelete(int slotIndex) {
    plugin::Call<0x721090, int>(slotIndex);
}

// Converted from cdecl void C3dMarkers::User3dMarkerDeleteAll(void) 0x7210B0
void C3dMarkers::User3dMarkerDeleteAll() {
    plugin::Call<0x7210B0>();
}

// Converted from cdecl int C3dMarkers::User3dMarkerFindFirstFreeSlot(void) 0x720FB0
int C3dMarkers::User3dMarkerFindFirstFreeSlot() {
    return plugin::CallAndReturn<int, 0x720FB0>();
}

// Converted from cdecl int C3dMarkers::User3dMarkerSet(float x,float y,float z,int colour) 0x720FD0
int C3dMarkers::User3dMarkerSet(float x, float y, float z, int colour) {
    return plugin::CallAndReturn<int, 0x720FD0, float, float, float, int>(x, y, z, colour);
}

// Converted from cdecl void C3dMarkers::User3dMarkersDraw(void) 0x723240
void C3dMarkers::User3dMarkersDraw() {
    plugin::Call<0x723240>();
}

// Converted from cdecl RpAtomic* MarkerAtomicCB(RpAtomic *atomic,void *data) 0x722220
RpAtomic* MarkerAtomicCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x722220, RpAtomic*, void*>(atomic, data);
}