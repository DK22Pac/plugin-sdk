/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"

class CAutomobile;

enum eDamageState {
    
};

enum tComponent {
    
};

enum tComponentGroup {
    
};

enum eWheels {

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

#pragma pack(push, 4)
class PLUGIN_API CDamageManager {
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
     unsigned int GetPanelStatus(int arg0);
     unsigned int GetWheelStatus(int wheel);
     // Set next level of damage to panel
     bool ProgressPanelDamage(unsigned char panel);
     void ResetDamageStatus();
     void SetDoorStatus(eDoors door, unsigned int status);
     // Status is a value between 0-250
     void SetEngineStatus(unsigned int status);
     void SetWheelStatus(int wheel, unsigned int status);
};
#pragma pack(pop)

VALIDATE_SIZE(CDamageManager, 0x18);