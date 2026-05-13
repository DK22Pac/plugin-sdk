/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

#define MAX_MOVING_FOG 350
#define MAX_VOLUMETRIC_CLOUDS 180

struct tMovingFog {
    bool         m_bFogSlots[350];
private:
    char _pad15E[2];
public:
    CVector      m_vecPosn[350];
    float        m_fSize[350];
    float        m_fIntensity[350];
    float        m_fMaxIntensity[350];
    CVector      m_vecWind;
    float        m_fSpeed[350];
    int field_27B4[12];
    unsigned int m_nPrimIndices[6];
};
VALIDATE_OFFSET(tMovingFog, m_bFogSlots, 0x0);
VALIDATE_OFFSET(tMovingFog, m_vecPosn, 0x160);
VALIDATE_OFFSET(tMovingFog, m_fSize, 0x11C8);
VALIDATE_OFFSET(tMovingFog, m_fIntensity, 0x1740);
VALIDATE_OFFSET(tMovingFog, m_fMaxIntensity, 0x1CB8);
VALIDATE_OFFSET(tMovingFog, m_vecWind, 0x2230);
VALIDATE_OFFSET(tMovingFog, m_fSpeed, 0x223C);
VALIDATE_OFFSET(tMovingFog, field_27B4, 0x27B4);
VALIDATE_OFFSET(tMovingFog, m_nPrimIndices, 0x27E4);
VALIDATE_SIZE(tMovingFog, 0x27FC);

struct tVolumetricClouds {
    char       m_bSlots[180];
    char       m_bInsideVisibilityRange[180];
    CVector field_168[180];
    CVector field_9D8[180];
    int        m_nHeight[180];
    RwTexture *m_pTex;
    CVector    m_vecCloudsSpace[3];
    float      m_fCloudXCoords[18];
    float      m_fCloudYCoords[18];
    float      m_fCloudZCoords[18];
    float      m_fCloudUCoords[18];
    float      m_fCloudVCoords[18];
};
VALIDATE_OFFSET(tVolumetricClouds, m_bSlots, 0x0);
VALIDATE_OFFSET(tVolumetricClouds, m_bInsideVisibilityRange, 0xB4);
VALIDATE_OFFSET(tVolumetricClouds, field_168, 0x168);
VALIDATE_OFFSET(tVolumetricClouds, field_9D8, 0x9D8);
VALIDATE_OFFSET(tVolumetricClouds, m_nHeight, 0x1248);
VALIDATE_OFFSET(tVolumetricClouds, m_pTex, 0x1518);
VALIDATE_OFFSET(tVolumetricClouds, m_vecCloudsSpace, 0x151C);
VALIDATE_OFFSET(tVolumetricClouds, m_fCloudXCoords, 0x1540);
VALIDATE_OFFSET(tVolumetricClouds, m_fCloudYCoords, 0x1588);
VALIDATE_OFFSET(tVolumetricClouds, m_fCloudZCoords, 0x15D0);
VALIDATE_OFFSET(tVolumetricClouds, m_fCloudUCoords, 0x1618);
VALIDATE_OFFSET(tVolumetricClouds, m_fCloudVCoords, 0x1660);
VALIDATE_SIZE(tVolumetricClouds, 0x16A8);

class PLUGIN_API CClouds {
public:
    static float &m_fVolumetricCloudDensity; // default 1.0f
    static bool &m_bVolumetricCloudHeightSwitch; // default true
    static float &m_fVolumetricCloudWindMoveFactor; // default 0.1f
    static float &m_fVolumetricCloudMaxDistance;
    static unsigned int &m_VolumetricCloudsUsedNum;
    static float &ms_cameraRoll;
    static int &IndividualRotation;
    static float &CloudRotation;
    static tVolumetricClouds &ms_vc;
    static tMovingFog &ms_mf;
    static CVector &PlayerCoords;
    static CVector &CameraCoors;

    static void Shutdown();
    static void Update();
    static void SetUpOneSkyPoly(CVector vert1pos, CVector vert2pos, CVector vert3pos, CVector vert4pos, unsigned char topRed, unsigned char topGreen, unsigned char topBlue, unsigned char bottomRed, unsigned char bottomGreen, unsigned char bottomBlue);
    static void VolumetricCloudsInit();
    static int VolumetricClouds_GetFirstFreeSlot();
    static void VolumetricClouds_Delete(int vcSlotIndex);
    static float VolumetricCloudsGetMaxDistance();
    static void MovingFogInit();
    static float MovingFog_GetFXIntensity();
    static CVector MovingFog_GetWind();
    static int MovingFog_GetFirstFreeSlot();
    static void MovingFog_Delete(int fogSlotIndex);
    static void MovingFog_Create(CVector* posn);
    static void Init();
    static void Render();
    static void RenderSkyPolys();
    static void RenderBottomFromHeight();
    static void VolumetricClouds_Create(CVector* posn);
    static void VolumetricCloudsRender();
    static void MovingFog_Update();
    static void MovingFogRender();
};
VALIDATE_SIZE(CClouds, 0x1);

extern unsigned char *RAINBOW_LINES_COLOR_RED;   // RAINBOW_LINES_COLOR_RED[6] =   { 30, 30, 30, 10,  0, 15 }
extern unsigned char *RAINBOW_LINES_COLOR_GREEN; // RAINBOW_LINES_COLOR_GREEN[6] = {  0, 15, 30, 30,  0,  0 }
extern unsigned char *RAINBOW_LINES_COLOR_BLUE;  // RAINBOW_LINES_COLOR_BLUE[6]  = {  0,  0,  0, 10, 30, 30 }
extern float *LOW_CLOUDS_X_COORDS; // LOW_CLOUDS_X_COORDS[12] = { 1.0f, 0.7f, 0.0f, -0.7f, -1.0f, -0.7f, 0.0f, 0.7f, 0.8f, -0.8f, 0.4f, 0.4f }
extern float *LOW_CLOUDS_Y_COORDS; // LOW_CLOUDS_Y_COORDS[12] = { 0.0f, -0.7f, -1.0f, -0.7f, 0.0f, 0.7f, 1.0f, 0.7f, 0.4f, 0.4f, -0.8f. -0.8f }
extern float *LOW_CLOUDS_Z_COORDS; // LOW_CLOUDS_Z_COORDS[12] = { 0.0f, 1.0f, 0.5f, 0.0f, 1.0f, 0.3f, 0.9f, 0.4f, 1.3f, 1.4f, 1.2f, 1.7f }
extern float *STARS_Y_POSITIONS; // STARS_Y_POSITIONS[9] = { 0.0f, 0.05f, 0.13f, 0.4f, 0.7f, 0.6f, 0.27f, 0.55f, 0.75f }
extern float *STARS_Z_POSITIONS; // STARS_Z_POSITIONS[9] = { 0.0f, 0.45f, 0.9f, 1.0f, 0.85f, 0.52f, 0.48f, 0.35f, 0.2f }
extern float *STARS_SIZES; // STARS_SIZES[9] = { 1.0f, 1.4f, 0.9f, 1.0f, 0.6f, 1.5f, 1.3f, 1.0f, 0.8f }
extern float &CurrentFogIntensity; // default 1.0f
extern RwTexture *&gpMoonMask;
extern RwTexture **gpCloudTex; // RwTexture *gpCloudTex[2]
