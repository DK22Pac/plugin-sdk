/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"
#include "CPlayerPed.h"
#include "CVehicle.h"

enum PLUGIN_API ePickupType : unsigned char {
    PICKUP_NONE = 0,
    PICKUP_IN_SHOP = 1,
    PICKUP_ON_STREET = 2,
    PICKUP_ONCE = 3,
    PICKUP_ONCE_TIMEOUT = 4,
    PICKUP_COLLECTABLE1 = 5,
    PICKUP_IN_SHOP_OUT_OF_STOCK = 6,
    PICKUP_MONEY = 7,
    PICKUP_MINE_INACTIVE = 8,
    PICKUP_MINE_ARMED = 9,
    PICKUP_NAUTICAL_MINE_INACTIVE = 10,
    PICKUP_NAUTICAL_MINE_ARMED = 11,
    PICKUP_FLOATINGPACKAGE = 12,
    PICKUP_FLOATINGPACKAGE_FLOATING = 13,
    PICKUP_ON_STREET_SLOW = 14,
    PICKUP_NUMOFTYPES = 15
};

class PLUGIN_API CPickup {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPickup)

public:
    unsigned char m_nPickupType; //!< see ePickupType
    bool m_bRemoved;
    unsigned short m_nQuantity;
    CObject *m_pObject;
    unsigned int m_nTimer;
    unsigned short m_nModelIndex;
    unsigned short m_nReferenceIndex;
    CVector m_vecPos;

    SUPPORTED_10EN_11EN_STEAM CObject *GiveUsAPickUpObject(int handle);
    SUPPORTED_10EN_11EN_STEAM bool Update(CPlayerPed *player, CVehicle *vehicle, int playerId);
};

//! unsigned short AmmoForWeapon[20] = { 0, 1, 45, 125, 25, 150, 300, 25, 5, 250, 5, 5, 0, 500, 0, 100, 0, 0, 0, 0 };
SUPPORTED_10EN_11EN_STEAM extern unsigned short(&AmmoForWeapon)[20]; // unsigned short AmmoForWeapon[20]
//! unsigned short AmmoForWeapon_OnStreet[20] = { 0, 1, 9, 25, 5, 30, 60, 5, 1, 50, 1, 1, 0, 200, 0, 100, 0, 0, 0, 0 };
SUPPORTED_10EN_11EN_STEAM extern unsigned short(&AmmoForWeapon_OnStreet)[20]; // unsigned short AmmoForWeapon_OnStreet[20]
//! unsigned short CostOfWeapon[20] = { 0, 10, 250, 800, 1500, 3000, 5000, 10000, 25000, 25000, 2000, 2000, 0, 50000, 0, 3000, 0, 0, 0, 0 };
SUPPORTED_10EN_11EN_STEAM extern unsigned short(&CostOfWeapon)[20]; // unsigned short CostOfWeapon[20]

VALIDATE_SIZE(CPickup, 0x1C);

#include "meta/meta.CPickup.h"
