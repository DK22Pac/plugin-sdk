/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCar.h"
#include "CObject.h"
#include "CWeapon.h"
#include "CVector.h"

enum eState {
    STATE_NONE,
};

enum ePedState {
    PEDSTATE_MOVE_TURN,
    PEDSTATE_ENTER_CAR = 3,
    PEDSTATE_EXIT_CAR = 4,
    PEDSTATE_IDLE = 7,
    PEDSTATE_FALL = 8,
    PEDSTATE_DEAD = 9,
    PEDSTATE_IN_CAR = 10,
};

enum eObjective {
    OBJECTIVE_NONE,
    OBJECTIVE_FLEE_ON_FOOT_TILL_SAFE,
    OBJECTIVE_FLEE_CHAR_ON_FOOT_TILL_SAFE,
    OBJECTIVE_FLEE_CHAR_ON_FOOT_ALWAYS,
    OBJECTIVE_4,
    OBJECTIVE_5,
    OBJECTIVE_6,
    OBJECTIVE_7,
    OBJECTIVE_8,
    OBJECTIVE_9,
    OBJECTIVE_10,
    OBJECTIVE_11,
    OBJECTIVE_GOTO_AREA_ON_FOOT,
    OBJECTIVE_13,
    OBJECTIVE_GOTO_AREA_IN_CAR,
    OBJECTIVE_15,
    OBJECTIVE_GOTO_CHAR_ON_FOOT,
    OBJECTIVE_17,
    OBJECTIVE_18,
    OBJECTIVE_KILL_CHAR_ANY_MEANS,
    OBJECTIVE_KILL_CHAR_ON_FOOT,
    OBJECTIVE_21,
    OBJECTIVE_22,
    OBJECTIVE_23,
    OBJECTIVE_GUARD_SPOT,
    OBJECTIVE_GUARD_AREA,
    OBJECTIVE_WAIT_ON_FOOT, 
    OBJECTIVE_WAIT_IN_CAR,
    OBJECTIVE_28,
    OBJECTIVE_29,
    OBJECTIVE_30,
    OBJECTIVE_31,
    OBJECTIVE_32,
    OBJECTIVE_33,
    OBJECTIVE_34,
    OBJECTIVE_ENTER_CAR_AS_DRIVER,
    OBJECTIVE_LEAVE_CAR,
    OBJECTIVE_37 = 37,
    OBJECTIVE_54 = 54,
    OBJECTIVE_FOLLOW_CAR_IN_CAR,
    OBJECTIVE_FOLLOW_CAR_ON_FOOT_WITH_OFFSET,
    OBJECTIVE_FIRE_AT_OBJECT_FROM_VEHICLE,
    OBJECTIVE_DESTROY_OBJECT,
    OBJECTIVE_DESTROY_CAR
};

enum eSearchType {
    SEARCHTYPE_NO_THREATS,
    SEARCHTYPE_LINE_OF_SIGHT,
    SEARCHTYPE_LINE_OF_SIGHT_PLAYER_ONLY,
    SEARCHTYPE_AREA,
    SEARCHTYPE_AREA_PLAYER_ONLY,
};

enum eReactionType {
    REACT_NONE,
    REACT_NORMAL,
    REACT_RUNAWAY
};

enum eGraphicType {
    GRAPHIC_DUMMY,
    GRAPHIC_EMERG,
    GRAPHIC_GANG,
};

enum eOccupation {
    OCCUPATION_PLAYER = 0,
    OCCUPATION_EMPTY = 1,
    OCCUPATION_2,
    OCCUPATION_DUMMY = 3,
    OCCUPATION_4,
    OCCUPATION_DRIVER,
    OCCUPATION_PSYCHO = 14,
    OCCUPATION_MUGGER,
    OCCUPATION_CARTHIEF,
    OCCUPATION_BANK_ROBBER,
    OCCUPATION_CRIMINAL,
    OCCUPATION_ELVIS = 22,
    OCCUPATION_POLICE = 24,
    OCCUPATION_SWAT,
    OCCUPATION_FBI,
    OCCUPATION_ARMY,
    OCCUPATION_GUARD,
    OCCUPATION_GUARD_AGAINST_PLAYER = 32,
    OCCUPATION_CRIMINAL_TYPE1,
    OCCUPATION_CRIMINAL_TYPE2,
    OCCUPATION_SPECIAL_GROUP_MEMBER,
    OCCUPATION_TANK_DRIVER,
    OCCUPATION_37,
    OCCUPATION_FIREMAN,
    OCCUPATION_ROAD_BLOCK_TANK_MAN,
    OCCUPATION_DRONE = 41,
    OCCUPATION_42,
    OCCUPATION_STAND_STILL_BLOKE,
    OCCUPATION_ELVIS_LEADER,
    OCCUPATION_REFUGEES,
    OCCUPATION_ANY_LAW_ENFORCEMENT,
    OCCUPATION_ANY_EMERGENCY_SERVICE_MAN,
    OCCUPATION_ANY_GANG_MEMBER,
    OCCUPATION_ANY_ELVIS,
    OCCUPATION_50,
    OCCUPATION_NONE = 51,
};

