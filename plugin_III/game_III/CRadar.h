/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"
#include "CVector.h"
#include "CSprite2d.h"

enum PLUGIN_API eBlipColour : unsigned int {
    BLIP_COLOUR_RED = 0,
    BLIP_COLOUR_GREEN = 1,
    BLIP_COLOUR_LIGHT_BLUE = 2,
    BLIP_COLOUR_GRAY = 3,
    BLIP_COLOUR_YELLOW = 4,
    BLIP_COLOUR_MAGENTA = 5,
    BLIP_COLOUR_CYAN = 6
};

enum PLUGIN_API eBlipDisplay : unsigned short {
    BLIP_DISPLAY_NEITHER = 0,
    BLIP_DISPLAY_MARKER_ONLY = 1,
    BLIP_DISPLAY_BLIP_ONLY = 2,
    BLIP_DISPLAY_BOTH = 3
};

enum PLUGIN_API eBlipType : unsigned int {
    BLIP_NONE = 0,
    BLIP_CAR = 1,
    BLIP_CHAR = 2,
    BLIP_OBJECT = 3,
    BLIP_COORD = 4,
    BLIP_CONTACTPOINT = 5,
    BLIP_SPOTLIGHT = 6,
    BLIP_PICKUP = 7,
    BLIP_AIRSTRIP = 8
};

enum PLUGIN_API eRadarSprite : unsigned short {
    RADAR_SPRITE_NONE = 0,
    RADAR_SPRITE_ASUKA = 1,
    RADAR_SPRITE_BOMB = 2,
    RADAR_SPRITE_CAT = 3,
    RADAR_SPRITE_CENTRE = 4,
    RADAR_SPRITE_COPCAR = 5,
    RADAR_SPRITE_DON = 6,
    RADAR_SPRITE_EIGHT = 7,
    RADAR_SPRITE_EL = 8,
    RADAR_SPRITE_ICE = 9,
    RADAR_SPRITE_JOEY = 10,
    RADAR_SPRITE_KENJI = 11,
    RADAR_SPRITE_LIZ = 12,
    RADAR_SPRITE_LUIGI = 13,
    RADAR_SPRITE_NORTH = 14,
    RADAR_SPRITE_RAY = 15,
    RADAR_SPRITE_SAL = 16,
    RADAR_SPRITE_SAVE = 17,
    RADAR_SPRITE_SPRAY = 18,
    RADAR_SPRITE_TONY = 19,
    RADAR_SPRITE_WEAPON = 20,
    RADAR_SPRITE_COUNT = 21
};

class PLUGIN_API CBlip {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBlip)

public:
    unsigned int m_nColour; //!< see eBlipColour
    unsigned int m_nBlipType; //!< see eBlipType
    int m_nEntityHandle;
    CVector2D m_vec2DPos;
    CVector m_vecPos;
    unsigned short m_nBlipIndex;
    bool m_bDim;
    bool m_bInUse;
    float m_fSphereRadius;
    unsigned short m_nBlipSize;
    unsigned short m_nBlipDisplay; //!< see eBlipDisplay
    unsigned short m_nRadarSprite; //!< see eRadarSprite
};

VALIDATE_SIZE(CBlip, 0x30);

class PLUGIN_API CRadar {
public:
    SUPPORTED_10EN_11EN_STEAM static CVector2D &vec2DRadarOrigin;
    SUPPORTED_10EN_11EN_STEAM static CBlip(&ms_RadarTrace)[32]; // static CBlip ms_RadarTrace[32]
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &CatSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &TonySprite;
    SUPPORTED_10EN_11EN_STEAM static float &m_radarRange;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &RaySprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &CopcarSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &LuigiSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &AsukaSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &ElSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &SalSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &EightSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &DonSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &JoeySprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &KenjiSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &LizSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &SaveSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &BombSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &CentreSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &NorthSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &WeaponSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &IceSprite;
    SUPPORTED_10EN_11EN_STEAM static CSprite2d &SpraySprite;

