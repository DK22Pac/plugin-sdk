/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "GBH.h"
#include "CAudioManager.h"

enum eMenuScreens {
    MENUSCREEN_OPTIONS,
    MENUSCREEN_PLAY,
    MENUSCREEN_QUIT,
    MENUSCREEN_BONUSAC,
    MENUSCREEN_BONUSDF,
    MENUSCREEN_BONUSGI,
    MENUSCREEN_VIEWHISCORE,
    MENUSCREEN_PLAYAREA1,
    MENUSCREEN_PLAYAREA2,
    MENUSCREEN_PLAYAREA3,
    MENUSCREEN_ENTERPLAYERNAME,
    MENUSCREEN_RESUMELOADSAVE,
    MENUSCREEN_HISCORES,
    MENUSCREEN_GAMEOVER,
    MENUSCREEN_BLUEBAR,
    MENUSCREEN_LOADING,
    MENUSCREEN_REDBAR,
    MENUSCREEN_CREDITS,
};

enum eMenuPages {
    MENUPAGE_NONE = -1,
    MENUPAGE_START_MENU = 0,
    MENUPAGE_PLAY = 1,
    MENUPAGE_DEAD = 2,
    MENUPAGE_AREA_COMPLETE = 3,
    MENUPAGE_GAME_COMPLETE = 4,
    MENUPAGE_VIEW_HIGH_SCORE = 5,
    MENUPAGE_BONUS_AREA = 6,
    MENUPAGE_UNK_KILLS = 7,
    MENUPAGE_PLAY_INTRO,
    MENUPAGE_CREDITS = 9,
    MENUPAGE_NICE_TRY = 10,
    MENUPAGE_RESULTS_PLAYER_QUIT = 11,
    MENUPAGE_12 = 12,
    MENUPAGE_13 = 13,
    MENUPAGE_PARENTAL_CONTROL = 14,
    MENUPAGE_15 = 15,
    NUM_MENUPAGES,

    // Not really pages
    MENUPAGE_GTA2MANAGER = 257,
    MENUPAGE_QUIT = 258,
    MENUPAGE_259 = 259,
};

enum eMenuActions {
    MENUACTION_NONE = 0,
    MENUACTION_CHANGEPAGE = 1,
    MENUACTION_SETPLAYERNAME = 2,
};

struct tTargaFileTexture {
    char path[128];
    int size;
    int id;
};
VALIDATE_OFFSET(tTargaFileTexture, path, 0x0);
VALIDATE_OFFSET(tTargaFileTexture, size, 0x80);
VALIDATE_OFFSET(tTargaFileTexture, id, 0x84);
VALIDATE_SIZE(tTargaFileTexture, 0x88);

struct tMenuEntry {
    char action; // eMenuActions
    short x;
    short y;
    wchar_t str[50];
    char gap[22];
    short targetPage; // eMenuPages
};
VALIDATE_OFFSET(tMenuEntry, action, 0x0);
VALIDATE_OFFSET(tMenuEntry, x, 0x2);
VALIDATE_OFFSET(tMenuEntry, y, 0x4);
VALIDATE_OFFSET(tMenuEntry, str, 0x6);
VALIDATE_OFFSET(tMenuEntry, gap, 0x6A);
VALIDATE_OFFSET(tMenuEntry, targetPage, 0x80);
VALIDATE_SIZE(tMenuEntry, 0x82);

struct tMenuPage {
    short numMenuItems;
    short field_4;
    tMenuEntry items[12];
    char gap[1450];
    unsigned short currentMenuItem;
    unsigned short initialMenuItem;
};
VALIDATE_OFFSET(tMenuPage, numMenuItems, 0x0);
VALIDATE_OFFSET(tMenuPage, field_4, 0x2);
VALIDATE_OFFSET(tMenuPage, items, 0x4);
VALIDATE_OFFSET(tMenuPage, gap, 0x61C);
VALIDATE_OFFSET(tMenuPage, currentMenuItem, 0xBC6);
VALIDATE_OFFSET(tMenuPage, initialMenuItem, 0xBC8);
VALIDATE_SIZE(tMenuPage, 0xBCA);

class CKeyState {
public:
    unsigned char left;
    unsigned char right;
    unsigned char up;
    unsigned char down;
    unsigned char enter;
    unsigned char esc;
    unsigned char del;

public:
    void Clear() {
        left = 0;
        right = 0;
        up = 0;
        down = 0;
        enter = 0;
        esc = 0;
        del = 0;
    }
};
VALIDATE_OFFSET(CKeyState, left, 0x0);
VALIDATE_OFFSET(CKeyState, right, 0x1);
VALIDATE_OFFSET(CKeyState, up, 0x2);
VALIDATE_OFFSET(CKeyState, down, 0x3);
VALIDATE_OFFSET(CKeyState, enter, 0x4);
VALIDATE_OFFSET(CKeyState, esc, 0x5);
VALIDATE_OFFSET(CKeyState, del, 0x6);
VALIDATE_SIZE(CKeyState, 0x7);

