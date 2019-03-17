/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CVector.h"
#include "CVector2D.h"
#include "CPtrList.h"
#include "CAutomobile.h"

/*
Shadow rectangle:
        Front
+---------+---------+
|         |         |
|         |         |
|         | Posn    |
+---------+---------+ Side
|         |         |
|         |         |
|         |         |
+---------+---------+

Posn - world coordinates (x,y,z)
Front - local coordinates (x,y) relatively to center
Side - local coordinates (x,y) relatively to center
*/

enum eShadowType {
    SHADOW_DEFAULT = 1,
    SHADOW_ADDITIVE = 2,
    SHADOW_INVCOLOR = 3,
    SHADOW_OIL_1 = 4,
    SHADOW_OIL_2 = 5,
    SHADOW_OIL_3 = 6,
    SHADOW_OIL_4 = 7,
    SHADOW_OIL_5 = 8
};

enum eShadowTextureType {
    SHADOWTEX_CAR = 1,
    SHADOWTEX_PED = 2,
    SHADOWTEX_EXPLOSION = 3,
    SHADOWTEX_HELI = 4,
    SHADOWTEX_HEADLIGHTS = 5,
    SHADOWTEX_BLOOD = 6
};

class CPolyBunch {
public:
    unsigned short m_nNumVerts;
    // char _pad2[2];
    CVector m_avecPosn[7];
    char m_aU[7];
    char m_aV[7];
    // char _pad66[2];
    CPolyBunch *m_pNext;

    CPolyBunch();
};

VALIDATE_SIZE(CPolyBunch, 0x6C);

class CRegisteredShadow {
public:
    CVector m_vecPos;
    CVector2D m_vec2dFront;
    CVector2D m_vec2dSide;
    float m_fZDistance;
    float m_fScale;
    unsigned short m_nIntensity;
    char m_bShadowType;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    struct {
        unsigned char bDrawOnWater : 1;
        unsigned char bIgnoreMapObjects : 1;
        unsigned char bDrawOnBuildings : 1;
    } m_nFlags;
    // char _pad43;
    RwTexture *m_pTexture;

    CRegisteredShadow();
};

VALIDATE_SIZE(CRegisteredShadow, 0x30);

class CPermanentShadow {
public:
    CVector m_vecPos;
    CVector2D m_vec2dFront;
    CVector2D m_vec2dSide;
    float m_fZDistance;
    float m_fScale;
    unsigned short m_nIntensity;
    char m_nType;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    // char _pad2A[2];
    unsigned int m_nTimeCreated;
    unsigned int m_nTimeDuration;
    RwTexture *m_pTexture;

    CPermanentShadow();
};

VALIDATE_SIZE(CPermanentShadow, 0x38);

class CStaticShadow {
public:
    unsigned int m_nId;
    CPolyBunch *m_pPolyBunch;
    unsigned int m_nTimeCreated;
    CVector m_vecPosn;
    CVector2D m_vec2dFront;
    CVector2D m_vec2dSide;
    float m_fZDistance;
    float m_fScale;
    unsigned char m_nType;
    // char _pad31;
    unsigned short m_nIntensity;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    char m_bJustCreated;
    unsigned char m_bRendered;
    char m_bTemporaryShadow;
    // char _pad3A[2];
    RwTexture *m_pTexture;

    CStaticShadow();
    void Free();
};

VALIDATE_SIZE(CStaticShadow, 0x40);

class CShadows {
public:
    // static variables
    static CPolyBunch *&pEmptyBunchList;
    static unsigned short &ShadowsStoredToBeRendered;
    static CRegisteredShadow *asShadowsStored; // [default: 48]
    static CPolyBunch *aPolyBunches; // [default: 300]
    static CStaticShadow *aStaticShadows; // [default: 64]
    static CPermanentShadow *aPermanentShadows; // [default: 48]

    // static functions
    static void RenderIndicatorShadow(unsigned int id, unsigned char shadowType, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity);
    static void Init();
    static void Shutdown();
    static void AddPermanentShadow(unsigned char type, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, unsigned int time, float upDistance);
    static void StoreStaticShadow(unsigned int id, unsigned char type, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, float scale, float drawDistance, bool temporaryShadow, float upDistance);
    static void StoreShadowToBeRendered(unsigned char shadowTextureType, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue);
    static void StoreShadowToBeRendered(unsigned char type, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, bool drawOnWater, float scale);
    static void StoreShadowForCar(CAutomobile* car);
    static void StoreCarLightShadow(CVehicle* vehicle, int id, RwTexture* texture, CVector* posn, float frontX, float frontY, float sideX, float sideY, unsigned char red, unsigned char green, unsigned char blue, float maxViewAngle);
    static void StoreShadowForPed(CPed* ped, float displacementX, float displacementY, float frontX, float frontY, float sideX, float sideY);
    static void StoreShadowForPedObject(CEntity* entity, float displacementX, float displacementY, float frontX, float frontY, float sideX, float sideY);
    static void StoreShadowForTree(CEntity* entity);
    static void StoreShadowForPole(CEntity* entity, float offsetX, float offsetY, float offsetZ, float poleHeight, float poleWidth, unsigned int localId);
    static void SetRenderModeForShadowType(unsigned char shadowType);
    static void RenderStoredShadows();
    static void RenderStaticShadows();
    static void GeneratePolysForStaticShadow(short staticShadowIndex);
    static void CastShadowSectorList(CPtrList& ptrList, float conrerAX, float cornerAY, float cornerBX, float cornerBY, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, float scale, CPolyBunch** ppPolyBunch);
    static void CastShadowEntity(CEntity* entity, float conrerAX, float cornerAY, float cornerBX, float cornerBY, CVector* posn, float frontX, float frontY, float sideX, float sideY, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, float scale, CPolyBunch** ppPolyBunch);
    static void UpdateStaticShadows();
    static void UpdatePermanentShadows();
    static void CalcPedShadowValues(CVector sunPosn, float* displacementX, float* displacementY, float* frontX, float* frontY, float* sideX, float* sideY);
    static void RenderExtraPlayerShadows();
    static void TidyUpShadows();
};

extern RwTexture*& gpShadowCarTex;
extern RwTexture*& gpShadowExplosionTex;
extern RwTexture*& gpShadowHeadLightsTex;
extern RwTexture*& gpShadowHeliTex;
extern RwTexture*& gpShadowPedTex;
extern RwTexture*& gpOutline1Tex;
extern RwTexture*& gpOutline2Tex;
extern RwTexture*& gpOutline3Tex;
extern RwTexture*& gpBloodPoolTex;
extern RwTexture*& gpReflectionTex;
extern RwTexture*& gpGoalMarkerTex;
extern RwTexture*& gpWalkDontTex;
extern RwTexture*& gpCrackedGlassTex;
extern RwTexture*& gpPostShadowTex;
