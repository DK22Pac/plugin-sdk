#pragma once
#include "Parameters.h"
#include "game_sa/common.h"
#include "game_sa/CFont.h"
#include "game_sa/CSprite2d.h"
#include "game_sa/CHudColours.h"
#include "game_sa/CAutomobile.h"

void DrawRectBO(int left, int top, int right, int bottom, CRGBA const &color) {
    CSprite2d::DrawRect(CRect(static_cast<float>(left) - 0.5f,
                              static_cast<float>(top) - 0.5f,
                              static_cast<float>(right) - 0.5f,
                              static_cast<float>(bottom) - 0.5f),
                        color);
}

void DrawProgressBar(int x, int y, int w, int h, int border_x, int border_y, CRGBA& color, CRGBA &borderColor,
    bool useBackgroundColor, CRGBA &backgroundColor, float progress, int direction)
{
    DrawRectBO(x, y, x + w, y + h, borderColor);
    DrawRectBO(x + border_x, y + border_y, x + w - border_x, y + h - border_y, backgroundColor);
    float nrm_progress = progress;
    if (nrm_progress > 1.0f)
        nrm_progress = 1.0f;
    else if (nrm_progress < 0.0f)
        return;
    if (direction)
        DrawRectBO(x + border_x, y + border_y, progress * (w - border_x) + x, y + h - border_y, color);
    else
        DrawRectBO(x + border_x, (1.0f - progress) * (h - border_y * 2) + y + border_y, x + w - border_x, y + h - border_y, color);
}

void DrawNitrousIndicator() {
    CPed *playa = FindPlayerPed();
    if (playa && playa->m_nPedFlags.bInVehicle && playa->m_pVehicle
        && playa->m_pVehicle->m_nVehicleClass == VEHICLE_AUTOMOBILE && playa->m_pVehicle->m_pDriver == playa
        && playa->m_pVehicle->m_nNitroBoosts > 0)
    {
        CAutomobile *playaVeh = reinterpret_cast<CAutomobile *>(playa->m_pVehicle);
        CFont::SetBackground(false, false);
        CFont::SetOrientation(ALIGN_CENTER);
        CFont::SetProportional(true);
        CFont::SetFontStyle(FONT_SUBTITLES);
        CFont::SetColor(HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT));
        static char text[16];
        sprintf(text, playaVeh->m_nNitroBoosts != 101 ? "X%d" : "INF", playaVeh->m_nNitroBoosts);
        float progress = (playaVeh->m_fNitroValue < 0.0f) ? (1.0f - fabsf(playaVeh->m_fNitroValue)) : playaVeh->m_fNitroValue;
        if (progress >= 0.9999f)
            progress = 1.0f;
        if (FNC_DRAW_V_HUD) {
            CFont::SetDropShadowPosition(1);
            CFont::SetDropColor(CRGBA(0, 0, 0, 150));
            CFont::SetScale(SCREEN_MULTIPLIER(FNC_DRAW_VHUD_NITROUS_TEXT_WIDTH),
                SCREEN_MULTIPLIER(FNC_DRAW_VHUD_NITROUS_TEXT_HEIGHT));
            CFont::SetCentreSize(SCREEN_WIDTH);
            CFont::PrintString(SCREEN_COORD_LEFT(FNC_DRAW_VHUD_NITROUS_TEXT_POS_X),
                SCREEN_COORD_BOTTOM(FNC_DRAW_VHUD_NITROUS_TEXT_POS_Y), text);
            DrawProgressBar(SCREEN_COORD_LEFT(FNC_DRAW_VHUD_NITROUS_BAR_POS_X),
                SCREEN_COORD_BOTTOM(FNC_DRAW_VHUD_NITROUS_BAR_POS_Y),
                SCREEN_COORD(FNC_DRAW_VHUD_NITROUS_BAR_WIDTH), SCREEN_COORD(FNC_DRAW_VHUD_NITROUS_BAR_HEIGHT),
                0, SCREEN_COORD(FNC_DRAW_VHUD_NITROUS_BAR_BORDER), HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT), 
                CRGBA(0, 0, 0, 150), true, HudColour.GetRGB(HUD_COLOUR_BLUELIGHT, 100), progress, 1);
        }
        else if (FNC_DRAW_WIDESCREEN_PARAMETERS) {
            CFont::SetDropShadowPosition(1);
            CFont::SetDropColor(CRGBA(0, 0, 0, 200));
            CFont::SetScale(SCREEN_MULTIPLIER(FNC_DRAW_WIDE_NITROUS_TEXT_WIDTH),
                SCREEN_MULTIPLIER(FNC_DRAW_WIDE_NITROUS_TEXT_HEIGHT));
            CFont::SetCentreSize(SCREEN_WIDTH);
            CFont::PrintString(SCREEN_COORD_LEFT(FNC_DRAW_WIDE_NITROUS_TEXT_POS_X),
                SCREEN_COORD_BOTTOM(FNC_DRAW_WIDE_NITROUS_TEXT_POS_Y), text);
            DrawProgressBar(SCREEN_COORD_LEFT(FNC_DRAW_WIDE_NITROUS_BAR_POS_X),
                SCREEN_COORD_BOTTOM(FNC_DRAW_WIDE_NITROUS_BAR_POS_Y),
                SCREEN_COORD(FNC_DRAW_WIDE_NITROUS_BAR_WIDTH), SCREEN_COORD(FNC_DRAW_WIDE_NITROUS_BAR_HEIGHT),
                SCREEN_COORD(FNC_DRAW_WIDE_NITROUS_BAR_BORDER), SCREEN_COORD(FNC_DRAW_WIDE_NITROUS_BAR_BORDER),
                HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT), CRGBA(0, 0, 0, 200), true, CRGBA(255, 255, 255, 20),
                progress, 0);
        }
        else {
            CFont::SetDropShadowPosition(1);
            CFont::SetDropColor(CRGBA(0, 0, 0, 255));
            CFont::SetScale(SCREEN_WIDTH * 0.0015625f * FNC_DRAW_NITROUS_TEXT_WIDTH,
                SCREEN_HEIGHT * 0.002232143f * FNC_DRAW_NITROUS_TEXT_HEIGHT);
            CFont::SetCentreSize(SCREEN_WIDTH * 0.0015625f * 640.0f);
            CFont::PrintString(SCREEN_WIDTH * 0.0015625f * FNC_DRAW_NITROUS_TEXT_POS_X,
                SCREEN_HEIGHT - SCREEN_HEIGHT * 0.002232143f * FNC_DRAW_NITROUS_TEXT_POS_Y, text);
            DrawProgressBar(SCREEN_WIDTH * 0.0015625f * FNC_DRAW_NITROUS_BAR_POS_X,
                SCREEN_HEIGHT - SCREEN_HEIGHT * 0.002232143f * FNC_DRAW_NITROUS_BAR_POS_Y,
                SCREEN_WIDTH * 0.0015625f * FNC_DRAW_NITROUS_BAR_WIDTH,
                SCREEN_HEIGHT * 0.002232143f * FNC_DRAW_NITROUS_BAR_HEIGHT,
                SCREEN_WIDTH * 0.0015625f * FNC_DRAW_NITROUS_BAR_BORDER,
                SCREEN_WIDTH * 0.0015625f * FNC_DRAW_NITROUS_BAR_BORDER,
                HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT), CRGBA(0, 0, 0, 255), true, CRGBA(255, 255, 255, 20),
                progress, 0);
        }
        CFont::SetDropShadowPosition(0);
    }
}