/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRect.h"
#include "CVector.h"
#include "CObject.h"

class CPed;

class PLUGIN_API CEntryExit {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CEntryExit)

public:
    char m_szName[8];
    CRect m_recEntrance;
    float m_fEntranceZ;
    float m_fEntranceAngle;
    CVector m_vecExitPos;
    float m_fExitAngle;
    struct {
        unsigned short bUnknownInterior : 1;
        unsigned short bUnknownPairing : 1;
        unsigned short bCreateLinkedPair : 1;
        unsigned short bRewardInterior : 1;
        unsigned short bUsedRewardEntrance : 1;
        unsigned short bCarsAndAircraft : 1;
        unsigned short bBikesAndMotorcycles : 1;
        unsigned short bDisableOnFoot : 1;

        unsigned short bAcceptNpcGroup : 1;
        unsigned short bFoodDateFlag : 1;
        unsigned short bUnknownBurglary : 1;
        unsigned short bDisableExit : 1;
        unsigned short bBurglaryAccess : 1;
        unsigned short bEnteredWithoutExit : 1;
        unsigned short bEnableAccess : 1;
        unsigned short bDeleteEnex : 1;
    } m_nFlags;
    unsigned char m_nArea;
    unsigned char m_nSkyColor;
    unsigned char m_nTimeOn;
    unsigned char m_nTimeOff;
    unsigned char m_nNumberOfPeds;
private:
    char _pad37;
public:
    CEntryExit *m_pLink;

    SUPPORTED_10US static bool &ms_bWarping;
    SUPPORTED_10US static CObject *&ms_pDoor;
    SUPPORTED_10US static CEntryExit *&ms_spawnPoint;

    SUPPORTED_10US void GenerateAmbientPeds(CVector const &position);
    SUPPORTED_10US char *GetEntryExitToDisplayNameOf();
    SUPPORTED_10US void GetPositionRelativeToOutsideWorld(CVector &positionInOut);
    SUPPORTED_10US bool IsInArea(CVector const &position);
    SUPPORTED_10US void RequestAmbientPeds();
    SUPPORTED_10US void RequestObjectsInFrustum();
    SUPPORTED_10US bool TransitionFinished(CPed *player);
    SUPPORTED_10US bool TransitionStarted(CPed *player);
    SUPPORTED_10US void WarpGangWithPlayer(CPed *player);
};
VALIDATE_OFFSET(CEntryExit, m_szName, 0x0);
VALIDATE_OFFSET(CEntryExit, m_recEntrance, 0x8);
VALIDATE_OFFSET(CEntryExit, m_fEntranceZ, 0x18);
VALIDATE_OFFSET(CEntryExit, m_fEntranceAngle, 0x1C);
VALIDATE_OFFSET(CEntryExit, m_vecExitPos, 0x20);
VALIDATE_OFFSET(CEntryExit, m_fExitAngle, 0x2C);
VALIDATE_OFFSET(CEntryExit, m_nFlags, 0x30);
VALIDATE_OFFSET(CEntryExit, m_nArea, 0x32);
VALIDATE_OFFSET(CEntryExit, m_nSkyColor, 0x33);
VALIDATE_OFFSET(CEntryExit, m_nTimeOn, 0x34);
VALIDATE_OFFSET(CEntryExit, m_nTimeOff, 0x35);
VALIDATE_OFFSET(CEntryExit, m_nNumberOfPeds, 0x36);
VALIDATE_OFFSET(CEntryExit, m_pLink, 0x38);
VALIDATE_SIZE(CEntryExit, 0x3C);

#include "meta/meta.CEntryExit.h"
