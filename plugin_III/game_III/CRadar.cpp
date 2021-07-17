/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRadar.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector2D &CRadar::vec2DRadarOrigin = *reinterpret_cast<CVector2D *>(GLOBAL_ADDRESS_BY_VERSION(0x6299B8, 0x6299B8, 0x6399B8));
PLUGIN_VARIABLE CBlip(&CRadar::ms_RadarTrace)[32] = *reinterpret_cast<CBlip(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x6ED5E0, 0x6ED5E0, 0x6FD720));
PLUGIN_VARIABLE CSprite2d &CRadar::CatSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x885B24, 0x885AD4, 0x895C14));
PLUGIN_VARIABLE CSprite2d &CRadar::TonySprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x885B58, 0x885B08, 0x895C48));
PLUGIN_VARIABLE float &CRadar::m_radarRange = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E281C, 0x8E27CC, 0x8F290C));
PLUGIN_VARIABLE CSprite2d &CRadar::RaySprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A7C, 0x8E2B30, 0x8F2C70));
PLUGIN_VARIABLE CSprite2d &CRadar::CopcarSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A2C, 0x8F1AE0, 0x901C20));
PLUGIN_VARIABLE CSprite2d &CRadar::LuigiSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A3C, 0x8F1AF0, 0x901C30));
PLUGIN_VARIABLE CSprite2d &CRadar::AsukaSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A40, 0x8F1AF4, 0x901C34));
PLUGIN_VARIABLE CSprite2d &CRadar::ElSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B80, 0x8F1C34, 0x901D74));
PLUGIN_VARIABLE CSprite2d &CRadar::SalSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29EC, 0x8F2AA0, 0x902BE0));
PLUGIN_VARIABLE CSprite2d &CRadar::EightSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BCC, 0x8F2C80, 0x902DC0));
PLUGIN_VARIABLE CSprite2d &CRadar::DonSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BE0, 0x8F2C94, 0x902DD4));
PLUGIN_VARIABLE CSprite2d &CRadar::JoeySprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C00, 0x8F2CB4, 0x902DF4));
PLUGIN_VARIABLE CSprite2d &CRadar::KenjiSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C68, 0x8F2D1C, 0x902E5C));
PLUGIN_VARIABLE CSprite2d &CRadar::LizSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5830, 0x8F58E4, 0x905A24));
PLUGIN_VARIABLE CSprite2d &CRadar::SaveSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F74, 0x8F6028, 0x906168));
PLUGIN_VARIABLE CSprite2d &CRadar::BombSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FB4, 0x8F6068, 0x9061A8));
PLUGIN_VARIABLE CSprite2d &CRadar::CentreSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6268, 0x8F6420, 0x906560));
PLUGIN_VARIABLE CSprite2d &CRadar::NorthSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6274, 0x8F642C, 0x90656C));
PLUGIN_VARIABLE CSprite2d &CRadar::WeaponSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x941534, 0x9416EC, 0x95182C));
PLUGIN_VARIABLE CSprite2d &CRadar::IceSprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x9415FC, 0x9417B4, 0x9518F4));
PLUGIN_VARIABLE CSprite2d &CRadar::SpraySprite = *reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0x94307C, 0x943234, 0x953374));
PLUGIN_VARIABLE CSprite2d *(&pRadarSprites)[21] = *reinterpret_cast<CSprite2d *(*)[21]>(GLOBAL_ADDRESS_BY_VERSION(0x5F6CA4, 0x5F6A8C, 0x603A84));
PLUGIN_VARIABLE char *(&gRadarTexNames)[64] = *reinterpret_cast<char *(*)[64]>(GLOBAL_ADDRESS_BY_VERSION(0x5F6EF8, 0x5F6CE0, 0x603CD8));
PLUGIN_VARIABLE int(&gRadarTxdIds)[64] = *reinterpret_cast<int(*)[64]>(GLOBAL_ADDRESS_BY_VERSION(0x6299C0, 0x6299C0, 0x6399C0));

