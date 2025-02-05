/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "CVector2D.h"
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

enum eRadarSprite {
	RADAR_SPRITE_NONE,
	RADAR_SPRITE_CENTRE,
	RADAR_SPRITE_MAP_HERE,
	RADAR_SPRITE_NORTH,
	RADAR_SPRITE_AVERY,
	RADAR_SPRITE_BIKER,
	RADAR_SPRITE_CORTEZ,
	RADAR_SPRITE_DIAZ,
	RADAR_SPRITE_KENT,
	RADAR_SPRITE_LAWYER,
	RADAR_SPRITE_PHIL,
	RADAR_SPRITE_BIKERS,
	RADAR_SPRITE_BOATYARD,
	RADAR_SPRITE_MALIBU_CLUB,
	RADAR_SPRITE_CUBANS,
	RADAR_SPRITE_FILM,
	RADAR_SPRITE_GUN,
	RADAR_SPRITE_HAITIANS,
	RADAR_SPRITE_HARDWARE,
	RADAR_SPRITE_SAVE,
	RADAR_SPRITE_STRIP,
	RADAR_SPRITE_ICE,
	RADAR_SPRITE_KCABS,
	RADAR_SPRITE_LOVEFIST,
	RADAR_SPRITE_PRINTWORKS,
	RADAR_SPRITE_PROPERTY,
	RADAR_SPRITE_SUNYARD,
	RADAR_SPRITE_SPRAY,
	RADAR_SPRITE_TSHIRT,
	RADAR_SPRITE_TOMMY,
	RADAR_SPRITE_PHONE,
	RADAR_SPRITE_RADIO_WILDSTYLE,
	RADAR_SPRITE_RADIO_FLASH,
	RADAR_SPRITE_RADIO_KCHAT,
	RADAR_SPRITE_RADIO_FEVER,
	RADAR_SPRITE_RADIO_VROCK,
	RADAR_SPRITE_RADIO_VCPR,
	RADAR_SPRITE_RADIO_ESPANTOSO,
	RADAR_SPRITE_RADIO_EMOTION,
	RADAR_SPRITE_RADIO_WAVE,
	RADAR_SPRITE_COUNT
};

class PLUGIN_API tRadarTrace {
public:
	unsigned int m_nColour; //!< see eBlipColour
	unsigned int m_nBlipType; //!< see eBlipType
	int m_nEntityHandle;
	CVector m_vec2DPos; // 3d
	CVector m_vecPos;
	unsigned short m_nBlipIndex;
	bool m_bDim;
	char m_bInUse;
	bool m_bShortRange;
	char m_bUnk;
	float m_fSphereRadius;
	unsigned short m_nBlipSize;
	unsigned short m_nBlipDisplay; //!< see eBlipDisplay
	unsigned short m_nRadarSprite; //!< see eRadarSprite
};

