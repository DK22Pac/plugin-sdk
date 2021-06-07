/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eDoorStatus : unsigned char {
    DAMSTATE_OK = 0,
    DAMSTATE_DAMAGED = 1,
    DAMSTATE_OPENED_DAMAGED = 2,
    DAMSTATE_NOTPRESENT = 3
};

enum PLUGIN_API eEngineStatus : unsigned char {
    ENGINE_STATUS_STEAM1 = 100,
    ENGINE_STATUS_STEAM2 = 150,
    ENGINE_STATUS_SMOKE = 200,
    ENGINE_STATUS_ON_FIRE = 225
};

enum PLUGIN_API eLights {
    LIGHT_FRONT_LEFT = 0,
    LIGHT_FRONT_RIGHT = 1,
    LIGHT_REAR_LEFT = 2,
    LIGHT_REAR_RIGHT = 3
};

enum PLUGIN_API eLightStatus : unsigned int {
    LIGHT_STATUS_OK = 0,
    LIGHT_STATUS_BROKEN = 1
};

enum PLUGIN_API ePanels {
    WING_FRONT_LEFT = 0,
    WING_FRONT_RIGHT = 1,
    WING_REAR_LEFT = 2,
    WING_REAR_RIGHT = 3,
    WINDSCREEN = 4,
    BUMP_FRONT = 5,
    BUMP_REAR = 6
};

enum PLUGIN_API ePanelStatus : unsigned int {
    PANEL_STATUS_OK = 0,
    PANEL_STATUS_SMASHED1 = 1,
    PANEL_STATUS_SMASHED2 = 2,
    PANEL_STATUS_MISSING = 3
};

enum PLUGIN_API eWheels {
    WHEEL_FRONT_LEFT = 0,
    WHEEL_REAR_LEFT = 1,
    WHEEL_FRONT_RIGHT = 2,
    WHEEL_REAR_RIGHT = 3
};

enum PLUGIN_API eWheelStatus : unsigned char {
    WHEEL_STATUS_OK = 0,
    WHEEL_STATUS_BURST = 1,
    WHEEL_STATUS_MISSING = 2
};

enum PLUGIN_API tComponent {
    COMPONENT_NA = 0,
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

enum PLUGIN_API tComponentGroup {
    COMPGROUP_BUMPER = 0,
    COMPGROUP_WHEEL = 1,
    COMPGROUP_DOOR = 2,
    COMPGROUP_BONNET = 3,
    COMPGROUP_BOOT = 4,
    COMPGROUP_PANEL = 5,
    COMPGROUP_DEFAULT = 6
};

class PLUGIN_API CDamageManager {
public:
    float m_fWheelDamageEffect;
    unsigned char m_nEngineStatus;
    unsigned char m_anWheelStatus[4];
    unsigned char m_anDoorStatus[6];
    unsigned int m_nLightStatus;
    unsigned int m_nPanelStatus;
    bool bDamSwitch;

    SUPPORTED_10EN_11EN_STEAM bool ApplyDamage(tComponent component, float damage, float unused);
    SUPPORTED_10EN_11EN_STEAM void FuckCarCompletely();
    SUPPORTED_10EN_11EN_STEAM bool GetComponentGroup(tComponent component, tComponentGroup *group, unsigned char *subComp);
    SUPPORTED_10EN_11EN_STEAM int GetDoorStatus(int door);
    SUPPORTED_10EN_11EN_STEAM int GetEngineStatus();
    SUPPORTED_10EN_11EN_STEAM int GetLightStatus(eLights light);
    SUPPORTED_10EN_11EN_STEAM int GetPanelStatus(int panel);
    SUPPORTED_10EN_11EN_STEAM int GetWheelStatus(int wheel);
    SUPPORTED_10EN_11EN_STEAM void ProgressDoorDamage(unsigned char door);
    SUPPORTED_10EN_11EN_STEAM void ProgressEngineDamage();
    SUPPORTED_10EN_11EN_STEAM void ProgressPanelDamage(unsigned char panel);
    SUPPORTED_10EN_11EN_STEAM void ProgressWheelDamage(unsigned char wheel);
    SUPPORTED_10EN_11EN_STEAM void ResetDamageStatus();
    SUPPORTED_10EN_11EN_STEAM void SetDoorStatus(int door, unsigned int status);
    SUPPORTED_10EN_11EN_STEAM void SetEngineStatus(unsigned int status);
    SUPPORTED_10EN_11EN_STEAM void SetLightStatus(eLights light, unsigned int status);
    SUPPORTED_10EN_11EN_STEAM void SetPanelStatus(int panel, unsigned int status);
    SUPPORTED_10EN_11EN_STEAM void SetWheelStatus(int wheel, unsigned int status);
};

//! 2.5f, 1.25f, 3.2f, 1.4f, 2.5f, 2.8f, 0.5f
SUPPORTED_10EN_11EN_STEAM extern float(&G_aComponentDamage)[7]; // float G_aComponentDamage[7]

VALIDATE_SIZE(CDamageManager, 0x1C);

#include "meta/meta.CDamageManager.h"
