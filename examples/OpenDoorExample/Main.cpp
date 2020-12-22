/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "common.h"
#include "CAutomobile.h"
#include "CTimer.h"
#include "CMessages.h"

using namespace plugin;

class OpenDoorExample {
public:
	enum eOpenDoorState {
		STATE_OPENING, // сейчас мы что-то открываем
		STATE_CLOSING, // закрываем
		STATE_WAITING  // ждём указаний
	};

	static eOpenDoorState m_currentState; // наш статус
	static CAutomobile *m_pCurrentCar; // авто, с которым сейчас что-то делаем
	static float m_openingState; // статус открытия/закрытия
	static int m_currentComponentId;
	static eDoors m_currentDoorId;
	static unsigned int m_nLastTimeWhenAnyActionWasEnabled;

	static void OpenComponent(CAutomobile *automobile, int componentId, eDoors doorId) {
		if (automobile->IsComponentPresent(componentId)) {
			if (automobile->m_damageManager.GetDoorStatus(doorId) != 4) { // 3 - это тоже член какого-то перечисления, напр. STATUS_DAMAGED
				m_pCurrentCar = automobile; // сохраняем все данные в переменные, чтобы потом заюзать при обработке STATE_OPENING/STATE_CLOSING (см. функцию Process)
				m_currentComponentId = componentId;
				m_currentDoorId = doorId;
				if (!automobile->IsDoorFullyOpen(doorId)) {
					m_currentState = STATE_OPENING; // переключаем статус
					m_openingState = 0.0f; // и ресетим статус открытия
				}
				else {
					m_currentState = STATE_CLOSING; // переключаем статус
					m_openingState = 1.0f; // и ресетим статус открытия
				}
				m_nLastTimeWhenAnyActionWasEnabled = CTimer::m_snTimeInMilliseconds; // запоминаем время
			}
		}
	}

	static void Process() { // Обрабатываем поточное состояние - ждём нажатия клавиши ИЛИ открываем ИЛИ закрываем компонент
		switch (m_currentState) {
		case STATE_OPENING: // Что-то открываем. Обрати внимание, что ранее мы записали поточное авто и ид компонентов в статические переменные класса (по сути, это глобальные переменные)
			m_pCurrentCar->OpenDoor(0, m_currentComponentId, m_currentDoorId, m_openingState, true);
			m_openingState += 0.05f;
			if (m_openingState > 1.0f) { // Если полностью открыли
				m_currentState = STATE_WAITING; // Переключаем статус на "ожидание"
				m_pCurrentCar->OpenDoor(0, m_currentComponentId, m_currentDoorId, 1.0f, true); // Полностью открываем
			}
			break;
		case STATE_CLOSING: // Что-то закрываем
			m_pCurrentCar->OpenDoor(0, m_currentComponentId, m_currentDoorId, m_openingState, true);
			m_openingState -= 0.05f;
			if (m_openingState < 0.0f) { // Если полностью закрыли
				m_currentState = STATE_WAITING; // Переключаем статус на "ожидание"
				m_pCurrentCar->OpenDoor(0, m_currentComponentId, m_currentDoorId, 0.0f, true); // Полностью закрываем
			}
			break;
		case STATE_WAITING:
			if (CTimer::m_snTimeInMilliseconds >(m_nLastTimeWhenAnyActionWasEnabled + 500)) { // если прошло 500 мс с того времени, как мы начали открывать/закрывать что-то
				CVehicle *vehicle = FindPlayerVehicle(0, false);
				if (vehicle && vehicle->m_nVehicleClass == VEHICLE_AUTOMOBILE) {
					CAutomobile *automobile = reinterpret_cast<CAutomobile *>(vehicle); // опять же, приведение типов. Т.к. мы будет юзать damageManager, нам нужно убедиться, что транспорт - это автомобиль (CAutomobile)
					if (KeyPressed(219)) // [
						OpenComponent(automobile, CAR_BONNET, static_cast<eDoors>(0)); // капот
						//OpenComponent(automobile, CAR_BONNET, BONNET);
					else if (KeyPressed(221)) // ]
						OpenComponent(automobile, CAR_BOOT, static_cast<eDoors>(1)); // багажник
						//OpenComponent(automobile, CAR_BOOT, BOOT);
					else if (KeyPressed(186) && KeyPressed(187)) // ; =
						OpenComponent(automobile, CAR_DOOR_LF, static_cast<eDoors>(2)); // левая передняя дверь
						//OpenComponent(automobile, CAR_DOOR_LF, DOOR_FRONT_LEFT);
					else if (KeyPressed(222) && KeyPressed(187)) // ' =
						OpenComponent(automobile, CAR_DOOR_RF, static_cast<eDoors>(3)); // правая передняя дверь
						//OpenComponent(automobile, CAR_DOOR_RF, DOOR_FRONT_RIGHT);
					else if (KeyPressed(186) && KeyPressed(189)) // ; -
						OpenComponent(automobile, CAR_DOOR_LR, static_cast<eDoors>(4)); // левая задняя дверь
						//OpenComponent(automobile, CAR_DOOR_LR, DOOR_REAR_LEFT);
					else if (KeyPressed(222) && KeyPressed(189)) // ' -
						OpenComponent(automobile, CAR_DOOR_RR, static_cast<eDoors>(5)); // правая задняя дверь
						//OpenComponent(automobile, CAR_DOOR_RR, DOOR_REAR_RIGHT);
				}
			}
		}

		switch (m_currentState) { // Для наглядности выведем поточный статус на экран
		case STATE_OPENING:
			CMessages::AddMessageJumpQ((char*)"state: opening", 100, 0, false);
			break;
		case STATE_CLOSING:
			CMessages::AddMessageJumpQ((char*)"state: closing", 100, 0, false);
			break;
		case STATE_WAITING:
			CMessages::AddMessageJumpQ((char*)"state: waiting", 100, 0, false);
			break;
		}
	}

	OpenDoorExample() {
		Events::gameProcessEvent.Add(Process);
	}
} example;

OpenDoorExample::eOpenDoorState OpenDoorExample::m_currentState = STATE_WAITING;
CAutomobile *OpenDoorExample::m_pCurrentCar;
float OpenDoorExample::m_openingState;
int OpenDoorExample::m_currentComponentId;
eDoors OpenDoorExample::m_currentDoorId;
unsigned int OpenDoorExample::m_nLastTimeWhenAnyActionWasEnabled = 0;