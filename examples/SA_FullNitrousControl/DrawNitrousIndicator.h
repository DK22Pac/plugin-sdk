#pragma once
#include "Parameters.h"
#include "game_sa\common.h"
#include "game_sa\CFont.h"
#include "game_sa\CSprite2d.h"
#include "game_sa\CHudColours.h"
#include "game_sa\CAutomobile.h"
#include "Screen.h"

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
        && playa->m_pVehicle->m_dwVehicleClass == VEHICLE_AUTOMOBILE && playa->m_pVehicle->m_pDriver == playa
        && playa->m_pVehicle->m_nNitroBoosts > 0)
    {
        CAutomobile *playaVeh = reinterpret_cast<CAutomobile *>(playa->m_pVehicle);
        CFont::SetBackground(false, false);
        CFont::SetAlignment(ALIGN_CENTER);
        CFont::SetProp(true);
        CFont::SetFontStyle(FONT_SUBTITLES);
        CFont::SetColor(HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT));
        static char text[16];
        sprintf(text, playaVeh->m_nNitroBoosts != 101 ? "X%d" : "INF", playaVeh->m_nNitroBoosts);
        float progress = (playaVeh->m_fNitroValue < 0.0f) ? (1.0f - fabsf(playaVeh->m_fNitroValue)) : playaVeh->m_fNitroValue;
        if (progress >= 0.9999f)
            progress = 1.0f;
        if (FNC_DRAW_V_HUD) {
            CFont::SetOutlinePosition(1);
            CFont::SetDropColor(CRGBA(0, 0, 0, 150));
            CFont::SetScale(
                Screen::GetMultiplier(FNC_DRAW_VHUD_NITROUS_TEXT_WIDTH),
                Screen::GetMultiplier(FNC_DRAW_VHUD_NITROUS_TEXT_HEIGHT));
            CFont::SetCentreSize(
                RsGlobal.maximumWidth);
            CFont::PrintString(
                Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_TEXT_POS_X),
                static_cast<float>(RsGlobal.maximumHeight) - Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_TEXT_POS_Y),
                text);
            DrawProgressBar(
                Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_BAR_POS_X),
                static_cast<float>(RsGlobal.maximumHeight) -
                Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_BAR_POS_Y),
                Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_BAR_WIDTH),
                Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_BAR_HEIGHT),
                0,
                Screen::GetCoord(FNC_DRAW_VHUD_NITROUS_BAR_BORDER),
                HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT),
                CRGBA(0, 0, 0, 150),
                true,
                HudColour.GetRGB(HUD_COLOUR_BLUELIGHT, 100),
                progress,
                1);
        }
        else if (FNC_DRAW_WIDESCREEN_PARAMETERS) {
            CFont::SetOutlinePosition(1);
            CFont::SetDropColor(CRGBA(0, 0, 0, 200));
            CFont::SetScale(
                Screen::GetMultiplier(FNC_DRAW_WIDE_NITROUS_TEXT_WIDTH),
                Screen::GetMultiplier(FNC_DRAW_WIDE_NITROUS_TEXT_HEIGHT));
            CFont::SetCentreSize(
                RsGlobal.maximumWidth);
            CFont::PrintString(
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_TEXT_POS_X),
                static_cast<float>(RsGlobal.maximumHeight) - Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_TEXT_POS_Y),
                text);
            DrawProgressBar(
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_BAR_POS_X),
                static_cast<float>(RsGlobal.maximumHeight) -
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_BAR_POS_Y),
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_BAR_WIDTH),
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_BAR_HEIGHT),
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_BAR_BORDER),
                Screen::GetCoord(FNC_DRAW_WIDE_NITROUS_BAR_BORDER),
                HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT),
                CRGBA(0, 0, 0, 200),
                true,
                CRGBA(255, 255, 255, 20),
                progress,
                0);
        }
        else {
            CFont::SetDropShadowPosition(1);
            CFont::SetDropColor(CRGBA(0, 0, 0, 255));
            CFont::SetScale(
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * FNC_DRAW_NITROUS_TEXT_WIDTH,
                static_cast<float>(RsGlobal.maximumHeight) * 0.002232143f * FNC_DRAW_NITROUS_TEXT_HEIGHT);
            CFont::SetCentreSize(
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * 640.0f);
            CFont::PrintString(
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * FNC_DRAW_NITROUS_TEXT_POS_X,
                static_cast<float>(RsGlobal.maximumHeight) - 
                    static_cast<float>(RsGlobal.maximumHeight) * 0.002232143f * FNC_DRAW_NITROUS_TEXT_POS_Y,
                text);
            DrawProgressBar(
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * FNC_DRAW_NITROUS_BAR_POS_X,
                static_cast<float>(RsGlobal.maximumHeight) -
                static_cast<float>(RsGlobal.maximumHeight) * 0.002232143f * FNC_DRAW_NITROUS_BAR_POS_Y,
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * FNC_DRAW_NITROUS_BAR_WIDTH,
                static_cast<float>(RsGlobal.maximumHeight) * 0.002232143f * FNC_DRAW_NITROUS_BAR_HEIGHT,
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * FNC_DRAW_NITROUS_BAR_BORDER,
                static_cast<float>(RsGlobal.maximumWidth) * 0.0015625f * FNC_DRAW_NITROUS_BAR_BORDER,
                HudColour.GetRGBA(HUD_COLOUR_BLUELIGHT),
                CRGBA(0, 0, 0, 255),
                true,
                CRGBA(255, 255, 255, 20),
                progress,
                0);
        }
        CFont::SetDropShadowPosition(0);
    }
}