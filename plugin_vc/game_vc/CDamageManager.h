/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eDamageState {
    DAMSTATE_OK = 0,
    DAMSTATE_DAMAGED = 1,
    DAMSTATE_OPENED_DAMAGED = 2,
    DAMSTATE_NOTPRESENT = 3
};

enum tComponent {
    COMPONENT_WHEEL_LF = 1,
    COMPONENT_WHEEL_RF = 2,
    COMPONENT_WHEEL_LR = 3,
    COMPONENT_WHEEL_RR = 4,
    COMPONENT_BONNET = 5,
    COMPONENT_BOOT = 6,
    COMPONENT_DOOR_LF = 7,
    COMPONENT_DOOR_RF = 8,
    COMPONENT_DOOR_LR = 9,
    COMPONENT_DOOR_RR = 10,
    COMPONENT_WING_LF = 11,
    COMPONENT_WING_RF = 12,
    COMPONENT_WING_LR = 13,
    COMPONENT_WING_RR = 14,
    COMPONENT_WINDSCREEN = 15,
    COMPONENT_BUMP_FRONT = 16,
    COMPONENT_BUMP_REAR = 17
};

enum tComponentGroup {
    COMPGROUP_PANEL = 0,
    COMPGROUP_WHEEL = 1,
    COMPGROUP_DOOR = 2,
    COMPGROUP_BONNET = 3,
    COMPGROUP_BOOT = 4,
    COMPGROUP_LIGHT = 5,
    COMPGROUP_NA = 6
};

enum eWheels {
    WHEEL_FRONT_LEFT = 0,
    WHEEL_REAR_LEFT = 1,
    WHEEL_FRONT_RIGHT = 2,
    WHEEL_REAR_RIGHT = 3
};

enum ePanels {
    WING_FRONT_LEFT = 0,
    WING_FRONT_RIGHT = 1,
    WING_REAR_LEFT = 2,
    WING_REAR_RIGHT = 3,
    WINDSCREEN = 4,
    BUMP_FRONT = 5,
    BUMP_REAR = 6
};

enum eDoors {
    BONNET = 0,
    BOOT = 1,
    DOOR_FRONT_LEFT = 2,
    DOOR_FRONT_RIGHT = 3,
    DOOR_REAR_LEFT = 4,
    DOOR_REAR_RIGHT = 5
};

enum eLights {
    LIGHT_FRONT_LEFT = 0,
    LIGHT_FRONT_RIGHT = 1,
    LIGHT_REAR_RIGHT = 2,
    LIGHT_REAR_LEFT = 3
};


class CDamageManager {
public:
     int uDamId;
     char bStates[12];
     int uLightBits;
     int uPanelBits; 

     //funcs

     bool ApplyDamage(tComponent component, float intensity, float arg2);
     void FuckCarCompletely();
     // damageCompId - eLights/ePanel/... id for this component
     bool GetComponentGroup(tComponent component, tComponentGroup* group, unsigned char* damageCompId);
     unsigned int GetDoorStatus(eDoors door);
     // Status is a value between 0-250
     unsigned int GetEngineStatus();
     unsigned int GetLightStatus(eLights light);
     unsigned int GetPanelStatus(ePanels panel);
     unsigned int GetWheelStatus(int wheel);
     // Set next level of damage to panel
     bool ProgressPanelDamage(unsigned char panel);
     void ResetDamageStatus();
     void SetDoorStatus(eDoors door, unsigned int status);
     // Status is a value between 0-250
     void SetEngineStatus(unsigned int status);
     void SetWheelStatus(int wheel, unsigned int status);
     void SetLightStatus(eLights light, unsigned int status);
};

VALIDATE_SIZE(CDamageManager, 0x18);