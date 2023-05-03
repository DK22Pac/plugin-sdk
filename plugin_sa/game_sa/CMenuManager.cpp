/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma warning(disable : 26495)
#include "CMenuManager.h"

CMenuManager &FrontEndMenuManager = *(CMenuManager *)0xBA6748;

bool& CMenuManager::bInvertMouseX = *(bool*)0xBA6744;
bool& CMenuManager::bInvertMouseY = *(bool*)0xBA6745;
int& CMenuManager::nLastMenuPage = *(int*)0x8CDFF0;

char** frontend1TexNames = (char**)0x8CDF28;
char** frontend2TexNames = (char**)0x8CDF90;
char** frontend3TexNames = (char**)0x8CDFD0;
char** frontend4TexNames = (char**)0x8CDFE0;

bool& bBriefHistoryAllowedToUpdate = *(bool*)0x8CDFF9;

CMenuScreen* aScreens = (CMenuScreen*)0x8CE008;

CMenuManager::CMenuManager() {
    plugin::CallMethod<0x574350, CMenuManager*>(this);
}

CMenuManager::~CMenuManager() {
    plugin::CallMethod<0x579440, CMenuManager*>(this);
}

char CMenuManager::AdditionalOptionInput(char input, char enter) {
    return plugin::CallMethodAndReturn<char, 0x5773D0, CMenuManager*, char, char>(this, input, enter);
}

void CMenuManager::CentreMousePointer() {
    plugin::CallMethod<0x57C520, CMenuManager*>(this);
}

bool CMenuManager::CheckCodesForControls(int code) {
    return plugin::CallMethodAndReturn<char, 0x57DB20, CMenuManager*, int>(this, code);
}

bool CMenuManager::CheckFrontEndDownInput() {
    return plugin::CallMethodAndReturn<char, 0x5738B0, CMenuManager*>(this);
}

bool CMenuManager::CheckFrontEndLeftInput() {
    return plugin::CallMethodAndReturn<char, 0x573920, CMenuManager*>(this);
}

bool CMenuManager::CheckFrontEndRightInput() {
    return plugin::CallMethodAndReturn<char, 0x573990, CMenuManager*>(this);
}

bool CMenuManager::CheckFrontEndUpInput() {
    return plugin::CallMethodAndReturn<char, 0x573840, CMenuManager*>(this);
}

bool CMenuManager::CheckHover(float x1, float x2, float y1, float y2) {
    return plugin::CallMethodAndReturn<bool, 0x57C4F0, CMenuManager*>(this, x1, x2, y1, y2);
}

bool CMenuManager::CheckMissionPackValidMenu() {
    return plugin::CallMethodAndReturn<char, 0x57D720, CMenuManager*>(this);
}

bool CMenuManager::CheckRedefineControlInput() {
    return plugin::CallMethodAndReturn<char, 0x57E4D0, CMenuManager*>(this);
}

void CMenuManager::CheckSliderMovement(float input) {
    plugin::CallMethod<0x57E4D0, CMenuManager*>(this, input);
}

void CMenuManager::DisplayHelperText(char* text) {
    plugin::CallMethod<0x57E4D0, CMenuManager*>(this, text);
}

int CMenuManager::DisplaySlider(float posX, float posY, float beginHeight, float endHeight, float distBetweenRects, float filledAmount, CRGBA const& colour) {
    return plugin::CallMethodAndReturn<int, 0x576860, CMenuManager*>(this, posX, posY, beginHeight, endHeight, distBetweenRects, filledAmount, colour);
}

signed int CMenuManager::DoSettingsBeforeStartingAGame() {
    return plugin::CallMethodAndReturn<signed int, 0x573330, CMenuManager*>(this);
}

char CMenuManager::DrawBackground() {
    return plugin::CallMethodAndReturn<char, 0x57B750, CMenuManager*>(this);
}

char CMenuManager::DrawControllerScreenExtraText(int unk) {
    return plugin::CallMethodAndReturn<char, 0x57D8D0, CMenuManager*>(this, unk);
}

char CMenuManager::DrawControllerSetupScreen() {
    return plugin::CallMethodAndReturn<char, 0x57F300, CMenuManager*>(this);
}

void CMenuManager::DrawFrontEnd() {
    plugin::CallMethod<0x57C290, CMenuManager*>(this);
}

void CMenuManager::DrawQuitGameScreen(int unused) {
    plugin::CallMethod<0x57D860, CMenuManager*>(this, unused);
}

void CMenuManager::DrawStandardMenu(bool header) {
    plugin::CallMethod<0x5794A0, CMenuManager*>(this, header);
}

void CMenuManager::DrawWindow(const CRect& coords, const char* pKey, unsigned char nColour, CRGBA backColor, bool Unused, bool bBackground) {
    plugin::CallMethod<0x573EE0, CMenuManager*>(this, coords, pKey, nColour, backColor, Unused, bBackground);
}

void CMenuManager::DrawWindowedText(float x1, float y1, float x2, float y2, char* gxt, int align) {
    plugin::CallMethod<0x578F50, CMenuManager*>(this, x1, y1, x2, y2, gxt, align);
}

unsigned char CMenuManager::GetNumberOfMenuOptions() {
    return plugin::CallMethodAndReturn<unsigned char, 0x573E70, CMenuManager*>(this);
}

bool CMenuManager::HasLanguageChanged() {
    return plugin::CallMethodAndReturn<bool, 0x573CD0, CMenuManager*>(this);
}

