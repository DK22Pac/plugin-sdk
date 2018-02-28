/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSprite2d.h"

enum eMenuPageAlignment {
    MENU_ALIGN_NONE = 0,
    MENU_ALIGN_CENTER = 1,
    MENU_ALIGN_LEFT = 2,
    MENU_ALIGN_RIGHT
};

struct tMenuProp {
    unsigned short m_nAction;
    char m_szTitle[8];
    unsigned char m_nType;
    unsigned char m_nTargetPage;
    short m_nX;
    short m_nY;
    unsigned char m_nAlign; // see eMenuPageAlignment
private:
    char _pad11;
public:
};

VALIDATE_SIZE(tMenuProp, 0x12);

struct tMenuPage {
    char m_szTitle[8];
    unsigned char m_nPreviousPage;
    unsigned char m_nStartPage;
    tMenuProp m_aProps[12];
};

VALIDATE_SIZE(tMenuPage, 0xE2);

class CMenuManager {
public:
    char field_0;
    char field_1[3];
    float field_4;
    char field_8;
    char field_9;
    char m_nHudMode;
    char field_B;
    int field_C;
    char field_10;
    char field_11;
    char field_12;
    char field_13;
    int field_14;
    int m_PrefsBrightness;
    float field_1C;
    bool m_bSubtitles;
    char field_21;
    bool m_bWidescreen;
    char field_23;
    char field_24;
    bool m_bFrameLimiter;
    char field_26;
    char field_27;
    char field_28;
    char field_29;
    char field_2A;
    char field_2B;
    char field_2C;
    char field_2D[3];
    int field_30;
    char field_34[4];
    bool m_bMenuVisible;
    bool m_bDemoQuit;
    char field_3A;
    char field_3B;
    bool m_bExtraSplash;
    char field_3D[3];
    int field_40;
    int field_44;
    int field_48;
    unsigned int m_nGameLanguage;
    int field_50;
    int field_54;
    char field_58[1];
    char field_59;
    char field_5A;
    char field_5B;
    char field_5C[8];
    int field_64;
    int field_68;
    bool m_bGameStarted;
    char field_6D;
    char field_6E;
    char field_6F;
    int field_70;
    char field_74[4];
    int field_78;
    char field_7C;
    char field_7D[3];
    int field_80;
    CSprite2d m_apMenuSprites[26];
    int field_EC;
    int field_F0;
    int field_F4;
    int m_nCurrentPage;
    char field_FC[12];
    int field_108;
    char field_10C[4];
    char field_110[12];
    char field_11C;
    char field_11D[15];
    int field_12C;
    int field_130;
    int field_134;
    int field_138;
    int field_13C;
    char field_140;
    char field_141[1323];
    int field_66C;
    int field_670;
    char field_674[4];
    int field_678;
    char field_67C[4];
    int field_680;
public:
    void MessageScreen(const char* pText, bool bFullscreen);
};

VALIDATE_SIZE(CMenuManager, 0x684);

extern CMenuManager &FrontendMenuManager;
extern unsigned int MAX_MENU_PAGES; // default 35
extern tMenuPage *gMenuPages; // tMenuPage gMenuPages[MAX_MENU_PAGES]