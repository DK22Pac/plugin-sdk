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

enum eMenuDisplay : int8_t {
    MENU_DISPLAY_ON_OFF = 0,
    MENU_DISPLAY_CONTROL_METHOD,
    MENU_DISPLAY_CONTROL_CONFIG,
    MENU_DISPLAY_SNIPER_TYPE,
    MENU_DISPLAY_CONTROLLER_SENSITIVITY,
    MENU_DISPLAY_LANGUAGE,
    MENU_DISPLAY_GPS_SPEECH,
    MENU_DISPLAY_RADAR_MODE,
    MENU_DISPLAY_RETICULE_MODE,
    MENU_DISPLAY_NETSTATS_GAMEMODE,
    MENU_DISPLAY_NETSTATS_GAMETYPE,
    MENU_DISPLAY_NETSTATS_SCORES,
    MENU_DISPLAY_NETSTATS_COMP_TEAM,
    MENU_DISPLAY_NETSTATS_RACETYPE,
    MENU_DISPLAY_NETSTATS_RACENAME0,
    MENU_DISPLAY_NETSTATS_RACENAME1,
    MENU_DISPLAY_NETSTATS_RACENAME2,
    MENU_DISPLAY_NETSTATS_RACENAME3,
    MENU_DISPLAY_NETSTATS_RACENAME4,
    MENU_DISPLAY_NETSTATS_TRUESKILLNAME,
    MENU_DISPLAY_SPEAKER_OUTPUT_STEREO,
    MENU_DISPLAY_SPEAKER_OUTPUT_SURROUND,
    MENU_DISPLAY_PLAYERSETTINGS_GENRE,
    MENU_DISPLAY_EXTRA_0,
    MENU_DISPLAY_EXTRA_1,
    MENU_DISPLAY_EXTRA_2,
    MENU_DISPLAY_EXTRA_3,
    MENU_DISPLAY_EXTRA_4,
    MENU_DISPLAY_EXTRA_5,
    MENU_DISPLAY_EXTRA_6,
    MENU_DISPLAY_EXTRA_7,
    MENU_DISPLAY_EXTRA_8,
    MENU_DISPLAY_EXTRA_9,
    MENU_DISPLAY_EXTRA_10,
    MENU_DISPLAY_NETSTATS_RACETYPE_E1,
    MENU_DISPLAY_NETSTATS_E1_RACENAME0,
    MENU_DISPLAY_NETSTATS_E1_RACENAME1,
    MENU_DISPLAY_NETSTATS_E1_RACENAME2,
    MENU_DISPLAY_NETSTATS_E1_RACENAME3,
    MENU_DISPLAY_NETSTATS_E1_RACENAME4,
    MENU_DISPLAY_NETSTATS_E1_RACENAME5,
    MENU_DISPLAY_NETSTATS_RACETYPE_E2,
    MENU_DISPLAY_NETSTATS_RACETYPE_E3,
    MENU_DISPLAY_NETSTATS_E2_RACENAME0,
    MENU_DISPLAY_NETSTATS_E2_RACENAME1,
    MENU_DISPLAY_NETSTATS_E2_RACENAME2,
    MENU_DISPLAY_NETSTATS_E2_RACENAME3,
    MENU_DISPLAY_NETSTATS_E2_RACENAME4,
    MENU_DISPLAY_NETSTATS_E2_RACENAME5,
    MENU_DISPLAY_NETSTATS_GAMECLASS,
    MENU_DISPLAY_SNIPER_ZOOM_TYPE = 52,
    MENU_DISPLAY_QUALITY_SETTINGS,
    MENU_DISPLAY_PLAYMODE,
    MENU_DISPLAY_ASPECT,
    MENU_DISPLAY_SHADOW_QUALITY,
    MENU_DISPLAY_SHADOW_DENSITY,
    MENU_DISPLAY_REFLECTION_QUALITY,
    MENU_TEXTURE_QUALITY_SETTINGS,
    MENU_DISPLAY_VOICE_OUTPUT,
    MENU_DISPLAY_GANG,
    MENU_DISPLAY_VALUE_TYPES_START = 100,
    MENU_DISPLAY_NONE = 100,
    MENU_DISPLAY_SLIDERBAR,
    MENU_DISPLAY_ONE_NUMBER,
    MENU_DISPLAY_TWO_NUMBER,
    MENU_DISPLAY_TWO_NUMBERS_SPECIAL,
    MENU_DISPLAY_RADIO_STATIONS,
    MENU_DISPLAY_NET_STATS,
    MENU_DISPLAY_QUALITY_SLIDERBAR,
    MENU_DISPLAY_VALUE_SLIDERBAR,
    MENU_DISPLAY_RESOLUTION_SLIDERBAR,
};

