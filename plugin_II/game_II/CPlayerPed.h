/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CPhysics.h"
#include "CCamera.h"

class CCar;
class CPed;
class CPlayerPed;

enum eDeathReason {
    DEATHREASON_WASTED = 0,
    DEATHREASON_FRIED = 2,
    DEATHREASON_NICKED = 3,
    DEATHREASON_SHOCKED = 4,
    NUM_DEATHREASONS,
};

struct tCounter {
    int value;
    unsigned char field_4;
    unsigned char field_5;
    unsigned char field_6;
    unsigned char field_7;
    unsigned char field_8;
    unsigned char field_9;
    unsigned char field_10;
    unsigned char field_11;
    unsigned char field_12;
    unsigned char field_13;
    unsigned char field_14;
    unsigned char field_15;
    unsigned char field_16;
    unsigned char field_17;
    unsigned char field_18;
    unsigned char field_19;
    int field_20;
    unsigned char field_24;
    unsigned char field_25;
    unsigned char field_26;
    unsigned char field_27;
    unsigned char field_28;
    unsigned char field_29;
    unsigned char field_30;
    unsigned char field_31;
    CPlayerPed* player;
    unsigned char field_36;
    unsigned char field_37;
    unsigned char field_38;
    unsigned char field_39;
    unsigned char field_40;
    unsigned char field_41;
    short field_42;
    short field_44;
    short field_46;
    int field_47;
    unsigned char field_52;
    unsigned char field_53;
    short id;
};

VALIDATE_SIZE(tCounter, 0x38);

class PLUGIN_API CPlayerPed {
public:
    bool field_0;
    char field_1;
    unsigned char field_2;
    unsigned char field_3;
    int m_nKeyboardKey;
    short field_8;
    short field_10;
    int field_12;
    unsigned char field_16;
    unsigned char field_17;
    unsigned char field_18;
    unsigned char field_19;
    short field_20;
    short field_22;
    short field_24;
    unsigned char field_26;
    unsigned char field_27;
    unsigned char field_28;
    unsigned char field_29;
    unsigned char field_30;
    unsigned char field_31;
    unsigned char field_32;
    unsigned char field_33;
    unsigned char field_34;
    unsigned char field_35;
    unsigned char field_36;
    unsigned char field_37;
    unsigned char field_38;
    unsigned char field_39;
    unsigned char field_40;
    unsigned char field_41;
    short field_42;
    short field_44;
    unsigned char m_nIndex;
    unsigned char field_47;
    unsigned char field_48;
    unsigned char field_49;
    char field_50;
    char field_51;
    int field_52;
    int field_56;
    int field_60;
    char field_64;
    char field_65;
    char field_66;
    char field_67;
    int m_nDeathReason; // eDeathReason
    unsigned char field_72;
    char field_73;
    char field_74;
    char field_75;
    void* field_76;
    void* field_80;
    CCar* m_pLastCars[3];
    int field_96;
    unsigned char field_100;
    char field_101;
    char field_102;
    char field_103;
    int field_104;
    int m_bProcessDebugControls;
    bool m_bNumpadUp;
    bool m_bNumpadDown;
    bool m_bNumpadLeft;
    bool m_bNumpadRight;
    bool m_bNumpadPageDown;
    bool m_bNumpadPageUp;
    bool m_bPageDown;
    bool m_bPageUp;
    bool m_bButtonForward;
    bool m_bButtonBackward;
    bool m_bButtonLeft;
    bool m_bButtonRight;
    bool m_bButtonAttack;
    bool m_bButtonEnterExit;
    bool m_bButtonHandbrakeJump;
    bool m_bButtonPrevWeapon;
    bool m_bButtonNextWeapon;
    bool m_bButtonSpecial;
    bool m_bButtonSpecial2;
    bool field_131;
    bool m_bOldButtonSpecial;
    bool m_bOldButtonSpecial2;
    bool field_134;
    bool m_bOldButtonNextWeapon;
    bool m_bOldButtonPrevWeapon;
    bool m_bOldButtonEnterExit;
    bool m_bOldButtonHandbrakeJump;
    bool m_bOldButtonForward;
    bool m_bOldButtonBackward;
    bool m_bOldButtonAttack;
    bool m_bProcess;
    bool m_bFired;
    CCamera m_GameCamera; 
    CCamera m_ViewCamera;
    CCamera m_AuxCamera;
    CPed* m_pPed;
    void* field_712;
    void* field_716;
    char field_720;
    char field_721;
    char field_722;
    char field_723;
    tCounter m_MoneyCounter;
    char field_1593[820];
    unsigned char field_1600;
    char field_1601;
    char field_1602;
    char field_1603;
    void* field_1604;
    char field_1608[48];
    int field_1656;
    int field_1660;
    unsigned short field_1662;
    unsigned short field_1664;
    tCounter m_Lives;
    tCounter m_MoneyMultiplier;
    unsigned char field_1780;
    unsigned char field_1781;
    unsigned char field_1782;
    unsigned char field_1783;
    unsigned char field_1784;
    unsigned char field_1785;
    unsigned char m_nArmor;
    unsigned char field_1787[140];
    unsigned short field_1928;
    unsigned char m_bShowGameQuitText;
    unsigned char field_1931;
    unsigned int field_1932;
    unsigned short field_1936;
    unsigned char field_1937;
    unsigned char field_1938;
    unsigned char field_1939;
    unsigned char field_1940;
    unsigned char field_1941;
    unsigned char field_1942;
    unsigned char field_1943[196];

public:
    CPlayerPed(char index);
    ~CPlayerPed();
    void SetInitialState();
    void Teleport(int x, int y, int z);
    void GiveMoney(unsigned int money);
    bool IsKeyJustDown(int key);
    bool IsKeyDown(int key);
    bool IsKeyUp(int key);
    void ProcessKeyPresses(unsigned short key);
    void ProcessActions(char forward, char backward, char left, char right, char prevWeap, char nextWeap);
    void Process();
    void SetPed(CPed* ped);
    CPed* GetPed();
    void SetAllControlStatusOff();
    void SetAllControlStatusOn();
    void SetEnterControlStatusOff();
    void SetEnterControlStatusOn();
    CCamera* GetAuxCamera();
};

VALIDATE_SIZE(CPlayerPed, 0x85C);
