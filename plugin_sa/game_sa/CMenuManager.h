/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"
#include "CSprite2d.h"

enum {
    NUM_ENTRIES = 12
};

// Menu entries action to perform
enum eMenuActions {   // There's many actions @0x57702E and @0x57CD88
    MENUACTION_NOTHING = 0,
    MENUACTION_LABEL = 1,       // Some static text at the top of the page (works only on first entry)
    MENUACTION_BACK = 2,       // Back to previous menu
    MENUACTION_YES = 3,       // Used as YES in menus (also as NO, weird?)
    MENUACTION_NO = 4,       // Used as NO in menus  (also as YES, weird?)
    MENUACTION_CHANGEMENU = 5,       // Switch to target menu
    MENUACTION_TRACKSSCAN = 6,
    MENUACTION_NEWGAME = 10,
    MENUACTION_MPACK = 11,
    MENUACTION_SKIP = 20,      // Skip this entry (unselectable)
    MENUACTION_STATSSCROLL = 21,
    MENUACTION_FRAMELIMIT = 24,
    MENUACTION_SUBTITLES = 25,
    MENUACTION_WIDESCREEN = 26,
    MENUACTION_BRIGHTNESS = 27,
    MENUACTION_MUSICVOLUME = 28,
    MENUACTION_SFXVOLUME = 29,
    MENUACTION_RADIOEQ = 30,
    MENUACTION_RADIOAUTOSELECT = 31,
    MENUACTION_RADIO = 32,
    MENUACTION_LEGEND = 33,
    MENUACTION_RADARMODE = 34,
    MENUACTION_HUD = 35,
    MENUACTION_CHANGE_LANG = 36,
    MENUACTION_LANG_ENG = 37,
    MENUACTION_LANG_FRE = 38,
    MENUACTION_LANG_GER = 39,
    MENUACTION_LANG_ITA = 40,
    MENUACTION_LANG_SPA = 41,
    MENUACTION_FXQUALITY = 42,
    MENUACTION_MIPMAP = 43,
    MENUACTION_ANTIALIAS = 44,
    MENUACTION_INVERTMOUSEHORIZONTALLY = 46,
    MENUACTION_JOYINVERTX = 47,
    MENUACTION_JOYINVERTY = 48,
    MENUACTION_JOYINVERTX2 = 49,
    MENUACTION_JOYINVERTY2 = 50,
    MENUACTION_JOYSWAPAXIS1 = 51,
    MENUACTION_JOYSWAPAXIS2 = 52,
    MENUACTION_EXIT = 53,
    MENUACTION_RESUME = 54,
    MENUACTION_BACK_PC = 55,    
    MENUACTION_SCREENRES = 56,
    MENUACTION_RESTOREDEF = 57,
    MENUACTION_CTRLMETHOD = 58,
    MENUACTION_MOUSESTEER = 59,
    MENUACTION_MOUSEFLY = 60,
    MENUACTION_DRAWDIST = 61,
    MENUACTION_MOUSESENS = 62,
    MENUACTION_TRACKSPLAYMODE = 63,
    MENUACTION_TRACKSAUTOSCAN = 64,
    MENUACTION_SAVEPHOTOS = 65,
};

// Type of menu entries
enum eMenuEntryType {
    MENUENTRY_SAVE_1 = 1,
    MENUENTRY_SAVE_2,
    MENUENTRY_SAVE_3,
    MENUENTRY_SAVE_4,
    MENUENTRY_SAVE_5,
    MENUENTRY_SAVE_6,
    MENUENTRY_SAVE_7,
    MENUENTRY_SAVE_8,
    MENUENTRY_MISSIONPACK,
    MENUENTRY_JOYMOUSE,
    MENUENTRY_BUTTON,
    MENUENTRY_OPTION,
};

