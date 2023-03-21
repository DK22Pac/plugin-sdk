    /*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCullZones.h"

int& CCullZones::NumMirrorAttributeZones = *(int*)0xC87AC4;
CCullZoneReflection(&CCullZones::aMirrorAttributeZones)[72] = *(CCullZoneReflection(*)[72])0xC815C0;

int& CCullZones::NumTunnelAttributeZones = *(int*)0xC87AC0;
CCullZone(&CCullZones::aTunnelAttributeZones)[40] = *(CCullZone(*)[40])0xC81C80;

int& CCullZones::NumAttributeZones = *(int*)0xC87AC8;
CCullZone(&CCullZones::aAttributeZones)[1300] = *(CCullZone(*)[1300])0xC81F50;

int& CCullZones::CurrentFlags_Player = *(int*)0xC87AB8;
int& CCullZones::CurrentFlags_Camera = *(int*)0xC87ABC;

bool& CCullZones::bMilitaryZonesDisabled = *(bool*)0xC87ACD;

bool CZoneDef::IsPointWithin(const CVector& point) {
    return plugin::CallMethodAndReturn<bool, 0x72D850>(this, point);
}

void CCullZones::Init() {
    plugin::Call<0x72D6B0>();
}

void CCullZones::Update() {
    plugin::Call<0x72DEC0>();
}

void CCullZones::AddCullZone(const CVector& center, float unk1, float fWidthY, float fBottomZ, float fWidthX, float unk2, float fTopZ, ushort flags) {
    plugin::Call<0x72DF70>();
}

void CCullZones::AddTunnelAttributeZone(const CVector& center, float unk1, float fWidthY, float fBottomZ, float fWidthX, float unk2, float fTopZ, ushort flags) {
    plugin::Call<0x72DB50>();
}

void CCullZones::AddMirrorAttributeZone(const CVector& center, float unk1, float fWidthY, float fBottomZ, float fWidthX, float unk2, float fTopZ, eZoneAttributes flags, float cm, float vX, float vY, float vZ) {
    plugin::Call<0x72DC10>();
}

bool CCullZones::InRoomForAudio() {
    return plugin::CallAndReturn<bool, 0x72DD70>();
}

bool CCullZones::FewerCars() {
    return plugin::CallAndReturn<bool, 0x72DD80>();
}

bool CCullZones::CamNoRain() {
    return plugin::CallAndReturn<bool, 0x72DDB0>();
}

bool CCullZones::PlayerNoRain() {
    return plugin::CallAndReturn<bool, 0x72DDC0>();
}

bool CCullZones::FewerPeds() {
    return plugin::CallAndReturn<bool, 0x72DD90>();
}

bool CCullZones::NoPolice() {
    return plugin::CallAndReturn<bool, 0x72DD50>();
}

bool CCullZones::DoExtraAirResistanceForPlayer() {
    return plugin::CallAndReturn<bool, 0x72DDD0>();
}

eZoneAttributes CCullZones::FindTunnelAttributesForCoors(CVector point) {
    return plugin::CallAndReturn<eZoneAttributes, 0x72D9F0>(point);
}

CCullZoneReflection* CCullZones::FindMirrorAttributesForCoors(CVector cameraPosition) {
    return plugin::CallAndReturn<CCullZoneReflection*, 0x72DA70>(cameraPosition);
}

CCullZone* CCullZones::FindZoneWithStairsAttributeForPlayer() {
    return plugin::CallAndReturn<CCullZone*, 0x72DAD0>();
}

eZoneAttributes CCullZones::FindAttributesForCoors(CVector pos) {
    return plugin::CallAndReturn<eZoneAttributes, 0x72D970>(pos);
}
