/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CSprite2d.h"

enum eHudComponents {
    HUD_BIG_MESSAGE_COMPLETE,
    HUD_BIG_MESSAGE_TITLE,
    HUD_BIG_MESSAGE_WASTED,
    HUD_BIG_MESSAGE_4,
    HUD_BIG_MESSAGE_5,
    HUD_BIG_MESSAGE_6,
    HUD_BIG_MESSAGE_7,
    HUD_SUBTITLES,
    HUD_RADAR,
    HUD_RADAR_BLIP_SIZE,
    HUD_MAP_BLIP_SIZE,
    HUD_HELP_MESSAGE,
    HUD_HELP_MESSAGE_ICON,
    HUD_LOADING_BAR,
    HUD_MP_NAME_TEXT,
    HUD_MP_NAME_ICON,
    HUD_CUTSCENE_BATTERY,
    HUD_CUTSCENE_REC,
    HUD_CUTSCENE_CORNER,
    HUD_CUTSCENE_METER,
    HUD_CREDITS_JOB_BIG,
    HUD_CREDITS_JOB_MED,
    HUD_CREDITS_JOB_SMALL,
    HUD_CREDITS_NAME_BIG,
    HUD_CREDITS_NAME_MED,
    HUD_CREDITS_NAME_SMALL,
    HUD_CREDITS_SPACE_BIG,
    HUD_CREDITS_SPACE_MED,
    HUD_CREDITS_SPACE_SMALL,
    // HUD_DEV_KEYBOARD_MODE,
    // HUD_DEV_MISSION_DESC,
    HUD_MP_CLOCK,
    HUD_MP_CASH,
    HUD_REPLAY_MOUSE,
    HUD_WANTED_FRONT,
    HUD_WANTED_BACK,
    HUD_CASH,
    HUD_MISSION_PASSED_CASH,
    HUD_AMMO,
    HUD_WEAPON_ICON,
    HUD_AREA_NAME,
    HUD_STREET_NAME,
    HUD_VEHICLE_NAME,
    HUD_PHONE_MESSAGE_ICON,
    HUD_PHONE_MESSAGE_NUMBER,
    HUD_PHONE_MESSAGE_BOX,
    HUD_TEXT_MESSAGE_ICON,
    HUD_SLEEP_MODE_ICON,
    HUD_WEAPON_CROSSHAIR,
    HUD_WEAPON_HEALTH_TARGET,
    HUD_WEAPON_ARMOUR_TARGET,
    HUD_WEAPON_DOT,
    HUD_MISSION_CLOCK,
    HUD_MISSION_COUNTER_NAME_1,
    HUD_MISSION_COUNTER_NUMBER_1,
    HUD_MISSION_COUNTER_NAME_2,
    HUD_MISSION_COUNTER_NUMBER_2,
    HUD_MISSION_COUNTER_NAME_3,
    HUD_MISSION_COUNTER_NUMBER_3,
    HUD_MISSION_COUNTER_NAME_4,
    HUD_MISSION_COUNTER_NUMBER_4,
    HUD_WEAPON_SCOPE,
    HUD_WEAPON_SCOPE_BIT_1,
    HUD_WEAPON_SCOPE_BIT_2,
    HUD_REPLAY_CONTROLLER,
    HUD_LOWERRIGHT_MESSAGE,
};

class CHudComponent {
public:
    uint8_t field_8[8];
    uint32_t type;
    uint8_t field_24[5];
    uint8_t display;
    uint8_t field_25[4];
    rage::Vector2 pos;
    rage::Vector2 scale;
    uint8_t field_52[8];
    uint32_t defaultState;
    uint32_t fontStyle;
    uint8_t edge;
    uint8_t background;
    uint8_t printFromBottom;
    uint8_t field_108[9];
    rage::Color32 color;
    uint8_t field_110[16];
    uint8_t alpha;
    uint8_t field_190[18];
    CSprite2d sprite;

public:
    bool IsDisplaying();
};

class CHudComponentInfo {
public:
    uint32_t m_nIndex;
    rage::Vector2 m_vPos;
    rage::Vector2 m_vSize;
    uint32_t m_nRGB;
    uint32_t m_nAlpha;

public:

};

extern CHudComponentInfo* aHudComponentInfo; // [455]
extern int32_t& MaxComponentInfo;
