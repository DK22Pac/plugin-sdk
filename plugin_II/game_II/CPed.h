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

class CPed {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPed)

public:
    unsigned __int8 field_0[44];
    int m_nCounter;
    unsigned __int8 field_30;
    unsigned __int8 field_31;
    char field_32;
    char field_33;
    char m_nObjective;
    char field_34;
    char m_nPrevObjective;
    unsigned __int8 field_38[9];
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
    unsigned __int8 field_27C[20];

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

VALIDATE_SIZE(CPed, 0x294);
