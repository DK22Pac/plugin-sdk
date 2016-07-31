#include <plugin.h>
#include "game_sa\CCarCtrl.h"
#include "game_sa\common.h"
#include "game_sa\CStreaming.h"
#include "game_sa\CAutomobile.h"
#include "game_sa\CTheScripts.h"
#include "game_sa\CTimer.h"

using namespace plugin;

class CreateCarExample {
public:
    static unsigned int m_nLastSpawnedTime; // время последнего спавна ; last spawned time

    // Вынесем создание авто в отдельную функцию CreateCar ; Put everything related to car creation into CreateCar function
    static CVehicle *CreateCar(int modelId, CVector posn) {
        CVehicle *result = nullptr;
        // Загружаем модель ; Load model
        unsigned int previousFlags = CStreaming::ms_aInfoForModel[modelId].m_flags;
        CStreaming::RequestModel(modelId, 2);
        CStreaming::LoadAllRequestedModels(false);
        if (CStreaming::ms_aInfoForModel[modelId].m_loadState == LOADSTATE_LOADED) { // если модель точно загружена ; ensure model is loaded
            if (!(previousFlags & GAME_REQUIRED)) { // если модель не была нужна ; if model was not required previously
                CStreaming::SetModelIsDeletable(modelId); // даём понять игре, что модель можно будет удалить ; tell game it could delete this model
                CStreaming::SetModelTxdIsDeletable(modelId); // то же самое - для txd ; same for txd
            }
            result = CCarCtrl::CreateCarForScript(modelId, posn, false); // создаём авто в координатах ; create a car at coords
            if (result)
                CTheScripts::CleanUpThisVehicle(result); // Что-то вроде RemoveReferences() ; Something like RemoveReferences()
        }
        return result;
    }

    // Наша функция спавна ; Our spawning function
    static void ProcessSpawn() {
        if (KeyPressed(VK_TAB) && CTimer::m_snTimeInMilliseconds > (m_nLastSpawnedTime + 1000)) { // Если нажата клавиша и прошло больше секунды с момента последнего спавна
            CPed *player = FindPlayerPed(0); // находим игрока ; find player
            if (player) { // если найден ; if found
                CVector position = player->TransformFromObjectSpace(CVector(0.0f, 3.0f, 0.0f)); // получаем координаты по офсету от игрока ; get coords on offset from player
                CAutomobile *automobile = reinterpret_cast<CAutomobile *>(CreateCar(MODEL_INFERNUS, position)); // Создаём в этих координатах авто ; Create a car at these coords
                if (automobile) { // если авто создано ; if car was created
                    m_nLastSpawnedTime = CTimer::m_snTimeInMilliseconds; // записываем новое время спавна ; store new spawning time
                    if (automobile->m_pRwClump) { // если создан графический обьект (RpClump) ; if graphical object was created (RpClump)
                        RwFrame *component = CClumpModelInfo::GetFrameFromName(automobile->m_pRwClump, "bonnet_dummy"); // находим компонент в иерархии ; find component in hierarchy
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