int addrof(CRadar::CalculateBlipAlpha) = ADDRESS_BY_VERSION(0x4A4F90, 0x4A5080, 0x4A5010);
int gaddrof(CRadar::CalculateBlipAlpha) = GLOBAL_ADDRESS_BY_VERSION(0x4A4F90, 0x4A5080, 0x4A5010);

unsigned char CRadar::CalculateBlipAlpha(float distance) {
    return plugin::CallAndReturnDynGlobal<unsigned char, float>(gaddrof(CRadar::CalculateBlipAlpha), distance);
}

int addrof(CRadar::ChangeBlipBrightness) = ADDRESS_BY_VERSION(0x4A57A0, 0x4A5890, 0x4A5820);
int gaddrof(CRadar::ChangeBlipBrightness) = GLOBAL_ADDRESS_BY_VERSION(0x4A57A0, 0x4A5890, 0x4A5820);

void CRadar::ChangeBlipBrightness(int i, int bright) {
    plugin::CallDynGlobal<int, int>(gaddrof(CRadar::ChangeBlipBrightness), i, bright);
}

int addrof(CRadar::ChangeBlipColour) = ADDRESS_BY_VERSION(0x4A5770, 0x4A5860, 0x4A57F0);
int gaddrof(CRadar::ChangeBlipColour) = GLOBAL_ADDRESS_BY_VERSION(0x4A5770, 0x4A5860, 0x4A57F0);

void CRadar::ChangeBlipColour(int i, unsigned int colour) {
    plugin::CallDynGlobal<int, unsigned int>(gaddrof(CRadar::ChangeBlipColour), i, colour);
}

int addrof(CRadar::ChangeBlipDisplay) = ADDRESS_BY_VERSION(0x4A5810, 0x4A5900, 0x4A5890);
int gaddrof(CRadar::ChangeBlipDisplay) = GLOBAL_ADDRESS_BY_VERSION(0x4A5810, 0x4A5900, 0x4A5890);

void CRadar::ChangeBlipDisplay(int i, eBlipDisplay display) {
    plugin::CallDynGlobal<int, eBlipDisplay>(gaddrof(CRadar::ChangeBlipDisplay), i, display);
}

int addrof(CRadar::ChangeBlipScale) = ADDRESS_BY_VERSION(0x4A57E0, 0x4A58D0, 0x4A5860);
int gaddrof(CRadar::ChangeBlipScale) = GLOBAL_ADDRESS_BY_VERSION(0x4A57E0, 0x4A58D0, 0x4A5860);

void CRadar::ChangeBlipScale(int i, int scale) {
    plugin::CallDynGlobal<int, int>(gaddrof(CRadar::ChangeBlipScale), i, scale);
}

int addrof(CRadar::ClearBlip) = ADDRESS_BY_VERSION(0x4A5720, 0x4A5810, 0x4A57A0);
int gaddrof(CRadar::ClearBlip) = GLOBAL_ADDRESS_BY_VERSION(0x4A5720, 0x4A5810, 0x4A57A0);

void CRadar::ClearBlip(int i) {
    plugin::CallDynGlobal<int>(gaddrof(CRadar::ClearBlip), i);
}

int addrof(CRadar::ClearBlipForEntity) = ADDRESS_BY_VERSION(0x4A56C0, 0x4A57B0, 0x4A5740);
int gaddrof(CRadar::ClearBlipForEntity) = GLOBAL_ADDRESS_BY_VERSION(0x4A56C0, 0x4A57B0, 0x4A5740);

void CRadar::ClearBlipForEntity(eBlipType type, int handle) {
    plugin::CallDynGlobal<eBlipType, int>(gaddrof(CRadar::ClearBlipForEntity), type, handle);
}