enum eMenuPage {
    MENUPAGE_NONE = -1,
    MENUPAGE_STATS = 0,
    MENUPAGE_NEW_GAME = 1, // New Game, Load Game, Delete Game
    MENUPAGE_BRIEFS = 2,
    MENUPAGE_SOUND_SETTINGS = 3,
    MENUPAGE_DISPLAY_SETTINGS = 4,
    MENUPAGE_MAP = 5,
    MENUPAGE_NEW_GAME_ASK = 6, // Are you sure you want to start a new game? All current game progress will be lost. Proceed?
    MENUPAGE_SELECT_GAME = 7, // Please select which new game you wish to start:
    MENUPAGE_MISSIONPACK_LOADING_ASK = 8, // // Are you sure you want to load a San Andreas Mission Pack? All current game progress will be lost. Proceed?
    MENUPAGE_CHOOSE_LOAD_SLOT = 9, // Select save file to load:
    MENUPAGE_CHOOSE_DELETE_SLOT = 10, // Select save file to delete:
    MENUPAGE_LOAD_GAME_ASK = 11, // All unsaved progress in your current game will be lost. Proceed with loading?
    MENUPAGE_DELETE_GAME_ASK = 12, // Are you sure you wish to delete this save file?
    MENUPAGE_LOAD_FIRST_SAVE = 13,
    MENUPAGE_DELETE_FINISHED = 14,
    MENUPAGE_DELETE_SUCCESSFUL = 15, // // Delete Successful. Select OK to continue.
    MENUPAGE_CHOOSE_SAVE_SLOT = 16, // Select file you wish to save to:
    MENUPAGE_SAVE_WRITE_ASK = 17, // Are you sure you wish to save?
    MENUPAGE_SAVE_DONE_1 = 18,
    MENUPAGE_SAVE_DONE_2 = 19, // Save Successful. Select OK to continue.
    MENUPAGE_GAME_SAVED = 20, // OK
    MENUPAGE_GAME_LOADED = 21, // OK
    MENUPAGE_GAME_WARNING_DONT_SAVE = 22, // Warning! One or more cheats have been activated. This may affect your save game. It is recommended that you do not save this game.
    MENUPAGE_ASK_DISPLAY_DEFAULT_SETS = 23, // Are you sure you want to reset your current settings to default?
    MENUPAGE_ASK_AUDIO_DEFAULT_SETS = 24, // Are you sure you want to reset your current settings to default?
    MENUPAGE_ASK_CONTROLLER_DEFAULT_SETS = 25, // Are you sure you want to reset your current settings to default?
    MENUPAGE_USER_TRACKS_OPTIONS = 26,
    MENUPAGE_DISPLAY_ADVANCED = 27, // DRAW DISTANCE, ...
    MENUPAGE_LANGUAGE_SETTINGS = 28, // English, ...
    MENUPAGE_SAVE_GAME_DONE = 29, // O.K
    MENUPAGE_SAVE_GAME_FAILED = 30, // Save Unsuccessful., O.K.
    MENUPAGE_SAVE_WRITE_FAILED = 31, // Save Unsuccessful.
    MENUPAGE_SAVE_FAILED_FILE_ERROR = 32, // Load Unsuccessful. File Corrupted, Please delete.
    MENUPAGE_OPTIONS = 33, // Controller Setup, Audio Setup ...
    MENUPAGE_MAIN_MENU = 34, // Start Game, Options, Quit Game
    MENUPAGE_EXIT = 35, // Are you sure you want to quit? All progress since the last save game will be lost. Proceed?
    MENUPAGE_CONTROLLER_PC = 36, // CONFIGURATION, Redefine Controls ...
    MENUPAGE_REDEFINE_CONTROLS = 37, // Foot Controls, Vehicle Controls
    MENUPAGE_KEYBOARD_CONTROLS = 38,
    MENUPAGE_MOUSE_SETTINGS = 39,
    MENUPAGE_JOYPAD_SETTINGS = 40,
    MENUPAGE_PAUSE_MENU = 41, // Resume, START NEW GAME ...
    MENUPAGE_QUIT = 42,
    MENUPAGE_EMPTY = 43,
    NUM_MENU_PAGES
};

enum eMenuSprites {
    MENUSPRITE_RADIO_TEXTURES_BEGIN,
    MENUSPRITE_ARROW = MENUSPRITE_RADIO_TEXTURES_BEGIN,
    MENUSPRITE_RADIO_PLAYBACK,
    MENUSPRITE_RADIO_KROSE,
    MENUSPRITE_RADIO_KDST,
    MENUSPRITE_RADIO_BOUNCE,
    MENUSPRITE_RADIO_SFUR,
    MENUSPRITE_RADIO_RLS,
    MENUSPRITE_RADIO_RADIOX,
    MENUSPRITE_RADIO_CSR,
    MENUSPRITE_RADIO_KJAH,
    MENUSPRITE_RADIO_MASTERSOUND,
    MENUSPRITE_RADIO_WCTR,
    MENUSPRITE_RADIO_TPLAYER,
    MENUSPRITE_RADIO_TEXTURES_END,

