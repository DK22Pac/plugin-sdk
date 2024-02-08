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
    char m_nCurrentSelectedMissionPack;
    struct MissionPackStruct {
        uint8_t id;
        char name[260];
    };

    MissionPackStruct m_nSelectedMissionPack[25];
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

VALIDATE_SIZE(CMenuManager, 0x1B78);

extern CMenuManager &FrontEndMenuManager;

extern char** frontend1TexNames;
extern char** frontend2TexNames;
extern char** frontend3TexNames;
extern char** frontend4TexNames;
extern bool& bBriefHistoryAllowedToUpdate;
extern CMenuScreen* aScreens;
