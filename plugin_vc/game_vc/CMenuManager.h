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


VALIDATE_SIZE(CMenuManager, 0x684);

extern CMenuManager& FrontEndMenuManager;
extern CMenuScreen* aScreens; // [NUM_MENU_PAGES]