    MENUSPRITE_BACKGROUND_TEXTURES_BEGIN = MENUSPRITE_RADIO_TEXTURES_END,
    MENUSPRITE_BACK2 = MENUSPRITE_BACKGROUND_TEXTURES_BEGIN,
    MENUSPRITE_BACK3,
    MENUSPRITE_BACK4,
    MENUSPRITE_BACK5, 
    MENUSPRITE_BACK6,
    MENUSPRITE_BACK7,
    MENUSPRITE_BACK8,
    MENUSPRITE_MAP,
    MENUSPRITE_BACKGROUND_TEXTURES_END,

    MENUSPRITE_BACK8_TEXTURES_BEGIN = MENUSPRITE_BACKGROUND_TEXTURES_END,
    MENUSPRITE_BACK8_TOP = MENUSPRITE_BACK8_TEXTURES_BEGIN,
    MENUSPRITE_BACK8_RIGHT,
    MENUSPRITE_BACK8_TEXTURES_END,

    MENUSPRITE_MOUSE_TEXTURES_BEGIN = MENUSPRITE_BACK8_TEXTURES_END,
    MENUSPRITE_MOUSE = MENUSPRITE_MOUSE_TEXTURES_BEGIN,
    MENUSPRITE_CROSSHAIR,
    MENUSPRITE_MOUSE_TEXTURES_END,

    MENUSPRITE_TEXTURE_COUNT = MENUSPRITE_MOUSE_TEXTURES_END
};

struct PLUGIN_API CMenuScreen {
    char m_ScreenName[8];
    char m_nPreviousPage;
    char m_nParentEntry;

    struct PLUGIN_API CMenuEntry {
        unsigned char m_nAction;
        char m_EntryName[8];
        unsigned char m_nSaveSlot;
        char m_nTargetMenu;
        unsigned char pad;
        unsigned short m_nX;
        unsigned short m_nY;
        unsigned char m_nAlign;
    } m_aEntries[NUM_ENTRIES];
};
VALIDATE_OFFSET(CMenuScreen, m_ScreenName, 0x0);
VALIDATE_OFFSET(CMenuScreen, m_nPreviousPage, 0x8);
VALIDATE_OFFSET(CMenuScreen, m_nParentEntry, 0x9);
VALIDATE_OFFSET(CMenuScreen, m_aEntries, 0xA);
VALIDATE_SIZE(CMenuScreen, 0xE2);

#pragma pack(push,1)
class PLUGIN_API CMenuManager {
public:
    char m_nStatsScrollDir;
    char field_1[3];
    float m_fStatsScrollSpeed;
    char field_8;
    char field_9[23];
    bool m_bPrefsUseVibration;
    bool m_bPrefsShowHud;
    char field_22[2];
    int m_nPrefsRadarMode;
    int field_28;
    int m_nTargetBlipIndex; // blip script handle
    char n_nMenuSystemPanelId;
    char field_31;
    bool m_bShutDownFrontEndRequested;
    bool m_bStartUpFrontEndRequested;
    bool m_bMenuAccessWidescreen;
    char field_35;
    char field_36[2];
    int m_nKeyPressedCode;
    int m_nPrefsBrightness;
    float m_fPrefsLOD;
    bool m_bPrefsShowSubtitles;
    bool m_bPrefsShowLocations;
    bool m_bPrefsShowContacts;
    bool m_bPrefsShowMission;
    bool m_bPrefsShowOther;
    bool m_bPrefsShowGangArea;
    bool m_bPrefsShowLegends;
    bool m_bPrefsUseWideScreen;
    bool m_bPrefsVsync;
    bool m_bPrefsRadioAutoSelect;
    char field_4E;
    char m_nPrefsSfxVolume;
    char m_nPrefsMusicVolume;
    bool m_bPrefsRadioEq;
    char m_nPrefsRadioStation;
    char m_bRecheckNumPhotos;
    int m_nCurrentMenuEntry;
    bool m_bQuitGameNoCD;
    bool m_bDrawRadarOrMap;
    bool m_bAllowNavigation;
    bool m_bStreamingDone;
    bool m_bMenuActive;
    bool m_bWantToRestart;
    bool m_bFirstTime;
    bool m_bSaveMenuActive;
    bool m_bWantToLoad;
    char field_61[3];
    float m_fMapZoom;
    float m_fMapBaseX;
    float m_fMapBaseY;
    CVector2D m_vMousePos;
    bool m_bStandardInput;
    char field_79[3];
    int m_nTitleLanguage;
    int m_nTextLanguage;
    char m_nPrefsLanguage;
    char m_nPrefsPrevLanguage;
    char field_86[2];
    int field_88;
    bool m_bLanguageLoaded;
    char field_8D[3];
    int field_90;
    int field_94;
    char *m_pJPegBuffer; //!< +0x98  \see JPegCompress file
    char field_9C[16];
    int field_AC;
    char m_nPrefsRadioMode;
    bool m_bPrefsInvertPadX1;
    bool m_bPrefsInvertPadY1;
    bool m_bPrefsInvertPadX2;
    bool m_bPrefsInvertPadY2;
    bool m_bPrefsSwapPadAxis1;
    bool m_bPrefsSwapPadAxis2;
    bool m_bInVehicleControlsScreen;
    bool m_bShowMouse;
    char field_B9[3];
    int m_nMousePosX;
    int m_nMousePosY;
    bool m_bPrefsMipMapping;
    bool m_bPrefsTracksAutoScan;
    short field_C6;
    int m_nPrefsAntiAliasing;
    int m_nPrefsAntiAliasingDisp;
    char m_nController;
    char field_D1[3];
    int m_nPrefsVideoMode;
    int m_nDisplayVideoMode;
    int field_DC;
    int m_nMouseTempPosX;
    int m_nMouseTempPosY;
    bool m_bPrefsSavePhotos;
    bool m_bGameNotLoaded;
    char m_nPlayerNumber;
    bool m_bReinitLanguageSettings;
    int field_EC;
    int* pControlEdit;
    bool m_bOnlySaveMenu;
    char field_F5[3];
    CSprite2d FrontEndSprites[MENUSPRITE_TEXTURE_COUNT];
    bool m_bTexturesLoaded;
    char m_nCurrentMenuPage;
    char m_nPreviousMenuPage;
    char m_nSelectedSaveGame;