enum eMenuState : int32_t {
    MENUSTATE_START_GAME = 6,
    MENUSTATE_OPTIONS = 9,
    MENUSTATE_SAVE_GAME_ASK = 12,
    MENUSTATE_QUIT_INSTANTLY = 52,
    MENUSTATE_QUIT_ASK = 53,
    MENUSTATE_SC_HELP = 71,
};

enum eMenuOpt : int8_t {
    MENUOPT_NONE,
    MENUOPT_ADJUST,
    MENUOPT_ADJUST_SPECIAL,
    MENUOPT_TEXT_INPUT,
    MENUOPT_BACK,
    MENUOPT_BACK_SAVEGAME,
    MENUOPT_YES,
    MENUOPT_NO,
    MENUOPT_ON,
    MENUOPT_OFF,
    MENUOPT_JUMP,
    MENUOPT_JUMP_NEXT_MENU,
    MENUOPT_ADJUST_SPEAKER_OUTPUT,
    MENUOPT_ADJUST_VOICE_OUTPUT,
    MENUOPT_ADJUST_RADIO_STATION,
    MENUOPT_ADJUST_MUSIC_VOLUME,
    MENUOPT_JUMP_NEWGAME,
    MENUOPT_RESUME,
    MENUOPT_START_EPISODE,
    MENUOPT_QUIT,
    MENUOPT_SET,
    MENUOPT_HOST_GAME,
    MENUOPT_JOIN_GAME,
    MENUOPT_LEAVE_GAME,
    MENUOPT_ADJUST_GAMEMODE,
    MENUOPT_ADJUST_GAMETYPE,
    MENUOPT_ADJUST_TRUESKILL_GAMEMODE,
    MENUOPT_ADJUST_GAMESCORE,
    MENUOPT_ADJUST_RACECLASS,
    MENUOPT_ADJUST_RACENAME,
    MENUOPT_ADJUST_GAMECLASS,
    MENUOPT_JUMP_MARKETPLACE,
    MENUOPT_START_MKT_PACKG,
    MENUOPT_ADJUST_PL,
    MENUOPT_ADJUST_GANG,
    MENUOPT_TITLE_START,
    MENUOPT_JUMP_GUIDE,
    MENUOPT_KEYBOARD_OPTIONS,
    MENUOPT_CONTROLLER_OPTIONS,
    MENUOPT_REMAP_KEYBOARD,
    MENUOPT_SHOW_CONTROLLER,
    MENUOPT_GRAPHICS_ANALYZER,
    MENUOPT_BENCHMARK,
    MENUOPT_QUICKSCAN,
    MENUOPT_COMPLETESCAN,
    END_OF_MENU_OPTIONS
};