int addrof(CRadar::ClipRadarPoly) = ADDRESS_BY_VERSION(0x4A64A0, 0x4A6590, 0x4A6520);
int gaddrof(CRadar::ClipRadarPoly) = GLOBAL_ADDRESS_BY_VERSION(0x4A64A0, 0x4A6590, 0x4A6520);

int CRadar::ClipRadarPoly(CVector2D *out, CVector2D const *in) {
    return plugin::CallAndReturnDynGlobal<int, CVector2D *, CVector2D const *>(gaddrof(CRadar::ClipRadarPoly), out, in);
}

int addrof(CRadar::Draw3dMarkers) = ADDRESS_BY_VERSION(0x4A4C70, 0x4A4D60, 0x4A4CF0);
int gaddrof(CRadar::Draw3dMarkers) = GLOBAL_ADDRESS_BY_VERSION(0x4A4C70, 0x4A4D60, 0x4A4CF0);

void CRadar::Draw3dMarkers() {
    plugin::CallDynGlobal(gaddrof(CRadar::Draw3dMarkers));
}

int addrof(CRadar::DrawBlips) = ADDRESS_BY_VERSION(0x4A42F0, 0x4A43E0, 0x4A4370);
int gaddrof(CRadar::DrawBlips) = GLOBAL_ADDRESS_BY_VERSION(0x4A42F0, 0x4A43E0, 0x4A4370);

void CRadar::DrawBlips() {
    plugin::CallDynGlobal(gaddrof(CRadar::DrawBlips));
}

int addrof(CRadar::DrawMap) = ADDRESS_BY_VERSION(0x4A4200, 0x4A42F0, 0x4A4280);
int gaddrof(CRadar::DrawMap) = GLOBAL_ADDRESS_BY_VERSION(0x4A4200, 0x4A42F0, 0x4A4280);

void CRadar::DrawMap() {
    plugin::CallDynGlobal(gaddrof(CRadar::DrawMap));
}

int addrof(CRadar::DrawRadarMap) = ADDRESS_BY_VERSION(0x4A6C20, 0x4A6D10, 0x4A6CA0);
int gaddrof(CRadar::DrawRadarMap) = GLOBAL_ADDRESS_BY_VERSION(0x4A6C20, 0x4A6D10, 0x4A6CA0);

void CRadar::DrawRadarMap() {
    plugin::CallDynGlobal(gaddrof(CRadar::DrawRadarMap));
}

int addrof(CRadar::DrawRadarMask) = ADDRESS_BY_VERSION(0x4A69C0, 0x4A6AB0, 0x4A6A40);
int gaddrof(CRadar::DrawRadarMask) = GLOBAL_ADDRESS_BY_VERSION(0x4A69C0, 0x4A6AB0, 0x4A6A40);

void CRadar::DrawRadarMask() {
    plugin::CallDynGlobal(gaddrof(CRadar::DrawRadarMask));
}

int addrof(CRadar::DrawRadarSection) = ADDRESS_BY_VERSION(0x4A67E0, 0x4A68D0, 0x4A6860);
int gaddrof(CRadar::DrawRadarSection) = GLOBAL_ADDRESS_BY_VERSION(0x4A67E0, 0x4A68D0, 0x4A6860);

void CRadar::DrawRadarSection(int x, int y) {
    plugin::CallDynGlobal<int, int>(gaddrof(CRadar::DrawRadarSection), x, y);
}

int addrof(CRadar::DrawRadarSprite) = ADDRESS_BY_VERSION(0x4A5EF0, 0x4A5FE0, 0x4A5F70);
int gaddrof(CRadar::DrawRadarSprite) = GLOBAL_ADDRESS_BY_VERSION(0x4A5EF0, 0x4A5FE0, 0x4A5F70);

void CRadar::DrawRadarSprite(unsigned short sprite, float x, float y, unsigned char alpha) {
    plugin::CallDynGlobal<unsigned short, float, float, unsigned char>(gaddrof(CRadar::DrawRadarSprite), sprite, x, y, alpha);
}

