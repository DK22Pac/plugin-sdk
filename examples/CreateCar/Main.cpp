/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include <plugin.h> // Plugin-SDK version 1003 from 2026-03-28 00:44:29
#include "common.h"
#include "CBmx.h"
#include "CBoat.h"
#include "CHeli.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "CMonsterTruck.h"
#include "CPlane.h"
#include "CQuadBike.h"
#include "CStreaming.h"
#include "CTimer.h"
#include "CTheScripts.h"
#include "CTrailer.h"
#include "CTrain.h"
#include "CWorld.h"

using namespace plugin;

struct Main
{
    bool keyCarSpawnPressed = false;

    Main()
    {
        // register event callbacks
        Events::gameProcessEvent += []{ gInstance.OnGameProcess(); };
    }

    void OnGameProcess()
    {
        bool pressed;

        // handle car spawning hotkey
        pressed = KeyPressed(VK_TAB);
        if (pressed && !keyCarSpawnPressed) // just pressed
        {
            SpawnRandomCar();
        }
        keyCarSpawnPressed = pressed;
    }

    void SpawnRandomCar()
    {
        auto player = FindPlayerPed();
        if (!player || player->m_nAreaCode != 0)
        {
            return; // player not found or inside interior
        }

        unsigned int modelCount = MODEL_UTILTR1 - MODEL_LANDSTAL + 1;
        std::srand(CTimer::m_snTimeInMilliseconds); // initialize random seed
        unsigned int model = MODEL_LANDSTAL + (std::rand() % modelCount); // get random from range
        
        CVector position = player->TransformFromObjectSpace({0.0f, 8.0f, -1.0f}); // get offset from player
        float rotation = player->m_fCurrentRotation + DegToRad(120.0f);

        auto vehicle = SpawnVehicle(model, position, rotation);

        static char msg[128]; // static, as it must exist as long, as it is printed on the screen

        if (!vehicle)
        {
            sprintf_s(msg, "~r~~h~Failed to spawn vehicle model: %d", model);
            CMessages::AddMessageJumpQ(msg, 10000, 0);
            return; // failed to spawn
        }

        sprintf_s(msg, "Vehicle model: %d~n~Base type: %d, Type: %d", model, vehicle->m_nVehicleClass, vehicle->m_nVehicleSubClass);
        CMessages::AddMessageJumpQ(msg, 10000, 0);

        // try modify components
        if (!vehicle->m_pRwClump)
        {
            return; // graphical object not available
        }

        // get component by name
        RwFrame* component = CClumpModelInfo::GetFrameFromName(vehicle->m_pRwClump, "bonnet_dummy");
        if (component)
        {
            component->modelling.pos.z += 1.0f; // move up
        }

        // get component by index
        if (vehicle->m_nVehicleSubClass == VEHICLE_AUTOMOBILE) // eCarNodes enum only applies to the CAutomobile class!
        {
            auto car = reinterpret_cast<CAutomobile*>(vehicle);

            if (car->m_aCarNodes[eCarNodes::CAR_BUMP_FRONT]) // make sure the component is present
            {
                car->m_aCarNodes[eCarNodes::CAR_BUMP_FRONT]->modelling.pos.z += 1.0f; // move up
            }
        }
    }

    // pack everything related to car creation into SpawnVehicle function
    static CVehicle* SpawnVehicle(unsigned int modelIndex, CVector position, float heading)
    {
        unsigned char oldFlags = CStreaming::ms_aInfoForModel[modelIndex].m_nFlags;

        CStreaming::RequestModel(modelIndex, GAME_REQUIRED);
        CStreaming::LoadAllRequestedModels(false);
        if (CStreaming::ms_aInfoForModel[modelIndex].m_nLoadState != LOADSTATE_LOADED)
        {
            return nullptr; // failed to load
        }

        if (!(oldFlags & GAME_REQUIRED)) 
        {
            CStreaming::SetModelIsDeletable(modelIndex);
            CStreaming::SetModelTxdIsDeletable(modelIndex);
        }

        auto modelInfo = CModelInfo::GetModelInfo(modelIndex);
        if (!modelInfo || modelInfo->GetModelType() != ModelInfoType::MODEL_INFO_VEHICLE)
        {
            return nullptr; // invalid model type
        }
        auto vehModelInfo = reinterpret_cast<CVehicleModelInfo*>(modelInfo);

        CVehicle* vehicle = nullptr;
        switch (vehModelInfo->m_nVehicleType) 
        {
            case VEHICLE_BMX:
                vehicle = new CBmx(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_BIKE:
                vehicle = new CBike(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_QUAD:
                vehicle = new CQuadBike(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_AUTOMOBILE:
                vehicle = new CAutomobile(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE, true);
                break;

            case VEHICLE_MTRUCK:
                vehicle = new CMonsterTruck(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_TRAILER:
                vehicle = new CTrailer(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_BOAT:
                vehicle = new CBoat(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_HELI:
                vehicle = new CHeli(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_PLANE:
                vehicle = new CPlane(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                break;

            case VEHICLE_TRAIN:
                vehicle = new CTrain(modelIndex, eVehicleCreatedBy::RANDOM_VEHICLE);
                reinterpret_cast<CTrain*>(vehicle)->m_nTrainFlags.bNotOnARailRoad = true;
                break;

            default:
                // unsupported type
                break;
        }
        if (!vehicle)
        {
            return nullptr; // failed to spawn
        }

        position.z += vehicle->GetHeightAboveRoad();
        vehicle->SetOrientation(0.0f, 0.0f, heading);
        vehicle->Teleport(position); // includes CWorld::Add

        vehicle->m_nStatus = eEntityStatus::STATUS_ABANDONED;
        vehicle->bEngineOn = false;
        vehicle->m_eDoorLock = DOORLOCK_UNLOCKED;

        switch (vehicle->m_nVehicleClass) // basic type
        {
            case VEHICLE_BIKE: // anything based on CBike class
                reinterpret_cast<CBike*>(vehicle)->bOnSideStand = true;
                reinterpret_cast<CBike*>(vehicle)->PlaceOnRoadProperly();
                break;

            case VEHICLE_AUTOMOBILE: // anything based on CAutomobile class
                reinterpret_cast<CAutomobile*>(vehicle)->PlaceOnRoadProperly();
                break;
        }
        vehicle->UpdateRwMatrix(); // make updated position visible right away

        CTheScripts::ClearSpaceForMissionEntity(vehicle->GetPosition(), vehicle);

        vehicle->ProcessControl(); // process suspension, ground brightness etc.

        return vehicle;
    }
} gInstance;