enum eRemap {
    REMAP_COP,
    REMAP_GREEN_COP,
    REMAP_RED_COP,
    REMAP_YELLOW_COP,
    REMAP_ARMY,
    REMAP_REDNECK_1,
    REMAP_REDNECK_2,
    REMAP_SCIENTIST,
    REMAP_ZAIBATSU,
    REMAP_KRISHNA,
    REMAP_RUSSIAN,
    REMAP_LOONIE,
    REMAP_ELVIS,
    REMAP_YAKUZA,
    REMAP_FIRE_FIGHTER,
    REMAP_CAR_JACKER,
    REMAP_MEDIC,
    REMAP_PICKPOCKET,
    REMAP_BLUE_PEDESTRIAN,
    REMAP_LIGHT_BLUE_PEDESTRIAN,
    REMAP_RED_PEDESTRIAN,
    REMAP_PEDESTRIAN,
    REMAP_PRISONER,
    REMAP_HULK,
    REMAP_HULK_GREEN,
    REMAP_PLAYER,
    REMAP_NAKED_PEDESTRIAN,
};

enum eWantedLevel {
    WANTED_LEVEL_1 = 600,
    WANTED_LEVEL_2 = 1600,
    WANTED_LEVEL_3 = 3000,
    WANTED_LEVEL_4 = 5000,
    WANTED_LEVEL_5 = 8000,
    WANTED_LEVEL_6 = 12000,
};

class CPedWeapon {
public:
    char field_0[1816];
    CWeapon* m_pWeapons[28];
    short m_nCurrentWeapon;
};
VALIDATE_OFFSET(CPedWeapon, field_0, 0x0);
VALIDATE_OFFSET(CPedWeapon, m_pWeapons, 0x718);
VALIDATE_OFFSET(CPedWeapon, m_nCurrentWeapon, 0x788);
VALIDATE_SIZE(CPedWeapon, 0x78C);

class CPed {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPed)

