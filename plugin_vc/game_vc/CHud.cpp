/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHud.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE wchar_t(&CHud::m_HelpMessageToPrint)[256] = *reinterpret_cast<wchar_t(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x78C5F8, 0x78C600, 0x78B600));
PLUGIN_VARIABLE wchar_t(&CHud::m_BigMessage)[6][128] = *reinterpret_cast<wchar_t(*)[6][128]>(GLOBAL_ADDRESS_BY_VERSION(0x78CF00, 0x78CF08, 0x78BF08));
PLUGIN_VARIABLE wchar_t(&CHud::m_LastHelpMessage)[256] = *reinterpret_cast<wchar_t(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x7D3E40, 0x7D3E48, 0x7D2E48));
PLUGIN_VARIABLE wchar_t(&CHud::m_Message)[256] = *reinterpret_cast<wchar_t(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x814F28, 0x814F30, 0x813F30));
PLUGIN_VARIABLE wchar_t(&CHud::m_HelpMessage)[256] = *reinterpret_cast<wchar_t(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x939028, 0x939030, 0x938030));
PLUGIN_VARIABLE unsigned int &CHud::m_WantedState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x94DB40, 0x94DB48, 0x94CB48));
PLUGIN_VARIABLE unsigned int &CHud::m_HelpMessageState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x94DBCC, 0x94DBD4, 0x94CBD4));
PLUGIN_VARIABLE int &CHud::m_WantedTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x94DD30, 0x94DD38, 0x94CD38));
PLUGIN_VARIABLE int &CHud::m_HelpMessageTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x94DD80, 0x94DD88, 0x94CD88));
PLUGIN_VARIABLE int &CHud::m_WeaponFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x974B70, 0x974B78, 0x973B78));
PLUGIN_VARIABLE unsigned int &CHud::m_LastTimeEnergyLost = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x974BF8, 0x974C00, 0x973C00));
PLUGIN_VARIABLE wchar_t *&CHud::m_pVehicleNameToPrint = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0x974C30, 0x974C38, 0x973C38));
PLUGIN_VARIABLE int &CHud::m_DisplayScoreFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x975094, 0x97509C, 0x97409C));
PLUGIN_VARIABLE int &CHud::m_EnergyLostFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9751B8, 0x9751C0, 0x9741C0));
PLUGIN_VARIABLE float &CHud::m_HelpMessageDisplayTime = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x975378, 0x975380, 0x974380));
PLUGIN_VARIABLE wchar_t *&CHud::m_pZoneName = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0x97537C, 0x975384, 0x974384));
PLUGIN_VARIABLE wchar_t *&CHud::m_pLastVehicleName = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0x978544, 0x97854C, 0x97754C));
PLUGIN_VARIABLE int &CHud::m_ZoneNameTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978590, 0x978598, 0x977598));
PLUGIN_VARIABLE int &CHud::m_EnergyLostTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978638, 0x978640, 0x977640));
PLUGIN_VARIABLE unsigned int &CHud::m_EnergyLostState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9786D0, 0x9786D8, 0x9776D8));
PLUGIN_VARIABLE int &CHud::m_WeaponTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97879C, 0x9787A4, 0x9777A4));
PLUGIN_VARIABLE unsigned int &CHud::m_WeaponState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x978808, 0x978810, 0x977810));
PLUGIN_VARIABLE unsigned int &CHud::m_ZoneState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x978D10, 0x978D18, 0x977D18));
PLUGIN_VARIABLE unsigned int &CHud::m_LastWanted = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x978D98, 0x978DA0, 0x977DA0));
PLUGIN_VARIABLE unsigned int &CHud::m_LastWeapon = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x978DA8, 0x978DB0, 0x977DB0));
PLUGIN_VARIABLE int &CHud::m_VehicleNameTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978E4C, 0x978E54, 0x977E54));
PLUGIN_VARIABLE wchar_t *&CHud::m_pLastZoneName = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0x983B84, 0x983B8C, 0x982B8C));
PLUGIN_VARIABLE unsigned int &CHud::m_ClockState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9B6DEC, 0x9B6DF4, 0x9B5DF4));
PLUGIN_VARIABLE int &CHud::m_HelpMessageFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9B6DF0, 0x9B6DF8, 0x9B5DF8));
PLUGIN_VARIABLE unsigned int &CHud::m_VehicleState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0CFD4, 0xA0CFDC, 0xA0BFDC));
PLUGIN_VARIABLE int &CHud::m_VehicleFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D9A0, 0xA0D9A8, 0xA0C9A8));
PLUGIN_VARIABLE int &CHud::m_WantedFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D9B0, 0xA0D9B8, 0xA0C9B8));
PLUGIN_VARIABLE wchar_t *&CHud::m_pVehicleName = *reinterpret_cast<wchar_t **>(GLOBAL_ADDRESS_BY_VERSION(0xA0FC98, 0xA0FCA0, 0xA0ECA0));
PLUGIN_VARIABLE int &CHud::m_ZoneFadeTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA10294, 0xA1029C, 0xA0F29C));
PLUGIN_VARIABLE unsigned int &CHud::m_LastDisplayScore = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA102A0, 0xA102A8, 0xA0F2A8));
PLUGIN_VARIABLE int &CHud::m_DisplayScoreTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA1067C, 0xA10684, 0xA0F684));
PLUGIN_VARIABLE CSprite2d(&CHud::Sprites)[69] = *reinterpret_cast<CSprite2d(*)[69]>(GLOBAL_ADDRESS_BY_VERSION(0xA10744, 0xA1074C, 0xA0F74C));
PLUGIN_VARIABLE unsigned int &CHud::m_DisplayScoreState = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA10928, 0xA10930, 0xA0F930));
PLUGIN_VARIABLE short &CHud::SpriteBrightness = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10980, 0xA10988, 0xA0F988));
PLUGIN_VARIABLE short &CHud::m_ItemToFlash = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A44, 0xA10A4C, 0xA0FA4C));
PLUGIN_VARIABLE bool &CHud::m_HelpMessageQuick = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AB4, 0xA10ABC, 0xA0FABC));
PLUGIN_VARIABLE bool &CHud::bScriptDontDisplayRadar = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AB6, 0xA10ABE, 0xA0FABE));
PLUGIN_VARIABLE bool &CHud::m_Wants_To_Draw_3dMarkers = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AFC, 0xA10B04, 0xA0FB04));
PLUGIN_VARIABLE bool &CHud::m_HelpMessageDisplayForever = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B17, 0xA10B1F, 0xA0FB1F));
PLUGIN_VARIABLE bool &CHud::m_Wants_To_Draw_Hud = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B45, 0xA10B4D, 0xA0FB4E));
PLUGIN_VARIABLE float(&BigMessageX)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x860C20, 0x860C28, 0x85FC28));
PLUGIN_VARIABLE float(&BigMessageInUse)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x938258, 0x938260, 0x937260));
PLUGIN_VARIABLE wchar_t(&LastBigMessage)[6][128] = *reinterpret_cast<wchar_t(*)[6][128]>(GLOBAL_ADDRESS_BY_VERSION(0x938A28, 0x938A30, 0x937A30));
PLUGIN_VARIABLE RwTexture *&gpCameraSightTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x94DD68, 0x94DD70, 0x94CD70));
PLUGIN_VARIABLE RwTexture *&gpLaserDotTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x975314, 0x97531C, 0x97431C));
PLUGIN_VARIABLE RwTexture *&gpRocketSightTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x975368, 0x975370, 0x974370));
PLUGIN_VARIABLE float &OddJob2XOffset = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x97873C, 0x978744, 0x977744));
PLUGIN_VARIABLE RwTexture *&gpLaserSightTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x978830, 0x978838, 0x977838));
PLUGIN_VARIABLE RwTexture *&gpSniperSightTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x9B5F04, 0x9B5F0C, 0x9B4F0C));
PLUGIN_VARIABLE float &PagerXOffset = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xA0DA60, 0xA0DA68, 0xA0CA68));
PLUGIN_VARIABLE float &OddJob2OffTimer = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xA0FC70, 0xA0FC78, 0xA0EC78));
PLUGIN_VARIABLE short(&CounterFlashTimer)[3] = *reinterpret_cast<short(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0xA10930, 0xA10938, 0xA0F938));
PLUGIN_VARIABLE short &OddJob2Timer = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA1097E, 0xA10986, 0xA0F986));
PLUGIN_VARIABLE short &TimerFlashTimer = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A2A, 0xA10A32, 0xA0FA32));
PLUGIN_VARIABLE unsigned short &OddJob2On = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A36, 0xA10A3E, 0xA0FA3E));
PLUGIN_VARIABLE unsigned char(&CounterOnLastFrame)[3] = *reinterpret_cast<unsigned char(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0xA10B12, 0xA10B1A, 0xA0FB1A));
PLUGIN_VARIABLE bool &TimerOnLastFrame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B6C, 0xA10B75, 0xA0FB76));

