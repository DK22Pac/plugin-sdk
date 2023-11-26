/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSprite2d.h"

enum eMenuScreen : int32_t {
    MENUPAGE_NONE = 0x7FFFFFFF,
    MENUPAGE_PAUSE_GAME = 0,
    MENUPAGE_PAUSE_BRIEF = 2,
    MENUPAGE_PAUSE_MAP = 3,
    MENUPAGE_PAUSE_STATS = 4,
    MENUPAGE_PAUSE_CONTROLS = 5,
    MENUPAGE_PAUSE_AUDIO = 7,
    MENUPAGE_PAUSE_DISPLAY = 8,
    MENUPAGE_PAUSE_GRAPHICS = 49,
    MENUPAGE_PAUSE_NEW = 13,
    MENUPAGE_PAUSE_LOAD = 14,
    MENUPAGE_PAUSE_SAVE = 15,
    MENUPAGE_MAIN_SELECT = 50,
    MENUPAGE_MAIN_CONTROLS = 59,
    MENUPAGE_MAIN_AUDIO = 60,
    MENUPAGE_MAIN_DISPLAY = 61,
    MENUPAGE_MAIN_GRAPHICS = 62,
    MENUPAGE_MAIN_GAME = 63,
    MENUPAGE_MAIN_CUSTOMMAPPING = 69,
    MENUPAGE_MAIN_CONTROLLERCONFIG = 70,
    MENUPAGE_MAIN_KEYANDMOUSE = 71,
    MENUPAGE_MAIN_CONTROLLER = 72,
    NUM_MENU_PAGES = 74
};

enum eMenuActions : int32_t {
    MENUACTION_RES = 109,

};

enum eMenuState : int32_t {
    MENUSTATE_START_GAME = 6,
    MENUSTATE_OPTIONS = 9,
    MENUSTATE_SAVE_GAME_ASK = 12,
    MENUSTATE_QUIT_INSTANTLY = 52,
    MENUSTATE_QUIT_ASK = 53,
    MENUSTATE_SC_HELP = 71,
};

enum eFrontend360Sprites {
    FE360_SPRITE_MAP_FADER_BLACK,
    FE360_SPRITE_CURSOR,
    FE360_SPRITE_HORIZ_STATS_LINE,
    FE360_SPRITE_SCROLL_FADE,
    FE360_SPRITE_SPEAKER_SETUP_A_SIRE,
    FE360_SPRITE_SPEAKER_SEYUP_B_REAR,
    FE360_SPRITE_GO_ONLINE,
    FE360_SPRITE_NEON,
    FE360_SPRITE_NEON_OFFLINE,
    FE360_SPRITE_GRADIENT
};

struct CMenuEntry {
    uint8_t m_nAction;
    char m_EntryName[10];
    uint8_t field_3[6];
    uint16_t m_nTargetMenu;
    uint8_t field_5[2];
};

VALIDATE_SIZE(CMenuEntry, 0x16);

struct CMenuScreen {
    CMenuEntry* m_aEntries;
    uint8_t field_2[20];
};

VALIDATE_SIZE(CMenuScreen, 0x18);

class CMenuManager {
public:
    static CSprite2d* Frontend360Sprites; // [10]
    static CSprite2d& MouseCursorSprite;
    static CSprite2d& ReplayPointerSprite;
    static CSprite2d& ReplayPointerSprite2;
    static CSprite2d& ControllerSprite;
    static CSprite2d* MapSprites; // [4]

    static int32_t& m_PrefsAspectRatio;
    static int32_t& m_PrefsLanguage;
    static int32_t& m_PrefsUseVibration;
    static bool& m_MenuActive;
    static int32_t& m_nWaypointIndex;
    static int32_t& m_CurrScreen;
    static int32_t& m_PrevScreen;
    static int32_t& m_CurrState;
    static int32_t& m_Episode;
    static int8_t& m_DontDrawMenuBar;
    static int32_t& m_EpisodeToStart;
    static char*& m_EpisodeStr;
    static uint8_t& m_SelectEpisode;
    static uint8_t& m_DefaultFrontend;
    static uint8_t& m_Refresh;

public:
    static void SwitchMenuScreen(int32_t arg1, int32_t screen, int32_t option);
    static void DrawMouseCursor();
    static void SetHideMenuBar(uint8_t off);
    static int32_t GetCurrentOption(int32_t index);
    static void DrawHelpText();
    static void SetHelpText(const char* right, const char* left, uint8_t arg3);
};

extern CMenuScreen* aScreens;
