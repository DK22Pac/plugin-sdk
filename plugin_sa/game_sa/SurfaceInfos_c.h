/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eSurfaceType.h"

class CColPoint;

typedef uint32_t SurfaceId;

enum eAdhesionGroup {
    ADHESION_GROUP_RUBBER = 0,
    ADHESION_GROUP_HARD,
    ADHESION_GROUP_ROAD,
    ADHESION_GROUP_LOOSE,
    ADHESION_GROUP_SAND,
    ADHESION_GROUP_WET,
};

enum eFrictionEffect {
    FRICTION_EFFECT_NONE = 0,
    FRICTION_EFFECT_SPARKS,
    FRICTION_EFFECT_MORE
};

enum eBulletFX {
    BULLET_FX_NONE = 0,
    BULLET_FX_SPARKS,
    BULLET_FX_SAND,
    BULLET_FX_WOOD,
    BULLET_FX_DUST,
};

struct SurfaceInfo {
    char     SurfaceName[64];
    char     AdhesionGroup[32];
    float    TyreGrip;
    float    WetGrip;
    char     SkidMark[32];
    char     FrictionEffect[32];
    int32_t  SoftLand;
    int32_t  SeeThrough;
    int32_t  ShootThrough;
    int32_t  Sand;
    int32_t  Water;
    int32_t  ShallowWater;
    int32_t  Beach;
    int32_t  SteepSlope;
    int32_t  Glass;
    int32_t  Stairs;
    int32_t  Skateable;
    int32_t  Pavement;
    int32_t  Roughness;
    int32_t  Flame;
    int32_t  Sparks;
    int32_t  Sprint;
    int32_t  Footsteps;
    int32_t  FootDust;
    int32_t  CarDirt;
    int32_t  CarClean;
    int32_t  WheelGrass;
    int32_t  WheelGravel;
    int32_t  WheelMud;
    int32_t  WheelDust;
    int32_t  WheelSand;
    int32_t  WheelSpray;
    int32_t  ProcPlant;
    int32_t  ProcObj;
    int32_t  Climbable;
    char     BulletFx[32];
};

class SurfaceInfo_c {
public:
    int8_t tyreGrip; // tyre grip - will override friction values for vehicle tyres on each material
    int8_t wetGrip;  // wet multiplier on tyre grip
    union {
        struct {
            uint32_t ucAdhesionGroup : 3; // see eAdhesionGroup. Used to calculate friction between materials
            uint32_t ucSkidmarkType : 2; // see eSkidMarkType
            uint32_t ucFrictionEffect : 3; // see eFrictionEffect

            uint32_t ucBulletFX : 3;       // see eBulletFX. The effect that is played when a bullet hits this surface.
            uint32_t bIsSoftLand : 1;
            uint32_t bIsSeeThrough : 1;    // no camera collision
            uint32_t bIsShootThrough : 1;  // bullets go through
            uint32_t bIsSand : 1;          // car tyres sink in and can get bogged down
            uint32_t bIsWater : 1;

            uint32_t bIsShallowWater : 1;
            uint32_t bIsBeach : 1;
            uint32_t bIsSteepSlope : 1;   // code won't let player run or jump up slope - used to stop the player getting up a hill
            uint32_t bIsGlass : 1;        // will shatter when shot
            uint32_t bIsStairs : 1;       // don't tilt peds as if they're walking up a slope
            uint32_t bIsSkateable : 1;
            uint32_t bIsPavement : 1;     // used so peds know when it's safe to stop and chat, or when they're crossing a road
            uint32_t ucRoughness : 2;     // (0:not, 1:quite, 2:rough, 3:very) (does pad vibration)
            uint32_t ucFlammability : 2;  // (0:not, 1:flammable, 2:very)
            uint32_t bCreatesSparks : 1;  // NOT USED ANYMORE
            uint32_t bCantSprintOn : 1;
            uint32_t bLeavesFootsteps : 1;
            uint32_t bProducesFootDust : 1;
            uint32_t bMakesCarDirty : 1;