    char m_nSelectedMissionPack;
    struct MissionPackStruct {
        uint8_t id;
        char name[260];
    };
    MissionPackStruct m_MissionPacks[25];

    bool m_bChangeVideoMode;
    char field_1ADF;
    int field_1AE0;
    int field_1AE4;
    char field_1AE8;
    bool m_bAudioRetuneInProgress;
    char field_1AEA;
    bool m_bScanningUserTracks;
    int m_nHelperTextFadingAlpha;
    char field_1AF0;
    char field_1AF1;
    char field_1AF2;
    char field_1AF3;
    int field_1AF4;
    int m_nMouseOldPosX;
    int m_nMouseOldPosY;
    int m_nHoverOption;
    int field_1B04;
    char field_1B08;
    char field_1B09;
    char field_1B0A;
    char field_1B0B;
    int field_1B0C;
    char field_1B10;
    char field_1B11;
    char field_1B12;
    char field_1B13;
    char field_1B14;
    char field_1B15;
    char field_1B16;
    char field_1B17;
    int m_nHelperTextIndex;
    int field_1B1C;
    unsigned char m_nTexturesRound;
    unsigned char m_nNumberOfMenuOptions;
    short field_1B22;
    int m_nStatBarPerformanceTimer;
    bool m_bUpdateMap;
    char field_1B29;
    short field_1B2A;
    int m_nMapTimer;
    int m_nBriefHistoryTimer;
    short m_nSavedPlayerControlsDisabledFlag;
    short field_1B36;
    int field_1B38;
    char field_1B3C;
    char field_1B3D;
    char field_1B3E;
    char field_1B3F;
    int field_1B40;
    bool m_bExitMenu;
    char field_1B45;
    short field_1B46;
    int field_1B48;
    int field_1B4C;
    char m_nBackgroundSprite;
    char field_1B51;
    short field_1B52;
    int field_1B54;
    int m_nHelperTextFadingTimer;
    char field_1B5C;
    char field_1B5D;
    short field_1B5E;
    int field_1B60;
    int field_1B64;
    int m_nTimeSlideLeftMove;
    int m_nTimeSlideRightMove;
    int field_1B70;
    int field_1B74;

    static int& nLastMenuPage;
    static bool& bInvertMouseX;
    static bool& bInvertMouseY;

public:
    CMenuManager();
    ~CMenuManager();