int addrof(CHud::Draw) = ADDRESS_BY_VERSION(0x557320, 0x557340, 0x557210);
int gaddrof(CHud::Draw) = GLOBAL_ADDRESS_BY_VERSION(0x557320, 0x557340, 0x557210);

void CHud::Draw() {
    plugin::CallDynGlobal(gaddrof(CHud::Draw));
}

int addrof(CHud::DrawAfterFade) = ADDRESS_BY_VERSION(0x5566E0, 0x556700, 0x5565D0);
int gaddrof(CHud::DrawAfterFade) = GLOBAL_ADDRESS_BY_VERSION(0x5566E0, 0x556700, 0x5565D0);

void CHud::DrawAfterFade() {
    plugin::CallDynGlobal(gaddrof(CHud::DrawAfterFade));
}

int addrof(CHud::DrawFadeState) = ADDRESS_BY_VERSION(0x55BD20, 0x55BD40, 0x55BC10);
int gaddrof(CHud::DrawFadeState) = GLOBAL_ADDRESS_BY_VERSION(0x55BD20, 0x55BD40, 0x55BC10);

void CHud::DrawFadeState(DRAW_FADE_STATE fadeState, int a2) {
    plugin::CallDynGlobal<DRAW_FADE_STATE, int>(gaddrof(CHud::DrawFadeState), fadeState, a2);
}

