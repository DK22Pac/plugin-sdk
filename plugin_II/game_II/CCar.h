/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CSprite.h"
#include "CPhysics.h"

class CPed;

enum eDamageType {
    DAMAGE_NONE,
    DAMAGE_BY_VEHICLE,
    DAMAGE_BY_TRAIN_TRACKS,
    DAMAGE_BY_OWN_VEHICLE,
    DAMAGE_BY_EXPLOSION,
    DAMAGE_BY_DROWNING,
    DAMAGE_BY_POLICE,
    DAMAGE_BY_DUMMY_CAR,
    DAMAGE_BY_PUBLIC_TRANSPORT,
    DAMAGE_BY_UNKNOWN_WEAPON,
    DAMAGE_BY_PUNCH,
    DAMAGE_BY_GUN,
    DAMAGE_BY_CAR_BOMB,
    DAMAGE_BY_FIRE,
    DAMAGE_BY_FLAMETHROWER,
    DAMAGE_BY_GRENADE,
    DAMAGE_BY_MOLOTOV,
    DAMAGE_BY_ROCKET_LAUNCHER,
    DAMAGE_BY_ELECTRO_WEAPON,
    DAMAGE_BY_SHOTGUN,
    DAMAGE_BY_WATER_CANNON,
    DAMAGE_BY_CAR_MINE,
    DAMAGE_BY_ANY_FOOT_WEAPON,
    DAMAGE_BY_ANY_WEAPON
};

enum eEngineState {
    STATE_BROKEN = 0,
    STATE_ENGINE_OFF = 1,
    STATE_ENGINE_ON = 3,
};

enum eCarCols {
    CAR_COLOR_DEFAULT = -1,
    CAR_COLOR_BROWN,
    CAR_COLOR_BLACK,
    CAR_COLOR_BLACK_3,
    CAR_COLOR_BLUE,
    CAR_COLOR_BLUE_GREY,
    CAR_COLOR_BRIGHT_GREEN,
    CAR_COLOR_BRIGHT_RED,
    CAR_COLOR_BROWN_2,
    CAR_COLOR_BROWNER,
    CAR_COLOR_BRIGHT_SILVER,
    CAR_COLOR_BRIGHT_YELLOW,
    CAR_COLOR_CREAM,
    CAR_COLOR_CYAN,
    CAR_COLOR_DARK_BEIGE,
    CAR_COLOR_DARK_BLUE,
    CAR_COLOR_BLUE_2,
    CAR_COLOR_DARK_GREEN,
    CAR_COLOR_DARK_RED,
    CAR_COLOR_DARK_RUST,
    CAR_COLOR_GOLD,
    CAR_COLOR_GREEN,
    CAR_COLOR_GREY,
    CAR_COLOR_LIGHT_BROWN,
    CAR_COLOR_OLIVE,
    CAR_COLOR_ORANGE,
    CAR_COLOR_PALE_BLUE,
    CAR_COLOR_PINK_RED,
    CAR_COLOR_PURPLE,
    CAR_COLOR_RED,
    CAR_COLOR_RUST,
    CAR_COLOR_SILVER,
    CAR_COLOR_SKYBLUE,
    CAR_COLOR_TURQUOISE,
    CAR_COLOR_PALE_SILVER,
    CAR_COLOR_WHITER,
    CAR_COLOR_YELLOW,
    NUM_CAR_COLORS,
};