            uint32_t bMakesCarClean : 1;
            uint32_t bCreatesWheelGrass : 1;
            uint32_t bCreatesWheelGravel : 1;
            uint32_t bCreatesWheelMud : 1;
            uint32_t bCreatesWheelDust : 1;
            uint32_t bCreatesWheelSand : 1;
            uint32_t bCreatesWheelSpray : 1;
            uint32_t bCreatesPlants : 1;

            uint32_t bCreatesObjects : 1;
            uint32_t bCanClimb : 1;
            uint32_t bIsAudioConcrete : 1;
            uint32_t bIsAudioGrass : 1;
            uint32_t bIsAudioSand : 1;
            uint32_t bIsAudioGravel : 1;
            uint32_t bIsAudioWood : 1;
            uint32_t bIsAudioWater : 1;

            uint32_t bIsAudioMetal : 1;
            uint32_t bIsAudioLongGrass : 1;
            uint32_t bIsAudioTile : 1;
            uint32_t bPad : 13;
        };
        uint32_t m_nFlags1;
        uint32_t m_nFlags2;
    };
};

VALIDATE_SIZE(SurfaceInfo_c, 0xC);



class SurfaceInfos_c {
public:
    float m_adhesiveLimits[6][6];
    SurfaceInfo_c m_surfaces[TOTAL_NUM_SURFACE_TYPES];

    //static constexpr const char* cDefaultName = "DEFAULT"; // 0x85C658

public:
    SurfaceId GetSurfaceIdFromName(const char* cName);
    void LoadAdhesiveLimits();
    void LoadSurfaceAudioInfos();
    void LoadSurfaceInfos();
    void Init();
    eAdhesionGroup GetAdhesionGroup(SurfaceId id);
    float GetTyreGrip(SurfaceId id);
    float GetWetMultiplier(SurfaceId id);
    uint32_t GetSkidmarkType(SurfaceId id);
    eFrictionEffect GetFrictionEffect(SurfaceId id);
    uint32_t GetBulletFx(SurfaceId id);
    bool IsSoftLanding(SurfaceId id);
    bool IsSeeThrough(SurfaceId id);
    bool IsShootThrough(SurfaceId id);
    bool IsSand(SurfaceId id);
    bool IsWater(SurfaceId id);
    bool IsShallowWater(SurfaceId id);
    bool IsBeach(SurfaceId id);
    bool IsSteepSlope(SurfaceId id);
    bool IsGlass(SurfaceId id);
    bool IsStairs(SurfaceId id);
    bool IsSkateable(SurfaceId id);
    bool IsPavement(SurfaceId id);
    uint32_t GetRoughness(SurfaceId id);
    uint32_t GetFlammability(SurfaceId id);
    bool CreatesSparks(SurfaceId id);
    bool CantSprintOn(SurfaceId id);
    bool LeavesFootsteps(SurfaceId id);
    bool ProducesFootDust(SurfaceId id);
    bool MakesCarDirty(SurfaceId id);
    bool MakesCarClean(SurfaceId id);
    bool CreatesWheelGrass(SurfaceId id);
    bool CreatesWheelGravel(SurfaceId id);
    bool CreatesWheelMud(SurfaceId id);
    bool CreatesWheelDust(SurfaceId id);
    bool CreatesWheelSand(SurfaceId id);
    bool CreatesWheelSpray(SurfaceId id);
    bool CreatesPlants(SurfaceId id);
    bool CreatesObjects(SurfaceId id);
    bool CanClimb(SurfaceId id);
    bool IsAudioConcrete(SurfaceId id);
    bool IsAudioGrass(SurfaceId id);
    bool IsAudioSand(SurfaceId id);
    bool IsAudioGravel(SurfaceId id);
    bool IsAudioWood(SurfaceId id);
    bool IsAudioWater(SurfaceId id);
    bool IsAudioMetal(SurfaceId id);
    bool IsAudioLongGrass(SurfaceId id);
    bool IsAudioTile(SurfaceId id);
    float GetAdhesiveLimit(CColPoint* colPoint);
};
VALIDATE_SIZE(SurfaceInfos_c, 0x8F4);