int addrof(CRadar::DrawRotatingRadarSprite) = ADDRESS_BY_VERSION(0x4A5D10, 0x4A5E00, 0x4A5D90);
int gaddrof(CRadar::DrawRotatingRadarSprite) = GLOBAL_ADDRESS_BY_VERSION(0x4A5D10, 0x4A5E00, 0x4A5D90);

void CRadar::DrawRotatingRadarSprite(CSprite2d *sprite, float x, float y, float angle, unsigned char alpha) {
    plugin::CallDynGlobal<CSprite2d *, float, float, float, unsigned char>(gaddrof(CRadar::DrawRotatingRadarSprite), sprite, x, y, angle, alpha);
}

int addrof(CRadar::GetActualBlipArrayIndex) = ADDRESS_BY_VERSION(0x4A41C0, 0x4A42B0, 0x4A4240);
int gaddrof(CRadar::GetActualBlipArrayIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4A41C0, 0x4A42B0, 0x4A4240);

int CRadar::GetActualBlipArrayIndex(int i) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CRadar::GetActualBlipArrayIndex), i);
}

int addrof(CRadar::GetNewUniqueBlipIndex) = ADDRESS_BY_VERSION(0x4A4180, 0x4A4270, 0x4A4200);
int gaddrof(CRadar::GetNewUniqueBlipIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4A4180, 0x4A4270, 0x4A4200);

int CRadar::GetNewUniqueBlipIndex(int i) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CRadar::GetNewUniqueBlipIndex), i);
}

int addrof(CRadar::GetRadarTraceColour) = ADDRESS_BY_VERSION(0x4A5BB0, 0x4A5CA0, 0x4A5C30);
int gaddrof(CRadar::GetRadarTraceColour) = GLOBAL_ADDRESS_BY_VERSION(0x4A5BB0, 0x4A5CA0, 0x4A5C30);

unsigned int CRadar::GetRadarTraceColour(unsigned int colour, bool bright) {
    return plugin::CallAndReturnDynGlobal<unsigned int, unsigned int, bool>(gaddrof(CRadar::GetRadarTraceColour), colour, bright);
}

int addrof(CRadar::Initialise) = ADDRESS_BY_VERSION(0x4A3EF0, 0x4A3FE0, 0x4A3F70);
int gaddrof(CRadar::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4A3EF0, 0x4A3FE0, 0x4A3F70);

void CRadar::Initialise() {
    plugin::CallDynGlobal(gaddrof(CRadar::Initialise));
}

int addrof(CRadar::LimitRadarPoint) = ADDRESS_BY_VERSION(0x4A4F30, 0x4A5020, 0x4A4FB0);
int gaddrof(CRadar::LimitRadarPoint) = GLOBAL_ADDRESS_BY_VERSION(0x4A4F30, 0x4A5020, 0x4A4FB0);

float CRadar::LimitRadarPoint(CVector2D &point) {
    return plugin::CallAndReturnDynGlobal<float, CVector2D &>(gaddrof(CRadar::LimitRadarPoint), point);
}

int addrof(CRadar::LoadAllRadarBlips) = ADDRESS_BY_VERSION(0x4A6F30, 0x4A7020, 0x4A6FB0);
int gaddrof(CRadar::LoadAllRadarBlips) = GLOBAL_ADDRESS_BY_VERSION(0x4A6F30, 0x4A7020, 0x4A6FB0);

void CRadar::LoadAllRadarBlips(unsigned char *buf, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CRadar::LoadAllRadarBlips), buf, size);
}

int addrof(CRadar::LoadTextures) = ADDRESS_BY_VERSION(0x4A4030, 0x4A4120, 0x4A40B0);
int gaddrof(CRadar::LoadTextures) = GLOBAL_ADDRESS_BY_VERSION(0x4A4030, 0x4A4120, 0x4A40B0);

void CRadar::LoadTextures() {
    plugin::CallDynGlobal(gaddrof(CRadar::LoadTextures));
}

