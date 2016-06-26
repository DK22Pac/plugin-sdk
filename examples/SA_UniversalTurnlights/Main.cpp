#include <plugin.h>
#include <game_sa\CVehicle.h>
#include <game_sa\common.h>
#include <game_sa\CModelInfo.h>
#include <game_sa\CTimer.h>
#include <game_sa\CCoronas.h>
#include <game_sa\CGeneral.h>
#include <game_sa\CCamera.h>

// originally made by Den_spb

#define TURN_ON_OFF_DELAY 500
#define MAX_RADIUS 200.0f

using namespace plugin;

class UniversalTurnlights {
public:
    enum eLightsStatus {
        LIGHTS_OFF, LIGHTS_LEFT, LIGHTS_RIGHT, LIGHTS_BOTH
    };

    class VehicleTurnlightsData {
    public:
        eLightsStatus lightsStatus;

        VehicleTurnlightsData(CVehicle *) : lightsStatus(LIGHTS_OFF) {}
    };

    UniversalTurnlights() {
        static VehicleExtendedData<VehicleTurnlightsData> turnlightsData;

        Events::vehicleRenderEvent.before += [](CVehicle *vehicle) {
            if ((vehicle->m_dwVehicleSubClass == VEHICLE_AUTOMOBILE || vehicle->m_dwVehicleSubClass == VEHICLE_BIKE) &&
                (vehicle->GetVehicleAppearance() == VEHICLE_APPEARANCE_AUTOMOBILE || vehicle->GetVehicleAppearance() == VEHICLE_APPEARANCE_BIKE) &&
                vehicle->m_wModelIndex != MODEL_BMX && vehicle->m_wModelIndex != MODEL_BIKE && vehicle->m_wModelIndex != MODEL_MTBIKE &&
                !vehicle->m_pAttachedTo)
            {
                eLightsStatus &lightsStatus = turnlightsData.Get(vehicle).lightsStatus;
                if (vehicle->m_pDriver) {
                    CPed *playa = FindPlayerPed();
                    if (playa && playa->m_pVehicle == vehicle && playa->m_bInVehicle) {
                        if (KeyPressed(90)) // Z
                            lightsStatus = LIGHTS_LEFT;
                        else if (KeyPressed(88)) // X
                            lightsStatus = LIGHTS_BOTH;
                        else if (KeyPressed(67)) // C
                            lightsStatus = LIGHTS_RIGHT;
                        else if (KeyPressed(VK_SHIFT))
                            lightsStatus = LIGHTS_OFF;
                    }
                    else {
                        lightsStatus = LIGHTS_OFF;

                        CVector2D prevPoint = GetCarPathLinkPosition(vehicle->m_autoPilot.m_wPreviousPathNodeInfo);
                        CVector2D currPoint = GetCarPathLinkPosition(vehicle->m_autoPilot.m_wCurrentPathNodeInfo);
                        CVector2D nextPoint = GetCarPathLinkPosition(vehicle->m_autoPilot.m_wNextPathNodeInfo);

                        float angle = GetZAngleForPoint(nextPoint - currPoint) - GetZAngleForPoint(currPoint - prevPoint);
                        while (angle < 0.0f) angle += 360.0f;
                        while (angle > 360.0f) angle -= 360.0f;

                        if (angle >= 30.0f && angle < 180.0f)
                            lightsStatus = LIGHTS_LEFT;
                        else if (angle <= 330.0f && angle > 180.0f)
                            lightsStatus = LIGHTS_RIGHT;

                        if (lightsStatus == LIGHTS_OFF) {
                            if (vehicle->m_autoPilot.m_nCurrentLane == 0 && vehicle->m_autoPilot.m_nNextLane == 1)
                                lightsStatus = LIGHTS_RIGHT;
                            else if (vehicle->m_autoPilot.m_nCurrentLane == 1 && vehicle->m_autoPilot.m_nNextLane == 0)
                                lightsStatus = LIGHTS_LEFT;
                        }
                    }
                }
                if (CTimer::m_snTimeInMilliseconds % (TURN_ON_OFF_DELAY * 2) < TURN_ON_OFF_DELAY) {
                    if (DistanceBetweenPoints(TheCamera.m_vGameCamPos, vehicle->GetPosition()) < MAX_RADIUS) {
                        DrawVehicleTurnlights(vehicle, lightsStatus);
                        if (vehicle->m_pTractor)
                            DrawVehicleTurnlights(vehicle->m_pTractor, lightsStatus);
                    }
                }
            }
        };
    }

    static CVector2D GetCarPathLinkPosition(CCarPathLinkAddress &address) {
        if (address.m_wAreaId != -1 && address.m_wCarPathLinkId != -1 && ThePaths.m_pPathNodes[address.m_wAreaId]) {
            return CVector2D(static_cast<float>(ThePaths.m_pNaviNodes[address.m_wAreaId][address.m_wCarPathLinkId].m_posn.x) / 8.0f,
                static_cast<float>(ThePaths.m_pNaviNodes[address.m_wAreaId][address.m_wCarPathLinkId].m_posn.y) / 8.0f);
        }
        return CVector2D(0.0f, 0.0f);
    }

    static void DrawTurnlight(CVehicle *vehicle, unsigned int dummyId, bool leftSide) {
        CVector posn =
            reinterpret_cast<CVehicleModelInfo *>(CModelInfo::ms_modelInfoPtrs[vehicle->m_wModelIndex])->m_pVehicleStruct->m_avDummyPosn[dummyId];
        if (posn.x == 0.0f) posn.x = 0.15f;
        if (leftSide) posn.x *= -1.0f;
        CCoronas::RegisterCorona(reinterpret_cast<unsigned int>(vehicle) + 50 + dummyId + (leftSide ? 0 : 2), vehicle, 255, 128, 0, 255, posn,
            0.3f, 150.0f, CORONATYPE_SHINYSTAR, 0, false, false, 0, 0.0f, false, 0.5f, 0, 50.0f, false, true);
    }

    static void DrawVehicleTurnlights(CVehicle *vehicle, eLightsStatus lightsStatus) {
        if (lightsStatus == LIGHTS_BOTH || lightsStatus == LIGHTS_RIGHT) {
            DrawTurnlight(vehicle, 0, false);
            DrawTurnlight(vehicle, 1, false);
        }
        if (lightsStatus == LIGHTS_BOTH || lightsStatus == LIGHTS_LEFT) {
            DrawTurnlight(vehicle, 0, true);
            DrawTurnlight(vehicle, 1, true);
        }
    }

    static float GetZAngleForPoint(CVector2D &point) {
        float angle = CGeneral::GetATanOfXY(point.x, point.y) * 57.295776f - 90.0f;
        while (angle < 0.0f) angle += 360.0f;
        return angle;
    }
} universalTurnlights;