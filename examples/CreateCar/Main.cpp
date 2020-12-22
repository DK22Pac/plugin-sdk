/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "common.h"
#include "CStreaming.h"
#include "CModelInfo.h"
#include "CMonsterTruck.h"
#include "CQuadBike.h"
#include "CHeli.h"
#include "CPlane.h"
#include "CBmx.h"
#include "CTrailer.h"
#include "CBoat.h"
#include "CWorld.h"
#include "CTheScripts.h"
#include "CTimer.h"

using namespace plugin;

class CreateCarExample {
public:
    static unsigned int m_nLastSpawnedTime; // время последнего спавна ; last spawned time

    // Вынесем создание авто в отдельную функцию SpawnVehicle ; Put everything related to car creation into SpawnVehicle function
    static CVehicle *SpawnVehicle(unsigned int modelIndex, CVector position, float orientation) {
        // Загружаем модель
        unsigned char oldFlags = CStreaming::ms_aInfoForModel[modelIndex].m_nFlags;
        CStreaming::RequestModel(modelIndex, GAME_REQUIRED);
        CStreaming::LoadAllRequestedModels(false);
        if (CStreaming::ms_aInfoForModel[modelIndex].m_nLoadState == LOADSTATE_LOADED) {
            if (!(oldFlags & GAME_REQUIRED)) {
                CStreaming::SetModelIsDeletable(modelIndex);
                CStreaming::SetModelTxdIsDeletable(modelIndex);
            }
            CVehicle *vehicle = nullptr;
            // Выделяем обьект из пула
            switch (reinterpret_cast<CVehicleModelInfo *>(CModelInfo::ms_modelInfoPtrs[modelIndex])->m_nVehicleType) {
            case VEHICLE_MTRUCK:
                vehicle = new CMonsterTruck(modelIndex, 1);
                break;
            case VEHICLE_QUAD:
                vehicle = new CQuadBike(modelIndex, 1);
                break;
            case VEHICLE_HELI:
                vehicle = new CHeli(modelIndex, 1);
                break;
            case VEHICLE_PLANE:
                vehicle = new CPlane(modelIndex, 1);
                break;
            case VEHICLE_BIKE:
                vehicle = new CBike(modelIndex, 1);
                reinterpret_cast<CBike *>(vehicle)->m_nDamageFlags |= 0x10;
                break;
            case VEHICLE_BMX:
                vehicle = new CBmx(modelIndex, 1);
                reinterpret_cast<CBmx *>(vehicle)->m_nDamageFlags |= 0x10;
                break;
            case VEHICLE_TRAILER:
                vehicle = new CTrailer(modelIndex, 1);
                break;
            case VEHICLE_BOAT:
                vehicle = new CBoat(modelIndex, 1);
                break;
            default:
                vehicle = new CAutomobile(modelIndex, 1, true);
                break;
            }
            if (vehicle) {
                // Размещаем транспорт в игровом мире
                vehicle->SetPosn(position);
                vehicle->SetOrientation(0.0f, 0.0f, orientation);
                vehicle->m_nStatus = 4;
                vehicle->m_nDoorLock = CARLOCK_UNLOCKED;
                CWorld::Add(vehicle);
                CTheScripts::ClearSpaceForMissionEntity(position, vehicle); // удаляем другие обьекты, которые находятся в этих координатах
                if (vehicle->m_nVehicleClass == VEHICLE_BIKE)
                    reinterpret_cast<CBike *>(vehicle)->PlaceOnRoadProperly();
                else if (vehicle->m_nVehicleClass != VEHICLE_BOAT)
                    reinterpret_cast<CAutomobile *>(vehicle)->PlaceOnRoadProperly();
                return vehicle;
            }
        }
        return nullptr;
    }

    // Наша функция спавна ; Our spawning function
    static void ProcessSpawn() {
        if (KeyPressed(VK_TAB) && CTimer::m_snTimeInMilliseconds > (m_nLastSpawnedTime + 1000)) { // Если нажата клавиша и прошло больше секунды с момента последнего спавна
            CPed *player = FindPlayerPed(-1); // находим игрока ; find player
            if (player && !player->m_nAreaCode) { // если найден и не в интерьере ; if found
                CVector position = FindPlayerPed(-1)->TransformFromObjectSpace(CVector(0.0f, 5.0f, 0.0f)); // получаем координаты по офсету от игрока ; get coords on offset from player
                CAutomobile *automobile = reinterpret_cast<CAutomobile *>(SpawnVehicle(MODEL_INFERNUS, position, FindPlayerPed(-1)->m_fCurrentRotation + 1.5707964f)); // Создаём в этих координатах авто ; Create a car at these coords
                if (automobile) { // если авто создано ; if car was created
                    m_nLastSpawnedTime = CTimer::m_snTimeInMilliseconds; // записываем новое время спавна ; store new spawning time
                    if (automobile->m_pRwClump) { // если создан графический обьект (RpClump) ; if graphical object was created (RpClump)
                        RwFrame *component = CClumpModelInfo::GetFrameFromName(automobile->m_pRwClump, (char*)"bonnet_dummy"); // находим компонент в иерархии ; find component in hierarchy
                        if (component) // если компонент есть в иерархии ; if component found
                            component->modelling.pos.z += 1.0f; // двигаем компонент вверх ; move component up

                        // Ещё один вариант управления компонентом - обращаемся к компонентам, которые записаны в структуре авто ; Another way to control components - work with components that are stored in car structure
                        if (automobile->m_aCarNodes[CAR_BUMP_FRONT]) // если компонент присутствует ; if component present
                            automobile->m_aCarNodes[CAR_BUMP_FRONT]->modelling.pos.z += 1.0f; // двигаем компонент вверх ; move component up
                    }
                }
            }
        }
    }

    CreateCarExample() {
        // Добавляем нашу функцию в gameProcessEvent; Add our function to gameProcessEvent
        Events::gameProcessEvent.Add(ProcessSpawn); // Это то же, что и Events::gameProcessEvent += ProcessSpawn ; Same as Events::gameProcessEvent += ProcessSpawn
    }
} example;

unsigned int CreateCarExample::m_nLastSpawnedTime = 0;