/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSprite2d.h"
#include "CHudComponent.h"

enum eHudSprites {
    SPRITE_CROSSHAIR,
    SPRITE_TARGET,
    SPRITE_FIST_ICON,
    SPRITE_THROW_ICON,
    SPRITE_DROPGRENADE_ICON,
    SPRITE_SCOPE_BIT_1,
    SPRITE_SCOPE_BIT_2,
    SPRITE_PHONE_ICON_ENVELOPE,
    SPRITE_PHONE_ICON_MEETING,
    SPRITE_PHONE_ICON_BELL,
    SPRITE_PHONE_ICON_APPOINTMENT,
    SPRITE_PHONE_ICON_REPLAY,
    SPRITE_PHONE_ICON_PICTURE,
    SPRITE_PHONE_ICON_DISCONNECT,
    SPRITE_PHONE_ICON_THUMBSUP,
    SPRITE_PHONE_ICON_THUMBSDOWN,
    SPRITE_PHONE_ICON_INVITE,
    SPRITE_IBCORNER,
    SPRITE_IBEDGE,
    SPRITE_IBFILL,
    SPRITE_CD_SPINNER,
    SPRITE_CLOCK_BACK,
    SPRITE_LOADING_BAR,
    SPRITE_MP_LOWER,
    SPRITE_MP_LEVEL,
    SPRITE_MP_HIGHER,
    SPRITE_MP_LEVEL_MIC,
    SPRITE_MP_LEVEL_TYPING,
    SPRITE_MOUSECURSORHUD,
    SPRITE_MOUSECURSORHAND,
    SPRITE_DROPPIPEBOMB_ICON,
    SPRITE_GRIME,
    SPRITE_GRIMEFE,
    SPRITE_GRIMEFE_2,
    SPRITE_SCOPE_BIT_3,
    SPRITE_PARACHUTE,
    SPRITE_SPARKLE,
    NUM_HUD_SPRITES,
};

class CHud {
public:
    static CSprite2d* Sprites;
    static CHudComponent** Components;
    static int32_t& NumComponents;
    static bool& HideAllComponents;

public:

};
