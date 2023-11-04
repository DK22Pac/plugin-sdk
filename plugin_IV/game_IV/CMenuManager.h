/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSprite2d.h"

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

class CMenuManager {
public:
    static CSprite2d* Frontend360Sprites; // [10]
    static CSprite2d& MouseCursorSprite;
    static CSprite2d& ReplayPointerSprite;
    static CSprite2d& ReplayPointerSprite2;
    static CSprite2d& ControllerSprite;
    static CSprite2d* MapSprites; // [4]

    static int32_t& m_PrefsAspectRatio;
    static int32_t& m_PrefsLanguage;
    static int32_t& m_PrefsUseVibration;
    static bool& m_MenuActive;
    static int32_t& m_nWaypointIndex;

};