class CMenuManager {
public:
    LPDIRECTINPUTA m_pDirectInput;
    LPDIRECTINPUTDEVICEA m_pInputDevice;
    char m_nKeys[256];
    int m_nFrontendState;
    char m_nKeyboardAcquired;
    char m_bFrontendKeysEnabled;
    char field_271;
    char field_272;
    signed int m_nState;
    char field_277;
    char field_278;
    char field_279;
    char field_280;
    char field_281;
    char field_282;
    short field_283;
    short m_nFontStyle;
    short m_nCurrentMenuPage;
    short field_0;
    tMenuPage m_MenuPages[17];
    char gap3[44];
    CKeyState NewKeyState;
    CKeyState OldKeyState;
    int m_nTimeInMilliseconds;
    char m_nFrameCounter;
    char field_300;
    char field_301;
    int m_nTimeToWaitBeforeDemoStart;
    char gap4[237];
    char gap5[9011];
    unsigned char m_nCurrScreen;
    unsigned char field_304;
    unsigned char field_305;

public:
    static void LoadTexture(unsigned short id);
    static void FindBackground(unsigned char screen, unsigned char* left, unsigned char* right);

public:
    bool GetKeyboardKeyStates();
    bool IsKeyDown(int key);
    void SwitchToNewScreen(unsigned short page);
    int Process();
    void PopulateMenu();
};
VALIDATE_OFFSET(CMenuManager, m_pDirectInput, 0x0);
VALIDATE_OFFSET(CMenuManager, m_pInputDevice, 0x4);
VALIDATE_OFFSET(CMenuManager, m_nKeys, 0x8);
VALIDATE_OFFSET(CMenuManager, m_nFrontendState, 0x108);
VALIDATE_OFFSET(CMenuManager, m_nKeyboardAcquired, 0x10C);
VALIDATE_OFFSET(CMenuManager, m_bFrontendKeysEnabled, 0x10D);
VALIDATE_OFFSET(CMenuManager, field_271, 0x10E);
VALIDATE_OFFSET(CMenuManager, field_272, 0x10F);
VALIDATE_OFFSET(CMenuManager, m_nState, 0x110);
VALIDATE_OFFSET(CMenuManager, field_277, 0x114);
VALIDATE_OFFSET(CMenuManager, field_278, 0x115);
VALIDATE_OFFSET(CMenuManager, field_279, 0x116);
VALIDATE_OFFSET(CMenuManager, field_280, 0x117);
VALIDATE_OFFSET(CMenuManager, field_281, 0x118);
VALIDATE_OFFSET(CMenuManager, field_282, 0x119);
VALIDATE_OFFSET(CMenuManager, field_283, 0x11A);
VALIDATE_OFFSET(CMenuManager, m_nFontStyle, 0x11C);
VALIDATE_OFFSET(CMenuManager, m_nCurrentMenuPage, 0x11E);
VALIDATE_OFFSET(CMenuManager, field_0, 0x120);
VALIDATE_OFFSET(CMenuManager, m_MenuPages, 0x122);
VALIDATE_OFFSET(CMenuManager, gap3, 0xC98C);
VALIDATE_OFFSET(CMenuManager, NewKeyState, 0xC9B8);
VALIDATE_OFFSET(CMenuManager, OldKeyState, 0xC9BF);
VALIDATE_OFFSET(CMenuManager, m_nTimeInMilliseconds, 0xC9C8);
VALIDATE_OFFSET(CMenuManager, m_nFrameCounter, 0xC9CC);
VALIDATE_OFFSET(CMenuManager, field_300, 0xC9CD);
VALIDATE_OFFSET(CMenuManager, field_301, 0xC9CE);
VALIDATE_OFFSET(CMenuManager, m_nTimeToWaitBeforeDemoStart, 0xC9D0);
VALIDATE_OFFSET(CMenuManager, gap4, 0xC9D4);
VALIDATE_OFFSET(CMenuManager, gap5, 0xCAC1);
VALIDATE_OFFSET(CMenuManager, m_nCurrScreen, 0xEDF4);
VALIDATE_OFFSET(CMenuManager, field_304, 0xEDF5);
VALIDATE_OFFSET(CMenuManager, field_305, 0xEDF6);
VALIDATE_SIZE(CMenuManager, 0xEDF8);

extern CMenuManager** FrontendMenuManager;
extern tTargaFileTexture* StoredFrontendTextures;

extern CMenuManager* GetFrontendMenuManager();
