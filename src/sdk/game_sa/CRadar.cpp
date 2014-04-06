#include "CRadar.h"

float &CRadar::m_radarRange = *(float *)0xBA8314;
uint16_t *CRadar::MapLegendList = (uint16_t *)0xBA8318;
uint16_t &CRadar::MapLegendCounter = *(uint16_t *)0xBA86B8;
CRGBA *CRadar::ArrowBlipColours = (CRGBA *)0xBA86D4;
tRadarTrace *CRadar::ms_RadarTrace = (tRadarTrace *)0xBA86F0;
CVector2D &CRadar::vec2DRadarOrigin = *(CVector2D *)0xBAA248;
CSprite2d *CRadar::RadarBlipSprites = (CSprite2d *)0xBAA250;
CRect &CRadar::m_radarRect = *(CRect *)0x8D0920;