int addrof(CHud::GetRidOfAllHudMessages) = ADDRESS_BY_VERSION(0x55C200, 0x55C220, 0x55C0F0);
int gaddrof(CHud::GetRidOfAllHudMessages) = GLOBAL_ADDRESS_BY_VERSION(0x55C200, 0x55C220, 0x55C0F0);

void CHud::GetRidOfAllHudMessages() {
    plugin::CallDynGlobal(gaddrof(CHud::GetRidOfAllHudMessages));
}

int addrof(CHud::Initialise) = ADDRESS_BY_VERSION(0x55C8A0, 0x55C8C0, 0x55C790);
int gaddrof(CHud::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x55C8A0, 0x55C8C0, 0x55C790);

void CHud::Initialise() {
    plugin::CallDynGlobal(gaddrof(CHud::Initialise));
}

int addrof(CHud::IsHelpMessageBeingDisplayed) = ADDRESS_BY_VERSION(0x55BFB0, 0x55BFD0, 0x55BEA0);
int gaddrof(CHud::IsHelpMessageBeingDisplayed) = GLOBAL_ADDRESS_BY_VERSION(0x55BFB0, 0x55BFD0, 0x55BEA0);

bool CHud::IsHelpMessageBeingDisplayed() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CHud::IsHelpMessageBeingDisplayed));
}

int addrof(CHud::ReInitialise) = ADDRESS_BY_VERSION(0x55C440, 0x55C460, 0x55C330);
int gaddrof(CHud::ReInitialise) = GLOBAL_ADDRESS_BY_VERSION(0x55C440, 0x55C460, 0x55C330);

void CHud::ReInitialise() {
    plugin::CallDynGlobal(gaddrof(CHud::ReInitialise));
}

int addrof(CHud::ResetWastedText) = ADDRESS_BY_VERSION(0x556570, 0x556590, 0x556460);
int gaddrof(CHud::ResetWastedText) = GLOBAL_ADDRESS_BY_VERSION(0x556570, 0x556590, 0x556460);

