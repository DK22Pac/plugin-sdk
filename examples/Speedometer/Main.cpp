#include "plugin.h"
#include "common.h"
#include "CSprite2d.h"
#include "CFileLoader.h"
#include "ShapeHelper.h"
#include "Numbers.h"
#include "Compatibility.h"

using namespace plugin;

class Speedometer {
public:
    Speedometer() {
        static RwTexDictionary *m_txd;
        static RwTexture *m_speedometerTex;

        Events::initRwEvent += [] {
            // Load txd and texture
            m_txd = CFileLoader::LoadTexDictionary(GAME_PATH((char*)"models\\speedometer.txd"));
            m_speedometerTex = GetFirstTexture(m_txd);

            // Prepare sin/cos table
            ShapeHelper::InitSinCosTable();

            // Do some changes in vehicle/zone name displaying
            Compatibility::InstallCompatibilityPatches();
        };

        Events::drawHudEvent += [] {
            CVehicle *vehicle = FindPlayerVehicle(-1, true);

            if (vehicle && vehicle->m_nVehicleSubClass != VEHICLE_PLANE && vehicle->m_nVehicleSubClass != VEHICLE_HELI
                && vehicle->m_nVehicleSubClass != VEHICLE_BOAT && vehicle->m_nVehicleSubClass != VEHICLE_BMX &&
                vehicle->m_nVehicleSubClass != VEHICLE_TRAIN)
            {
                float speed = vehicle->m_vecMoveSpeed.Magnitude();
                if (speed > 1.2f)
                    speed = 1.2f;

                // Setup texture
                RwRenderStateSet(rwRENDERSTATETEXTURERASTER, m_speedometerTex->raster);

                // Background
                ShapeHelper::DrawTexturedRectangle(CRect(SCREEN_COORD_RIGHT(64.0f + 290.0f),
                    SCREEN_COORD_BOTTOM(40.0f + 290.0f), SCREEN_COORD_RIGHT(64.0f), SCREEN_COORD_BOTTOM(40.0f)),
                    CRGBA(255, 255, 255, 255),
                    0.0f, 0.0f, 291.0f / 1024.0f, 0.0f, 0.0f, 291.0f / 512.0f, 291.0f / 1024.0f, 291.0f / 512.0f);

                // Mask
                if (speed > 0.0f) {
                    ShapeHelper::DrawCircleSectorTextured(1024.0f, 512.0f, 291.0f, 0.0f, 291.0f, 291.0f,
                        SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f),
                        SCREEN_COORD(290.0f / 2.0f), SCREEN_COORD(290.0f / 2.0f), 110.0f, 120.0f + 200.0f * speed);
                }

                // Arrow
                ShapeHelper::DrawRotatedTexturedRectangle(CRect(
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f + 8.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f + 145.0f),
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f - 8.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f + 29.0f)),
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f),
                    120.0f + 200.0f * speed + 90.0f,
                    CRGBA(255, 255, 255, 255),
                    658.0f / 1024.0f, 0.0f, 674.0f / 1024.0f, 0.0f, 658.0f / 1024.0f, 118.0f / 512.0f, 674.0f / 1024.0f, 118.0f / 512.0f);

                // Circle 1
                ShapeHelper::DrawTexturedRectangle(CRect(
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f + 38.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f + 38.0f),
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f - 38.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f - 38.0f)),
                    CRGBA(255, 255, 255, 255),
                    582.0f / 1024.0f, 0.0f, 658.0f / 1024.0f, 0.0f, 582.0f / 1024.0f, 76.0f / 512.0f, 658.0f / 1024.0f, 76.0f / 512.0f);

                // Circle 2 (gear)
                CRGBA color;
                if (vehicle->m_nCurrentGear == 0)
                    color = { 255, 25, 120, 255 };
                else
                    color = { 0, 255, 255, 255 };
                ShapeHelper::DrawTexturedRectangle(CRect(
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f + 29.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f + 29.0f),
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f - 29.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f - 29.0f)),
                    color,
                    582.0f / 1024.0f, 76.0f / 512.0f, 640.0f / 1024.0f, 76.0f / 512.0f, 582.0f / 1024.0f,
                    134.0f / 512.0f, 640.0f / 1024.0f, 134.0f / 512.0f);

                // Current gear (number)
                unsigned char gearNum = vehicle->m_nCurrentGear;
                if (gearNum > 9)
                    gearNum = 9;
                Numbers::DrawDigit_FontGear(gearNum, SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f + 14.0f),
                    SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f + 18.0f), SCREEN_COORD(28.0f), SCREEN_COORD(36.0f),
                    color.r, color.g, color.b);

                // Speed (km/h)
                Numbers::DrawNumber_FontSpeed(static_cast<unsigned int>(speed * 175.0f),
                    SCREEN_COORD_RIGHT(64.0f + 290.0f / 2.0f + 8.0f), SCREEN_COORD_BOTTOM(40.0f + 290.0f / 2.0f - 42.0f),
                    SCREEN_COORD(100.0f * 0.63f), SCREEN_COORD(160.0f * 0.63f), SCREEN_COORD(52.0f));

                // Reset texture
                RwRenderStateSet(rwRENDERSTATETEXTURERASTER, 0);
            }
        };

        Events::shutdownRwEvent += [] {
            // Delete txd
            RwTexDictionaryDestroy(m_txd);
        };
    }
};

Speedometer speedometer;