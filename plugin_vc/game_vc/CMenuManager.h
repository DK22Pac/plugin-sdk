/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSprite2d.h"
#include "CPlayerSkin.h"

enum eMenuPageAlignment {
    MENU_ALIGN_NONE = 0,
    MENU_ALIGN_CENTER = 1,
    MENU_ALIGN_LEFT = 2,
    MENU_ALIGN_RIGHT
};

enum {
    NUM_ENTRIES = 12
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
    MENUPAGE_SAVE = 22,
    MENUPAGE_SAVE_FAILED = 23,
    MENUPAGE_SAVE_FAILED_2 = 24,
    MENUPAGE_LOAD_FAILED = 25,
    MENUPAGE_CONTROLLER_PC = 26,
    MENUPAGE_OPTIONS = 27,
    MENUPAGE_EXIT = 28,
    MENUPAGE_START_MENU = 29,
    MENUPAGE_KEYBOARD_CONTROLS = 30,
    MENUPAGE_MOUSE_SETTINGS = 31,
    MENUPAGE_PAUSE_MENU = 32,
    MENUPAGE_34 = 33,
    NUM_MENU_PAGES,
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

enum eMenuSprites {
    MENUSPRITE_BACKGROUND,
    MENUSPRITE_VCLOGO,
    MENUSPRITE_MOUSE,
    MENUSPRITE_MAPTOP01,
    MENUSPRITE_MAPTOP02,
    MENUSPRITE_MAPTOP03,
    MENUSPRITE_MAPMID01,
    MENUSPRITE_MAPMID02,
    MENUSPRITE_MAPMID03,
    MENUSPRITE_MAPBOT01,
    MENUSPRITE_MAPBOT02,
    MENUSPRITE_MAPBOT03,
    MENUSPRITE_WILDSTYLE,
    MENUSPRITE_FLASH,
    MENUSPRITE_KCHAT,
    MENUSPRITE_FEVER,
    MENUSPRITE_VROCK,
    MENUSPRITE_VCPR,
    MENUSPRITE_ESPANTOSO,
    MENUSPRITE_EMOTION,
    MENUSPRITE_WAVE,
    MENUSPRITE_MP3LOGO,
    MENUSPRITE_DOWNOFF,
    MENUSPRITE_DOWNON,
    MENUSPRITE_UPOFF,
    MENUSPRITE_UPON,
};

class PLUGIN_API CMenuPoly {
public:
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    float x4;
    float y4;
};
VALIDATE_OFFSET(CMenuPoly, x1, 0x0);
VALIDATE_OFFSET(CMenuPoly, y1, 0x4);
VALIDATE_OFFSET(CMenuPoly, x2, 0x8);
VALIDATE_OFFSET(CMenuPoly, y2, 0xC);
VALIDATE_OFFSET(CMenuPoly, x3, 0x10);
VALIDATE_OFFSET(CMenuPoly, y3, 0x14);
VALIDATE_OFFSET(CMenuPoly, x4, 0x18);
VALIDATE_OFFSET(CMenuPoly, y4, 0x1C);
VALIDATE_SIZE(CMenuPoly, 0x20);

struct PLUGIN_API CMenuScreen {
    char m_ScreenName[8];
    char m_nPreviousPage;
    char m_nParentEntry;

