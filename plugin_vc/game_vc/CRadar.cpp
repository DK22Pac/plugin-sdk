/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRadar.h"
#include "CMenuManager.h"
#include "CEntity.h"
#include "CPools.h"

float& CRadar::cachedCos = *(float*)0x704840;
float& CRadar::cachedSin = *(float*)0x70483C;
short* CRadar::MapLegendList = (short*)0xA10994;
short& CRadar::MapLegendCounter = *(short*)0xA10A40;
CVector2D& CRadar::vec2DRadarOrigin = *(CVector2D*)0x704734;
float& CRadar::m_radarRange = *(float*)0x974BEC;
tRadarTrace* CRadar::ms_RadarTrace = (tRadarTrace*)0x7D7D38;
CSprite2d& CRadar::CentreSprite = *(CSprite2d*)0x9B6E08;
CSprite2d& CRadar::ArrowSprite = *(CSprite2d*)0x9751C8;
CSprite2d& CRadar::NorthSprite = *(CSprite2d*)0x9B6E34;
CSprite2d& CRadar::AverySprite = *(CSprite2d*)0x978664;
CSprite2d& CRadar::BikerSprite = *(CSprite2d*)0x94DD50;
CSprite2d& CRadar::CortezSprite = *(CSprite2d*)0x97F218;
CSprite2d& CRadar::DiazSprite = *(CSprite2d*)0x94DD64;
CSprite2d& CRadar::KentSprite = *(CSprite2d*)0x978824;
CSprite2d& CRadar::LawyerSprite = *(CSprite2d*)0x9751BC;
CSprite2d& CRadar::PhilSprite = *(CSprite2d*)0x97F278;
CSprite2d& CRadar::BikersSprite = *(CSprite2d*)0xA0D2DC;
CSprite2d& CRadar::BoatyardSprite = *(CSprite2d*)0x975384;
CSprite2d& CRadar::ClubSprite = *(CSprite2d*)0x94DD3C;
CSprite2d& CRadar::CubansSprite = *(CSprite2d*)0xA0D330;
CSprite2d& CRadar::FilmStudioSprite = *(CSprite2d*)0x978E50;
CSprite2d& CRadar::GunSprite = *(CSprite2d*)0x9B5EFC;
CSprite2d& CRadar::HaitiansSprite = *(CSprite2d*)0xA1085C;
CSprite2d& CRadar::HardwareSprite = *(CSprite2d*)0x94DB5C;
CSprite2d& CRadar::SaveSprite = *(CSprite2d*)0xA0D9A4;
CSprite2d& CRadar::StripSprite = *(CSprite2d*)0x94DDBC;
CSprite2d& CRadar::IcecreamSprite = *(CSprite2d*)0xA0DACC;
CSprite2d& CRadar::KCabsSprite = *(CSprite2d*)0x980024;
CSprite2d& CRadar::LovefistSprite = *(CSprite2d*)0x9B5F54;
CSprite2d& CRadar::PrintworksSprite = *(CSprite2d*)0x9785F8;
CSprite2d& CRadar::PropertySprite = *(CSprite2d*)0x9B6CD8;
CSprite2d& CRadar::SunYardSprite = *(CSprite2d*)0xA0D1D4;
CSprite2d& CRadar::SpraySprite = *(CSprite2d*)0xA0FD78;
CSprite2d& CRadar::TshirtSprite = *(CSprite2d*)0xA0FD58;
CSprite2d& CRadar::TommySprite = *(CSprite2d*)0x975370;
CSprite2d& CRadar::PhoneSprite = *(CSprite2d*)0xA0FCA4;
CSprite2d& CRadar::RWildstyleSprite = *(CSprite2d*)0x97852C;
CSprite2d& CRadar::RFlashSprite = *(CSprite2d*)0x978804;
CSprite2d& CRadar::RKChatSprite = *(CSprite2d*)0x9B6E50;
CSprite2d& CRadar::RFeverSprite = *(CSprite2d*)0xA0DC90;
CSprite2d& CRadar::RVRockSprite = *(CSprite2d*)0xA0CFD0;
CSprite2d& CRadar::RVCPRSprite = *(CSprite2d*)0x9B48A4;
CSprite2d& CRadar::REspantosoSprite = *(CSprite2d*)0x9751F8;
CSprite2d& CRadar::REmotionSprite = *(CSprite2d*)0x97F2D0;
CSprite2d& CRadar::RwaveSprite = *(CSprite2d*)0x978D9C;

CSprite2d** pRadarSprites = (CSprite2d**)0x68F960;
int* gRadarTxdIds = (int*)0x70473C;
char** gRadarTexNames = (char**)0x68FC00;

void CRadar::CalculateCachedSinCos() {
    plugin::Call<0x4C3D80>();
}