enum eMenuPrefs : int16_t {
    PREF_NULL = 0,
    PREF_WAYPOINT_ID = 1,
    PREF_AUTOSAVE = 2,
    PREF_AUTOSAVE_SLOT_UNUSED = 3,
    PREF_VIBRATION = 4,
    PREF_CONTROL_METHOD = 5,
    PREF_INVERT_MOUSE = 6,
    PREF_INVERT_LOOK = 7,
    PREF_AUTO_AIM = 8,
    PREF_CONTROLLER_SENSITIVITY = 9,
    PREF_SNIPER_CONTROL = 10,
    PREF_CONTROL_CONFIG = 11,
    PREF_BRIGHTNESS = 12,
    PREF_CONTRAST = 13,
    PREF_SATURATION = 14,
    PREF_LOD = 15,
    PREF_SUBTITLES = 16,
    PREF_DISPLAY_HUD = 17,
    PREF_RETICULE = 18,
    PREF_DISPLAY_GPS = 19,
    PREF_HANDRAKE_CAM = 20,
    PREF_RADAR_MODE = 21,
    PREF_MAP_LEGEND = 22,
    PREF_MUSIC_VOLUME = 23,
    PREF_MUSIC_VOLUME_IN_MP = 24,
    PREF_SFX_VOLUME = 25,
    PREF_FRAME_LIMITER = 26,
    PREF_AUDIO_OUTPUT = 27,
    PREF_BASS = 28,
    PREF_GPS_SPEECH = 29,
    PREF_KEYBOARD_LANGUAGE = 30,
    PREF_SYSTEM_LANGUAGE = 31,
    PREF_CURRENT_LANGUAGE = 32,
    PREF_PREVIOUS_LANGUAGE = 33,
    PREF_REDEFINE_SCREEN = 34,
    PREF_NETWORK_GAME_NAME = 35,
    PREF_NETWORK_GAME_TYPE = 36,
    PREF_NETWORK_GAME_PARAM_1 = 37,
    PREF_NETWORK_GAME_PARAM_2 = 38,
    PREF_NETWORK_GAME_PARAM_3 = 39,
    PREF_NETWORK_GAME_PARAM_4 = 40,
    PREF_NETWORK_GAME_PARAM_5 = 41,
    PREF_NETWORK_GAME_PARAM_6 = 42,
    PREF_GAMEMODE = 43,
    PREF_GAMETYPE = 44,
    PREF_SCORES = 45,
    PREF_RACETYPE = 46,
    PREF_RACENAME = 47,
    PREF_GAMECLASS = 48,
    PREF_GENRE = 49,
    PREF_HEAD_FEMALE = 50,
    PREF_TORSO_FEMALE = 51,
    PREF_LEGS_FEMALE = 82,
    PREF_GLASSES_FEMALE = 83,
    PREF_HATS_FEMALE = 86,
    PREF_HEAD_MALE = 87,
    PREF_TORSO_MALE = 58,
    PREF_LEGS_MALE = 59,
    PREF_GLASSES_MALE = 60,
    PREF_HATS_MALE = 61,
    PREF_HEAD_MALE_UNDRESSED = 94,
    PREF_HAIR_MALE = 99,
    PREF_HAIR_FEMALE = 100,
    PREF_SUSE_FEMALE = 101,
    PREF_SUSE_MALE = 102,
    PREF_HAND_FEMALE = 103,
    PREF_HAND_MALE = 104,
    PREF_RADIO_STATION = 105,
    PREF_HDR = 106,
    PREF_SPEAKER_OUTPUT = 75,
    PREF_FLICKER_FILTER = 76,
    PREF_DISPLAY_BLIPS = 77,
    PREF_VOICE_OUTPUT = 78,
    PREF_GAMETYPE_COMP = 79,
    PREF_SCORES_COMP = 80,
    PREF_GAMETYPE_TEAM = 81,
    PREF_SCORES_TEAM = 82,
    PREF_GAMETYPE_COOP = 83,
    PREF_SCORES_COOP = 84,
    PREF_GAMETYPE_RACE = 85,
    PREF_GAMETYPE_GAMER_RANK = 86,
    PREF_GAMETYPE_TRUESKILL = 87,
    PREF_GAMEMODE_TRUESKILL = 88,
    PREF_EPISODIC_GAMEMODE_0 = 89,
    PREF_EPISODIC_GAMEMODE_1 = 90,
    PREF_EPISODIC_GAMEMODE_2 = 91,
    PREF_EPISODIC_GAMEMODE_3 = 92,
    PREF_EPISODIC_GAMEMODE_4 = 93,
    PREF_EPISODIC_GAMEMODE_5 = 94,
    PREF_EPISODIC_GAMEMODE_6 = 95,
    PREF_EPISODIC_GAMEMODE_7 = 96,
    PREF_EPISODIC_GAMEMODE_8 = 97,
    PREF_EPISODIC_GAMEMODE_9 = 98,
    PREF_EPISODIC_SCORES_0 = 99,
    PREF_EPISODIC_SCORES_1 = 100,
    PREF_EPISODIC_SCORES_2 = 101,
    PREF_EPISODIC_SCORES_3 = 102,
    PREF_EPISODIC_SCORES_4 = 103,
    PREF_EPISODIC_SCORES_5 = 104,
    PREF_EPISODIC_SCORES_6 = 105,
    PREF_EPISODIC_SCORES_7 = 106,
    PREF_EPISODIC_SCORES_8 = 107,
    PREF_EPISODIC_SCORES_9 = 108,
    PREF_EPISODIC_GAMETYPE_0 = 109,
    PREF_EPISODIC_GAMETYPE_1 = 110,
    PREF_EPISODIC_GAMETYPE_2 = 111,
    PREF_EPISODIC_GAMETYPE_3 = 112,
    PREF_EPISODIC_GAMETYPE_4 = 113,
    PREF_EPISODIC_GAMETYPE_5 = 114,
    PREF_EPISODIC_GAMETYPE_6 = 115,
    PREF_EPISODIC_GAMETYPE_7 = 116,
    PREF_EPISODIC_GAMETYPE_8 = 117,
    PREF_EPISODIC_GAMETYPE_9 = 118,
    PREF_EPISODIC_GAMETYPE_RACE_0 = 119,
    PREF_EPISODIC_GAMETYPE_RACE_1 = 120,
    PREF_EPISODIC_GAMETYPE_RACE_2 = 121,
    PREF_EPISODIC_GAMETYPE_RACE_3 = 122,
    PREF_EPISODIC_GAMETYPE_RACE_4 = 123,
    PREF_EPISODIC_GAMETYPE_RACE_5 = 124,
    PREF_EPISODIC_RACENAME_RACE_0 = 125,
    PREF_EPISODIC_RACENAME_RACE_1 = 126,
    PREF_EPISODIC_RACENAME_RACE_2 = 127,
    PREF_EPISODIC_RACENAME_RACE_3 = 128,
    PREF_EPISODIC_RACENAME_RACE_4 = 129,
    PREF_EPISODIC_RACENAME_RACE_5 = 130,
    PREF_EPISODIC_RACECLASS_RACE_0 = 131,
    PREF_EPISODIC_RACECLASS_RACE_1 = 132,
    PREF_EPISODIC_RACECLASS_RACE_2 = 133,
    PREF_EPISODIC_RACECLASS_RACE_3 = 134,
    PREF_EPISODIC_RACECLASS_RACE_4 = 135,
    PREF_EPISODIC_RACECLASS_RACE_5 = 136,
    PREF_EPISODIC_NOISE_FILTER = 158,
    PREF_GANG = 137,
    PREF_MOUSE_SENSITIVITY = 138,
    PREF_STRAFE = 139,
    PREF_ZOOM_AIM = 140,
    PREF_MOUSE_WHEEL_SENSITIVITY = 141,
    PREF_VIDEO_MODE = 142,
    PREF_FULLSCREEN = 144,
    PREF_TEXTURE_QUALITY = 152,
    PREF_SHADOW_QUALITY = 153,
    PREF_REFLECTION_RESOLUTION = 145,
    PREF_ANISO_QUALITY = 54,
    PREF_SKINTONE_FEMALE = 55,
    PREF_HEADSHAPE_FEMALE = 63,
    PREF_SKINTONE_MALE = 64,
    PREF_HEADSHAPE_MALE = 65,
    PREF_FACIAL_HAIR_MALE = 66,
    PREF_OUTFIT_MALE = 144,
    PREF_VIEW_DISTANCE = 145,
    PREF_DETAIL_QUALITY = 152,
    PREF_WATER_QUALITY = 146,
    PREF_CAR_DENSITY = 147,
    PREF_DOF = 148,
    PREF_VSYNC = 149,
    PREF_SHADOW_DENSITY = 143,
    PREF_ASPECT = 153,
    PREF_REPLAY_MODE = 154,
    PREF_SPRINT = 155,
    PREF_CROUCH = 159,
    PREF_AUTOSCAN = 160,
    PREF_PLAYMODE = 161,
    PREF_MICROPHONE = 162,
    PREF_DINPUT = 163,
    PREF_HELIKB = 164
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

enum eLanguages {
    LANGUAGE_ENGLISH,
    LANGUAGE_FRENCH,
    LANGUAGE_GERMAN,
    LANGUAGE_ITALIAN,
    LANGUAGE_SPANISH,
    LANGUAGE_RUSSIAN,
    LANGUAGE_JAPANESE,
    NUM_LANGUAGES
};

struct CMenuEntry {
    eMenuOpt m_nAction;
    char m_EntryName[16];
    eMenuPrefs m_nValue;
    int8_t m_nScaler;
    eMenuDisplay m_nDisplayValue;
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

    static int32_t& m_PrefsMouseAccel;
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
extern int32_t* aPrefs;
