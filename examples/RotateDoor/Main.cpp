/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "common.h"
#include "CAutomobile.h"

using namespace plugin;

class RotateDoorExample {
public:
    RotateDoorExample() {
        static float m_angle = 0.0f;

        Events::gameProcessEvent.Add([] {
            CVehicle *vehicle = FindPlayerVehicle(0, false);
            if (vehicle && vehicle->m_nVehicleClass == VEHICLE_AUTOMOBILE) {
                m_angle += 0.01f;
                if (m_angle > (_RW_pi * 2.0f))
                    m_angle = 0.0f;
                CQuaternion quat;
                quat.Set(m_angle, 0.0f, 0.0f);
                CAutomobile *automobile = reinterpret_cast<CAutomobile *>(vehicle);
                if (automobile->m_aCarNodes[CAR_DOOR_RF])
                    quat.Get(&automobile->m_aCarNodes[CAR_DOOR_RF]->modelling);
                if (automobile->m_aCarNodes[CAR_DOOR_LF])
                    quat.Get(&automobile->m_aCarNodes[CAR_DOOR_LF]->modelling);
            }
        });

        static RwIm3DVertex vertsAxis[6] = { { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, RWRGBALONG(255, 0, 0, 255), 0.0f, 0.0f },
        { 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, RWRGBALONG(255, 0, 0, 255), 0.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, RWRGBALONG(0, 255, 0, 255), 0.0f, 0.0f },
        { 0.0f, -1.0f, 0.0f, 0.0f, 0.0f, 0.0f, RWRGBALONG(0, 255, 0, 255), 0.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, RWRGBALONG(0, 0, 255, 255), 0.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, RWRGBALONG(0, 0, 255, 255), 0.0f, 0.0f } };

        Events::drawingEvent.Add([] {
            CVehicle *vehicle = FindPlayerVehicle(0, false);
            if (vehicle && vehicle->m_nVehicleClass == VEHICLE_AUTOMOBILE) {
                CAutomobile *automobile = reinterpret_cast<CAutomobile *>(vehicle);
                RwEngineInstance->dOpenDevice.fpRenderStateSet(rwRENDERSTATEZTESTENABLE, FALSE);
                if (automobile->m_aCarNodes[CAR_DOOR_RF]) {
                    if (RwIm3DTransform(vertsAxis, 6, &automobile->m_aCarNodes[CAR_DOOR_RF]->ltm, 0)) {
                        RwIm3DRenderLine(0, 1);
                        RwIm3DRenderLine(2, 3);
                        RwIm3DRenderLine(4, 5);
                        RwIm3DEnd();
                    }
                }
                if (automobile->m_aCarNodes[CAR_DOOR_LF]) {
                    if (RwIm3DTransform(vertsAxis, 6, &automobile->m_aCarNodes[CAR_DOOR_LF]->ltm, 0)) {
                        RwIm3DRenderLine(0, 1);
                        RwIm3DRenderLine(2, 3);
                        RwIm3DRenderLine(4, 5);
                        RwIm3DEnd();
                    }
                }
                RwEngineInstance->dOpenDevice.fpRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)TRUE);
            }
        });
    }
} example;