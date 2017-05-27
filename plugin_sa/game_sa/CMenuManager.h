/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector2D.h"
#include "CSprite2d.h"

// Menu entries action to perform
enum eMenuActions   // There's many actions @0x57702E and @0x57CD88
{
	MENU_ACTION_NA       = 0,
    MENU_ACTION_TEXT     = 1,       // Some static text at the top of the page (works only on first entry)
    MENU_ACTION_BACK     = 2,       // Back to previous menu
    MENU_ACTION_YES      = 3,       // Used as YES in menus (also as NO, weird?)
    MENU_ACTION_NO       = 4,       // Used as NO in menus  (also as YES, weird?)
    MENU_ACTION_SWITCH   = 5,       // Switch to target menu
    MENU_ACTION_SKIP     = 20,      // Skip this entry (unselectable)
    MENU_ACTION_BACK_PC  = 55,      // Same as BACK without a extra checking (?)
};

// Type of menu entries
enum eMenuEntryType
{
	MENU_ENTRY_SAVE_1 = 1,
	MENU_ENTRY_SAVE_2,
	MENU_ENTRY_SAVE_3,
	MENU_ENTRY_SAVE_4,
	MENU_ENTRY_SAVE_5,
	MENU_ENTRY_SAVE_6,
	MENU_ENTRY_SAVE_7,
	MENU_ENTRY_SAVE_8,
	MENU_ENTRY_MISSIONPACK,
	MENU_ENTRY_JOYMOUSE,
	MENU_ENTRY_BUTTON,
	MENU_ENTRY_OPTION,
};

enum eMenuPage
{
	MENUPAGE_STATS  = 0,
	MENUPAGE_START_GAME  = 1, // New Game, Load Game, Delete Game
	MENUPAGE_BRIEF  = 2,
	MENUPAGE_AUDIO_SETTINGS  = 3,
	MENUPAGE_DISPLAY_SETTINGS  = 4,
	MENUPAGE_MAP     = 5,
	MENUPAGE_NEW_GAME_ASK  = 6, // Are you sure you want to start a new game? All current game progress will be lost. Proceed?
	MENUPAGE_SELECT_GAME  = 7, // Please select which new game you wish to start:
	MENUPAGE_MISSIONPACK_LOADING_ASK  = 8, // // Are you sure you want to load a San Andreas Mission Pack? All current game progress will be lost. Proceed?
	MENUPAGE_LOAD_GAME  = 9, // Select save file to load:
	MENUPAGE_DELETE_GAME  = 10, // Select save file to delete:
	MENUPAGE_LOAD_GAME_ASK  = 11, // All unsaved progress in your current game will be lost. Proceed with loading?
	MENUPAGE_DELETE_GAME_ASK  = 12, // Are you sure you wish to delete this save file?
	MENUPAGE_LOAD_FIRST_SAVE  = 13,
	MENUPAGE_DELETE_FINISHED  = 14,
	MENUPAGE_DELETE_SUCCESSFUL  = 15, // // Delete Successful. Select OK to continue.
	MENUPAGE_GAME_SAVE  = 16, // Select file you wish to save to:
	MENUPAGE_SAVE_WRITE_ASK  = 17, // Are you sure you wish to save?
	MENUPAGE_SAVE_DONE_1  = 18,
	MENUPAGE_SAVE_DONE_2  = 19, // Save Successful. Select OK to continue.
	MENUPAGE_GAME_SAVED  = 20, // OK
	MENUPAGE_GAME_LOADED  = 21, // OK
	MENUPAGE_GAME_WARNING_DONT_SAVE  = 22, // Warning! One or more cheats have been activated. This may affect your save game. It is recommended that you do not save this game.
	MENUPAGE_ASK_DISPLAY_DEFAULT_SETS  = 23, // Are you sure you want to reset your current settings to default?
	MENUPAGE_ASK_AUDIO_DEFAULT_SETS  = 24, // Are you sure you want to reset your current settings to default?
	MENUPAGE_ASK_CONTROLLER_DEFAULT_SETS  = 25, // Are you sure you want to reset your current settings to default?
	MENUPAGE_USER_TRACKS_OPTIONS  = 26,
	MENUPAGE_DISPLAY_ADVANCED      = 27, // DRAW DISTANCE, ...
	MENUPAGE_LANGUAGE  = 28, // English, ...
	MENUPAGE_SAVE_GAME_DONE  = 29, // O.K
	MENUPAGE_SAVE_GAME_FAILED  = 30, // Save Unsuccessful., O.K.
	MENUPAGE_SAVE_WRITE_FAILED  = 31, // Save Unsuccessful.
	MENUPAGE_SAVE_FAILED_FILE_ERROR  = 32, // Load Unsuccessful. File Corrupted, Please delete.
	MENUPAGE_OPTIONS  = 33, // Controller Setup, Audio Setup ...
	MENUPAGE_MAIN_MENU  = 34, // Start Game, Options, Quit Game
	MENUPAGE_QUIT_GAME_ASK  = 35, // Are you sure you want to quit? All progress since the last save game will be lost. Proceed?
	MENUPAGE_CONTROLLER_SETUP  = 36, // CONFIGURATION, Redefine Controls ...
	MENUPAGE_REDEFINE_CONTROLS  = 37, // Foot Controls, Vehicle Controls
	MENUPAGE_CONTROLS_VEHICLE_ONFOOT  = 38,
	MENUPAGE_MOUSE_SETTINGS  = 39,
	MENUPAGE_JOYPAD_SETTINGS  = 40,
	MENUPAGE_PAUSE_MENU  = 41, // Resume, START NEW GAME ...
	MENUPAGE_QUIT_GAME_2  = 42,
	MENUPAGE_EMPTY   = 43
};