void CMenuManager::Initialise() {
    plugin::CallMethod<0x5744D0, CMenuManager*>(this);
}

void CMenuManager::InitialiseChangedLanguageSettings(bool reInitControls) {
    plugin::CallMethod<0x573260, CMenuManager*>(this, reInitControls);
}

int CMenuManager::JumpToGenericMessageScreen(char screen, char* header, char* action) {
    return plugin::CallMethodAndReturn<int, 0x576AE0, CMenuManager*>(this, screen, header, action);
}

void CMenuManager::LoadAllTextures() {
    plugin::CallMethod<0x572EC0, CMenuManager*>(this);
}

void CMenuManager::LoadSettings() {
    plugin::CallMethod<0x57C8F0, CMenuManager*>(this);
}

void CMenuManager::MessageScreen(char* message, CRGBA const& col, bool frame) {
    plugin::CallMethod<0x579330, CMenuManager*>(this, message, col, frame);
}

float CMenuManager::PrintBriefs() {
    return plugin::CallMethodAndReturn<float, 0x576320, CMenuManager*>(this);
}

char CMenuManager::PrintMap() {
    return plugin::CallMethodAndReturn<char, 0x575130, CMenuManager*>(this);
}

char CMenuManager::PrintRadioStationList() {
    return plugin::CallMethodAndReturn<char, 0x5746F0, CMenuManager*>(this);
}

char CMenuManager::PrintStats() {
    return plugin::CallMethodAndReturn<char, 0x574900, CMenuManager*>(this);
}

int CMenuManager::Process() {
    return plugin::CallMethodAndReturn<int, 0x57B440, CMenuManager*>(this);
}

void CMenuManager::ProcessFileActions() {
    plugin::CallMethod<0x578D60, CMenuManager*>(this);
}

void CMenuManager::ProcessMenuOptions(char input, char* exit, char enter) {
    plugin::CallMethod<0x576FE0, CMenuManager*>(this, input, exit, enter);
}

void CMenuManager::ProcessMissionPackNewGame() {
    plugin::CallMethod<0x57D520, CMenuManager*>(this);
}

char CMenuManager::ProcessPCMenuOptions(char input, char enter) {
    return plugin::CallMethodAndReturn<char, 0x57CD50, CMenuManager*>(this, input, enter);
}

void CMenuManager::ProcessStreaming(bool all) {
    plugin::CallMethod<0x573CF0, CMenuManager*>(this, all);
}

void CMenuManager::ProcessUserInput(char down, char up, char enter, char exit, char input) {
    plugin::CallMethod<0x57B480, CMenuManager*>(this, down, up, enter, exit, input);
}

char CMenuManager::RedefineScreenUserInput(int enter, int exit) {
    return plugin::CallMethodAndReturn<char, 0x57EF50, CMenuManager*>(this, enter, exit);
}

void CMenuManager::ResetHelperText() {
    plugin::CallMethod<0x57CD30, CMenuManager*>(this);
}

void CMenuManager::SaveLoadFileError_SetUpErrorScreen() {
    plugin::CallMethod<0x57C490, CMenuManager*>(this);
}

void CMenuManager::SaveSettings() {
    plugin::CallMethod<0x57C660, CMenuManager*>(this);
}

int CMenuManager::SaveStatsToFile() {
    return plugin::CallMethodAndReturn<int, 0x57DDE0, CMenuManager*>(this);
}

void CMenuManager::ScrollRadioStations(char input) {
    plugin::CallMethod<0x573A00, CMenuManager*>(this, input);
}

char CMenuManager::SetDefaultPreferences(char page) {
    return plugin::CallMethodAndReturn<char, 0x573AE0, CMenuManager*>(this, page);
}

void CMenuManager::SetFrontEndRenderStates() {
    plugin::CallMethod<0x573A60, CMenuManager*>(this);
}

int CMenuManager::SetHelperText(int index) {
    return plugin::CallMethodAndReturn<int, 0x57CD10, CMenuManager*>(this, index);
}

void CMenuManager::SmallMessageScreen(char* message) {
    plugin::CallMethod<0x574010, CMenuManager*>(this, message);
}

float CMenuManager::StretchX(float x) {
    return plugin::CallMethodAndReturn<float, 0x5733E0, CMenuManager*>(this, x);
}

float CMenuManager::StretchY(float y) {
    return plugin::CallMethodAndReturn<float, 0x573410, CMenuManager*>(this, y);
}

void CMenuManager::SwapTexturesRound(bool force) {
    plugin::CallMethod<0x5730A0, CMenuManager*>(this, force);
}

void CMenuManager::SwitchMenuOnAndOff() {
    plugin::CallMethod<0x576B70, CMenuManager*>(this);
}

char CMenuManager::SwitchToNewScreen(char page) {
    return plugin::CallMethodAndReturn<char, 0x573680, CMenuManager*>(this, page);
}

void CMenuManager::UnloadTextures() {
    plugin::CallMethod<0x574630, CMenuManager*>(this);
}

void CMenuManager::UserInput() {
    plugin::CallMethod<0x57FD70, CMenuManager*>(this);
}

void CMenuManager::RequestFrontEndShutDown() {
    m_bShutDownFrontEndRequested = true;
}

void CMenuManager::RequestFrontEndStartUp() {
    m_bStartUpFrontEndRequested = true;
}
