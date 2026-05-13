/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAtomicModelInfo.h"
#include "CEntity.h"
#include "RenderWare.h"

struct CPlantSurfPropPlantData {
    uint16_t m_nModelID;
    uint16_t m_nTextureID;
    RwRGBA m_rgbaColor;
    uint8_t m_nIntensity;
    uint8_t m_nIntensityVar;
    float m_fScaleXY;
    float m_fScaleZ;
    float m_fScaleVarXY;
    float m_fScaleVarZ;
    float m_fDensity;
    float m_fWindBendScale;
    float m_fWindBendVar;
};
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_nModelID, 0x0);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_nTextureID, 0x2);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_rgbaColor, 0x4);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_nIntensity, 0x8);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_nIntensityVar, 0x9);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fScaleXY, 0xC);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fScaleZ, 0x10);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fScaleVarXY, 0x14);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fScaleVarZ, 0x18);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fDensity, 0x1C);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fWindBendScale, 0x20);
VALIDATE_OFFSET(CPlantSurfPropPlantData, m_fWindBendVar, 0x24);
VALIDATE_SIZE(CPlantSurfPropPlantData, 0x28);

struct CPlantSurfProp {
    uint16_t m_nPlantSlotID;
    CPlantSurfPropPlantData m_PlantData[3];
};
VALIDATE_OFFSET(CPlantSurfProp, m_nPlantSlotID, 0x0);
VALIDATE_OFFSET(CPlantSurfProp, m_PlantData, 0x4);
VALIDATE_SIZE(CPlantSurfProp, 0x7C);

struct CPlantLocTri {
    CVector m_V1;
    CVector m_V2;
    CVector m_V3;
    CVector m_Center;
    float m_SphereRadius;
    float m_Seed[3];
    uint16_t m_nMaxNumPlants[3];
    uint8_t m_nSurfaceType;
    uint8_t m_nLighting;
    uint8_t m_createsPlants : 1;
    uint8_t m_createsObjects : 1;
    uint8_t m_createdObjects : 1;
    uint8_t m_pad : 5;
    CPlantLocTri* m_pNextTri;
    CPlantLocTri* m_pPrevTri;
};
VALIDATE_OFFSET(CPlantLocTri, m_V1, 0x0);
VALIDATE_OFFSET(CPlantLocTri, m_V2, 0xC);
VALIDATE_OFFSET(CPlantLocTri, m_V3, 0x18);
VALIDATE_OFFSET(CPlantLocTri, m_Center, 0x24);
VALIDATE_OFFSET(CPlantLocTri, m_SphereRadius, 0x30);
VALIDATE_OFFSET(CPlantLocTri, m_Seed, 0x34);
VALIDATE_OFFSET(CPlantLocTri, m_nMaxNumPlants, 0x40);
VALIDATE_OFFSET(CPlantLocTri, m_nSurfaceType, 0x46);
VALIDATE_OFFSET(CPlantLocTri, m_nLighting, 0x47);
VALIDATE_OFFSET(CPlantLocTri, m_pNextTri, 0x4C);
VALIDATE_OFFSET(CPlantLocTri, m_pPrevTri, 0x50);
VALIDATE_SIZE(CPlantLocTri, 0x54);

struct CPlantColEntEntry
{
    CEntity* m_pEntity;
    CPlantLocTri** m_LocTriArray;
    uint16_t m_nNumTris;
    CPlantColEntEntry* m_pNextEntry;
    CPlantColEntEntry* m_pPrevEntry;
};
VALIDATE_OFFSET(CPlantColEntEntry, m_pEntity, 0x0);
VALIDATE_OFFSET(CPlantColEntEntry, m_LocTriArray, 0x4);
VALIDATE_OFFSET(CPlantColEntEntry, m_nNumTris, 0x8);
VALIDATE_OFFSET(CPlantColEntEntry, m_pNextEntry, 0xC);
VALIDATE_OFFSET(CPlantColEntEntry, m_pPrevEntry, 0x10);
VALIDATE_SIZE(CPlantColEntEntry, 0x14);

class CPlantMgr {
public:
    static void UpdateAmbientColor();
    static float CalculateWindBending();
    static void SetPlantFriendlyFlagInAtomicMI(CAtomicModelInfo*);
    static void Shutdown();
    static void Render();
    static void _ProcessEntryCollisionDataSections_RemoveLocTris(CPlantColEntEntry*, const CVector&, int, int, int);
    static void _ColEntityCache_Update(const CVector&, uint8_t);
    static void _ProcessEntryCollisionDataSections_AddLocTris(CPlantColEntEntry*, const CVector&, int, int, int);
    static void _ProcessEntryCollisionDataSections(CPlantColEntEntry*, const CVector&, int);
    static void _UpdateLocTris(const CVector&, int);
    static void PreUpdateOnceForNewCameraPos(const CVector&);
    static void Update(const CVector&);
    static bool ReloadConfig();
    static bool Initialise();
};
VALIDATE_SIZE(CPlantMgr, 0x1);
