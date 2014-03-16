#include "CRadar.h"

float &CRadar::m_radarRange = *(float *)0xBA8314;
UInt16 *CRadar::MapLegendList = (UInt16 *)0xBA8318;
UInt16 &CRadar::MapLegendCounter = *(UInt16 *)0xBA86B8;
CRGBA *CRadar::ArrowBlipColours = (CRGBA *)0xBA86D4;
tRadarTrace *CRadar::ms_RadarTrace = (tRadarTrace *)0xBA86F0;
CVector2D &CRadar::vec2DRadarOrigin = *(CVector2D *)0xBAA248;
CSprite2d *CRadar::RadarBlipSprites = (CSprite2d *)0xBAA250;
CRect &CRadar::m_radarRect = *(CRect *)0x8D0920;