class PLUGIN_API CRadar {
public:
	static float& cachedCos;
	static float& cachedSin;
	static short* MapLegendList;
	static short& MapLegendCounter;
	static CVector2D& vec2DRadarOrigin;
    static float& m_radarRange;
	static tRadarTrace* ms_RadarTrace;
	static CSprite2d& CentreSprite;
	static CSprite2d& ArrowSprite;
	static CSprite2d& NorthSprite;
	static CSprite2d& AverySprite;
	static CSprite2d& BikerSprite;
	static CSprite2d& CortezSprite;
	static CSprite2d& DiazSprite;
	static CSprite2d& KentSprite;
	static CSprite2d& LawyerSprite;
	static CSprite2d& PhilSprite;
	static CSprite2d& BikersSprite;
	static CSprite2d& BoatyardSprite;
	static CSprite2d& ClubSprite;
	static CSprite2d& CubansSprite;
	static CSprite2d& FilmStudioSprite;
	static CSprite2d& GunSprite;
	static CSprite2d& HaitiansSprite;
	static CSprite2d& HardwareSprite;
	static CSprite2d& SaveSprite;
	static CSprite2d& StripSprite;
	static CSprite2d& IcecreamSprite;
	static CSprite2d& KCabsSprite;
	static CSprite2d& LovefistSprite;
	static CSprite2d& PrintworksSprite;
	static CSprite2d& PropertySprite;
	static CSprite2d& SunYardSprite;
	static CSprite2d& SpraySprite;
	static CSprite2d& TshirtSprite;
	static CSprite2d& TommySprite;
	static CSprite2d& PhoneSprite;
	static CSprite2d& RWildstyleSprite;
	static CSprite2d& RFlashSprite;
	static CSprite2d& RKChatSprite;
	static CSprite2d& RFeverSprite;
	static CSprite2d& RVRockSprite;
	static CSprite2d& RVCPRSprite;
	static CSprite2d& REspantosoSprite;
	static CSprite2d& REmotionSprite;
	static CSprite2d& RwaveSprite;

public:
	static void CalculateCachedSinCos();
	static void ChangeBlipBrightness(int i, int bright);
	static void ChangeBlipColour(int i, unsigned int colour);
	static void ChangeBlipDisplay(int i, eBlipDisplay display);
	static void ChangeBlipScale(int i, int scale);
	static void ClearBlip(int i);
	static void ClearBlipForEntity(eBlipType type, int handle);
	static int ClipRadarPoly(CVector2D* out, CVector2D const* in);
	static void Draw3dMarkers();
	static void DrawBlips();
	static void DrawCoordBlip(int i);
	static void DrawEntityBlip(int i);
	static void DrawLegend(int x, int y, int sprite);
	static void DrawMap();
	static void DrawRadarMap();
	static void DrawRadarMask();
	static void DrawRadarSection(int x, int y);
	static void DrawRadarSprite(unsigned short sprite, float x, float y, unsigned char alpha);
	static void DrawRotatingRadarSprite(CSprite2d* sprite, float x, float y, float angle, unsigned char alpha);
	static void DrawYouAreHereSprite(float x, float y);
	static int GetActualBlipArrayIndex(int i);
	static int GetNewUniqueBlipIndex(int i);
	static unsigned int GetRadarTraceColour(unsigned int colour, bool bright);
	static void InitFrontEndMap();
	static void Initialise();
	static float LimitRadarPoint(CVector2D& point);
	static void LoadAllRadarBlips(unsigned char* buf, unsigned int size);
	static void LoadTextures();
	static void RemoveRadarSections();
	static void SaveAllRadarBlips(unsigned char* buf, unsigned int* size);
	static void SetBlipSprite(int i, int icon);
	static int SetCoordBlip(eBlipType type, CVector const& pos, unsigned int colour, eBlipDisplay display);
	static void SetEntityBlip(eBlipType type, int handle, unsigned int colour, eBlipDisplay display);
	static int SetShortRangeCoordBlip(eBlipType type, CVector const& pos, unsigned int color, eBlipDisplay display);
	static void SetRadarMarkerState(int i, unsigned char flag);
	static void ShowRadarMarker(CVector const& pos, unsigned int colour, float radius);
	static void ShowRadarTraceWithHeight(float x, float y, unsigned int size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned char type);
	static void Shutdown();
	static void StreamRadarSections(int x, int y);
	static void StreamRadarSections(CVector const& pos);
	static void TransformRadarPointToRealWorldSpace(CVector2D& out, CVector2D const& in);
	static void TransformRadarPointToScreenSpace(CVector2D& out, CVector2D const& in);
	static void TransformRealWorldPointToRadarSpace(CVector2D& out, CVector2D const& in);
	static void TransformRealWorldToTexCoordSpace(CVector2D& out, CVector2D const& in, int x, int y);
};

extern CSprite2d** pRadarSprites;
extern int* gRadarTxdIds; // int gRadarTxdIds[64]
extern char** gRadarTexNames; //  char gRadarTexNames[64];