    char AdditionalOptionInput(char input, char enter);
    void CentreMousePointer();
    bool CheckCodesForControls(int code);
    bool CheckFrontEndDownInput();
    bool CheckFrontEndLeftInput();
    bool CheckFrontEndRightInput();
    bool CheckFrontEndUpInput();
    bool CheckHover(float x1, float x2, float y1, float y2);
    bool CheckMissionPackValidMenu();
    bool CheckRedefineControlInput();
    void CheckSliderMovement(float input);
    void DisplayHelperText(char* text);
    int DisplaySlider(float posX, float posY, float beginHeight, float endHeight, float distBetweenRects, float filledAmount, CRGBA const& colour);
    signed int DoSettingsBeforeStartingAGame();
    char DrawBackground();
    char DrawControllerScreenExtraText(int unk);
    char DrawControllerSetupScreen();
    void DrawFrontEnd();
    void DrawQuitGameScreen(int unused);
    void DrawStandardMenu(bool header = true);
    void DrawWindow(const CRect& coords, const char* pKey, unsigned char nColour, CRGBA backColor, bool Unused, bool bBackground);
    void DrawWindowedText(float x1, float y1, float x2, float y2, char* gxt, int align);
    unsigned char GetNumberOfMenuOptions();
    bool HasLanguageChanged();
    void Initialise();
    void InitialiseChangedLanguageSettings(bool reInitControls);
    int JumpToGenericMessageScreen(char screen, char* header, char* action);
    void LoadAllTextures();
    void LoadSettings();
    void MessageScreen(char* message, CRGBA const& col, bool frame);
    float PrintBriefs();
    char PrintMap();
    char PrintRadioStationList();
    char PrintStats();
    int Process();
    void ProcessFileActions();
    void ProcessMenuOptions(char input, char* exit, char enter);
    void ProcessMissionPackNewGame();
    char ProcessPCMenuOptions(char input, char enter);
    void ProcessStreaming(bool all);
    void ProcessUserInput(char down, char up, char enter, char exit, char input);
    char RedefineScreenUserInput(int enter, int exit);
    void ResetHelperText();
    void SaveLoadFileError_SetUpErrorScreen();
    void SaveSettings();
    int SaveStatsToFile();
    void ScrollRadioStations(char input);
    char SetDefaultPreferences(char page);
    void SetFrontEndRenderStates();
    int SetHelperText(int index);
    void SmallMessageScreen(char* message);
    float StretchX(float x);
    float StretchY(float y);
    void SwapTexturesRound(bool force);
    void SwitchMenuOnAndOff();
    char SwitchToNewScreen(char page);
    void UnloadTextures();
    void UserInput();
    void RequestFrontEndShutDown();
    void RequestFrontEndStartUp();
};
VALIDATE_OFFSET(CMenuManager, m_nStatsScrollDir, 0x0);
VALIDATE_OFFSET(CMenuManager, field_1, 0x1);
VALIDATE_OFFSET(CMenuManager, m_fStatsScrollSpeed, 0x4);
VALIDATE_OFFSET(CMenuManager, field_8, 0x8);
VALIDATE_OFFSET(CMenuManager, field_9, 0x9);
VALIDATE_OFFSET(CMenuManager, m_bPrefsUseVibration, 0x20);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowHud, 0x21);
VALIDATE_OFFSET(CMenuManager, field_22, 0x22);
VALIDATE_OFFSET(CMenuManager, m_nPrefsRadarMode, 0x24);
VALIDATE_OFFSET(CMenuManager, field_28, 0x28);
VALIDATE_OFFSET(CMenuManager, m_nTargetBlipIndex, 0x2C);
VALIDATE_OFFSET(CMenuManager, n_nMenuSystemPanelId, 0x30);
VALIDATE_OFFSET(CMenuManager, field_31, 0x31);
VALIDATE_OFFSET(CMenuManager, m_bShutDownFrontEndRequested, 0x32);
VALIDATE_OFFSET(CMenuManager, m_bStartUpFrontEndRequested, 0x33);
VALIDATE_OFFSET(CMenuManager, m_bMenuAccessWidescreen, 0x34);
VALIDATE_OFFSET(CMenuManager, field_35, 0x35);
VALIDATE_OFFSET(CMenuManager, field_36, 0x36);
VALIDATE_OFFSET(CMenuManager, m_nKeyPressedCode, 0x38);
VALIDATE_OFFSET(CMenuManager, m_nPrefsBrightness, 0x3C);
VALIDATE_OFFSET(CMenuManager, m_fPrefsLOD, 0x40);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowSubtitles, 0x44);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowLocations, 0x45);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowContacts, 0x46);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowMission, 0x47);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowOther, 0x48);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowGangArea, 0x49);
VALIDATE_OFFSET(CMenuManager, m_bPrefsShowLegends, 0x4A);
VALIDATE_OFFSET(CMenuManager, m_bPrefsUseWideScreen, 0x4B);
VALIDATE_OFFSET(CMenuManager, m_bPrefsVsync, 0x4C);
VALIDATE_OFFSET(CMenuManager, m_bPrefsRadioAutoSelect, 0x4D);
VALIDATE_OFFSET(CMenuManager, field_4E, 0x4E);
VALIDATE_OFFSET(CMenuManager, m_nPrefsSfxVolume, 0x4F);
VALIDATE_OFFSET(CMenuManager, m_nPrefsMusicVolume, 0x50);
VALIDATE_OFFSET(CMenuManager, m_bPrefsRadioEq, 0x51);
VALIDATE_OFFSET(CMenuManager, m_nPrefsRadioStation, 0x52);
VALIDATE_OFFSET(CMenuManager, m_bRecheckNumPhotos, 0x53);
VALIDATE_OFFSET(CMenuManager, m_nCurrentMenuEntry, 0x54);
VALIDATE_OFFSET(CMenuManager, m_bQuitGameNoCD, 0x58);
VALIDATE_OFFSET(CMenuManager, m_bDrawRadarOrMap, 0x59);
VALIDATE_OFFSET(CMenuManager, m_bAllowNavigation, 0x5A);
VALIDATE_OFFSET(CMenuManager, m_bStreamingDone, 0x5B);
VALIDATE_OFFSET(CMenuManager, m_bMenuActive, 0x5C);
VALIDATE_OFFSET(CMenuManager, m_bWantToRestart, 0x5D);
VALIDATE_OFFSET(CMenuManager, m_bFirstTime, 0x5E);
VALIDATE_OFFSET(CMenuManager, m_bSaveMenuActive, 0x5F);
VALIDATE_OFFSET(CMenuManager, m_bWantToLoad, 0x60);
VALIDATE_OFFSET(CMenuManager, field_61, 0x61);
VALIDATE_OFFSET(CMenuManager, m_fMapZoom, 0x64);
VALIDATE_OFFSET(CMenuManager, m_fMapBaseX, 0x68);
VALIDATE_OFFSET(CMenuManager, m_fMapBaseY, 0x6C);
VALIDATE_OFFSET(CMenuManager, m_vMousePos, 0x70);
VALIDATE_OFFSET(CMenuManager, m_bStandardInput, 0x78);
VALIDATE_OFFSET(CMenuManager, field_79, 0x79);
VALIDATE_OFFSET(CMenuManager, m_nTitleLanguage, 0x7C);
VALIDATE_OFFSET(CMenuManager, m_nTextLanguage, 0x80);
VALIDATE_OFFSET(CMenuManager, m_nPrefsLanguage, 0x84);
VALIDATE_OFFSET(CMenuManager, m_nPrefsPrevLanguage, 0x85);
VALIDATE_OFFSET(CMenuManager, field_86, 0x86);
VALIDATE_OFFSET(CMenuManager, field_88, 0x88);
VALIDATE_OFFSET(CMenuManager, m_bLanguageLoaded, 0x8C);
VALIDATE_OFFSET(CMenuManager, field_8D, 0x8D);
VALIDATE_OFFSET(CMenuManager, field_90, 0x90);
VALIDATE_OFFSET(CMenuManager, field_94, 0x94);
VALIDATE_OFFSET(CMenuManager, m_pJPegBuffer, 0x98);
VALIDATE_OFFSET(CMenuManager, field_9C, 0x9C);
VALIDATE_OFFSET(CMenuManager, field_AC, 0xAC);
VALIDATE_OFFSET(CMenuManager, m_nPrefsRadioMode, 0xB0);
VALIDATE_OFFSET(CMenuManager, m_bPrefsInvertPadX1, 0xB1);
VALIDATE_OFFSET(CMenuManager, m_bPrefsInvertPadY1, 0xB2);
VALIDATE_OFFSET(CMenuManager, m_bPrefsInvertPadX2, 0xB3);
VALIDATE_OFFSET(CMenuManager, m_bPrefsInvertPadY2, 0xB4);
VALIDATE_OFFSET(CMenuManager, m_bPrefsSwapPadAxis1, 0xB5);
VALIDATE_OFFSET(CMenuManager, m_bPrefsSwapPadAxis2, 0xB6);
VALIDATE_OFFSET(CMenuManager, m_bInVehicleControlsScreen, 0xB7);
VALIDATE_OFFSET(CMenuManager, m_bShowMouse, 0xB8);
VALIDATE_OFFSET(CMenuManager, field_B9, 0xB9);
VALIDATE_OFFSET(CMenuManager, m_nMousePosX, 0xBC);
VALIDATE_OFFSET(CMenuManager, m_nMousePosY, 0xC0);
VALIDATE_OFFSET(CMenuManager, m_bPrefsMipMapping, 0xC4);
VALIDATE_OFFSET(CMenuManager, m_bPrefsTracksAutoScan, 0xC5);
VALIDATE_OFFSET(CMenuManager, field_C6, 0xC6);
VALIDATE_OFFSET(CMenuManager, m_nPrefsAntiAliasing, 0xC8);
VALIDATE_OFFSET(CMenuManager, m_nPrefsAntiAliasingDisp, 0xCC);
VALIDATE_OFFSET(CMenuManager, m_nController, 0xD0);
VALIDATE_OFFSET(CMenuManager, field_D1, 0xD1);
VALIDATE_OFFSET(CMenuManager, m_nPrefsVideoMode, 0xD4);
VALIDATE_OFFSET(CMenuManager, m_nDisplayVideoMode, 0xD8);
VALIDATE_OFFSET(CMenuManager, field_DC, 0xDC);
VALIDATE_OFFSET(CMenuManager, m_nMouseTempPosX, 0xE0);
VALIDATE_OFFSET(CMenuManager, m_nMouseTempPosY, 0xE4);
VALIDATE_OFFSET(CMenuManager, m_bPrefsSavePhotos, 0xE8);
VALIDATE_OFFSET(CMenuManager, m_bGameNotLoaded, 0xE9);
VALIDATE_OFFSET(CMenuManager, m_nPlayerNumber, 0xEA);
VALIDATE_OFFSET(CMenuManager, m_bReinitLanguageSettings, 0xEB);
VALIDATE_OFFSET(CMenuManager, field_EC, 0xEC);
VALIDATE_OFFSET(CMenuManager, pControlEdit, 0xF0);
VALIDATE_OFFSET(CMenuManager, m_bOnlySaveMenu, 0xF4);
VALIDATE_OFFSET(CMenuManager, field_F5, 0xF5);
VALIDATE_OFFSET(CMenuManager, FrontEndSprites, 0xF8);
VALIDATE_OFFSET(CMenuManager, m_bTexturesLoaded, 0x15C);
VALIDATE_OFFSET(CMenuManager, m_nCurrentMenuPage, 0x15D);
VALIDATE_OFFSET(CMenuManager, m_nPreviousMenuPage, 0x15E);
VALIDATE_OFFSET(CMenuManager, m_nSelectedSaveGame, 0x15F);
VALIDATE_OFFSET(CMenuManager, m_nSelectedMissionPack, 0x160);
VALIDATE_OFFSET(CMenuManager, m_MissionPacks, 0x161);
VALIDATE_OFFSET(CMenuManager, m_bChangeVideoMode, 0x1ADE);
VALIDATE_OFFSET(CMenuManager, field_1ADF, 0x1ADF);
VALIDATE_OFFSET(CMenuManager, field_1AE0, 0x1AE0);
VALIDATE_OFFSET(CMenuManager, field_1AE4, 0x1AE4);
VALIDATE_OFFSET(CMenuManager, field_1AE8, 0x1AE8);
VALIDATE_OFFSET(CMenuManager, m_bAudioRetuneInProgress, 0x1AE9);
VALIDATE_OFFSET(CMenuManager, field_1AEA, 0x1AEA);
VALIDATE_OFFSET(CMenuManager, m_bScanningUserTracks, 0x1AEB);
VALIDATE_OFFSET(CMenuManager, m_nHelperTextFadingAlpha, 0x1AEC);
VALIDATE_OFFSET(CMenuManager, field_1AF0, 0x1AF0);
VALIDATE_OFFSET(CMenuManager, field_1AF1, 0x1AF1);
VALIDATE_OFFSET(CMenuManager, field_1AF2, 0x1AF2);
VALIDATE_OFFSET(CMenuManager, field_1AF3, 0x1AF3);
VALIDATE_OFFSET(CMenuManager, field_1AF4, 0x1AF4);
VALIDATE_OFFSET(CMenuManager, m_nMouseOldPosX, 0x1AF8);
VALIDATE_OFFSET(CMenuManager, m_nMouseOldPosY, 0x1AFC);
VALIDATE_OFFSET(CMenuManager, m_nHoverOption, 0x1B00);
VALIDATE_OFFSET(CMenuManager, field_1B04, 0x1B04);
VALIDATE_OFFSET(CMenuManager, field_1B08, 0x1B08);
VALIDATE_OFFSET(CMenuManager, field_1B09, 0x1B09);
VALIDATE_OFFSET(CMenuManager, field_1B0A, 0x1B0A);
VALIDATE_OFFSET(CMenuManager, field_1B0B, 0x1B0B);
VALIDATE_OFFSET(CMenuManager, field_1B0C, 0x1B0C);
VALIDATE_OFFSET(CMenuManager, field_1B10, 0x1B10);
VALIDATE_OFFSET(CMenuManager, field_1B11, 0x1B11);
VALIDATE_OFFSET(CMenuManager, field_1B12, 0x1B12);
VALIDATE_OFFSET(CMenuManager, field_1B13, 0x1B13);
VALIDATE_OFFSET(CMenuManager, field_1B14, 0x1B14);
VALIDATE_OFFSET(CMenuManager, field_1B15, 0x1B15);
VALIDATE_OFFSET(CMenuManager, field_1B16, 0x1B16);
VALIDATE_OFFSET(CMenuManager, field_1B17, 0x1B17);
VALIDATE_OFFSET(CMenuManager, m_nHelperTextIndex, 0x1B18);
VALIDATE_OFFSET(CMenuManager, field_1B1C, 0x1B1C);
VALIDATE_OFFSET(CMenuManager, m_nTexturesRound, 0x1B20);
VALIDATE_OFFSET(CMenuManager, m_nNumberOfMenuOptions, 0x1B21);
VALIDATE_OFFSET(CMenuManager, field_1B22, 0x1B22);
VALIDATE_OFFSET(CMenuManager, m_nStatBarPerformanceTimer, 0x1B24);
VALIDATE_OFFSET(CMenuManager, m_bUpdateMap, 0x1B28);
VALIDATE_OFFSET(CMenuManager, field_1B29, 0x1B29);
VALIDATE_OFFSET(CMenuManager, field_1B2A, 0x1B2A);
VALIDATE_OFFSET(CMenuManager, m_nMapTimer, 0x1B2C);
VALIDATE_OFFSET(CMenuManager, m_nBriefHistoryTimer, 0x1B30);
VALIDATE_OFFSET(CMenuManager, m_nSavedPlayerControlsDisabledFlag, 0x1B34);
VALIDATE_OFFSET(CMenuManager, field_1B36, 0x1B36);
VALIDATE_OFFSET(CMenuManager, field_1B38, 0x1B38);
VALIDATE_OFFSET(CMenuManager, field_1B3C, 0x1B3C);
VALIDATE_OFFSET(CMenuManager, field_1B3D, 0x1B3D);
VALIDATE_OFFSET(CMenuManager, field_1B3E, 0x1B3E);
VALIDATE_OFFSET(CMenuManager, field_1B3F, 0x1B3F);
VALIDATE_OFFSET(CMenuManager, field_1B40, 0x1B40);
VALIDATE_OFFSET(CMenuManager, m_bExitMenu, 0x1B44);
VALIDATE_OFFSET(CMenuManager, field_1B45, 0x1B45);
VALIDATE_OFFSET(CMenuManager, field_1B46, 0x1B46);
VALIDATE_OFFSET(CMenuManager, field_1B48, 0x1B48);
VALIDATE_OFFSET(CMenuManager, field_1B4C, 0x1B4C);
VALIDATE_OFFSET(CMenuManager, m_nBackgroundSprite, 0x1B50);
VALIDATE_OFFSET(CMenuManager, field_1B51, 0x1B51);
VALIDATE_OFFSET(CMenuManager, field_1B52, 0x1B52);
VALIDATE_OFFSET(CMenuManager, field_1B54, 0x1B54);
VALIDATE_OFFSET(CMenuManager, m_nHelperTextFadingTimer, 0x1B58);
VALIDATE_OFFSET(CMenuManager, field_1B5C, 0x1B5C);
VALIDATE_OFFSET(CMenuManager, field_1B5D, 0x1B5D);
VALIDATE_OFFSET(CMenuManager, field_1B5E, 0x1B5E);
VALIDATE_OFFSET(CMenuManager, field_1B60, 0x1B60);
VALIDATE_OFFSET(CMenuManager, field_1B64, 0x1B64);
VALIDATE_OFFSET(CMenuManager, m_nTimeSlideLeftMove, 0x1B68);
VALIDATE_OFFSET(CMenuManager, m_nTimeSlideRightMove, 0x1B6C);
VALIDATE_OFFSET(CMenuManager, field_1B70, 0x1B70);
VALIDATE_OFFSET(CMenuManager, field_1B74, 0x1B74);
VALIDATE_SIZE(CMenuManager, 0x1B78);
#pragma pack(pop)
VALIDATE_SIZE(CMenuManager, 0x1B78);

extern CMenuManager &FrontEndMenuManager;

extern char** frontend1TexNames;
extern char** frontend2TexNames;
extern char** frontend3TexNames;
extern char** frontend4TexNames;
extern bool& bBriefHistoryAllowedToUpdate;
extern CMenuScreen* aScreens;
