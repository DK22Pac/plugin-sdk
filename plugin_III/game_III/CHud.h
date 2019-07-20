#pragma once
/*
	Plugin-SDK (Grand Theft Auto 3) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"
#include "CSprite2d.h"

enum eItems {
	ITEM_NONE = -1,
	ITEM_ARMOUR = 3,
	ITEM_HEALTH = 4,
	ITEM_RADAR = 8
};

enum eHudSprites {
	HUD_FIST,
	HUD_BAT,
	HUD_PISTOL,
	HUD_UZI,
	HUD_SHOTGUN,
	HUD_AK47,
	HUD_M16,
	HUD_SNIPER,
	HUD_ROCKET,
	HUD_FLAME,
	HUD_MOLOTOV,
	HUD_GRENADE,
	HUD_DETONATOR,
	HUD_RADARDISC = 15,
	HUD_PAGER = 16,
	HUD_SITESNIPER = 20,
	HUD_SITEM16 = 21
};

class PLUGIN_API CHud {
public:
	static int &SpriteBrightness;
	static wchar_t *m_HelpMessage;
	static wchar_t *m_LastHelpMessage;
	static int &m_HelpMessageState;
	static int &m_HelpMessageTimer;
	static int &m_HelpMessageFadeTimer;
	static wchar_t *m_HelpMessageToPrint;
	static float &m_HelpMessageDisplayTime;
	static float &m_fTextBoxNumLines;
	static float &m_fHelpMessageTime;
	static bool	&m_HelpMessageQuick;
	static int m_ZoneState;
	static int m_ZoneFadeTimer;
	static int m_ZoneNameTimer;
	static wchar_t *&m_pZoneName;
	static wchar_t *m_pLastZoneName;
	static wchar_t *m_ZoneToPrint;
	static wchar_t *&m_VehicleName;
	static wchar_t *m_pLastVehicleName;
	static wchar_t *m_pVehicleNameToPrint;
	static int m_VehicleState;
	static int m_VehicleFadeTimer;
	static int m_VehicleNameTimer;
	static wchar_t *m_Message;
	static wchar_t *m_PagerMessage;
	static bool &m_Wants_To_Draw_Hud;
	static bool &m_Wants_To_Draw_3dMarkers;
	static wchar_t(*m_BigMessage)[128];
	static char &m_ItemToFlash;
	static CSprite2d *Sprites;

public:
	static void Draw();
	static void DrawAfterFade();
	static void GetRidOfAllHudMessages();
	static void Initialise();
	static void ReInitialise();
	static void SetBigMessage(wchar_t *message, char style);
	static void SetHelpMessage(wchar_t *message, bool quick);
	static void SetMessage(wchar_t *message);
	static void SetPagerMessage(wchar_t *message);
	static void SetVehicleName(wchar_t *name);
	static void SetZoneName(wchar_t *name);
	static void Shutdown();
};

extern float *BigMessageInUse;
extern float *BigMessageAlpha;
extern float *BigMessageX;
extern float &OddJob2OffTimer;
extern char &CounterOnLastFrame;
extern float &OddJob2XOffset;
extern char &CounterFlashTimer;
extern char &OddJob2Timer;
extern char &TimerOnLastFrame;
extern char &OddJob2On;
extern char &TimerFlashTimer;
extern char &PagerSoundPlayed;
extern float &PagerXOffset;
extern char &PagerTimer;
extern char &PagerOn;