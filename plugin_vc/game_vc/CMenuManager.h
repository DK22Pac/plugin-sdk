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

enum eMenuScreen {
    MENUPAGE_NONE = -1,
    MENUPAGE_STATS = 0,
    MENUPAGE_NEW_GAME = 1,
    MENUPAGE_BRIEFS = 2,
    MENUPAGE_SOUND_SETTINGS = 3,
    MENUPAGE_DISPLAY_SETTINGS = 4,
    MENUPAGE_LANGUAGE_SETTINGS = 5,
    MENUPAGE_MAP = 6,
    MENUPAGE_NEW_GAME_RELOAD = 7,
    MENUPAGE_CHOOSE_LOAD_SLOT = 8,
    MENUPAGE_CHOOSE_DELETE_SLOT = 9,
    MENUPAGE_LOAD_SLOT_CONFIRM = 10,
    MENUPAGE_DELETE_SLOT_CONFIRM = 11,
    MENUPAGE_LOADING_IN_PROGRESS = 12,
    MENUPAGE_DELETING_IN_PROGRESS = 13,
    MENUPAGE_DELETE_SUCCESSFUL = 14,
    MENUPAGE_CHOOSE_SAVE_SLOT = 15,
    MENUPAGE_SAVE_OVERWRITE_CONFIRM = 16,
    MENUPAGE_SAVING_IN_PROGRESS = 17,
    MENUPAGE_SAVE_SUCCESSFUL = 18,
    MENUPAGE_SAVE_CUSTOM_WARNING = 19,
    MENUPAGE_SAVE_CHEAT_WARNING = 20,
    MENUPAGE_SKIN_SELECT = 21,
    MENUPAGE_SAVE_UNUSED = 22,
    MENUPAGE_SAVE_FAILED = 23,
    MENUPAGE_SAVE_FAILED_2 = 24,
    MENUPAGE_LOAD_FAILED = 25,
    MENUPAGE_CONTROLLER_PC = 26,
    MENUPAGE_OPTIONS = 27,
    MENUPAGE_EXIT = 28,
    MENUPAGE_START_MENU = 29,
    MENUPAGE_KEYBOARD_CONTROLS = 30,
    MENUPAGE_MOUSE_CONTROLS = 31,
    MENUPAGE_PAUSE_MENU = 32,
    MENUPAGE_34 = 33,
};

enum eMenuAction {
    MENUACTION_NOTHING,
    MENUACTION_LABEL,
    MENUACTION_YES,
    MENUACTION_NO,
    MENUACTION_CHANGEMENU,
    MENUACTION_INVERTPADY,
    MENUACTION_CTRLDISPLAY,
    MENUACTION_FRAMESYNC,
    MENUACTION_FRAMELIMIT,
    MENUACTION_TRAILS,
    MENUACTION_SUBTITLES,
    MENUACTION_WIDESCREEN,
    MENUACTION_BRIGHTNESS,
    MENUACTION_MUSICVOLUME,
    MENUACTION_SFXVOLUME,
    MENUACTION_RADIO,
    MENUACTION_LANG_ENG,
    MENUACTION_LANG_FRE,
    MENUACTION_LANG_GER,
    MENUACTION_LANG_ITA,
    MENUACTION_LANG_SPA,
    MENUACTION_POPULATESLOTS_CHANGEMENU,
    MENUACTION_CHECKSAVE,
    MENUACTION_NEWGAME,
    MENUACTION_RESUME_FROM_SAVEZONE,
    MENUACTION_RELOADIDE,
    MENUACTION_SETDBGFLAG,
    MENUACTION_LOADRADIO,
    MENUACTION_SAVEGAME,
    MENUACTION_29,
    MENUACTION_30,
    MENUACTION_LEGEND,
    MENUACTION_RADARMODE,
    MENUACTION_HUD,
    MENUACTION_GOBACK,
    MENUACTION_REDEFCTRL,
    MENUACTION_GETKEY,
    MENUACTION_SHOWHEADBOB,
    MENUACTION_38,
    MENUACTION_INVVERT,
    MENUACTION_CANCELGAME,
    MENUACTION_RESUME,
    MENUACTION_DONTCANCEL,
    MENUACTION_SCREENRES,
    MENUACTION_AUDIOHW,
    MENUACTION_SPEAKERCONF,
    MENUACTION_PLAYERSETUP,
    MENUACTION_RESTOREDEF,
    MENUACTION_CTRLMETHOD,
    MENUACTION_DYNAMICACOUSTIC,
    MENUACTION_MOUSESTEER,
    MENUACTION_DRAWDIST,
    MENUACTION_MOUSESENS,
    MENUACTION_MP3VOLUMEBOOST
};

struct PLUGIN_API CMenuScreen {
    char m_ScreenName[8];
    unsigned char m_nPreviousPage;
    unsigned char m_nParentEntry;

    struct CMenuEntry {
        unsigned short m_Action;
        char m_EntryName[8];
        unsigned char m_nSaveSlot;
        unsigned char m_nTargetMenu;
        unsigned short m_nX;
        unsigned short m_nY;
        unsigned short m_nAlign;
    } m_aEntries[12];
};

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
    char m_ControlMethod;
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

extern CMenuManager &FrontEndMenuManager;
extern unsigned int MAX_MENU_PAGES; // default 35
extern CMenuScreen *gMenuPages; // tMenuPage gMenuPages[MAX_MENU_PAGES]