void CRadar::ChangeBlipBrightness(int i, int bright) {
    plugin::Call<0x4C38B0, int, int>(i, bright);
}

void CRadar::ChangeBlipColour(int i, unsigned int colour) {
    plugin::Call<0x4C3930, int, unsigned int>(i, colour);
}

void CRadar::ChangeBlipDisplay(int i, eBlipDisplay display) {
    plugin::Call<0x4C37E0, int, eBlipDisplay>(i, display);
}

void CRadar::ChangeBlipScale(int i, int scale) {
    plugin::Call<0x4C3840, int, int>(i, scale);
}

void CRadar::ClearBlip(int i) {
    plugin::Call<0x4C3990, int>(i);
}

void CRadar::ClearBlipForEntity(eBlipType type, int handle) {
    plugin::Call<0x4C3A70, eBlipType, int>(type, handle);
}

int CRadar::ClipRadarPoly(CVector2D* out, CVector2D const* in) {
    return plugin::CallAndReturn<int, 0x4C2280, CVector2D*, CVector2D const*>(out, in);
}

void CRadar::Draw3dMarkers() {
    plugin::Call<0x4C3F20>();
}

void CRadar::DrawBlips() {
    plugin::Call<0x4C4200>();
}

void CRadar::DrawCoordBlip(int i) {
    plugin::Call<0x4C5680, int>(i);
}

void CRadar::DrawEntityBlip(int i) {
    plugin::Call<0x4C5170, int>(i);
}

void CRadar::DrawLegend(int x, int y, int sprite) {
    plugin::Call<0x4C4A10, int, int, int>(x, y, sprite);
}

void CRadar::DrawMap() {
    plugin::Call<0x4C5C60 >();
}

void CRadar::DrawRadarMap() {
    plugin::Call<0x4C17C0>();
}

void CRadar::DrawRadarMask() {
    plugin::Call<0x4C1A20>();
}

void CRadar::DrawRadarSection(int x, int y) {
    plugin::Call<0x4C1D60>();
}

void CRadar::DrawRadarSprite(unsigned short sprite, float x, float y, unsigned char alpha) {
    plugin::Call<0x4C2D00, unsigned short, float, float, unsigned char>(sprite, x, y, alpha);
}

void CRadar::DrawRotatingRadarSprite(CSprite2d* sprite, float x, float y, float angle, unsigned char alpha) {
    plugin::Call<0x4C2E70, CSprite2d*, float, float, float, unsigned char>(sprite, x, y, angle, alpha);
}

void CRadar::DrawYouAreHereSprite(float x, float y) {
    plugin::Call<0x4C2980, float, float>(x, y);
}

int CRadar::GetActualBlipArrayIndex(int i) {
    return plugin::CallAndReturn<int, 0x4C5D70, int>(i);
}

int CRadar::GetNewUniqueBlipIndex(int i) {
    if (ms_RadarTrace[i].m_nBlipIndex >= UINT16_MAX - 1)
        ms_RadarTrace[i].m_nBlipIndex = 1;
    else
        ms_RadarTrace[i].m_nBlipIndex++;
    return i | (ms_RadarTrace[i].m_nBlipIndex << 16);
}

unsigned int CRadar::GetRadarTraceColour(unsigned int colour, bool bright) {
    return plugin::CallAndReturn<unsigned int, 0x4C3050, unsigned int, bool>(colour, bright);
}

void CRadar::InitFrontEndMap() {
    plugin::Call<0x4C5B30>();
}

void CRadar::Initialise() {
    plugin::Call<0x4C6200>();
}

float CRadar::LimitRadarPoint(CVector2D& point) {
    float dist = point.Magnitude();

    if (FrontEndMenuManager.m_bDrawRadarOrMap)
        return dist;

    if (dist > 1.0f) {
        point.x *= 1.0f / dist;
        point.y *= 1.0f / dist;
    }
    return dist;
}

void CRadar::LoadAllRadarBlips(unsigned char* buf, unsigned int size) {
    plugin::Call<0x4C15D0, unsigned char*, unsigned int>(buf, size);
}

void CRadar::LoadTextures() {
    plugin::Call<0x4C5DC0>();
}

void CRadar::RemoveRadarSections() {
    plugin::Call<0x4C2930>();
}

void CRadar::SaveAllRadarBlips(unsigned char* buf, unsigned int* size) {
    plugin::Call<0x4C16B0, unsigned char*, unsigned int*>(buf, size);
}

void CRadar::SetBlipSprite(int i, int icon) {
    plugin::Call<0x4C3780, int, int>(i, icon);
}

int CRadar::SetCoordBlip(eBlipType type, CVector const& pos, unsigned int colour, eBlipDisplay display) {
    return plugin::CallAndReturn<int, 0x4C3C80, eBlipType, CVector const&, unsigned int, eBlipDisplay>(type, pos, colour, display);
}

