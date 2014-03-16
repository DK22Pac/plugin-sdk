#pragma once

#include "plugin/plugin.h"
#include "CVector.h"
#include "CRGBA.h"
#include "CVector2D.h"
#include "CSprite2d.h"

// Thanks to Wesser for radar-related enums
enum eBlipType : char
{
	BLIP_TYPE_NONE,			// 0
	BLIP_TYPE_CAR,			// 1
	BLIP_TYPE_CHAR,			// 2
	BLIP_TYPE_OBJECT,			// 3
	BLIP_TYPE_COORD,			// 4 - Checkpoint.
	BLIP_TYPE_CONTACTPOINT,	// 5 - Sphere.
	BLIP_TYPE_SPOTLIGHT,		// 6
	BLIP_TYPE_PICKUP			// 7
};

#pragma pack(push, 4)
struct PLUGIN_API tRadarTrace
{
	UInt32  m_dwColour;
	UInt32  m_dwEntityHandle;
	CVector m_vPosition;
	UInt16  m_wIndex;
	Float   m_fSphereRadius;
	UInt16  m_dwBlipSize;
	class CEntryExit *m_pEntryExit;
	UInt8   m_nBlipSprite;
	/* http://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CMarkerSA.h */
	UInt8   m_bBright : 1;
    UInt8   m_bTrackingBlip : 1;
    UInt8   m_bShortRange : 1;
    UInt8   m_bFriendly : 1;    
    UInt8   m_bBlipRemain : 1;
    UInt8   m_bBlipFade : 1;
    UInt8   m_nCoordBlipAppearance : 2;
    UInt8   m_nBlipDisplayFlag : 2;
    UInt8   m_nBlipType : 4;
};
#pragma pack(pop)

VALIDATE_SIZE(tRadarTrace, 0x28);

class PLUGIN_API CRadar
{
public:
	// 2990.0 by default
	static float &m_radarRange;
	// static UInt16 MapLegendList[175];
	static UInt16 *MapLegendList;
	// num icons in legend
	static UInt16 &MapLegendCounter;
	// static CRGBA ArrowBlipColours[6];
	static CRGBA *ArrowBlipColours;
	// static tRadarTrace ms_RadarTrace[175];
	static tRadarTrace *ms_RadarTrace;
	// static CVector2D vec2DRadarOrigin;
	static CVector2D &vec2DRadarOrigin;
	// static CSprite2d RadarBlipSprites[64];
	static CSprite2d *RadarBlipSprites;
	// 
	static CRect &m_radarRect;
	//
	/*static void LoadTextures(void);
	static void GetNewUniqueBlipIndex(int);
	static void GetActualBlipArrayIndex(int);
	static void DrawLegend(int,int,int);
	static void LimitRadarPoint(CVector2D &);
	static void LimitToMap(float *,float *);
	static void CalculateBlipAlpha(float);
	static void TransformRadarPointToScreenSpace(CVector2D &,CVector2D const&);
	static void TransformRealWorldPointToRadarSpace(CVector2D &,CVector2D const&);
	static void TransformRadarPointToRealWorldSpace(CVector2D &,CVector2D const&);
	static void TransformRealWorldToTexCoordSpace(CVector2D &,CVector2D const&,int,int);
	static void CalculateCachedSinCos(void);
	static void SetCoordBlip(eBlipType,CVector,uint,eBlipDisplay);
	static void SetShortRangeCoordBlip(eBlipType,CVector,uint,eBlipDisplay);
	static void SetEntityBlip(eBlipType,int,uint,eBlipDisplay);
	static void ChangeBlipColour(int,uint);
	static void HasThisBlipBeenRevealed(int);
	static void DisplayThisBlip(int,signed char);
	static void ChangeBlipBrightness(int,int);
	static void ChangeBlipScale(int,int);
	static void ChangeBlipDisplay(int,eBlipDisplay);
	static void SetBlipSprite(int,int);
	static void SetBlipAlwaysDisplayInZoom(int,uchar);
	static void SetBlipFade(int,uchar);
	static void SetCoordBlipAppearance(int,uchar);
	static void SetBlipFriendly(int,uchar);
	static void SetBlipEntryExit(int,CEntryExit *);
	static void ShowRadarTrace(float,float,uint,uchar,uchar,uchar,uchar);
	static void ShowRadarTraceWithHeight(float,float,uint,uchar,uchar,uchar,uchar,uchar);
	static void ShowRadarMarker(CVector,uint,float);
	static void GetRadarTraceColour(uint,uchar);
	static void DrawRotatingRadarSprite(CSprite2d *,float,float,float,uchar);
	static void DrawYouAreHereSprite(float,float);
	static void SetupRadarRect(int,int);
	static void RequestMapSection(int,int);
	static void RemoveMapSection(int,int);
	static void RemoveRadarSections(void);
	static void StreamRadarSections(int,int);
	static void ClipRadarPoly(CVector2D *,CVector2D const*);
	static void DrawAreaOnRadar(CRect  const&,CRGBA  const&,bool);
	static void DrawRadarMask(void);
	static void StreamRadarSections(CVector  const&);
	static void Shutdown(void);
	static void InitFrontEndMap(void);
	static void AddBlipToLegendList(uchar,int);
	static void SetMapCentreToPlayerCoords(void);
	static void Draw3dMarkers(void);
	static void SetRadarMarkerState(int,uchar);
	static void DrawRadarSprite(ushort,float,float,uchar);
	static void DrawRadarSection(int,int);
	static void DrawRadarSectionMap(int,int,CRect);
	static void DrawRadarGangOverlay(bool);
	static void DrawRadarMap(void);
	static void DrawMap(void);
	static void DrawCoordBlip(int,uchar);
	static void DrawEntityBlip(int,uchar);
	static void ClearActualBlip(int);
	static void ClearBlipForEntity(eBlipType,int);
	static void ClearBlip(int);
	static void SetupAirstripBlips(void);
	static void Initialise(void);
	static void DrawBlips(void);*/
};