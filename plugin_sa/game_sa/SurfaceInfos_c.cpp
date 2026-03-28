/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "SurfaceInfos_c.h"

SurfaceInfos_c& g_surfaceInfos = *reinterpret_cast<SurfaceInfos_c*>(0xB79538);

// 0x55D220
SurfaceId SurfaceInfos_c::GetSurfaceIdFromName(const char* cName) {
    return plugin::CallAndReturn<SurfaceId, 0x55D220, const char*>(cName);
}

// 0x55D0E0
void SurfaceInfos_c::LoadAdhesiveLimits() {
    plugin::CallMethod<0x55D0E0, SurfaceInfos_c*>(this);
}

// 0x55EB90
void SurfaceInfos_c::LoadSurfaceInfos() {
    plugin::CallMethod<0x55EB90, SurfaceInfos_c*>(this);
}

// 0x55F2B0
void SurfaceInfos_c::LoadSurfaceAudioInfos() {
    plugin::CallMethod<0x55F2B0, SurfaceInfos_c*>(this);
}

// 0x55F420
void SurfaceInfos_c::Init() {
    plugin::CallMethod<0x55F420, SurfaceInfos_c*>(this);
}

// 0x55E5C0
eAdhesionGroup SurfaceInfos_c::GetAdhesionGroup(SurfaceId id) {
    return plugin::CallMethodAndReturn<eAdhesionGroup, 0x55E5C0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E5E0
float SurfaceInfos_c::GetTyreGrip(SurfaceId id) {
    return plugin::CallMethodAndReturn<float, 0x55E5E0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E600
float SurfaceInfos_c::GetWetMultiplier(SurfaceId id) {
    return plugin::CallMethodAndReturn<float, 0x55E600, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E630
uint32_t SurfaceInfos_c::GetSkidmarkType(SurfaceId id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E630, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E650
eFrictionEffect SurfaceInfos_c::GetFrictionEffect(SurfaceId id) {
    return plugin::CallMethodAndReturn<eFrictionEffect, 0x55E650, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E670
uint32_t SurfaceInfos_c::GetBulletFx(SurfaceId id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E670, SurfaceInfos_c*>(this, id);
}

// 0x55E690
bool SurfaceInfos_c::IsSoftLanding(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E690, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E6B0
bool SurfaceInfos_c::IsSeeThrough(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E6B0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E6D0
bool SurfaceInfos_c::IsShootThrough(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E6D0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E6F0
bool SurfaceInfos_c::IsSand(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E6F0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E710
bool SurfaceInfos_c::IsWater(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E710, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E730
bool SurfaceInfos_c::IsShallowWater(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E730, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E750
bool SurfaceInfos_c::IsBeach(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E750, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E770
bool SurfaceInfos_c::IsSteepSlope(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E770, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E790
bool SurfaceInfos_c::IsGlass(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E790, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E7B0
bool SurfaceInfos_c::IsStairs(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E7B0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E7D0
bool SurfaceInfos_c::IsSkateable(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E7D0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E7F0
bool SurfaceInfos_c::IsPavement(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E7F0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E810
uint32_t SurfaceInfos_c::GetRoughness(SurfaceId id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E810, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E830
uint32_t SurfaceInfos_c::GetFlammability(SurfaceId id) {
    return plugin::CallMethodAndReturn<uint32_t, 0x55E830, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E850
bool SurfaceInfos_c::CreatesSparks(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E850, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E870
bool SurfaceInfos_c::CantSprintOn(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E870, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E890
bool SurfaceInfos_c::LeavesFootsteps(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E890, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E8B0
bool SurfaceInfos_c::ProducesFootDust(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E8B0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E8D0
bool SurfaceInfos_c::MakesCarDirty(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E8D0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E8F0
bool SurfaceInfos_c::MakesCarClean(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E8F0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E910
bool SurfaceInfos_c::CreatesWheelGrass(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E910, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E930
bool SurfaceInfos_c::CreatesWheelGravel(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E930, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E950
bool SurfaceInfos_c::CreatesWheelMud(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E950, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E970
bool SurfaceInfos_c::CreatesWheelDust(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E970, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E990
bool SurfaceInfos_c::CreatesWheelSand(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E990, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E9B0
bool SurfaceInfos_c::CreatesWheelSpray(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E9B0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E9D0
bool SurfaceInfos_c::CreatesPlants(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E9D0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55E9F0
bool SurfaceInfos_c::CreatesObjects(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55E9F0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EA10
bool SurfaceInfos_c::CanClimb(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA10, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EA30
bool SurfaceInfos_c::IsAudioConcrete(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA30, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EA50
bool SurfaceInfos_c::IsAudioGrass(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA50, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EA70
bool SurfaceInfos_c::IsAudioSand(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA70, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EA90
bool SurfaceInfos_c::IsAudioGravel(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EA90, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EAB0
bool SurfaceInfos_c::IsAudioWood(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EAB0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EAD0
bool SurfaceInfos_c::IsAudioWater(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EAD0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EAF0
bool SurfaceInfos_c::IsAudioMetal(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EAF0, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EB10
bool SurfaceInfos_c::IsAudioLongGrass(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EB10, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EB30
bool SurfaceInfos_c::IsAudioTile(SurfaceId id) {
    return plugin::CallMethodAndReturn<bool, 0x55EB30, SurfaceInfos_c*, SurfaceId>(this, id);
}

// 0x55EB50
float SurfaceInfos_c::GetAdhesiveLimit(CColPoint* colPoint) {
    return plugin::CallMethodAndReturn<float, 0x55EB50, SurfaceInfos_c*, CColPoint*>(this, colPoint);
}