void CRadar::SetEntityBlip(eBlipType type, int handle, unsigned int colour, eBlipDisplay display) {
    plugin::Call<0x4C3B40, eBlipType, int, unsigned int, eBlipDisplay>(type, handle, colour, display);
}

int CRadar::SetShortRangeCoordBlip(eBlipType type, CVector const& pos, unsigned int color, eBlipDisplay display) {
    return plugin::CallAndReturn<int, 0x4C3C00, eBlipType, CVector const&, unsigned int, eBlipDisplay>(type, pos, color, display);
}

void CRadar::SetRadarMarkerState(int i, unsigned char flag) {
    CEntity* entity = NULL;
    switch (ms_RadarTrace[i].m_nBlipType) {
    case BLIP_CAR:
        entity = CPools::GetVehicle(ms_RadarTrace[i].m_nEntityHandle);
        break;
    case BLIP_CHAR:
        entity = CPools::GetPed(ms_RadarTrace[i].m_nEntityHandle);
        break;
    case BLIP_OBJECT:
        entity = CPools::GetObject(ms_RadarTrace[i].m_nEntityHandle);
        break;
    }

    if (entity)
        entity->bHasBlip = flag;
}

void CRadar::ShowRadarMarker(CVector const& pos, unsigned int colour, float radius) {
    plugin::Call<0x4C3100, CVector const&, unsigned int, float>(pos, colour, radius);
}

void CRadar::ShowRadarTraceWithHeight(float x, float y, unsigned int size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned char type) {
    plugin::Call<0x4C32F0, float, float, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char>(x, y, size, red, green, blue, alpha, type);
}

void CRadar::Shutdown() {
    plugin::Call<0x4C6030>();
}

void CRadar::StreamRadarSections(int x, int y) {
    plugin::Call<0x4C2870, int, int>(x, y);
}

void CRadar::StreamRadarSections(CVector const& pos) {
    plugin::Call<0x4C1960, CVector const&>(pos);
}

void CRadar::TransformRadarPointToRealWorldSpace(CVector2D& out, CVector2D const& in) {
    float s = -cachedSin;
    float c = cachedCos;

    out.x = (s * in.y + c * in.x) * m_radarRange + vec2DRadarOrigin.x;
    out.y = (c * in.y - s * in.x) * m_radarRange + vec2DRadarOrigin.y;
}

void CRadar::TransformRadarPointToScreenSpace(CVector2D& out, CVector2D const& in) {
    if (FrontEndMenuManager.m_bDrawRadarOrMap) {
        out.x = (*(float*)0x68FD0C * *(float*)0x869670 * in.x + *(float*)0x68FD10 * *(float*)0x869670 + *(float*)0x869674);
        out.x *= ((float)RsGlobal.screenWidth * *(float*)0x68FD14);

        out.y = (*(float*)0x869678 - *(float*)0x68FD1C * *(float*)0x869670 - *(float*)0x68FD18 * *(float*)0x869670 * in.y);
        out.y *= ((float)RsGlobal.screenHeight * *(float*)0x68FD20);
    }
    else {
        float w = (float)RsGlobal.screenWidth * *(float*)0x68FD14 * *(float*)0x68FD24;
        out.x = in.x * w * *(float*)0x68FD28 + w * *(float*)0x68FD28 + *(float*)0x68FD2C;
        out.y = *(float*)0x68FD30 * ((float)RsGlobal.screenHeight * *(float*)0x68FD20) * *(float*)0x68FD28
            + (float)RsGlobal.screenHeight
            - *(float*)0x68FD34 * ((float)RsGlobal.screenHeight * *(float*)0x68FD20)
            - in.y * (*(float*)0x68FD30 * ((float)RsGlobal.screenHeight * *(float*)0x68FD20)) * *(float*)0x68FD28;
    }
}

void CRadar::TransformRealWorldPointToRadarSpace(CVector2D& out, CVector2D const& in) {
    float s = cachedSin;
    float c = cachedCos;

    float x = (in.x - vec2DRadarOrigin.x) * (1.0f / m_radarRange);
    float y = (in.y - vec2DRadarOrigin.y) * (1.0f / m_radarRange);

    out.x = s * y + c * x;
    out.y = c * y - s * x;
}

void CRadar::TransformRealWorldToTexCoordSpace(CVector2D& out, CVector2D const& in, int x, int y) {
    out.x = in.x - (x * *(float*)0x68FD44 + *(float*)0x68FD00);
    out.y = -(in.y - ((8 - y) * *(float*)0x68FD44 - *(float*)0x68FD00));
    out.x /= *(float*)0x68FD44;
    out.y /= *(float*)0x68FD44;
}