    struct CMenuEntry {
        unsigned short m_nAction;
        char m_EntryName[8];
        unsigned char m_nSaveSlot;
        char m_nTargetMenu;
        unsigned short m_nX;
        unsigned short m_nY;
        unsigned short m_nAlign;
    } m_aEntries[NUM_ENTRIES];
};
VALIDATE_OFFSET(CMenuScreen, m_ScreenName, 0x0);
VALIDATE_OFFSET(CMenuScreen, m_nPreviousPage, 0x8);
VALIDATE_OFFSET(CMenuScreen, m_nParentEntry, 0x9);
VALIDATE_OFFSET(CMenuScreen, m_aEntries, 0xA);
VALIDATE_SIZE(CMenuScreen, 0xE2);

class CMenuManager {
public:
    char m_nStatsScrollDir;
    char field_1[3];
    float m_fStatsScrollSpeed;
    char field_8;
    bool m_bPrefsUseVibration;
    bool m_bPrefsShowHud;
    char field_B;
    int m_nPrefsRadarMode;
    char m_bDisplayControllerOnFoot;
    bool m_bShutDownFrontEndRequested;
    bool m_bStartUpFrontEndRequested;
    char field_13;
    int m_nKeyPressedCode;
    int m_nPrefsBrightness;
    float m_fPrefsLOD;
    bool m_bPrefsShowSubtitles;
    bool m_bPrefsShowLegends;
    bool m_bPrefsUseWideScreen;
    bool m_bPrefsVsync;
    bool m_bPrefsVsyncDisp;
    bool m_bPrefsFrameLimiter;
    char m_nPrefsAudio3DProviderIndex;
    char m_nPrefsSpeakers;
    bool m_bPrefsDMA;
    char m_nPrefsSfxVolume;
    char m_nPrefsMusicVolume;
    char m_nPrefsRadioStation;
    bool m_bPrefsStereoMono;
    char field_2D[3];
    int m_nCurrentMenuEntry;
    bool m_bQuitGameNoCD;
    bool m_bDrawRadarOrMap;
    bool m_bAllowNavigation;
    bool m_bStreamingDone;
    bool m_bMenuActive;
    bool m_bWantToRestart;
    char m_bFirstTime;
    bool m_bSaveMenuActive;
    bool m_bWantToLoad;
    char field_3D[3];
    float m_fMapZoom;
    float m_fMapBaseX;
    float m_fMapBaseY;
    int OS_Language;
    int m_nPrefsLanguage;
    int field_54;
    bool m_bLanguageLoaded;
    bool m_bPrefsAllowNastyGame;
    char m_nPrefsMP3BoostVolume;
    char m_nControlMethod;
    int m_nPrefsVideoMode;
    int m_nDisplayVideoMode;
    int m_nMouseTempPosX;
    int m_nMouseTempPosY;
    bool m_bGameNotLoaded;
    char m_nPreviousAudioIndex;
    char m_bFrontEnd_ReloadObrTxtGxt;
    char field_6F;
    int* pEditString;
    char field_74[4];
    int* pControlEdit;
    bool m_bOnlySaveMenu;
    char field_7D[3];
    int m_nMenuFadeAlpha2;
    CSprite2d m_aMenuSprites[26];
    int m_bSpritesLoaded;
    int m_nRadioIconsLeftPosition;
    int m_nScrollRadioOffset;
    int m_nCurrentMenuPage;
    int m_nPreviousMenuPage;
    int m_nCurrentSaveSlot;
    int field_BC;
    int m_nMenuFadeAlpha;
    int m_nOptionHighlightTransitionBlend;
    bool m_bMenuChangeOngoing;
    int m_nMouseButtonJustClicked;
    int m_nJoyButtonJustClicked;
    bool m_bDisplayComboButtonErrMsg;
    bool m_bNoEmptyBinding;
    bool m_bShowEmptyBindingError;
    int m_nHelperTextAlpha;
    bool m_bPressedPgUpOnList;
    bool m_bPressedPgDnOnList;
    bool m_bPressedUpOnList;
    bool m_bPressedDownOnList;
    bool m_bPressedScrollButton;
    char field_129;
    char field_12A;
    char field_12B;
    int m_nMousePosX;
    int m_nMousePosY;
    int m_nMouseOldPosX;
    int m_nMouseOldPosY;
    int m_nHoverOption;
    bool m_bShowMouse;
    int m_nOptionMouseHovering;
    bool m_bStartWaitingForKeyBind;
    bool m_bWaitingForNewKeyBind;
    bool m_bKeyChangeNotProcessed;
    int m_nCurrCntrlAction;
    char field_150;
    char field_151;
    char field_152;
    char field_153;
    int m_nSelectedCtrlColumn;
    bool field_158;
    bool field_159;
    char m_nCurrExLayer;
    char m_nPrefsSkinFile[256];
    char m_aSkinName[256];
    char field_35B;
    int m_nHelperTextMsgId;
    CPlayerSkinData m_pSkinListHead;
    CPlayerSkinData* m_pSelectedSkin;
    int m_nFirstVisibleRowOnList;
    float m_nScrollbarTopMargin;
    int m_nTotalListRow;
    int m_nSkinsTotal;
    int m_nSelectedListRow;
    bool m_bSkinsEnumerated;

public:
    void MessageScreen(const char* pText, bool bFullscreen);
    int FadeIn(int alpha);
    bool CheckHover(int x1, int x2, int y1, int y2);
    void DisplayHelperText(const char* text);
    void SwitchToNewScreen(int screen);
    void RequestFrontEndStartUp();
    void RequestFrontEndShutDown();
    void SwitchMenuOnAndOff();
    void CheckSliderMovement(char value);
    void ChangeRadioStation(char value);
    void Draw(int unk);
    void UserInput();
    void PrintMap();
    void LoadSettings();
    void SaveSettings();
};
VALIDATE_OFFSET(CMenuManager, m_nStatsScrollDir, 0x0);
VALIDATE_OFFSET(CMenuManager, field_1, 0x1);
VALIDATE_OFFSET(CMenuManager, m_fStatsScrollSpeed, 0x4);
VALIDATE_OFFSET(CMenuManager, field_8, 0x8);
VALIDATE_OFFSET(CMenuManager, m_bPrefsUseVibration, 0x9);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowHud, 0xA);
VALIDATE_OFFSET(CMenuManager, field_B, 0xB);
VALIDATE_OFFSET(CMenuManager, m_nPrefsRadarMode, 0xC);
VALIDATE_OFFSET(CMenuManager, m_bDisplayControllerOnFoot, 0x10);
VALIDATE_OFFSET(CMenuManager, m_bShutDownFrontEndRequested, 0x11);
VALIDATE_OFFSET(CMenuManager, m_bStartUpFrontEndRequested, 0x12);
VALIDATE_OFFSET(CMenuManager, field_13, 0x13);
VALIDATE_OFFSET(CMenuManager, m_nKeyPressedCode, 0x14);
VALIDATE_OFFSET(CMenuManager, m_nPrefsBrightness, 0x18);
VALIDATE_OFFSET(CMenuManager, m_fPrefsLOD, 0x1C);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowSubtitles, 0x20);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowLegends, 0x21);
VALIDATE_OFFSET(CMenuManager, m_bPrefsUseWideScreen, 0x22);
VALIDATE_OFFSET(CMenuManager, m_bPrefsVsync, 0x23);
VALIDATE_OFFSET(CMenuManager, m_bPrefsVsyncDisp, 0x24);
VALIDATE_OFFSET(CMenuManager, m_bPrefsFrameLimiter, 0x25);
VALIDATE_OFFSET(CMenuManager, m_nPrefsAudio3DProviderIndex, 0x26);
VALIDATE_OFFSET(CMenuManager, m_nPrefsSpeakers, 0x27);
VALIDATE_OFFSET(CMenuManager, m_bPrefsDMA, 0x28);
VALIDATE_OFFSET(CMenuManager, m_nPrefsSfxVolume, 0x29);
VALIDATE_OFFSET(CMenuManager, m_nPrefsMusicVolume, 0x2A);
VALIDATE_OFFSET(CMenuManager, m_nPrefsRadioStation, 0x2B);
VALIDATE_OFFSET(CMenuManager, m_bPrefsStereoMono, 0x2C);
VALIDATE_OFFSET(CMenuManager, field_2D, 0x2D);
VALIDATE_OFFSET(CMenuManager, m_nCurrentMenuEntry, 0x30);
VALIDATE_OFFSET(CMenuManager, m_bQuitGameNoCD, 0x34);
VALIDATE_OFFSET(CMenuManager, m_bDrawRadarOrMap, 0x35);
VALIDATE_OFFSET(CMenuManager, m_bAllowNavigation, 0x36);
VALIDATE_OFFSET(CMenuManager, m_bStreamingDone, 0x37);
VALIDATE_OFFSET(CMenuManager, m_bMenuActive, 0x38);
VALIDATE_OFFSET(CMenuManager, m_bWantToRestart, 0x39);
VALIDATE_OFFSET(CMenuManager, m_bFirstTime, 0x3A);
VALIDATE_OFFSET(CMenuManager, m_bSaveMenuActive, 0x3B);
VALIDATE_OFFSET(CMenuManager, m_bWantToLoad, 0x3C);
VALIDATE_OFFSET(CMenuManager, field_3D, 0x3D);
VALIDATE_OFFSET(CMenuManager, m_fMapZoom, 0x40);
VALIDATE_OFFSET(CMenuManager, m_fMapBaseX, 0x44);
VALIDATE_OFFSET(CMenuManager, m_fMapBaseY, 0x48);
VALIDATE_OFFSET(CMenuManager, OS_Language, 0x4C);
VALIDATE_OFFSET(CMenuManager, m_nPrefsLanguage, 0x50);
VALIDATE_OFFSET(CMenuManager, field_54, 0x54);
VALIDATE_OFFSET(CMenuManager, m_bLanguageLoaded, 0x58);
VALIDATE_OFFSET(CMenuManager, m_bPrefsAllowNastyGame, 0x59);
VALIDATE_OFFSET(CMenuManager, m_nPrefsMP3BoostVolume, 0x5A);
VALIDATE_OFFSET(CMenuManager, m_nControlMethod, 0x5B);
VALIDATE_OFFSET(CMenuManager, m_nPrefsVideoMode, 0x5C);
VALIDATE_OFFSET(CMenuManager, m_nDisplayVideoMode, 0x60);
VALIDATE_OFFSET(CMenuManager, m_nMouseTempPosX, 0x64);
VALIDATE_OFFSET(CMenuManager, m_nMouseTempPosY, 0x68);
VALIDATE_OFFSET(CMenuManager, m_bGameNotLoaded, 0x6C);
VALIDATE_OFFSET(CMenuManager, m_nPreviousAudioIndex, 0x6D);
VALIDATE_OFFSET(CMenuManager, m_bFrontEnd_ReloadObrTxtGxt, 0x6E);
VALIDATE_OFFSET(CMenuManager, field_6F, 0x6F);
VALIDATE_OFFSET(CMenuManager, pEditString, 0x70);
VALIDATE_OFFSET(CMenuManager, field_74, 0x74);
VALIDATE_OFFSET(CMenuManager, pControlEdit, 0x78);
VALIDATE_OFFSET(CMenuManager, m_bOnlySaveMenu, 0x7C);
VALIDATE_OFFSET(CMenuManager, field_7D, 0x7D);
VALIDATE_OFFSET(CMenuManager, m_nMenuFadeAlpha2, 0x80);
VALIDATE_OFFSET(CMenuManager, m_aMenuSprites, 0x84);
VALIDATE_OFFSET(CMenuManager, m_bSpritesLoaded, 0xEC);
VALIDATE_OFFSET(CMenuManager, m_nRadioIconsLeftPosition, 0xF0);
VALIDATE_OFFSET(CMenuManager, m_nScrollRadioOffset, 0xF4);
VALIDATE_OFFSET(CMenuManager, m_nCurrentMenuPage, 0xF8);
VALIDATE_OFFSET(CMenuManager, m_nPreviousMenuPage, 0xFC);
VALIDATE_OFFSET(CMenuManager, m_nCurrentSaveSlot, 0x100);
VALIDATE_OFFSET(CMenuManager, field_BC, 0x104);
VALIDATE_OFFSET(CMenuManager, m_nMenuFadeAlpha, 0x108);
VALIDATE_OFFSET(CMenuManager, m_nOptionHighlightTransitionBlend, 0x10C);
VALIDATE_OFFSET(CMenuManager, m_bMenuChangeOngoing, 0x110);
VALIDATE_OFFSET(CMenuManager, m_nMouseButtonJustClicked, 0x114);
VALIDATE_OFFSET(CMenuManager, m_nJoyButtonJustClicked, 0x118);
VALIDATE_OFFSET(CMenuManager, m_bDisplayComboButtonErrMsg, 0x11C);
VALIDATE_OFFSET(CMenuManager, m_bNoEmptyBinding, 0x11D);
VALIDATE_OFFSET(CMenuManager, m_bShowEmptyBindingError, 0x11E);
VALIDATE_OFFSET(CMenuManager, m_nHelperTextAlpha, 0x120);
VALIDATE_OFFSET(CMenuManager, m_bPressedPgUpOnList, 0x124);
VALIDATE_OFFSET(CMenuManager, m_bPressedPgDnOnList, 0x125);
VALIDATE_OFFSET(CMenuManager, m_bPressedUpOnList, 0x126);
VALIDATE_OFFSET(CMenuManager, m_bPressedDownOnList, 0x127);
VALIDATE_OFFSET(CMenuManager, m_bPressedScrollButton, 0x128);
VALIDATE_OFFSET(CMenuManager, field_129, 0x129);
VALIDATE_OFFSET(CMenuManager, field_12A, 0x12A);
VALIDATE_OFFSET(CMenuManager, field_12B, 0x12B);
VALIDATE_OFFSET(CMenuManager, m_nMousePosX, 0x12C);
VALIDATE_OFFSET(CMenuManager, m_nMousePosY, 0x130);
VALIDATE_OFFSET(CMenuManager, m_nMouseOldPosX, 0x134);
VALIDATE_OFFSET(CMenuManager, m_nMouseOldPosY, 0x138);
VALIDATE_OFFSET(CMenuManager, m_nHoverOption, 0x13C);
VALIDATE_OFFSET(CMenuManager, m_bShowMouse, 0x140);
VALIDATE_OFFSET(CMenuManager, m_nOptionMouseHovering, 0x144);
VALIDATE_OFFSET(CMenuManager, m_bStartWaitingForKeyBind, 0x148);
VALIDATE_OFFSET(CMenuManager, m_bWaitingForNewKeyBind, 0x149);
VALIDATE_OFFSET(CMenuManager, m_bKeyChangeNotProcessed, 0x14A);
VALIDATE_OFFSET(CMenuManager, m_nCurrCntrlAction, 0x14C);
VALIDATE_OFFSET(CMenuManager, field_150, 0x150);
VALIDATE_OFFSET(CMenuManager, field_151, 0x151);
VALIDATE_OFFSET(CMenuManager, field_152, 0x152);
VALIDATE_OFFSET(CMenuManager, field_153, 0x153);
VALIDATE_OFFSET(CMenuManager, m_nSelectedCtrlColumn, 0x154);
VALIDATE_OFFSET(CMenuManager, field_158, 0x158);
VALIDATE_OFFSET(CMenuManager, field_159, 0x159);
VALIDATE_OFFSET(CMenuManager, m_nCurrExLayer, 0x15A);
VALIDATE_OFFSET(CMenuManager, m_nPrefsSkinFile, 0x15B);
VALIDATE_OFFSET(CMenuManager, m_aSkinName, 0x25B);
VALIDATE_OFFSET(CMenuManager, field_35B, 0x35B);
VALIDATE_OFFSET(CMenuManager, m_nHelperTextMsgId, 0x35C);
VALIDATE_OFFSET(CMenuManager, m_pSkinListHead, 0x360);
VALIDATE_OFFSET(CMenuManager, m_pSelectedSkin, 0x668);
VALIDATE_OFFSET(CMenuManager, m_nFirstVisibleRowOnList, 0x66C);
VALIDATE_OFFSET(CMenuManager, m_nScrollbarTopMargin, 0x670);
VALIDATE_OFFSET(CMenuManager, m_nTotalListRow, 0x674);
VALIDATE_OFFSET(CMenuManager, m_nSkinsTotal, 0x678);
VALIDATE_OFFSET(CMenuManager, m_nSelectedListRow, 0x67C);
VALIDATE_OFFSET(CMenuManager, m_bSkinsEnumerated, 0x680);
VALIDATE_SIZE(CMenuManager, 0x684);


VALIDATE_SIZE(CMenuManager, 0x684);

extern CMenuManager& FrontEndMenuManager;
extern CMenuScreen* aScreens; // [NUM_MENU_PAGES]
