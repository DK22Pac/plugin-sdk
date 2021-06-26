/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"
#include "eWeaponType.h"
#include "CRGBA.h"
#include "CEntity.h"
#include "CPickup.h"

struct PLUGIN_API CPickupMessage {
    CVector2D m_vec2dPos;
    eWeaponType m_weaponType;
    float m_fW;
    float m_fH;
    CRGBA m_color;
    unsigned char bOutOfStock : 1;
    unsigned char m_nQuantity;
};

VALIDATE_SIZE(CPickupMessage, 0x1C);

class PLUGIN_API CPickups {
public:
    SUPPORTED_10EN_11EN_STEAM static CPickupMessage(&aMessages)[16]; // static CPickupMessage aMessages[16]
    SUPPORTED_10EN_11EN_STEAM static CPickup(&aPickUps)[336]; // static CPickup aPickUps[336]
    SUPPORTED_10EN_11EN_STEAM static int(&aPickUpsCollected)[20]; // static int aPickUpsCollected[20]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &StaticCamStartTime;
    SUPPORTED_10EN_11EN_STEAM static CVehicle *&pPlayerVehicle;
    SUPPORTED_10EN_11EN_STEAM static CVector &StaticCamCoors;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &CollectedPickUpIndex;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &NumMessages;
    SUPPORTED_10EN_11EN_STEAM static bool &bPickUpcamActivated;

    SUPPORTED_10EN_11EN_STEAM static void AddToCollectedPickupsArray(int index);
    SUPPORTED_10EN_11EN_STEAM static void DoCollectableEffects(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static void DoMineEffects(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static void DoMoneyEffects(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static void DoPickUpEffects(CObject *entity);
    SUPPORTED_10EN_11EN_STEAM static int FindColourIndexForWeaponMI(int model);
    SUPPORTED_10EN_11EN_STEAM static int GenerateNewOne(CVector pos, unsigned int modelIndex, unsigned char type, unsigned int quantity);
    SUPPORTED_10EN_11EN_STEAM static int GenerateNewOne_WeaponType(CVector pos, eWeaponType weaponType, unsigned char type, unsigned int quantity);
    SUPPORTED_10EN_11EN_STEAM static int GetActualPickupIndex(int index);
    SUPPORTED_10EN_11EN_STEAM static int GetNewUniquePickupIndex(int handle);
    SUPPORTED_10EN_11EN_STEAM static bool GivePlayerGoodiesWithPickUpMI(unsigned short modelId, int playerId);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static bool IsPickUpPickedUp(int handle);
    SUPPORTED_10EN_11EN_STEAM static void Load(unsigned char *buf, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static int ModelForWeapon(eWeaponType weaponType);
    SUPPORTED_10EN_11EN_STEAM static void PassTime(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM static void RemoveAllFloatingPickUps();
    SUPPORTED_10EN_11EN_STEAM static void RemovePickUp(int handle);
    SUPPORTED_10EN_11EN_STEAM static void RenderPickUpText();
    SUPPORTED_10EN_11EN_STEAM static void Save(unsigned char *buf, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static eWeaponType WeaponForModel(int model);
};

//! unsigned char aWeaponReds[16] = { 255, 0, 128, 255, 255, 0, 255, 0, 128, 128, 255, 255, 128, 0, 255, 0 };
SUPPORTED_10EN_11EN_STEAM extern unsigned char(&aWeaponReds)[16]; // unsigned char aWeaponReds[16]
//! unsigned char aWeaponGreens[16] = { 0, 255, 128, 255, 0, 255, 128, 255, 0, 255, 255, 0, 255, 0, 255, 0 };
SUPPORTED_10EN_11EN_STEAM extern unsigned char(&aWeaponGreens)[16]; // unsigned char aWeaponGreens[16]
//! unsigned char aWeaponBlues[16] = { 0, 0, 255, 0, 255, 255, 0, 128, 255, 0, 255, 0, 128, 255, 0, 0 };
SUPPORTED_10EN_11EN_STEAM extern unsigned char(&aWeaponBlues)[16]; // unsigned char aWeaponBlues[16]
//! float aWeaponScale[15] = { 1.0f, 2.0f, 1.5f, 1.0f, 1.0f, 1.5f, 1.0f, 2.0f, 1.0f, 2.0f, 2.5f, 1.0f, 1.0f, 1.0f, 1.0f };
SUPPORTED_10EN_11EN_STEAM extern float(&aWeaponScale)[15]; // float aWeaponScale[15]

#include "meta/meta.CPickups.h"