    SUPPORTED_10EN_11EN_STEAM static unsigned char CalculateBlipAlpha(float distance);
    SUPPORTED_10EN_11EN_STEAM static void ChangeBlipBrightness(int i, int bright);
    SUPPORTED_10EN_11EN_STEAM static void ChangeBlipColour(int i, unsigned int colour);
    SUPPORTED_10EN_11EN_STEAM static void ChangeBlipDisplay(int i, eBlipDisplay display);
    SUPPORTED_10EN_11EN_STEAM static void ChangeBlipScale(int i, int scale);
    SUPPORTED_10EN_11EN_STEAM static void ClearBlip(int i);
    SUPPORTED_10EN_11EN_STEAM static void ClearBlipForEntity(eBlipType type, int handle);
    SUPPORTED_10EN_11EN_STEAM static int ClipRadarPoly(CVector2D *out, CVector2D const *in);
    SUPPORTED_10EN_11EN_STEAM static void Draw3dMarkers();
    SUPPORTED_10EN_11EN_STEAM static void DrawBlips();
    SUPPORTED_10EN_11EN_STEAM static void DrawMap();
    SUPPORTED_10EN_11EN_STEAM static void DrawRadarMap();
    SUPPORTED_10EN_11EN_STEAM static void DrawRadarMask();
    SUPPORTED_10EN_11EN_STEAM static void DrawRadarSection(int x, int y);
    SUPPORTED_10EN_11EN_STEAM static void DrawRadarSprite(unsigned short sprite, float x, float y, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static void DrawRotatingRadarSprite(CSprite2d *sprite, float x, float y, float angle, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static int GetActualBlipArrayIndex(int i);
    SUPPORTED_10EN_11EN_STEAM static int GetNewUniqueBlipIndex(int i);
    SUPPORTED_10EN_11EN_STEAM static unsigned int GetRadarTraceColour(unsigned int colour, bool bright);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static float LimitRadarPoint(CVector2D &point);
    SUPPORTED_10EN_11EN_STEAM static void LoadAllRadarBlips(unsigned char *buf, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void LoadTextures();
    SUPPORTED_10EN_11EN_STEAM static void RemoveRadarSections();
    SUPPORTED_10EN_11EN_STEAM static void SaveAllRadarBlips(unsigned char *buf, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM static void SetBlipSprite(int i, int icon);
    SUPPORTED_10EN_11EN_STEAM static int SetCoordBlip(eBlipType type, CVector pos, unsigned int colour, eBlipDisplay display);
    SUPPORTED_10EN_11EN_STEAM static void SetEntityBlip(eBlipType type, int handle, unsigned int colour, eBlipDisplay display);
    SUPPORTED_10EN_11EN_STEAM static void SetRadarMarkerState(int i, unsigned char flag);
    SUPPORTED_10EN_11EN_STEAM static void ShowRadarMarker(CVector pos, unsigned int colour, float radius);
    SUPPORTED_10EN_11EN_STEAM static void ShowRadarTrace(float x, float y, unsigned int size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void StreamRadarSections(int x, int y);
    SUPPORTED_10EN_11EN_STEAM static void StreamRadarSections(CVector const &pos);
    SUPPORTED_10EN_11EN_STEAM static void TransformRadarPointToRealWorldSpace(CVector2D &out, CVector2D const &in);
    SUPPORTED_10EN_11EN_STEAM static void TransformRadarPointToScreenSpace(CVector2D &out, CVector2D const &in);
    SUPPORTED_10EN_11EN_STEAM static void TransformRealWorldPointToRadarSpace(CVector2D &out, CVector2D const &in);
    SUPPORTED_10EN_11EN_STEAM static void TransformRealWorldToTexCoordSpace(CVector2D &out, CVector2D const &in, int x, int y);
};

SUPPORTED_10EN_11EN_STEAM extern CSprite2d *(&pRadarSprites)[21]; // CSprite2d *pRadarSprites[21]
SUPPORTED_10EN_11EN_STEAM extern char *(&gRadarTexNames)[64]; // char const *gRadarTexNames[64]
SUPPORTED_10EN_11EN_STEAM extern int(&gRadarTxdIds)[64]; // int gRadarTxdIds[64]

SUPPORTED_10EN_11EN_STEAM void ClipRadarTileCoords(int &x, int &y);
SUPPORTED_10EN_11EN_STEAM void RequestMapSection(int x, int y);
SUPPORTED_10EN_11EN_STEAM void RemoveMapSection(int x, int y);
SUPPORTED_10EN_11EN_STEAM bool IsPointInsideRadar(CVector2D const &point);
//! Transform from section indices to world coordinates
SUPPORTED_10EN_11EN_STEAM void GetTextureCorners(int x, int y, CVector2D *out);
//! returns number of intersections
SUPPORTED_10EN_11EN_STEAM int LineRadarBoxCollision(CVector2D &out, CVector2D const &lineStart, CVector2D const &lineEnd);

#include "meta/meta.CRadar.h"