int addrof(CRadar::RemoveRadarSections) = ADDRESS_BY_VERSION(0x4A60E0, 0x4A61D0, 0x4A6160);
int gaddrof(CRadar::RemoveRadarSections) = GLOBAL_ADDRESS_BY_VERSION(0x4A60E0, 0x4A61D0, 0x4A6160);

void CRadar::RemoveRadarSections() {
    plugin::CallDynGlobal(gaddrof(CRadar::RemoveRadarSections));
}

int addrof(CRadar::SaveAllRadarBlips) = ADDRESS_BY_VERSION(0x4A6E30, 0x4A6F20, 0x4A6EB0);
int gaddrof(CRadar::SaveAllRadarBlips) = GLOBAL_ADDRESS_BY_VERSION(0x4A6E30, 0x4A6F20, 0x4A6EB0);

void CRadar::SaveAllRadarBlips(unsigned char *buf, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CRadar::SaveAllRadarBlips), buf, size);
}

int addrof(CRadar::SetBlipSprite) = ADDRESS_BY_VERSION(0x4A5840, 0x4A5930, 0x4A58C0);
int gaddrof(CRadar::SetBlipSprite) = GLOBAL_ADDRESS_BY_VERSION(0x4A5840, 0x4A5930, 0x4A58C0);

void CRadar::SetBlipSprite(int i, int icon) {
    plugin::CallDynGlobal<int, int>(gaddrof(CRadar::SetBlipSprite), i, icon);
}

int addrof(CRadar::SetCoordBlip) = ADDRESS_BY_VERSION(0x4A5590, 0x4A5680, 0x4A5610);
int gaddrof(CRadar::SetCoordBlip) = GLOBAL_ADDRESS_BY_VERSION(0x4A5590, 0x4A5680, 0x4A5610);

int CRadar::SetCoordBlip(eBlipType type, CVector pos, unsigned int colour, eBlipDisplay display) {
    return plugin::CallAndReturnDynGlobal<int, eBlipType, CVector, unsigned int, eBlipDisplay>(gaddrof(CRadar::SetCoordBlip), type, pos, colour, display);
}

int addrof(CRadar::SetEntityBlip) = ADDRESS_BY_VERSION(0x4A5640, 0x4A5730, 0x4A56C0);
int gaddrof(CRadar::SetEntityBlip) = GLOBAL_ADDRESS_BY_VERSION(0x4A5640, 0x4A5730, 0x4A56C0);

void CRadar::SetEntityBlip(eBlipType type, int handle, unsigned int colour, eBlipDisplay display) {
    plugin::CallDynGlobal<eBlipType, int, unsigned int, eBlipDisplay>(gaddrof(CRadar::SetEntityBlip), type, handle, colour, display);
}

int addrof(CRadar::SetRadarMarkerState) = ADDRESS_BY_VERSION(0x4A5C60, 0x4A5D50, 0x4A5CE0);
int gaddrof(CRadar::SetRadarMarkerState) = GLOBAL_ADDRESS_BY_VERSION(0x4A5C60, 0x4A5D50, 0x4A5CE0);

void CRadar::SetRadarMarkerState(int i, unsigned char flag) {
    plugin::CallDynGlobal<int, unsigned char>(gaddrof(CRadar::SetRadarMarkerState), i, flag);
}

int addrof(CRadar::ShowRadarMarker) = ADDRESS_BY_VERSION(0x4A59C0, 0x4A5AB0, 0x4A5A40);
int gaddrof(CRadar::ShowRadarMarker) = GLOBAL_ADDRESS_BY_VERSION(0x4A59C0, 0x4A5AB0, 0x4A5A40);

void CRadar::ShowRadarMarker(CVector pos, unsigned int colour, float radius) {
    plugin::CallDynGlobal<CVector, unsigned int, float>(gaddrof(CRadar::ShowRadarMarker), pos, colour, radius);
}

