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

struct tMenuEntry {
    char action; // eMenuActions
    short x;
    short y;
    wchar_t str[50];
    char gap[22];
    short targetPage; // eMenuPages
};

struct tMenuPage {
    short numMenuItems;
    short field_4;
    tMenuEntry items[12];
    char gap[1450];
    unsigned short currentMenuItem;
    unsigned short initialMenuItem;
};

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

VALIDATE_SIZE(CMenuManager, 0xEDF8);

extern CMenuManager** FrontendMenuManager;
extern tTargaFileTexture* StoredFrontendTextures;

extern CMenuManager* GetFrontendMenuManager();