public:
    char field_0[44];
    int m_nCounter;
    char field_30;
    char field_31;
    char field_32;
    char field_33;
    char m_nObjective;
    char field_34;
    char m_nPrevObjective;
    char field_38[9];
    unsigned __int16 field_40;
    unsigned char field_42[234];
    unsigned short field_300;
    unsigned short field_302;
    unsigned short field_304;
    unsigned char field_305;
    unsigned char field_306;
    unsigned short m_nRotation;
    unsigned char field_308;
    unsigned char field_309;
    int field_310;
    int field_314;
    CCar* m_pRefCar;
    int field_324;
    CPed* m_pRefPed;
    int field_332;
    CCar* m_pArmyCarRef;
    CCar* m_pTargetCarToEnter;
    int field_344;
    CPedWeapon* m_pWeapons;
    CPed* m_pNextPed;
    CPed* m_pTarget;
    CObject* m_pObject;
    CCar* m_pCurrentCar;
    CWeapon* m_pSelectedWeapon;
    void* m_pWeap;
    unsigned int field_178;
    unsigned int field_17c;
    CPed* m_pPedRef;
    unsigned int field_184;
    unsigned int field_188;
    unsigned int field_18c;
    unsigned int field_190;
    unsigned int field_194;
    unsigned int field_198;
    unsigned int field_19c;
    unsigned int field_1a0;
    unsigned int field_420;
    CPed* m_pElvisLeader;
    CEncodedVector m_vPosition;
    char field_430[12];
    CPed* field_1c4;
    CPed* field_1c8;
    CPed* field_1cc;
    unsigned int field_1d0;
    unsigned int field_1d4;
    unsigned int field_472;
    unsigned char field_473[12];
    unsigned int field_474;
    unsigned int field_475;
    float m_fMaxRunSpeed;
    unsigned int field_477;
    float m_fMaxDriveSpeed;
    unsigned int field_1FC;
    unsigned int m_nId;
    unsigned int m_nTargetPedId;
    unsigned short m_nInvulnerability;
    short m_nWantedLevel;
    unsigned short field_20c;
    unsigned short field_20e;
    unsigned short field_210;
    unsigned short field_212;
    unsigned short field_214;
    unsigned short m_nHealth;
    unsigned short m_nTimerAction;
    unsigned short field_21a;
    //unsigned char m_nFlags;
    struct {
        unsigned char bUnk : 5;
        unsigned char bIsArrested : 1;
    } m_nPedFlags;
    unsigned int field_220;
    unsigned char field_224;
    unsigned char m_nActionTimer;
    unsigned char field_226;
    unsigned char field_227;
    unsigned char field_228;
    unsigned char field_229;
    unsigned char field_22a;
    unsigned char field_22b;
    unsigned int field_22c;
    unsigned int field_230;
    unsigned char field_234;
    unsigned char field_235;
    unsigned char field_236;
    unsigned char field_237;
    unsigned int m_nSearchType; // eSearchType
    unsigned char field_23c;
    unsigned char field_23d;
    unsigned char field_23e;
    unsigned char field_23f;
    unsigned int m_nOccupation; // eOccupation
    unsigned char m_nRemap; // eRemap
    unsigned char field_245;
    unsigned char field_246;
    unsigned char field_247;
    unsigned int field_248;
    unsigned char m_nTargetCarDoor;
    unsigned char field_24d;
    unsigned char field_24e;
    unsigned char field_24f;
    unsigned int field_250;
    unsigned char field_254;
    unsigned char field_255;
    unsigned char field_256;
    unsigned char field_257;
    unsigned int m_nState; // eState
    unsigned int field_25c;
    unsigned char field_260;
    unsigned char field_261;
    unsigned char field_262;
    unsigned char field_263;
    unsigned char field_264;
    unsigned char field_265;
    unsigned char field_266;
    unsigned char field_267;
    unsigned char field_268;
    unsigned char field_269;
    unsigned char field_26a;
    unsigned char field_26b;
    unsigned int m_nGraphicType; // eGraphicType
    unsigned int field_270;
    unsigned int m_nGangCarModel;
    unsigned int m_nPedState; // ePedState
    unsigned int field_27B;
    char field_27C[20];