int addrof(CRadar::ShowRadarTrace) = ADDRESS_BY_VERSION(0x4A5870, 0x4A5960, 0x4A58F0);
int gaddrof(CRadar::ShowRadarTrace) = GLOBAL_ADDRESS_BY_VERSION(0x4A5870, 0x4A5960, 0x4A58F0);

void CRadar::ShowRadarTrace(float x, float y, unsigned int size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    plugin::CallDynGlobal<float, float, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char>(gaddrof(CRadar::ShowRadarTrace), x, y, size, red, green, blue, alpha);
}

int addrof(CRadar::Shutdown) = ADDRESS_BY_VERSION(0x4A3F60, 0x4A4050, 0x4A3FE0);
int gaddrof(CRadar::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4A3F60, 0x4A4050, 0x4A3FE0);

void CRadar::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CRadar::Shutdown));
}

int addrof_o(CRadar::StreamRadarSections, void (*)(int, int)) = ADDRESS_BY_VERSION(0x4A6100, 0x4A61F0, 0x4A6180);
int gaddrof_o(CRadar::StreamRadarSections, void (*)(int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4A6100, 0x4A61F0, 0x4A6180);

void CRadar::StreamRadarSections(int x, int y) {
    plugin::CallDynGlobal<int, int>(gaddrof_o(CRadar::StreamRadarSections, void (*)(int, int)), x, y);
}

int addrof_o(CRadar::StreamRadarSections, void (*)(CVector const &)) = ADDRESS_BY_VERSION(0x4A6B60, 0x4A6C50, 0x4A6BE0);
int gaddrof_o(CRadar::StreamRadarSections, void (*)(CVector const &)) = GLOBAL_ADDRESS_BY_VERSION(0x4A6B60, 0x4A6C50, 0x4A6BE0);

void CRadar::StreamRadarSections(CVector const &pos) {
    plugin::CallDynGlobal<CVector const &>(gaddrof_o(CRadar::StreamRadarSections, void (*)(CVector const &)), pos);
}

int addrof(CRadar::TransformRadarPointToRealWorldSpace) = ADDRESS_BY_VERSION(0x4A5300, 0x4A53F0, 0x4A5380);
int gaddrof(CRadar::TransformRadarPointToRealWorldSpace) = GLOBAL_ADDRESS_BY_VERSION(0x4A5300, 0x4A53F0, 0x4A5380);

void CRadar::TransformRadarPointToRealWorldSpace(CVector2D &out, CVector2D const &in) {
    plugin::CallDynGlobal<CVector2D &, CVector2D const &>(gaddrof(CRadar::TransformRadarPointToRealWorldSpace), out, in);
}

int addrof(CRadar::TransformRadarPointToScreenSpace) = ADDRESS_BY_VERSION(0x4A5040, 0x4A5130, 0x4A50C0);
int gaddrof(CRadar::TransformRadarPointToScreenSpace) = GLOBAL_ADDRESS_BY_VERSION(0x4A5040, 0x4A5130, 0x4A50C0);

void CRadar::TransformRadarPointToScreenSpace(CVector2D &out, CVector2D const &in) {
    plugin::CallDynGlobal<CVector2D &, CVector2D const &>(gaddrof(CRadar::TransformRadarPointToScreenSpace), out, in);
}

int addrof(CRadar::TransformRealWorldPointToRadarSpace) = ADDRESS_BY_VERSION(0x4A50D0, 0x4A51C0, 0x4A5150);
int gaddrof(CRadar::TransformRealWorldPointToRadarSpace) = GLOBAL_ADDRESS_BY_VERSION(0x4A50D0, 0x4A51C0, 0x4A5150);

void CRadar::TransformRealWorldPointToRadarSpace(CVector2D &out, CVector2D const &in) {
    plugin::CallDynGlobal<CVector2D &, CVector2D const &>(gaddrof(CRadar::TransformRealWorldPointToRadarSpace), out, in);
}

int addrof(CRadar::TransformRealWorldToTexCoordSpace) = ADDRESS_BY_VERSION(0x4A5530, 0x4A5620, 0x4A55B0);
int gaddrof(CRadar::TransformRealWorldToTexCoordSpace) = GLOBAL_ADDRESS_BY_VERSION(0x4A5530, 0x4A5620, 0x4A55B0);

void CRadar::TransformRealWorldToTexCoordSpace(CVector2D &out, CVector2D const &in, int x, int y) {
    plugin::CallDynGlobal<CVector2D &, CVector2D const &, int, int>(gaddrof(CRadar::TransformRealWorldToTexCoordSpace), out, in, x, y);
}

int ctor_addr(CBlip) = ADDRESS_BY_VERSION(0x4A7260, 0x4A7350, 0x4A72E0);
int ctor_gaddr(CBlip) = GLOBAL_ADDRESS_BY_VERSION(0x4A7260, 0x4A7350, 0x4A72E0);

int addrof(ClipRadarTileCoords) = ADDRESS_BY_VERSION(0x4A6020, 0x4A6110, 0x4A60A0);
int gaddrof(ClipRadarTileCoords) = GLOBAL_ADDRESS_BY_VERSION(0x4A6020, 0x4A6110, 0x4A60A0);

void ClipRadarTileCoords(int &x, int &y) {
    plugin::CallDynGlobal<int &, int &>(gaddrof(ClipRadarTileCoords), x, y);
}

int addrof(RequestMapSection) = ADDRESS_BY_VERSION(0x4A6060, 0x4A6150, 0x4A60E0);
int gaddrof(RequestMapSection) = GLOBAL_ADDRESS_BY_VERSION(0x4A6060, 0x4A6150, 0x4A60E0);

void RequestMapSection(int x, int y) {
    plugin::CallDynGlobal<int, int>(gaddrof(RequestMapSection), x, y);
}

int addrof(RemoveMapSection) = ADDRESS_BY_VERSION(0x4A60A0, 0x4A6190, 0x4A6120);
int gaddrof(RemoveMapSection) = GLOBAL_ADDRESS_BY_VERSION(0x4A60A0, 0x4A6190, 0x4A6120);

void RemoveMapSection(int x, int y) {
    plugin::CallDynGlobal<int, int>(gaddrof(RemoveMapSection), x, y);
}

int addrof(IsPointInsideRadar) = ADDRESS_BY_VERSION(0x4A6160, 0x4A6250, 0x4A61E0);
int gaddrof(IsPointInsideRadar) = GLOBAL_ADDRESS_BY_VERSION(0x4A6160, 0x4A6250, 0x4A61E0);

bool IsPointInsideRadar(CVector2D const &point) {
    return plugin::CallAndReturnDynGlobal<bool, CVector2D const &>(gaddrof(IsPointInsideRadar), point);
}

int addrof(GetTextureCorners) = ADDRESS_BY_VERSION(0x4A61C0, 0x4A62B0, 0x4A6240);
int gaddrof(GetTextureCorners) = GLOBAL_ADDRESS_BY_VERSION(0x4A61C0, 0x4A62B0, 0x4A6240);

void GetTextureCorners(int x, int y, CVector2D *out) {
    plugin::CallDynGlobal<int, int, CVector2D *>(gaddrof(GetTextureCorners), x, y, out);
}

int addrof(LineRadarBoxCollision) = ADDRESS_BY_VERSION(0x4A6250, 0x4A6340, 0x4A62D0);
int gaddrof(LineRadarBoxCollision) = GLOBAL_ADDRESS_BY_VERSION(0x4A6250, 0x4A6340, 0x4A62D0);

int LineRadarBoxCollision(CVector2D &out, CVector2D const &lineStart, CVector2D const &lineEnd) {
    return plugin::CallAndReturnDynGlobal<int, CVector2D &, CVector2D const &, CVector2D const &>(gaddrof(LineRadarBoxCollision), out, lineStart, lineEnd);
}