void CHud::ResetWastedText() {
    plugin::CallDynGlobal(gaddrof(CHud::ResetWastedText));
}

int addrof_o(CHud::SetBigMessage, void (*)(wchar_t const *, unsigned short)) = ADDRESS_BY_VERSION(0x5565B0, 0x5565D0, 0x5564A0);
int gaddrof_o(CHud::SetBigMessage, void (*)(wchar_t const *, unsigned short)) = GLOBAL_ADDRESS_BY_VERSION(0x5565B0, 0x5565D0, 0x5564A0);

void CHud::SetBigMessage(wchar_t const *message, unsigned short style) {
    plugin::CallDynGlobal<wchar_t const *, unsigned short>(gaddrof_o(CHud::SetBigMessage, void (*)(wchar_t const *, unsigned short)), message, style);
}

int addrof_o(CHud::SetHelpMessage, void (*)(wchar_t const *, bool, bool)) = ADDRESS_BY_VERSION(0x55BFC0, 0x55BFE0, 0x55BEB0);
int gaddrof_o(CHud::SetHelpMessage, void (*)(wchar_t const *, bool, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x55BFC0, 0x55BFE0, 0x55BEB0);

void CHud::SetHelpMessage(wchar_t const *message, bool quickMessage, bool permanent) {
    plugin::CallDynGlobal<wchar_t const *, bool, bool>(gaddrof_o(CHud::SetHelpMessage, void (*)(wchar_t const *, bool, bool)), message, quickMessage, permanent);
}

int addrof_o(CHud::SetMessage, void (*)(wchar_t const *)) = ADDRESS_BY_VERSION(0x5566A0, 0x5566C0, 0x556590);
int gaddrof_o(CHud::SetMessage, void (*)(wchar_t const *)) = GLOBAL_ADDRESS_BY_VERSION(0x5566A0, 0x5566C0, 0x556590);

void CHud::SetMessage(wchar_t const *message) {
    plugin::CallDynGlobal<wchar_t const *>(gaddrof_o(CHud::SetMessage, void (*)(wchar_t const *)), message);
}

int addrof_o(CHud::SetPagerMessage, void (*)(wchar_t const *)) = ADDRESS_BY_VERSION(0x5565A0, 0x5565C0, 0x556490);
int gaddrof_o(CHud::SetPagerMessage, void (*)(wchar_t const *)) = GLOBAL_ADDRESS_BY_VERSION(0x5565A0, 0x5565C0, 0x556490);

void CHud::SetPagerMessage(wchar_t const *message) {
    plugin::CallDynGlobal<wchar_t const *>(gaddrof_o(CHud::SetPagerMessage, void (*)(wchar_t const *)), message);
}

int addrof_o(CHud::SetVehicleName, void (*)(wchar_t const *)) = ADDRESS_BY_VERSION(0x55BFA0, 0x55BFC0, 0x55BE90);
int gaddrof_o(CHud::SetVehicleName, void (*)(wchar_t const *)) = GLOBAL_ADDRESS_BY_VERSION(0x55BFA0, 0x55BFC0, 0x55BE90);

void CHud::SetVehicleName(wchar_t const *name) {
    plugin::CallDynGlobal<wchar_t const *>(gaddrof_o(CHud::SetVehicleName, void (*)(wchar_t const *)), name);
}

int addrof_o(CHud::SetZoneName, void (*)(wchar_t const *)) = ADDRESS_BY_VERSION(0x55C1F0, 0x55C210, 0x55C0E0);
int gaddrof_o(CHud::SetZoneName, void (*)(wchar_t const *)) = GLOBAL_ADDRESS_BY_VERSION(0x55C1F0, 0x55C210, 0x55C0E0);

void CHud::SetZoneName(wchar_t const *name) {
    plugin::CallDynGlobal<wchar_t const *>(gaddrof_o(CHud::SetZoneName, void (*)(wchar_t const *)), name);
}

int addrof(CHud::Shutdown) = ADDRESS_BY_VERSION(0x55C7F0, 0x55C810, 0x55C6E0);
int gaddrof(CHud::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x55C7F0, 0x55C810, 0x55C6E0);

void CHud::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CHud::Shutdown));
}
