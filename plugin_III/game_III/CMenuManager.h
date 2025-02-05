/*
	Plugin-SDK (Grand Theft Auto 3) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSprite2d.h"
#include "CPlayerSkin.h"

enum {
	NUM_ENTRIES = 18
};

enum eFrontendSprites {
	FE2_MAINPANEL_UL,
	FE2_MAINPANEL_UR,
	FE2_MAINPANEL_DL,
	FE2_MAINPANEL_DR,
	FE2_MAINPANEL_DR2,
	FE2_TABACTIVE,
	FE_ICONBRIEF,
	FE_ICONSTATS,
	FE_ICONCONTROLS,
	FE_ICONSAVE,
	FE_ICONAUDIO,
	FE_ICONDISPLAY,
	FE_ICONLANGUAGE,
	FE_CONTROLLER,
	FE_CONTROLLERSH,
	FE_ARROWS1,
	FE_ARROWS2,
	FE_ARROWS3,
	FE_ARROWS4,
	FE_RADIO1,
	FE_RADIO2,
	FE_RADIO3,
	FE_RADIO4,
	FE_RADIO5,
	FE_RADIO6,
	FE_RADIO7,
	FE_RADIO8,
	FE_RADIO9,
};

enum eMenuSprites {
	MENUSPRITE_CONNECTION,
	MENUSPRITE_FINDGAME,
	MENUSPRITE_HOSTGAME,
	MENUSPRITE_MAINMENU,
	MENUSPRITE_PLAYERSET,
	MENUSPRITE_SINGLEPLAYER,
	MENUSPRITE_MULTIPLAYER,
	MENUSPRITE_DMALOGO,
	MENUSPRITE_GTALOGO,
	MENUSPRITE_RSTARLOGO,
	MENUSPRITE_GAMESPY,
	MENUSPRITE_MOUSE,
	MENUSPRITE_MOUSET,
	MENUSPRITE_MP3LOGO,
	MENUSPRITE_DOWNOFF,
	MENUSPRITE_DOWNON,
	MENUSPRITE_UPOFF,
	MENUSPRITE_UPON,
	MENUSPRITE_GTA3LOGO,
};

enum eMenuScreen {
	MENUPAGE_NONE = 0,
	MENUPAGE_STATS = 1,
	MENUPAGE_NEW_GAME = 2,
	MENUPAGE_BRIEFS = 3,
	MENUPAGE_CONTROLLER_SETTINGS = 4,
	MENUPAGE_SOUND_SETTINGS = 5,
	MENUPAGE_DISPLAY_SETTINGS = 6,
	MENUPAGE_LANGUAGE_SETTINGS = 7,
	MENUPAGE_CHOOSE_LOAD_SLOT = 8,
	MENUPAGE_CHOOSE_DELETE_SLOT = 9,
	MENUPAGE_NEW_GAME_RELOAD = 10,
	MENUPAGE_LOAD_SLOT_CONFIRM = 11,
	MENUPAGE_DELETE_SLOT_CONFIRM = 12,
	MENUPAGE_13 = 13,
	MENUPAGE_LOADING_IN_PROGRESS = 14,
	MENUPAGE_DELETING_IN_PROGRESS = 15,
	MENUPAGE_16 = 16,
	MENUPAGE_DELETE_FAILED = 17,
	MENUPAGE_DEBUG_MENU = 18,
	MENUPAGE_MEMORY_CARD_1 = 19,
	MENUPAGE_MEMORY_CARD_2 = 20,
	MENUPAGE_MULTIPLAYER_MAIN = 21,
	MENUPAGE_SAVE_FAILED_1 = 22,
	MENUPAGE_SAVE_FAILED_2 = 23,
	MENUPAGE_SAVE = 24,
	MENUPAGE_NO_MEMORY_CARD = 25,
	MENUPAGE_CHOOSE_SAVE_SLOT = 26,
	MENUPAGE_SAVE_OVERWRITE_CONFIRM = 27,
	MENUPAGE_MULTIPLAYER_MAP = 28,
	MENUPAGE_MULTIPLAYER_CONNECTION = 29,
	MENUPAGE_MULTIPLAYER_FIND_GAME = 30,
	MENUPAGE_MULTIPLAYER_MODE = 31,
	MENUPAGE_MULTIPLAYER_CREATE = 32,
	MENUPAGE_MULTIPLAYER_START = 33,
	MENUPAGE_SKIN_SELECT_OLD = 34,
	MENUPAGE_CONTROLLER_PC = 35,
	MENUPAGE_CONTROLLER_PC_OLD1 = 36,
	MENUPAGE_CONTROLLER_PC_OLD2 = 37,
	MENUPAGE_CONTROLLER_PC_OLD3 = 38,
	MENUPAGE_CONTROLLER_PC_OLD4 = 39,
	MENUPAGE_CONTROLLER_DEBUG = 40,
	MENUPAGE_OPTIONS = 41,
	MENUPAGE_EXIT = 42,
	MENUPAGE_SAVING_IN_PROGRESS = 43,
	MENUPAGE_SAVE_SUCCESSFUL = 44,
	MENUPAGE_DELETING = 45,
	MENUPAGE_DELETE_SUCCESS = 46,
	MENUPAGE_SAVE_FAILED = 47,
	MENUPAGE_LOAD_FAILED = 48,
	MENUPAGE_LOAD_FAILED_2 = 49,
	MENUPAGE_FILTER_GAME = 50,
	MENUPAGE_START_MENU = 51,
	MENUPAGE_PAUSE_MENU = 52,
	MENUPAGE_CHOOSE_MODE = 53,
	MENUPAGE_SKIN_SELECT = 54,
	MENUPAGE_KEYBOARD_CONTROLS = 55,
	MENUPAGE_MOUSE_SETTINGS = 56,
	MENUPAGE_57 = 57,
	MENUPAGE_58 = 58,
	NUM_MENU_PAGES
};

enum eMenuAction {
	MENUACTION_NOTHING,
	MENUACTION_LABEL,
	MENUACTION_CHANGEMENU,
	MENUACTION_CTRLVIBRATION,
	MENUACTION_CTRLCONFIG,
	MENUACTION_CTRLDISPLAY,
	MENUACTION_FRAMESYNC,
	MENUACTION_FRAMELIMIT,
	MENUACTION_TRAILS,
	MENUACTION_SUBTITLES,
	MENUACTION_WIDESCREEN,
	MENUACTION_BRIGHTNESS,
	MENUACTION_DRAWDIST,
	MENUACTION_MUSICVOLUME,
	MENUACTION_SFXVOLUME,
	MENUACTION_UNK15,
	MENUACTION_RADIO,
	MENUACTION_LANG_ENG,
	MENUACTION_LANG_FRE,
	MENUACTION_LANG_GER,
	MENUACTION_LANG_ITA,
	MENUACTION_LANG_SPA,
	MENUACTION_UPDATESAVE,
	MENUACTION_CHECKSAVE,
	MENUACTION_UNK24,
	MENUACTION_NEWGAME,
	MENUACTION_RELOADIDE,
	MENUACTION_RELOADIPL,
	MENUACTION_SETDBGFLAG,
	MENUACTION_SWITCHBIGWHITEDEBUGLIGHT,
	MENUACTION_PEDROADGROUPS,
	MENUACTION_CARROADGROUPS,
	MENUACTION_COLLISIONPOLYS,
	MENUACTION_REGMEMCARD1,
	MENUACTION_TESTFORMATMEMCARD1,
	MENUACTION_TESTUNFORMATMEMCARD1,
	MENUACTION_CREATEROOTDIR,
	MENUACTION_CREATELOADICONS,
	MENUACTION_FILLWITHGUFF,
	MENUACTION_SAVEONLYTHEGAME,
	MENUACTION_SAVEGAME,
	MENUACTION_SAVEGAMEUNDERGTA,
	MENUACTION_CREATECOPYPROTECTED,
	MENUACTION_TESTSAVE,
	MENUACTION_TESTLOAD,
	MENUACTION_TESTDELETE,
	MENUACTION_PARSEHEAP,
	MENUACTION_SHOWCULL,
	MENUACTION_MEMCARDSAVECONFIRM,
	MENUACTION_RESUME_FROM_SAVEZONE,
	MENUACTION_UNK50,
	MENUACTION_DEBUGSTREAM,
	MENUACTION_MPMAP_LIBERTY,
	MENUACTION_MPMAP_REDLIGHT,
	MENUACTION_MPMAP_CHINATOWN,
	MENUACTION_MPMAP_TOWER,
	MENUACTION_MPMAP_SEWER,
	MENUACTION_MPMAP_INDUSTPARK,
	MENUACTION_MPMAP_DOCKS,
	MENUACTION_MPMAP_STAUNTON,
	MENUACTION_MPMAP_DEATHMATCH1,
	MENUACTION_MPMAP_DEATHMATCH2,
	MENUACTION_MPMAP_TEAMDEATH1,
	MENUACTION_MPMAP_TEAMDEATH2,
	MENUACTION_MPMAP_STASH,
	MENUACTION_MPMAP_CAPTURE,
	MENUACTION_MPMAP_RATRACE,
	MENUACTION_MPMAP_DOMINATION,
	MENUACTION_STARTMP,
	MENUACTION_UNK69,
	MENUACTION_UNK70,
	MENUACTION_FINDMP,
	MENUACTION_REDEFCTRL,
	MENUACTION_UNK73,
	MENUACTION_INITMP,
	MENUACTION_MP_PLAYERCOLOR,
	MENUACTION_MP_PLAYERNAME,
	MENUACTION_MP_GAMENAME,
	MENUACTION_GETKEY,
	MENUACTION_SHOWHEADBOB,
	MENUACTION_UNK80,
	MENUACTION_INVVERT,
	MENUACTION_CANCLEGAME,
	MENUACTION_MP_PLAYERNUMBER,
	MENUACTION_MOUSESENS,
	MENUACTION_CHECKMPGAMES,
	MENUACTION_CHECKMPPING,
	MENUACTION_MP_SERVER,
	MENUACTION_MP_MAP,
	MENUACTION_MP_GAMETYPE,
	MENUACTION_MP_LAN,
	MENUACTION_MP_INTERNET,
	MENUACTION_RESUME,
	MENUACTION_DONTCANCLE,
	MENUACTION_SCREENRES,
	MENUACTION_AUDIOHW,
	MENUACTION_SPEAKERCONF,
	MENUACTION_PLAYERSETUP,
	MENUACTION_RESTOREDEF,
	MENUACTION_CTRLMETHOD,
	MENUACTION_DYNAMICACOUSTIC,
	MENUACTION_LOADRADIO,
	MENUACTION_MOUSESTEER,
	MENUACTION_UNK103,
	MENUACTION_UNK104,
	MENUACTION_UNK105,
	MENUACTION_UNK106,
	MENUACTION_UNK107,
	MENUACTION_UNK108,
	MENUACTION_UNK109,
	MENUACTION_UNK110,
};

struct PLUGIN_API CMenuScreen {
	char m_ScreenName[8];
	int unk;
	int m_nPreviousPage;
	int m_nPreviousGamePage;
	int m_nParentEntry;
	int m_nParentGameEntry;

	struct PLUGIN_API CMenuEntry {
		int m_nAction;
		char m_EntryName[8];
		int m_nSaveSlot;
		int m_nTargetMenu;
	} m_aEntries[NUM_ENTRIES];
};

class PLUGIN_API CMenuManager {
public:
	int m_nPrefsVideoMode;
	int m_nDisplayVideoMode;
	char m_nPrefsAudio3DProviderIndex;
	bool m_bKeyChangeNotProcessed;
	char m_aSkinName[256];
	int m_nHelperTextMsgId;
	bool m_bLanguageLoaded;
	bool m_bMenuActive;
	char m_bMenuStateChanged;
	char m_bWaitingForNewKeyBind;
	bool m_bWantToRestart;
	bool m_bFirstTime;
	bool m_bGameNotLoaded;
	int m_nMousePosX;
	int m_nMousePosY;
	int m_nMouseTempPosX;
	int m_nMouseTempPosY;
	bool m_bShowMouse;
	CPlayerSkinData m_sSkin;
	CPlayerSkinData *m_pSelectedSkin;
	int m_nFirstVisibleRowOnList;
	float m_nScrollbarTopMargin;
	int m_nCurrentExSize;
	int m_nSkinsTotal;
	char _unk0[4];
	int m_nCurrentExOption;
	bool m_bSkinsEnumerated;
	bool m_bQuitGameNoCD;
	bool m_bRenderGameInMenu;
	bool m_bSaveMenuActive;
	bool m_bWantToLoad;
	char field_455;
	char field_456;
	bool m_bSpritesLoaded;
	CSprite2d m_aFrontEndSprites[28];
	CSprite2d m_aMenuSprites[20];
	int field_518;
	int m_nMenuFadeAlpha;
	char field_520;
	char field_521;
	char field_522;
	char field_523;
	char field_524;
	int m_nCurrentControlAction;
	char _unk1[4];
	int field_530;
	char field_534;
	char field_535;
	char m_nCurrentExLayer;
	int m_nHelperTextAlpha;
	int m_nMouseOldPosX;
	int m_nMouseOldPosY;
	int m_nHoverOption;
	int m_nCurrentMenuPage;
	int m_nCurrentMenuEntry;
	int m_nPreviousMenuEntry;
	int m_nPreviousMenuPage;
	int field_558;
	int m_nCurrentSaveSlot;
	int m_nScreenChangeDelayTimer;

public:
	static int &OS_Language;
	static bool &m_bPrefsUseVibration;
	static bool &m_bDisplayControllerOnFoot;
	static bool &m_bPrefsUseWideScreen;
	static char &m_nPrefsRadioStation;
	static bool &m_bPrefsVsync;
	static bool &m_bPrefsVsyncDisp;
	static bool &m_bPrefsFrameLimiter;
	static bool &m_bPrefsShowSubtitles;
	static char &m_nPrefsSpeakers;
	static char &m_nControlMethod;
	static bool &m_bPrefsDMA;
	static char &m_nPrefsLanguage;
	static bool &m_bDisableMouseSteering;
	static int &m_nPrefsBrightness;
	static float &m_fPrefsLOD;
	static bool &m_bFrontEnd_ReloadObrTxtGxt;
	static int &m_nPrefsMusicVolume;
	static int &m_nPrefsSfxVolume;
	static char *m_nPrefsSkinFile;
	static int &m_nKeyPressedCode;

	static bool &m_bStartUpFrontEndRequested;
	static bool &m_bShutDownFrontEndRequested;
	static bool &m_bPrefsAllowNastyGame;

public:
	void BuildStatLine(char *text, float *stat, bool aFloat, float* stat2);
	static void CentreMousePointer();
	int CheckCodesForControls(int type);
	bool CheckHover(int x1, int x2, int y1, int y2);
	void CheckSliderMovement(int direction);
	int CostructStatLine(int);
	void DisplayHelperText();
	float DisplaySlider(float, float, float, float, float, float);
	void DoSettingsBeforeStartingAGame();
	void Draw();
	void DrawControllerBound(int, int, int, char);
	void DrawControllerScreenExtraText(int, int, int);
	void DrawControllerSetupScreen();
	void DrawFrontEnd();
	void DrawFrontEndNormal();
	void DrawPlayerSetupScreen();
	int FadeIn(int alpha);
	void FilterOutColorMarkersFromString(char, CRGBA &);
	int GetStartOptionsCntrlConfigScreens();
	static void InitialiseChangedLanguageSettings();
	void LoadAllTextures();
	void LoadSettings();
	static void MessageScreen(char *);
	static void PickNewPlayerColour();
	void PrintBriefs();
	static void PrintErrorMessage();
	void PrintStats();
	void Process();
	void ProcessButtonPresses();
	void ProcessOnOffMenuOptions();
	static void RequestFrontEndShutDown();
	static void RequestFrontEndStartUp();
	void ResetHelperText();
	void SaveLoadFileError_SetUpErrorScreen();
	void SaveSettings();
	void SetHelperText(int text);
	void ShutdownJustMenu();
	float StretchX(float);
	float StretchY(float);
	void SwitchMenuOnAndOff();
	void UnloadTextures();
	void WaitForUserCD();
};

VALIDATE_SIZE(CMenuManager, 0x564);

extern CMenuManager &FrontEndMenuManager;
extern CMenuScreen* aScreens;
