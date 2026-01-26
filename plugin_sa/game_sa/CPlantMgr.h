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

struct CPlantSurfProp {
    uint16_t m_nPlantSlotID;
    CPlantSurfPropPlantData m_PlantData[3];
};

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

class CPlantColEntEntry {
    CEntity* m_pEntity;
    CPlantLocTri** m_LocTriArray;
    uint16_t m_nNumTris;
    CPlantColEntEntry* m_pNextEntry;
    CPlantColEntEntry* m_pPrevEntry;
};

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
