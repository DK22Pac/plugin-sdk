/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "DRAW_FADE_STATE.h"
#include "CSprite2d.h"
#include "RenderWare.h"
#include "StringUtils.h"

class PLUGIN_API CHud {
public:
    SUPPORTED_10EN_11EN_STEAM static wchar_t(&m_HelpMessageToPrint)[256]; // static wchar_t m_HelpMessageToPrint[256]
    SUPPORTED_10EN_11EN_STEAM static wchar_t(&m_BigMessage)[6][128]; // static wchar_t m_BigMessage[6][128]
    SUPPORTED_10EN_11EN_STEAM static wchar_t(&m_LastHelpMessage)[256]; // static wchar_t m_LastHelpMessage[256]
    SUPPORTED_10EN_11EN_STEAM static wchar_t(&m_Message)[256]; // static wchar_t m_Message[256]
    SUPPORTED_10EN_11EN_STEAM static wchar_t(&m_HelpMessage)[256]; // static wchar_t m_HelpMessage[256]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_WantedState;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_HelpMessageState;
    SUPPORTED_10EN_11EN_STEAM static int &m_WantedTimer;
    SUPPORTED_10EN_11EN_STEAM static int &m_HelpMessageTimer;
    SUPPORTED_10EN_11EN_STEAM static int &m_WeaponFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_LastTimeEnergyLost;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&m_pVehicleNameToPrint;
    SUPPORTED_10EN_11EN_STEAM static int &m_DisplayScoreFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static int &m_EnergyLostFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static float &m_HelpMessageDisplayTime;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&m_pZoneName;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&m_pLastVehicleName;
    SUPPORTED_10EN_11EN_STEAM static int &m_ZoneNameTimer;
    SUPPORTED_10EN_11EN_STEAM static int &m_EnergyLostTimer;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_EnergyLostState;
    SUPPORTED_10EN_11EN_STEAM static int &m_WeaponTimer;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_WeaponState;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_ZoneState;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_LastWanted;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_LastWeapon;
    SUPPORTED_10EN_11EN_STEAM static int &m_VehicleNameTimer;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&m_pLastZoneName;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_ClockState;
    SUPPORTED_10EN_11EN_STEAM static int &m_HelpMessageFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_VehicleState;
    SUPPORTED_10EN_11EN_STEAM static int &m_VehicleFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static int &m_WantedFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&m_pVehicleName;
    SUPPORTED_10EN_11EN_STEAM static int &m_ZoneFadeTimer;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_LastDisplayScore;
    SUPPORTED_10EN_11EN_STEAM static int &m_DisplayScoreTimer;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d(&Sprites)[69]; // static CSprite2d Sprites[69]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &m_DisplayScoreState;
    SUPPORTED_10EN_11EN_STEAM static short &SpriteBrightness;
    SUPPORTED_10EN_11EN_STEAM static short &m_ItemToFlash;
    SUPPORTED_10EN_11EN_STEAM static bool &m_HelpMessageQuick;
    SUPPORTED_10EN_11EN_STEAM static bool &bScriptDontDisplayRadar;
    SUPPORTED_10EN_11EN_STEAM static bool &m_Wants_To_Draw_3dMarkers;
    SUPPORTED_10EN_11EN_STEAM static bool &m_HelpMessageDisplayForever;
    SUPPORTED_10EN_11EN_STEAM static bool &m_Wants_To_Draw_Hud;

    SUPPORTED_10EN_11EN_STEAM static void Draw();
    SUPPORTED_10EN_11EN_STEAM static void DrawAfterFade();
    SUPPORTED_10EN_11EN_STEAM static void DrawFadeState(DRAW_FADE_STATE fadeState, int a2);
    SUPPORTED_10EN_11EN_STEAM static void GetRidOfAllHudMessages();
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static bool IsHelpMessageBeingDisplayed();
    SUPPORTED_10EN_11EN_STEAM static void ReInitialise();
    SUPPORTED_10EN_11EN_STEAM static void ResetWastedText();
    SUPPORTED_10EN_11EN_STEAM static void SetBigMessage(wchar_t const *message, unsigned short style);
    SUPPORTED_10EN_11EN_STEAM static void SetHelpMessage(wchar_t const *message, bool quickMessage, bool permanent);
    SUPPORTED_10EN_11EN_STEAM static void SetMessage(wchar_t const *message);
    //! dummy function
    SUPPORTED_10EN_11EN_STEAM static void SetPagerMessage(wchar_t const *message);
    SUPPORTED_10EN_11EN_STEAM static void SetVehicleName(wchar_t const *name);
    SUPPORTED_10EN_11EN_STEAM static void SetZoneName(wchar_t const *name);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();

    SUPPORTED_10EN_11EN_STEAM static inline void SetBigMessage(char const *message, unsigned short style) {
        static wchar_t wmessage[128];
        StringUtils::atow_static(wmessage, message);
        SetBigMessage(wmessage, style);
    }

    SUPPORTED_10EN_11EN_STEAM static inline void SetHelpMessage(char const *message, bool quickMessage, bool permanent) {
        static wchar_t wmessage[256];
        StringUtils::atow_static(wmessage, message);
        SetHelpMessage(wmessage, quickMessage, permanent);
    }

    SUPPORTED_10EN_11EN_STEAM static inline void SetMessage(char const *message) {
        static wchar_t wmessage[256];
        StringUtils::atow_static(wmessage, message);
        SetMessage(wmessage);
    }

    //! dummy function
    SUPPORTED_10EN_11EN_STEAM static inline void SetPagerMessage(char const *message) {}

    SUPPORTED_10EN_11EN_STEAM static inline void SetVehicleName(char const *name) {
        static wchar_t wname[256];
        StringUtils::atow_static(wname, name);
        SetVehicleName(wname);
    }

    SUPPORTED_10EN_11EN_STEAM static inline void SetZoneName(char const *name) {
        static wchar_t wname[256];
        StringUtils::atow_static(wname, name);
        SetZoneName(wname);
    }
};

SUPPORTED_10EN_11EN_STEAM extern float(&BigMessageX)[6]; // float BigMessageX[6]
SUPPORTED_10EN_11EN_STEAM extern float(&BigMessageInUse)[6]; // float BigMessageInUse[6]
SUPPORTED_10EN_11EN_STEAM extern wchar_t(&LastBigMessage)[6][128]; // wchar_t LastBigMessage[6][128]
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpCameraSightTex;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpLaserDotTex;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpRocketSightTex;
SUPPORTED_10EN_11EN_STEAM extern float &OddJob2XOffset;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpLaserSightTex;
SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpSniperSightTex;
SUPPORTED_10EN_11EN_STEAM extern float &PagerXOffset;
SUPPORTED_10EN_11EN_STEAM extern float &OddJob2OffTimer;
SUPPORTED_10EN_11EN_STEAM extern short(&CounterFlashTimer)[3]; // short CounterFlashTimer[3]
SUPPORTED_10EN_11EN_STEAM extern short &OddJob2Timer;
SUPPORTED_10EN_11EN_STEAM extern short &TimerFlashTimer;
SUPPORTED_10EN_11EN_STEAM extern unsigned short &OddJob2On;
SUPPORTED_10EN_11EN_STEAM extern unsigned char(&CounterOnLastFrame)[3]; // unsigned char CounterOnLastFrame[3]
SUPPORTED_10EN_11EN_STEAM extern bool &TimerOnLastFrame;

#include "meta/meta.CHud.h"