enum eMenuTexture
{
	MENUTEX_RADIO_TEXTURES_BEGIN,
	MENUTEX_ARROW = MENUTEX_RADIO_TEXTURES_BEGIN,
	MENUTEX_RADIO_PLAYBACK,
	MENUTEX_RADIO_KROSE,
	MENUTEX_RADIO_KDST,
	MENUTEX_RADIO_BOUNCE,
	MENUTEX_RADIO_SFUR,
	MENUTEX_RADIO_RLS,
	MENUTEX_RADIO_RADIOX,
	MENUTEX_RADIO_CSR,
	MENUTEX_RADIO_KJAH,
	MENUTEX_RADIO_MASTERSOUND,
	MENUTEX_RADIO_WCTR,
	MENUTEX_RADIO_TPLAYER,
	MENUTEX_RADIO_TEXTURES_END,

	MENUTEX_BACKGROUND_TEXTURES_BEGIN = MENUTEX_RADIO_TEXTURES_END,
	MENUTEX_BACK2 = MENUTEX_BACKGROUND_TEXTURES_BEGIN,
	MENUTEX_BACK3,
	MENUTEX_BACK4,
	MENUTEX_BACK5,
	MENUTEX_BACK6,
	MENUTEX_BACK7,
	MENUTEX_BACK8,
	MENUTEX_MAP,
	MENUTEX_BACKGROUND_TEXTURES_END,

	MENUTEX_BACK8_TEXTURES_BEGIN = MENUTEX_BACKGROUND_TEXTURES_END,
	MENUTEX_BACK8_TOP = MENUTEX_BACK8_TEXTURES_BEGIN,
	MENUTEX_BACK8_RIGHT,
	MENUTEX_BACK8_TEXTURES_END,

	MENUTEX_MOUSE_TEXTURES_BEGIN = MENUTEX_BACK8_TEXTURES_END,
	MENUTEX_MOUSE = MENUTEX_MOUSE_TEXTURES_BEGIN,
	MENUTEX_CROSSHAIR,
	MENUTEX_MOUSE_TEXTURES_END,

	MENUTEX_TEXTURE_COUNT = MENUTEX_MOUSE_TEXTURES_END
};