enum eCarModels {
    MODEL_ALFA,
    MODEL_ALLARD,
    MODEL_AMDB4, 
    MODEL_APC, 
    MODEL_BANKVAN,
    MODEL_BMW,
    MODEL_BOXCAR,
    MODEL_BOXTRUCK, 
    MODEL_BUG,
    MODEL_CAR9,
    MODEL_BUICK,
    MODEL_BUS,
    MODEL_COPCAR,
    MODEL_DART, 
    MODEL_EDSEL, 
    MODEL_CAR15,
    MODEL_FIAT,
    MODEL_FIRETRUK,
    MODEL_GRAHAM,
    MODEL_GT24640,
    MODEL_CAR20,
    MODEL_GTRUCK,
    MODEL_GUNJEEP,
    MODEL_HOTDOG, 
    MODEL_HOTDOG_D1, 
    MODEL_HOTDOG_D2, 
    MODEL_HOTDOG_D3, 
    MODEL_ICECREAM, 
    MODEL_ISETLIMO, 
    MODEL_ISETTA, 
    MODEL_JEEP, 
    MODEL_JEFFREY,
    MODEL_LIMO, 
    MODEL_LIMO2,
    MODEL_MEDICAR,
    MODEL_MERC, 
    MODEL_MESSER,
    MODEL_MIURA, 
    MODEL_MONSTER,
    MODEL_MORGAN, 
    MODEL_MORRIS,
    MODEL_PICKUP, 
    MODEL_RTYPE, 
    MODEL_CAR43,
    MODEL_SPIDER,
    MODEL_SPRITE, 
    MODEL_STINGRAY,
    MODEL_STRATOS,
    MODEL_STRATOSB,
    MODEL_STRIPETB,
    MODEL_STYPE,
    MODEL_STYPECAB, 
    MODEL_SWATVAN, 
    MODEL_T2000GT,
    MODEL_TANK, 
    MODEL_TANKER, 
    MODEL_TAXI,
    MODEL_TBIRD, 
    MODEL_TOWTRUCK, 
    MODEL_TRAIN, 
    MODEL_TRAINCAB, 
    MODEL_TRAINFB, 
    MODEL_TRANCEAM,
    MODEL_TRUKCAB1,
    MODEL_TRUKCAB2,
    MODEL_TRUKCONT,
    MODEL_TRUKTRNS, 
    MODEL_TVVAN, 
    MODEL_VAN,
    MODEL_VESPA, 
    MODEL_VTYPE, 
    MODEL_WBTWIN,
    MODEL_WRECK0,
    MODEL_WRECK1,
    MODEL_WRECK2, 
    MODEL_WRECK3,
    MODEL_WRECK4,
    MODEL_WRECK5,
    MODEL_WRECK6, 
    MODEL_WRECK7,
    MODEL_WRECK8, 
    MODEL_WRECK9,
    MODEL_XK120,
    MODEL_ZCX5,
    MODEL_EDSELFBI, 
    MODEL_HOTDOG_D4,
    MODEL_KRSNABUS,
    MODEL_NUM_CAR_MODELS,
};

struct tCarDoor {
    unsigned char animationFrame;
    unsigned char field_1;
    unsigned char index;
    unsigned char field_3;
    unsigned int state;
    CPed* ped;
    unsigned char field_c;
    unsigned char field_d;
    unsigned char field_e;
    unsigned char field_f;
};

VALIDATE_SIZE(tCarDoor, 0x10);

struct tRoof {
    CSprite* sprite;
    tRoof* next;
    int x;
    int y;
    short rotation;
    unsigned char field_12;
    unsigned char field_13;
    unsigned char field_14;
    unsigned char field_15;
    unsigned char field_16;
    unsigned char field_17;
};

struct tPassenger {
    CPed* ped;
    tPassenger* prev;
};

class PLUGIN_API CCar {
public:
    tRoof* m_pRoof;
    tPassenger* m_pLastPassenger;
    int m_nCarLights;
    tCarDoor m_aCarDoor[4];
    CCar* m_pLastCar;
    CSprite* m_pSprite;
    CPed* m_pDriver;
    CCarPhysics* m_pPhysics;
    void* field_56;
    void* field_60;
    void* m_pTrailerCtrl;
    unsigned int field_68;
    unsigned int m_nIndex;
    bool m_bDamaged;
    unsigned char field_71;
    unsigned char field_72;
    unsigned char field_73;
    short m_nDamage;
    short field_76;
    unsigned short m_nBitMask;
    unsigned char field_7a;
    unsigned char field_7b;
    unsigned int field_7c;
    unsigned char field_80;
    unsigned char field_81;
    unsigned char field_82;
    unsigned char field_83;
    unsigned int m_nModel;
    unsigned int m_nMask;
    char m_nFire;
    char field_8d;
    char m_nAlarmTimer;
    unsigned char field_8f;
    int m_nDamageType;
    char m_nDamageShotTimer;
    unsigned char m_nPlayerId;
    unsigned char field_96;
    unsigned char field_97;
    int m_nDoorLockState;
    int m_nEngineState;
    int m_nTrafficCarType;
    unsigned char m_nSirenState;
    unsigned char m_nSirenPhase;
    unsigned char field_a6;
    bool m_bHorn;
    unsigned char field_a8;
    unsigned char m_nFireTimer;
    unsigned char field_aa;
    unsigned char field_ab;
    unsigned char field_ac;
    unsigned char field_ad;
    unsigned char field_ae;
    unsigned char field_af;
    unsigned int field_b0;
    unsigned char m_nPlaySound;
    bool m_bTurretRotated;
    unsigned char field_b9;
    unsigned char field_ba;
    unsigned char field_bb;

public:
    void SetPosition(CEncodedVector pos);
    void SetRemap(short remap);
};

VALIDATE_SIZE(CCar, 0xBC);