public:
    void GiveWeapon(int id, int ammo);
    void SetWantedLevel(char level);
    void ClearWantedLevel();
    unsigned int GetId();
    void SetHealth(short health);
    void Clear();
    void SetSearchType(eSearchType type);
    CSprite* GetSprite();
    CCar* GetCar();
    int const& GetPositionX(int* x);
    int const& GetPositionY(int* y);
    int const& GetPositionZ(int* z);
    CEncodedVector GetPosition();
    CEncodedVector2D GetPosition2D();
    short const& GetRotation(short* r);
    void SetPosition2D(CEncodedVector2D pos);
    void SetRotation(short rot);
    void SetOccupation(int occupation);
    void SetRemap(char remap);
    char GetRemap();
    void EnterCarAsPassenger(CCar* target);
};
VALIDATE_OFFSET(CPed, field_0, 0x0);
VALIDATE_OFFSET(CPed, m_nCounter, 0x2C);
VALIDATE_OFFSET(CPed, field_30, 0x30);
VALIDATE_OFFSET(CPed, field_31, 0x31);
VALIDATE_OFFSET(CPed, field_32, 0x32);
VALIDATE_OFFSET(CPed, field_33, 0x33);
VALIDATE_OFFSET(CPed, m_nObjective, 0x34);
VALIDATE_OFFSET(CPed, field_34, 0x35);
VALIDATE_OFFSET(CPed, m_nPrevObjective, 0x36);
VALIDATE_OFFSET(CPed, field_38, 0x37);
VALIDATE_OFFSET(CPed, field_40, 0x40);
VALIDATE_OFFSET(CPed, field_42, 0x42);
VALIDATE_OFFSET(CPed, field_300, 0x12C);
VALIDATE_OFFSET(CPed, field_302, 0x12E);
VALIDATE_OFFSET(CPed, field_304, 0x130);
VALIDATE_OFFSET(CPed, field_305, 0x132);
VALIDATE_OFFSET(CPed, field_306, 0x133);
VALIDATE_OFFSET(CPed, m_nRotation, 0x134);
VALIDATE_OFFSET(CPed, field_308, 0x136);
VALIDATE_OFFSET(CPed, field_309, 0x137);
VALIDATE_OFFSET(CPed, field_310, 0x138);
VALIDATE_OFFSET(CPed, field_314, 0x13C);
VALIDATE_OFFSET(CPed, m_pRefCar, 0x140);
VALIDATE_OFFSET(CPed, field_324, 0x144);
VALIDATE_OFFSET(CPed, m_pRefPed, 0x148);
VALIDATE_OFFSET(CPed, field_332, 0x14C);
VALIDATE_OFFSET(CPed, m_pArmyCarRef, 0x150);
VALIDATE_OFFSET(CPed, m_pTargetCarToEnter, 0x154);
VALIDATE_OFFSET(CPed, field_344, 0x158);
VALIDATE_OFFSET(CPed, m_pWeapons, 0x15C);
VALIDATE_OFFSET(CPed, m_pNextPed, 0x160);
VALIDATE_OFFSET(CPed, m_pTarget, 0x164);
VALIDATE_OFFSET(CPed, m_pObject, 0x168);
VALIDATE_OFFSET(CPed, m_pCurrentCar, 0x16C);
VALIDATE_OFFSET(CPed, m_pSelectedWeapon, 0x170);
VALIDATE_OFFSET(CPed, m_pWeap, 0x174);
VALIDATE_OFFSET(CPed, field_178, 0x178);
VALIDATE_OFFSET(CPed, field_17c, 0x17C);
VALIDATE_OFFSET(CPed, m_pPedRef, 0x180);
VALIDATE_OFFSET(CPed, field_184, 0x184);
VALIDATE_OFFSET(CPed, field_188, 0x188);
VALIDATE_OFFSET(CPed, field_18c, 0x18C);
VALIDATE_OFFSET(CPed, field_190, 0x190);
VALIDATE_OFFSET(CPed, field_194, 0x194);
VALIDATE_OFFSET(CPed, field_198, 0x198);
VALIDATE_OFFSET(CPed, field_19c, 0x19C);
VALIDATE_OFFSET(CPed, field_1a0, 0x1A0);
VALIDATE_OFFSET(CPed, field_420, 0x1A4);
VALIDATE_OFFSET(CPed, m_pElvisLeader, 0x1A8);
VALIDATE_OFFSET(CPed, m_vPosition, 0x1AC);
VALIDATE_OFFSET(CPed, field_430, 0x1B8);
VALIDATE_OFFSET(CPed, field_1c4, 0x1C4);
VALIDATE_OFFSET(CPed, field_1c8, 0x1C8);
VALIDATE_OFFSET(CPed, field_1cc, 0x1CC);
VALIDATE_OFFSET(CPed, field_1d0, 0x1D0);
VALIDATE_OFFSET(CPed, field_1d4, 0x1D4);
VALIDATE_OFFSET(CPed, field_472, 0x1D8);
VALIDATE_OFFSET(CPed, field_473, 0x1DC);
VALIDATE_OFFSET(CPed, field_474, 0x1E8);
VALIDATE_OFFSET(CPed, field_475, 0x1EC);
VALIDATE_OFFSET(CPed, m_fMaxRunSpeed, 0x1F0);
VALIDATE_OFFSET(CPed, field_477, 0x1F4);
VALIDATE_OFFSET(CPed, m_fMaxDriveSpeed, 0x1F8);
VALIDATE_OFFSET(CPed, field_1FC, 0x1FC);
VALIDATE_OFFSET(CPed, m_nId, 0x200);
VALIDATE_OFFSET(CPed, m_nTargetPedId, 0x204);
VALIDATE_OFFSET(CPed, m_nInvulnerability, 0x208);
VALIDATE_OFFSET(CPed, m_nWantedLevel, 0x20A);
VALIDATE_OFFSET(CPed, field_20c, 0x20C);
VALIDATE_OFFSET(CPed, field_20e, 0x20E);
VALIDATE_OFFSET(CPed, field_210, 0x210);
VALIDATE_OFFSET(CPed, field_212, 0x212);
VALIDATE_OFFSET(CPed, field_214, 0x214);
VALIDATE_OFFSET(CPed, m_nHealth, 0x216);
VALIDATE_OFFSET(CPed, m_nTimerAction, 0x218);
VALIDATE_OFFSET(CPed, field_21a, 0x21A);
VALIDATE_OFFSET(CPed, m_nPedFlags, 0x21C);
VALIDATE_OFFSET(CPed, field_220, 0x220);
VALIDATE_OFFSET(CPed, field_224, 0x224);
VALIDATE_OFFSET(CPed, m_nActionTimer, 0x225);
VALIDATE_OFFSET(CPed, field_226, 0x226);
VALIDATE_OFFSET(CPed, field_227, 0x227);
VALIDATE_OFFSET(CPed, field_228, 0x228);
VALIDATE_OFFSET(CPed, field_229, 0x229);
VALIDATE_OFFSET(CPed, field_22a, 0x22A);
VALIDATE_OFFSET(CPed, field_22b, 0x22B);
VALIDATE_OFFSET(CPed, field_22c, 0x22C);
VALIDATE_OFFSET(CPed, field_230, 0x230);
VALIDATE_OFFSET(CPed, field_234, 0x234);
VALIDATE_OFFSET(CPed, field_235, 0x235);
VALIDATE_OFFSET(CPed, field_236, 0x236);
VALIDATE_OFFSET(CPed, field_237, 0x237);
VALIDATE_OFFSET(CPed, m_nSearchType, 0x238);
VALIDATE_OFFSET(CPed, field_23c, 0x23C);
VALIDATE_OFFSET(CPed, field_23d, 0x23D);
VALIDATE_OFFSET(CPed, field_23e, 0x23E);
VALIDATE_OFFSET(CPed, field_23f, 0x23F);
VALIDATE_OFFSET(CPed, m_nOccupation, 0x240);
VALIDATE_OFFSET(CPed, m_nRemap, 0x244);
VALIDATE_OFFSET(CPed, field_245, 0x245);
VALIDATE_OFFSET(CPed, field_246, 0x246);
VALIDATE_OFFSET(CPed, field_247, 0x247);
VALIDATE_OFFSET(CPed, field_248, 0x248);
VALIDATE_OFFSET(CPed, m_nTargetCarDoor, 0x24C);
VALIDATE_OFFSET(CPed, field_24d, 0x24D);
VALIDATE_OFFSET(CPed, field_24e, 0x24E);
VALIDATE_OFFSET(CPed, field_24f, 0x24F);
VALIDATE_OFFSET(CPed, field_250, 0x250);
VALIDATE_OFFSET(CPed, field_254, 0x254);
VALIDATE_OFFSET(CPed, field_255, 0x255);
VALIDATE_OFFSET(CPed, field_256, 0x256);
VALIDATE_OFFSET(CPed, field_257, 0x257);
VALIDATE_OFFSET(CPed, m_nState, 0x258);
VALIDATE_OFFSET(CPed, field_25c, 0x25C);
VALIDATE_OFFSET(CPed, field_260, 0x260);
VALIDATE_OFFSET(CPed, field_261, 0x261);
VALIDATE_OFFSET(CPed, field_262, 0x262);
VALIDATE_OFFSET(CPed, field_263, 0x263);
VALIDATE_OFFSET(CPed, field_264, 0x264);
VALIDATE_OFFSET(CPed, field_265, 0x265);
VALIDATE_OFFSET(CPed, field_266, 0x266);
VALIDATE_OFFSET(CPed, field_267, 0x267);
VALIDATE_OFFSET(CPed, field_268, 0x268);
VALIDATE_OFFSET(CPed, field_269, 0x269);
VALIDATE_OFFSET(CPed, field_26a, 0x26A);
VALIDATE_OFFSET(CPed, field_26b, 0x26B);
VALIDATE_OFFSET(CPed, m_nGraphicType, 0x26C);
VALIDATE_OFFSET(CPed, field_270, 0x270);
VALIDATE_OFFSET(CPed, m_nGangCarModel, 0x274);
VALIDATE_OFFSET(CPed, m_nPedState, 0x278);
VALIDATE_OFFSET(CPed, field_27B, 0x27C);
VALIDATE_OFFSET(CPed, field_27C, 0x280);
VALIDATE_SIZE(CPed, 0x294);
