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
VALIDATE_OFFSET(tCarDoor, animationFrame, 0x0);
VALIDATE_OFFSET(tCarDoor, field_1, 0x1);
VALIDATE_OFFSET(tCarDoor, index, 0x2);
VALIDATE_OFFSET(tCarDoor, field_3, 0x3);
VALIDATE_OFFSET(tCarDoor, state, 0x4);
VALIDATE_OFFSET(tCarDoor, ped, 0x8);
VALIDATE_OFFSET(tCarDoor, field_c, 0xC);
VALIDATE_OFFSET(tCarDoor, field_d, 0xD);
VALIDATE_OFFSET(tCarDoor, field_e, 0xE);
VALIDATE_OFFSET(tCarDoor, field_f, 0xF);
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
VALIDATE_OFFSET(tRoof, sprite, 0x0);
VALIDATE_OFFSET(tRoof, next, 0x4);
VALIDATE_OFFSET(tRoof, x, 0x8);
VALIDATE_OFFSET(tRoof, y, 0xC);
VALIDATE_OFFSET(tRoof, rotation, 0x10);
VALIDATE_OFFSET(tRoof, field_12, 0x12);
VALIDATE_OFFSET(tRoof, field_13, 0x13);
VALIDATE_OFFSET(tRoof, field_14, 0x14);
VALIDATE_OFFSET(tRoof, field_15, 0x15);
VALIDATE_OFFSET(tRoof, field_16, 0x16);
VALIDATE_OFFSET(tRoof, field_17, 0x17);
VALIDATE_SIZE(tRoof, 0x18);

struct tPassenger {
    CPed* ped;
    tPassenger* prev;
};
VALIDATE_OFFSET(tPassenger, ped, 0x0);
VALIDATE_OFFSET(tPassenger, prev, 0x4);
VALIDATE_SIZE(tPassenger, 0x8);

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
VALIDATE_OFFSET(CCar, m_pRoof, 0x0);
VALIDATE_OFFSET(CCar, m_pLastPassenger, 0x4);
VALIDATE_OFFSET(CCar, m_nCarLights, 0x8);
VALIDATE_OFFSET(CCar, m_aCarDoor, 0xC);
VALIDATE_OFFSET(CCar, m_pLastCar, 0x4C);
VALIDATE_OFFSET(CCar, m_pSprite, 0x50);
VALIDATE_OFFSET(CCar, m_pDriver, 0x54);
VALIDATE_OFFSET(CCar, m_pPhysics, 0x58);
VALIDATE_OFFSET(CCar, field_56, 0x5C);
VALIDATE_OFFSET(CCar, field_60, 0x60);
VALIDATE_OFFSET(CCar, m_pTrailerCtrl, 0x64);
VALIDATE_OFFSET(CCar, field_68, 0x68);
VALIDATE_OFFSET(CCar, m_nIndex, 0x6C);
VALIDATE_OFFSET(CCar, m_bDamaged, 0x70);
VALIDATE_OFFSET(CCar, field_71, 0x71);
VALIDATE_OFFSET(CCar, field_72, 0x72);
VALIDATE_OFFSET(CCar, field_73, 0x73);
VALIDATE_OFFSET(CCar, m_nDamage, 0x74);
VALIDATE_OFFSET(CCar, field_76, 0x76);
VALIDATE_OFFSET(CCar, m_nBitMask, 0x78);
VALIDATE_OFFSET(CCar, field_7a, 0x7A);
VALIDATE_OFFSET(CCar, field_7b, 0x7B);
VALIDATE_OFFSET(CCar, field_7c, 0x7C);
VALIDATE_OFFSET(CCar, field_80, 0x80);
VALIDATE_OFFSET(CCar, field_81, 0x81);
VALIDATE_OFFSET(CCar, field_82, 0x82);
VALIDATE_OFFSET(CCar, field_83, 0x83);
VALIDATE_OFFSET(CCar, m_nModel, 0x84);
VALIDATE_OFFSET(CCar, m_nMask, 0x88);
VALIDATE_OFFSET(CCar, m_nFire, 0x8C);
VALIDATE_OFFSET(CCar, field_8d, 0x8D);
VALIDATE_OFFSET(CCar, m_nAlarmTimer, 0x8E);
VALIDATE_OFFSET(CCar, field_8f, 0x8F);
VALIDATE_OFFSET(CCar, m_nDamageType, 0x90);
VALIDATE_OFFSET(CCar, m_nDamageShotTimer, 0x94);
VALIDATE_OFFSET(CCar, m_nPlayerId, 0x95);
VALIDATE_OFFSET(CCar, field_96, 0x96);
VALIDATE_OFFSET(CCar, field_97, 0x97);
VALIDATE_OFFSET(CCar, m_nDoorLockState, 0x98);
VALIDATE_OFFSET(CCar, m_nEngineState, 0x9C);
VALIDATE_OFFSET(CCar, m_nTrafficCarType, 0xA0);
VALIDATE_OFFSET(CCar, m_nSirenState, 0xA4);
VALIDATE_OFFSET(CCar, m_nSirenPhase, 0xA5);
VALIDATE_OFFSET(CCar, field_a6, 0xA6);
VALIDATE_OFFSET(CCar, m_bHorn, 0xA7);
VALIDATE_OFFSET(CCar, field_a8, 0xA8);
VALIDATE_OFFSET(CCar, m_nFireTimer, 0xA9);
VALIDATE_OFFSET(CCar, field_aa, 0xAA);
VALIDATE_OFFSET(CCar, field_ab, 0xAB);
VALIDATE_OFFSET(CCar, field_ac, 0xAC);
VALIDATE_OFFSET(CCar, field_ad, 0xAD);
VALIDATE_OFFSET(CCar, field_ae, 0xAE);
VALIDATE_OFFSET(CCar, field_af, 0xAF);
VALIDATE_OFFSET(CCar, field_b0, 0xB0);
VALIDATE_OFFSET(CCar, m_nPlaySound, 0xB4);
VALIDATE_OFFSET(CCar, m_bTurretRotated, 0xB5);
VALIDATE_OFFSET(CCar, field_b9, 0xB6);
VALIDATE_OFFSET(CCar, field_ba, 0xB7);
VALIDATE_OFFSET(CCar, field_bb, 0xB8);
VALIDATE_SIZE(CCar, 0xBC);
