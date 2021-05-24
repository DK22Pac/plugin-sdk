/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CVehicle.h"

class PLUGIN_API CStoredCar {
public:
    unsigned int m_nModelIndex;
    CVector m_vecPosition;
    CVector m_vecRotation;
    struct {
        unsigned int bBulletProof : 1;
        unsigned int bFireProof : 1;
        unsigned int bExplosionProof : 1;
        unsigned int bCollisionProof : 1;
        unsigned int bMeleeProof : 1;
    } m_nStoredCarFlags;
    unsigned char m_nPrimaryColor;
    unsigned char m_nSecondaryColor;
    char m_nRadioStation;
    char m_anCompsToUse[2];
    char m_nCarBombType;

    SUPPORTED_10EN_11EN_STEAM CVehicle *RestoreCar();
    SUPPORTED_10EN_11EN_STEAM void StoreCar(CVehicle *vehicle);

    SUPPORTED_10EN_11EN_STEAM static void SetExtras(char first, char second);
};

VALIDATE_SIZE(CStoredCar, 0x28);

#include "meta/meta.CStoredCar.h"