#pragma pack(push, 4)
struct CMenuPageButton
{
    unsigned char m_nActionType;      // Unknown if signed or signed, but it does only '==' comparisions, so it's safe to use unsigned (moar numbers)
    char m_szName[8];
    char m_nType;
    char m_nTargetMenu;
    //char _pad1;
    __int16 m_wPosnX;
    __int16 m_wPosnY;
    char m_nAlign;
    //char _pad2;
};
#pragma pack(pop)

#pragma pack(push, 4)
struct CMenuPage
{
    char m_szTitleName[8];
    char m_nPrevMenu;
    char m_nStartingButton;
    CMenuPageButton m_aButtons[12];
};
#pragma pack(pop)

VALIDATE_SIZE(CMenuPageButton, 0x12);
VALIDATE_SIZE(CMenuPage, 0xE2);



#pragma pack(push, 1)
class PLUGIN_API CMenuManager
{
public:
	__int8 field_0;
	__int8 field_1[3];
	float               m_fStatsScrollSpeed;
	__int8 field_8;
	__int8 field_9[23];
	__int8 field_20;
	bool                m_bHudOn;
	__int8 field_22[2];
	__int32             m_dwRadarMode;
	__int8 field_28[4];
	__int32             m_nTargetBlipIndex; // blip script handle
	__int8 field_30;
	__int8 field_31;
	bool                m_bDontDrawFrontEnd;
	bool                m_bActivateMenuNextFrame;
	bool                m_bMenuAccessWidescreen;
	__int8 field_35;
	__int8 field_36[2];
	__int32 field_38;
	__int32             m_dwBrightness;
	float               m_fDrawDistance;
	bool                m_bShowSubtitles;
	__int8 field_45[4];
	__int8 field_49;
	bool                m_bMapLegend;
	bool                m_bWidescreenOn;
	bool                m_bFrameLimiterOn;
	bool                m_bRadioAutoSelect;
	__int8 field_4E;
	__int8              m_nSfxVolume;
	__int8              m_nRadioVolume;
	bool                m_bRadioEq;
	__int8              m_nRadioStation;
	__int8 field_53;
	__int32             m_dwSelectedMenuItem;
	__int8 field_58;
	__int8 drawRadarOrMap;
	__int8 field_5A;
	__int8 field_5B;
	bool                m_bMenuActive;
	__int8 doGameReload;
	__int8 field_5E;
	__int8 isSaveDone;
	bool                m_bLoadingData;
	__int8 field_61[3];
	float               m_fMapZoom;
	float               m_fMapBaseX;
	float               m_fMapBaseY;
	CVector2D           m_vMousePos;
	__int8 field_78;
	__int8 field_79[3];
	__int32 titleLanguage;
	__int32 textLanguage;
	__int8              m_nLanguage;
	__int8              m_nPreviousLanguage;
	__int8 field_86[2];
	__int32 field_88;
	bool                m_bLanguageChanged;
	__int8 field_8D[3];
	__int32 field_90;
	__int32 field_94;
	RwInt8 *            m_pJPegBuffer; //!< +0x98  \see JPegCompress file
	__int8  field_9C[16];
	__int32 field_AC;
	__int8              m_nRadioMode;
	__int8 invertPadX1;
	__int8 invertPadY1;
	__int8 invertPadX2;
	__int8 invertPadY2;
	__int8 swapPadAxis1;
	__int8 swapPadAxis2;
	__int8 field_B7;
	bool                m_bDrawMouse;
	__int8 field_B9[3];
	__int32             m_dwMousePosLeft;
	__int32             m_dwMousePosTop;
	bool                m_bMipMapping;
	bool                m_bTracksAutoScan;
	__int16 field_C6;
	__int32             m_dwAppliedAntiAliasingLevel;
	__int32             m_dwAntiAliasingLevel;
	__int8              m_nController;
	__int8 field_D1[3];
	__int32             m_dwAppliedResolution;
	__int32             m_dwResolution;
	__int32 field_DC;
	__int32 mousePosLeftA;
	__int32 mousePosTopA;
	bool                m_bSavePhotos;
	bool                m_bMainMenuSwitch;
	__int8              m_nPlayerNumber;
	__int8 field_EB;
	__int32 field_EC;
	__int32 field_F0;
	__int8 field_F4;
	__int8 field_F5[3];
	//union{
	//	struct{
	CSprite2d m_apTextures[25];
	//	};
	//	struct{
	//		CSprite2d m_apRadioSprites[13];
	//		CSprite2d m_apBackgroundTextures[8];
	//		CSprite2d m_apAdditionalBackgroundTextures[2];
	//		CSprite2d m_apMouseTextures[2];
	//	};
	//};
	bool                m_bTexturesLoaded;
	unsigned __int8     m_nCurrentMenuPage;
	__int8 field_15E;
	unsigned char       m_bSelectedSaveGame;
	__int8 field_160;
	__int8 field_161;
	char                m_mpackName[8];
	__int8 field_16A[6486];
	__int32 field_1AC0;
	__int32 field_1AC4;
	__int32 field_1AC8;
	__int32 field_1ACC;
	__int32 field_1AD0;
	__int32 field_1AD4;
	__int32 field_1AD8;
	__int16 field_1ADC;
	bool                m_bChangeVideoMode;
	__int8 field_1ADF;
	__int32 field_1AE0;
	__int32 field_1AE4;
	__int8 field_1AE8;
	__int8 field_1AE9;
	__int8 field_1AEA;
	bool                m_bScanningUserTracks;
	__int32 field_1AEC;
	__int8 field_1AF0;
	__int8 field_1AF1;
	__int8 field_1AF2;
	__int8 field_1AF3;
	__int32 field_1AF4;
	__int32 field_1AF8;
	__int32 field_1AFC;
	__int32 field_1B00;
	__int32 field_1B04;
	__int8 field_1B08;
	__int8 field_1B09;
	__int8 field_1B0A;
	__int8 field_1B0B;
	__int32 field_1B0C;
	__int8 field_1B10;
	__int8 field_1B11;
	__int8 field_1B12;
	__int8 field_1B13;
	__int8 field_1B14;
	__int8 field_1B15;
	__int8 field_1B16;
	__int8 field_1B17;
	__int32 EventToDo;
	__int32 field_1B1C;
	unsigned char       m_nTexturesRound;
	unsigned char       m_nNumberOfMenuOptions;
	__int16 field_1B22;
	__int32 field_1B24;
	__int8 field_1B28;
	__int8 field_1B29;
	__int16 field_1B2A;
	__int32 field_1B2C;
	__int32 field_1B30;
	__int16 field_1B34;
	__int16 field_1B36;
	__int32 field_1B38;
	__int8 field_1B3C;
	__int8 field_1B3D;
	__int8 field_1B3E;
	__int8 field_1B3F;
	__int32 field_1B40;
	__int8 field_1B44;
	__int8 field_1B45;
	__int16 field_1B46;
	__int32 field_1B48;
	__int32 field_1B4C;
	__int8              m_nBackgroundSprite;
	__int8 field_1B51;
	__int16 field_1B52;
	__int32 field_1B54;
	__int32 field_1B58;
	__int8 field_1B5C;
	__int8 field_1B5D;
	__int16 field_1B5E;
	__int32 field_1B60;
	__int32 field_1B64;
	__int32 field_1B68;
	__int32 field_1B6C;
	__int32 field_1B70;
	__int32 field_1B74;

	static int& nLastMenuPage;

	static bool& bInvertMouseX;
	static bool& bInvertMouseY;

public:
	CMenuManager();
	~CMenuManager();

	void DrawWindow(const CRect& coords, const char* pKey, unsigned char nColour, CRGBA backColor, bool Unused, bool bBackground);
    char SwitchToNewScreen(char page);
    void SaveSettings();
    char InitialiseChangedLanguageSettings(char a2);
    void ScrollRadioStations(char numStations);
    void ProcessMissionPackNewGame();
    signed int DoSettingsBeforeStartingAGame();
    char SetDefaultPreferences(eMenuPage page);
    char PrintMap();
    char PrintStats();
    char PrintBriefs();
    char DrawControllerSetupScreen();
};
#pragma pack(pop)

VALIDATE_SIZE(CMenuManager, 0x1B78);

extern CMenuManager &FrontEndMenuManager;
