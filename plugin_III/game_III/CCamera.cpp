/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE bool &CCamera::m_bUseMouse3rdPerson = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x5F03D8, 0x5F03D8, 0x5FD3D8));
PLUGIN_VARIABLE int(&SequenceOfCams)[15] = *reinterpret_cast<int(*)[15]>(GLOBAL_ADDRESS_BY_VERSION(0x5F0AB0, 0x5F09A8, 0x5FD9A8));
PLUGIN_VARIABLE int(&SequenceOfPedCams)[5] = *reinterpret_cast<int(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x5F0AEC, 0x5F09E4, 0x5FD9E4));
PLUGIN_VARIABLE CCamera &TheCamera = *reinterpret_cast<CCamera *>(GLOBAL_ADDRESS_BY_VERSION(0x6FACF8, 0x6FACF8, 0x70AE38));
PLUGIN_VARIABLE bool &bDidWeProcessAnyCinemaCam = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD46, 0x95CEFE, 0x96D03E));

int dtor_addr(CCamera) = ADDRESS_BY_VERSION(0x473250, 0x473250, 0x473250);
int dtor_gaddr(CCamera) = GLOBAL_ADDRESS_BY_VERSION(0x473250, 0x473250, 0x473250);

int del_dtor_addr(CCamera) = ADDRESS_BY_VERSION(0x4731C0, 0x4731C0, 0x4731C0);
int del_dtor_gaddr(CCamera) = GLOBAL_ADDRESS_BY_VERSION(0x4731C0, 0x4731C0, 0x4731C0);

int addrof(CCamera::CalculateDerivedValues) = ADDRESS_BY_VERSION(0x46EEA0, 0x46EE80, 0x46EE80);
int gaddrof(CCamera::CalculateDerivedValues) = GLOBAL_ADDRESS_BY_VERSION(0x46EEA0, 0x46EE80, 0x46EE80);

void CCamera::CalculateDerivedValues() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::CalculateDerivedValues), this);
}

int addrof(CCamera::CamControl) = ADDRESS_BY_VERSION(0x468250, 0x468260, 0x468260);
int gaddrof(CCamera::CamControl) = GLOBAL_ADDRESS_BY_VERSION(0x468250, 0x468260, 0x468260);

void CCamera::CamControl() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::CamControl), this);
}

int addrof(CCamera::CamShake) = ADDRESS_BY_VERSION(0x46B200, 0x46B1D0, 0x46B1D0);
int gaddrof(CCamera::CamShake) = GLOBAL_ADDRESS_BY_VERSION(0x46B200, 0x46B1D0, 0x46B1D0);

void CCamera::CamShake(float strength, float x, float y, float z) {
    plugin::CallMethodDynGlobal<CCamera *, float, float, float, float>(gaddrof(CCamera::CamShake), this, strength, x, y, z);
}

int addrof(CCamera::ClearPlayerWeaponMode) = ADDRESS_BY_VERSION(0x46B350, 0x46B320, 0x46B320);
int gaddrof(CCamera::ClearPlayerWeaponMode) = GLOBAL_ADDRESS_BY_VERSION(0x46B350, 0x46B320, 0x46B320);

void CCamera::ClearPlayerWeaponMode() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ClearPlayerWeaponMode), this);
}

int addrof(CCamera::DontProcessObbeCinemaCamera) = ADDRESS_BY_VERSION(0x46B380, 0x46B350, 0x46B350);
int gaddrof(CCamera::DontProcessObbeCinemaCamera) = GLOBAL_ADDRESS_BY_VERSION(0x46B380, 0x46B350, 0x46B350);

void CCamera::DontProcessObbeCinemaCamera() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::DontProcessObbeCinemaCamera), this);
}

int addrof(CCamera::DrawBordersForWideScreen) = ADDRESS_BY_VERSION(0x46B430, 0x46B400, 0x46B400);
int gaddrof(CCamera::DrawBordersForWideScreen) = GLOBAL_ADDRESS_BY_VERSION(0x46B430, 0x46B400, 0x46B400);

void CCamera::DrawBordersForWideScreen() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::DrawBordersForWideScreen), this);
}

int addrof(CCamera::Fade) = ADDRESS_BY_VERSION(0x46B3A0, 0x46B370, 0x46B370);
int gaddrof(CCamera::Fade) = GLOBAL_ADDRESS_BY_VERSION(0x46B3A0, 0x46B370, 0x46B370);

void CCamera::Fade(float timeOut, short direction) {
    plugin::CallMethodDynGlobal<CCamera *, float, short>(gaddrof(CCamera::Fade), this, timeOut, direction);
}

int addrof(CCamera::Find3rdPersonCamTargetVector) = ADDRESS_BY_VERSION(0x46B580, 0x46B550, 0x46B550);
int gaddrof(CCamera::Find3rdPersonCamTargetVector) = GLOBAL_ADDRESS_BY_VERSION(0x46B580, 0x46B550, 0x46B550);

void CCamera::Find3rdPersonCamTargetVector(float dist, CVector pos, CVector &source, CVector &target) {
    plugin::CallMethodDynGlobal<CCamera *, float, CVector, CVector &, CVector &>(gaddrof(CCamera::Find3rdPersonCamTargetVector), this, dist, pos, source, target);
}

int addrof(CCamera::Find3rdPersonQuickAimPitch) = ADDRESS_BY_VERSION(0x46B850, 0x46B820, 0x46B820);
int gaddrof(CCamera::Find3rdPersonQuickAimPitch) = GLOBAL_ADDRESS_BY_VERSION(0x46B850, 0x46B820, 0x46B820);

float CCamera::Find3rdPersonQuickAimPitch() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *>(gaddrof(CCamera::Find3rdPersonQuickAimPitch), this);
}

int addrof(CCamera::FinishCutscene) = ADDRESS_BY_VERSION(0x46B560, 0x46B530, 0x46B530);
int gaddrof(CCamera::FinishCutscene) = GLOBAL_ADDRESS_BY_VERSION(0x46B560, 0x46B530, 0x46B530);

void CCamera::FinishCutscene() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::FinishCutscene), this);
}

int addrof(CCamera::GetCameraMatrix) = ADDRESS_BY_VERSION(0x42C8B0, 0x42C8B0, 0x42C8B0);
int gaddrof(CCamera::GetCameraMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x42C8B0, 0x42C8B0, 0x42C8B0);

CMatrix *CCamera::GetCameraMatrix() {
    return plugin::CallMethodAndReturnDynGlobal<CMatrix *, CCamera *>(gaddrof(CCamera::GetCameraMatrix), this);
}

int addrof(CCamera::GetCutSceneFinishTime) = ADDRESS_BY_VERSION(0x46B920, 0x46B8F0, 0x46B8F0);
int gaddrof(CCamera::GetCutSceneFinishTime) = GLOBAL_ADDRESS_BY_VERSION(0x46B920, 0x46B8F0, 0x46B8F0);

unsigned int CCamera::GetCutSceneFinishTime() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CCamera *>(gaddrof(CCamera::GetCutSceneFinishTime), this);
}

int addrof(CCamera::GetFading) = ADDRESS_BY_VERSION(0x46B970, 0x46B940, 0x46B940);
int gaddrof(CCamera::GetFading) = GLOBAL_ADDRESS_BY_VERSION(0x46B970, 0x46B940, 0x46B940);

bool CCamera::GetFading() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::GetFading), this);
}

int addrof(CCamera::GetFadingDirection) = ADDRESS_BY_VERSION(0x46B980, 0x46B950, 0x46B950);
int gaddrof(CCamera::GetFadingDirection) = GLOBAL_ADDRESS_BY_VERSION(0x46B980, 0x46B950, 0x46B950);

int CCamera::GetFadingDirection() {
    return plugin::CallMethodAndReturnDynGlobal<int, CCamera *>(gaddrof(CCamera::GetFadingDirection), this);
}

int addrof(CCamera::GetGameCamPosition) = ADDRESS_BY_VERSION(0x46BA10, 0x46B9E0, 0x46B9E0);
int gaddrof(CCamera::GetGameCamPosition) = GLOBAL_ADDRESS_BY_VERSION(0x46BA10, 0x46B9E0, 0x46B9E0);

CVector *CCamera::GetGameCamPosition() {
    return plugin::CallMethodAndReturnDynGlobal<CVector *, CCamera *>(gaddrof(CCamera::GetGameCamPosition), this);
}

int addrof(CCamera::GetLookDirection) = ADDRESS_BY_VERSION(0x46BA50, 0x46BA20, 0x46BA20);
int gaddrof(CCamera::GetLookDirection) = GLOBAL_ADDRESS_BY_VERSION(0x46BA50, 0x46BA20, 0x46BA20);

int CCamera::GetLookDirection() {
    return plugin::CallMethodAndReturnDynGlobal<int, CCamera *>(gaddrof(CCamera::GetLookDirection), this);
}

int addrof(CCamera::GetLookingForwardFirstPerson) = ADDRESS_BY_VERSION(0x46BA90, 0x46BA60, 0x46BA60);
int gaddrof(CCamera::GetLookingForwardFirstPerson) = GLOBAL_ADDRESS_BY_VERSION(0x46BA90, 0x46BA60, 0x46BA60);

bool CCamera::GetLookingForwardFirstPerson() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::GetLookingForwardFirstPerson), this);
}

int addrof(CCamera::GetLookingLRBFirstPerson) = ADDRESS_BY_VERSION(0x46BA20, 0x46B9F0, 0x46B9F0);
int gaddrof(CCamera::GetLookingLRBFirstPerson) = GLOBAL_ADDRESS_BY_VERSION(0x46BA20, 0x46B9F0, 0x46B9F0);

bool CCamera::GetLookingLRBFirstPerson() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::GetLookingLRBFirstPerson), this);
}

int addrof(CCamera::GetPositionAlongSpline) = ADDRESS_BY_VERSION(0x46BAC0, 0x46BA90, 0x46BA90);
int gaddrof(CCamera::GetPositionAlongSpline) = GLOBAL_ADDRESS_BY_VERSION(0x46BAC0, 0x46BA90, 0x46BA90);

float CCamera::GetPositionAlongSpline() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *>(gaddrof(CCamera::GetPositionAlongSpline), this);
}

int addrof(CCamera::GetScreenFadeStatus) = ADDRESS_BY_VERSION(0x46B9C0, 0x46B990, 0x46B990);
int gaddrof(CCamera::GetScreenFadeStatus) = GLOBAL_ADDRESS_BY_VERSION(0x46B9C0, 0x46B990, 0x46B990);

int CCamera::GetScreenFadeStatus() {
    return plugin::CallMethodAndReturnDynGlobal<int, CCamera *>(gaddrof(CCamera::GetScreenFadeStatus), this);
}

int addrof(CCamera::Get_Just_Switched_Status) = ADDRESS_BY_VERSION(0x46B9B0, 0x46B980, 0x46B980);
int gaddrof(CCamera::Get_Just_Switched_Status) = GLOBAL_ADDRESS_BY_VERSION(0x46B9B0, 0x46B980, 0x46B980);

bool CCamera::Get_Just_Switched_Status() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::Get_Just_Switched_Status), this);
}

int addrof(CCamera::Init) = ADDRESS_BY_VERSION(0x46BAD0, 0x46BAA0, 0x46BAA0);
int gaddrof(CCamera::Init) = GLOBAL_ADDRESS_BY_VERSION(0x46BAD0, 0x46BAA0, 0x46BAA0);

void CCamera::Init() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Init), this);
}

int addrof(CCamera::InitialiseCameraForDebugMode) = ADDRESS_BY_VERSION(0x46BEB0, 0x46BE90, 0x46BE90);
int gaddrof(CCamera::InitialiseCameraForDebugMode) = GLOBAL_ADDRESS_BY_VERSION(0x46BEB0, 0x46BE90, 0x46BE90);

void CCamera::InitialiseCameraForDebugMode() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::InitialiseCameraForDebugMode), this);
}

int addrof(CCamera::IsItTimeForNewcam) = ADDRESS_BY_VERSION(0x46BF10, 0x46BEF0, 0x46BEF0);
int gaddrof(CCamera::IsItTimeForNewcam) = GLOBAL_ADDRESS_BY_VERSION(0x46BF10, 0x46BEF0, 0x46BEF0);

bool CCamera::IsItTimeForNewcam(int obbeMode, int time) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, int, int>(gaddrof(CCamera::IsItTimeForNewcam), this, obbeMode, time);
}

int addrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, CMatrix const *)) = ADDRESS_BY_VERSION(0x42C760, 0x42C760, 0x42C760);
int gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, CMatrix const *)) = GLOBAL_ADDRESS_BY_VERSION(0x42C760, 0x42C760, 0x42C760);

bool CCamera::IsSphereVisible(CVector const &center, float radius, CMatrix const *matrix) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CVector const &, float, CMatrix const *>(gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, CMatrix const *)), this, center, radius, matrix);
}

int addrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float)) = ADDRESS_BY_VERSION(0x43D3B0, 0x43D3B0, 0x43D3B0);
int gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float)) = GLOBAL_ADDRESS_BY_VERSION(0x43D3B0, 0x43D3B0, 0x43D3B0);

bool CCamera::IsSphereVisible(CVector const &center, float radius) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CVector const &, float>(gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float)), this, center, radius);
}

int addrof(CCamera::LoadPathSplines) = ADDRESS_BY_VERSION(0x46D1D0, 0x46D1B0, 0x46D1B0);
int gaddrof(CCamera::LoadPathSplines) = GLOBAL_ADDRESS_BY_VERSION(0x46D1D0, 0x46D1B0, 0x46D1B0);

void CCamera::LoadPathSplines(int file) {
    plugin::CallMethodDynGlobal<CCamera *, int>(gaddrof(CCamera::LoadPathSplines), this, file);
}

int addrof(CCamera::LoadTrainCamNodes) = ADDRESS_BY_VERSION(0x46C9E0, 0x46C9C0, 0x46C9C0);
int gaddrof(CCamera::LoadTrainCamNodes) = GLOBAL_ADDRESS_BY_VERSION(0x46C9E0, 0x46C9C0, 0x46C9C0);

void CCamera::LoadTrainCamNodes(char const *name) {
    plugin::CallMethodDynGlobal<CCamera *, char const *>(gaddrof(CCamera::LoadTrainCamNodes), this, name);
}

int addrof(CCamera::Process) = ADDRESS_BY_VERSION(0x46D3F0, 0x46D3D0, 0x46D3D0);
int gaddrof(CCamera::Process) = GLOBAL_ADDRESS_BY_VERSION(0x46D3F0, 0x46D3D0, 0x46D3D0);

void CCamera::Process() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Process), this);
}

int addrof(CCamera::ProcessFade) = ADDRESS_BY_VERSION(0x46F080, 0x46F060, 0x46F060);
int gaddrof(CCamera::ProcessFade) = GLOBAL_ADDRESS_BY_VERSION(0x46F080, 0x46F060, 0x46F060);

void CCamera::ProcessFade() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessFade), this);
}

int addrof(CCamera::ProcessMusicFade) = ADDRESS_BY_VERSION(0x46F1E0, 0x46F1C0, 0x46F1C0);
int gaddrof(CCamera::ProcessMusicFade) = GLOBAL_ADDRESS_BY_VERSION(0x46F1E0, 0x46F1C0, 0x46F1C0);

void CCamera::ProcessMusicFade() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessMusicFade), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraCar) = ADDRESS_BY_VERSION(0x46F3E0, 0x46F3C0, 0x46F3C0);
int gaddrof(CCamera::ProcessObbeCinemaCameraCar) = GLOBAL_ADDRESS_BY_VERSION(0x46F3E0, 0x46F3C0, 0x46F3C0);

void CCamera::ProcessObbeCinemaCameraCar() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraCar), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraPed) = ADDRESS_BY_VERSION(0x46F520, 0x46F500, 0x46F500);
int gaddrof(CCamera::ProcessObbeCinemaCameraPed) = GLOBAL_ADDRESS_BY_VERSION(0x46F520, 0x46F500, 0x46F500);

void CCamera::ProcessObbeCinemaCameraPed() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraPed), this);
}

int addrof(CCamera::ProcessWideScreenOn) = ADDRESS_BY_VERSION(0x46F8E0, 0x46F8C0, 0x46F8C0);
int gaddrof(CCamera::ProcessWideScreenOn) = GLOBAL_ADDRESS_BY_VERSION(0x46F8E0, 0x46F8C0, 0x46F8C0);

void CCamera::ProcessWideScreenOn() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessWideScreenOn), this);
}

int addrof(CCamera::Process_Train_Camera_Control) = ADDRESS_BY_VERSION(0x46F600, 0x46F5E0, 0x46F5E0);
int gaddrof(CCamera::Process_Train_Camera_Control) = GLOBAL_ADDRESS_BY_VERSION(0x46F600, 0x46F5E0, 0x46F5E0);

void CCamera::Process_Train_Camera_Control() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Process_Train_Camera_Control), this);
}

int addrof(CCamera::RenderMotionBlur) = ADDRESS_BY_VERSION(0x46F940, 0x46F920, 0x46F920);
int gaddrof(CCamera::RenderMotionBlur) = GLOBAL_ADDRESS_BY_VERSION(0x46F940, 0x46F920, 0x46F920);

void CCamera::RenderMotionBlur() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::RenderMotionBlur), this);
}

int addrof(CCamera::Restore) = ADDRESS_BY_VERSION(0x46F990, 0x46F970, 0x46F970);
int gaddrof(CCamera::Restore) = GLOBAL_ADDRESS_BY_VERSION(0x46F990, 0x46F970, 0x46F970);

void CCamera::Restore() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Restore), this);
}

int addrof(CCamera::RestoreWithJumpCut) = ADDRESS_BY_VERSION(0x46FAE0, 0x46FAC0, 0x46FAC0);
int gaddrof(CCamera::RestoreWithJumpCut) = GLOBAL_ADDRESS_BY_VERSION(0x46FAE0, 0x46FAC0, 0x46FAC0);

void CCamera::RestoreWithJumpCut() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::RestoreWithJumpCut), this);
}

int addrof(CCamera::SetCamCutSceneOffSet) = ADDRESS_BY_VERSION(0x46FC30, 0x46FC10, 0x46FC10);
int gaddrof(CCamera::SetCamCutSceneOffSet) = GLOBAL_ADDRESS_BY_VERSION(0x46FC30, 0x46FC10, 0x46FC10);

void CCamera::SetCamCutSceneOffSet(CVector const &pos) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const &>(gaddrof(CCamera::SetCamCutSceneOffSet), this, pos);
}

int addrof(CCamera::SetCamPositionForFixedMode) = ADDRESS_BY_VERSION(0x46FCC0, 0x46FCA0, 0x46FCA0);
int gaddrof(CCamera::SetCamPositionForFixedMode) = GLOBAL_ADDRESS_BY_VERSION(0x46FCC0, 0x46FCA0, 0x46FCA0);

void CCamera::SetCamPositionForFixedMode(CVector const &source, CVector const &offset) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const &, CVector const &>(gaddrof(CCamera::SetCamPositionForFixedMode), this, source, offset);
}

int addrof(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString) = ADDRESS_BY_VERSION(0x46FC60, 0x46FC40, 0x46FC40);
int gaddrof(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString) = GLOBAL_ADDRESS_BY_VERSION(0x46FC60, 0x46FC40, 0x46FC40);

void CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString), this);
}

int addrof(CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString) = ADDRESS_BY_VERSION(0x46FC90, 0x46FC70, 0x46FC70);
int gaddrof(CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString) = GLOBAL_ADDRESS_BY_VERSION(0x46FC90, 0x46FC70, 0x46FC70);

void CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString), this);
}

int addrof(CCamera::SetFadeColour) = ADDRESS_BY_VERSION(0x46FD00, 0x46FCE0, 0x46FCE0);
int gaddrof(CCamera::SetFadeColour) = GLOBAL_ADDRESS_BY_VERSION(0x46FD00, 0x46FCE0, 0x46FCE0);

void CCamera::SetFadeColour(unsigned char red, unsigned char green, unsigned char blue) {
    plugin::CallMethodDynGlobal<CCamera *, unsigned char, unsigned char, unsigned char>(gaddrof(CCamera::SetFadeColour), this, red, green, blue);
}

int addrof(CCamera::SetMotionBlur) = ADDRESS_BY_VERSION(0x46FD40, 0x46FD20, 0x46FD20);
int gaddrof(CCamera::SetMotionBlur) = GLOBAL_ADDRESS_BY_VERSION(0x46FD40, 0x46FD20, 0x46FD20);

void CCamera::SetMotionBlur(int red, int green, int blue, int value, int type) {
    plugin::CallMethodDynGlobal<CCamera *, int, int, int, int, int>(gaddrof(CCamera::SetMotionBlur), this, red, green, blue, value, type);
}

int addrof(CCamera::SetMotionBlurAlpha) = ADDRESS_BY_VERSION(0x46FD80, 0x46FD60, 0x46FD60);
int gaddrof(CCamera::SetMotionBlurAlpha) = GLOBAL_ADDRESS_BY_VERSION(0x46FD80, 0x46FD60, 0x46FD60);

void CCamera::SetMotionBlurAlpha(int alpha) {
    plugin::CallMethodDynGlobal<CCamera *, int>(gaddrof(CCamera::SetMotionBlurAlpha), this, alpha);
}

int addrof(CCamera::SetNearClipScript) = ADDRESS_BY_VERSION(0x46FD90, 0x46FD70, 0x46FD70);
int gaddrof(CCamera::SetNearClipScript) = GLOBAL_ADDRESS_BY_VERSION(0x46FD90, 0x46FD70, 0x46FD70);

void CCamera::SetNearClipScript(float clip) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof(CCamera::SetNearClipScript), this, clip);
}

int addrof(CCamera::SetNewPlayerWeaponMode) = ADDRESS_BY_VERSION(0x46FDB0, 0x46FD90, 0x46FD90);
int gaddrof(CCamera::SetNewPlayerWeaponMode) = GLOBAL_ADDRESS_BY_VERSION(0x46FDB0, 0x46FD90, 0x46FD90);

void CCamera::SetNewPlayerWeaponMode(short mode, short minZoom, short maxZoom) {
    plugin::CallMethodDynGlobal<CCamera *, short, short, short>(gaddrof(CCamera::SetNewPlayerWeaponMode), this, mode, minZoom, maxZoom);
}

int addrof(CCamera::SetParametersForScriptInterpolation) = ADDRESS_BY_VERSION(0x46FDE0, 0x46FDC0, 0x46FDC0);
int gaddrof(CCamera::SetParametersForScriptInterpolation) = GLOBAL_ADDRESS_BY_VERSION(0x46FDE0, 0x46FDC0, 0x46FDC0);

void CCamera::SetParametersForScriptInterpolation(float stopMoving, float catchUp, unsigned int time) {
    plugin::CallMethodDynGlobal<CCamera *, float, float, unsigned int>(gaddrof(CCamera::SetParametersForScriptInterpolation), this, stopMoving, catchUp, time);
}

int addrof(CCamera::SetPercentAlongCutScene) = ADDRESS_BY_VERSION(0x46FE20, 0x46FE00, 0x46FE00);
int gaddrof(CCamera::SetPercentAlongCutScene) = GLOBAL_ADDRESS_BY_VERSION(0x46FE20, 0x46FE00, 0x46FE00);

void CCamera::SetPercentAlongCutScene(float percent) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof(CCamera::SetPercentAlongCutScene), this, percent);
}

int addrof(CCamera::SetRwCamera) = ADDRESS_BY_VERSION(0x46FEC0, 0x46FEA0, 0x46FEA0);
int gaddrof(CCamera::SetRwCamera) = GLOBAL_ADDRESS_BY_VERSION(0x46FEC0, 0x46FEA0, 0x46FEA0);

void CCamera::SetRwCamera(RwCamera *rwCamera) {
    plugin::CallMethodDynGlobal<CCamera *, RwCamera *>(gaddrof(CCamera::SetRwCamera), this, rwCamera);
}

int addrof(CCamera::SetWideScreenOff) = ADDRESS_BY_VERSION(0x46FF10, 0x46FEF0, 0x46FEF0);
int gaddrof(CCamera::SetWideScreenOff) = GLOBAL_ADDRESS_BY_VERSION(0x46FF10, 0x46FEF0, 0x46FEF0);

void CCamera::SetWideScreenOff() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetWideScreenOff), this);
}

int addrof(CCamera::SetWideScreenOn) = ADDRESS_BY_VERSION(0x46FF00, 0x46FEE0, 0x46FEE0);
int gaddrof(CCamera::SetWideScreenOn) = GLOBAL_ADDRESS_BY_VERSION(0x46FF00, 0x46FEE0, 0x46FEE0);

void CCamera::SetWideScreenOn() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetWideScreenOn), this);
}

int addrof(CCamera::SetZoomValueCamStringScript) = ADDRESS_BY_VERSION(0x46FF90, 0x46FF70, 0x46FF70);
int gaddrof(CCamera::SetZoomValueCamStringScript) = GLOBAL_ADDRESS_BY_VERSION(0x46FF90, 0x46FF70, 0x46FF70);

void CCamera::SetZoomValueCamStringScript(short dist) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::SetZoomValueCamStringScript), this, dist);
}

int addrof(CCamera::SetZoomValueFollowPedScript) = ADDRESS_BY_VERSION(0x46FF30, 0x46FF10, 0x46FF10);
int gaddrof(CCamera::SetZoomValueFollowPedScript) = GLOBAL_ADDRESS_BY_VERSION(0x46FF30, 0x46FF10, 0x46FF10);

void CCamera::SetZoomValueFollowPedScript(short dist) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::SetZoomValueFollowPedScript), this, dist);
}

int addrof(CCamera::StartTransition) = ADDRESS_BY_VERSION(0x46FFF0, 0x46FFD0, 0x46FFD0);
int gaddrof(CCamera::StartTransition) = GLOBAL_ADDRESS_BY_VERSION(0x46FFF0, 0x46FFD0, 0x46FFD0);

void CCamera::StartTransition(short newMode) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::StartTransition), this, newMode);
}

int addrof(CCamera::StartTransitionWhenNotFinishedInter) = ADDRESS_BY_VERSION(0x470D80, 0x470D60, 0x470D60);
int gaddrof(CCamera::StartTransitionWhenNotFinishedInter) = GLOBAL_ADDRESS_BY_VERSION(0x470D80, 0x470D60, 0x470D60);

void CCamera::StartTransitionWhenNotFinishedInter(short mode) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::StartTransitionWhenNotFinishedInter), this, mode);
}

int addrof(CCamera::StoreValuesDuringInterPol) = ADDRESS_BY_VERSION(0x470DA0, 0x470D80, 0x470D80);
int gaddrof(CCamera::StoreValuesDuringInterPol) = GLOBAL_ADDRESS_BY_VERSION(0x470DA0, 0x470D80, 0x470D80);

void CCamera::StoreValuesDuringInterPol(CVector &source, CVector &target, CVector &up, float *fov) {
    plugin::CallMethodDynGlobal<CCamera *, CVector &, CVector &, CVector &, float *>(gaddrof(CCamera::StoreValuesDuringInterPol), this, source, target, up, fov);
}

int addrof(CCamera::TakeControl) = ADDRESS_BY_VERSION(0x471500, 0x4714E0, 0x4714E0);
int gaddrof(CCamera::TakeControl) = GLOBAL_ADDRESS_BY_VERSION(0x471500, 0x4714E0, 0x4714E0);

void CCamera::TakeControl(CEntity *target, short mode, short typeOfSwitch, int controller) {
    plugin::CallMethodDynGlobal<CCamera *, CEntity *, short, short, int>(gaddrof(CCamera::TakeControl), this, target, mode, typeOfSwitch, controller);
}

int addrof(CCamera::TakeControlNoEntity) = ADDRESS_BY_VERSION(0x4715B0, 0x471590, 0x471590);
int gaddrof(CCamera::TakeControlNoEntity) = GLOBAL_ADDRESS_BY_VERSION(0x4715B0, 0x471590, 0x471590);

void CCamera::TakeControlNoEntity(CVector const &pos, short typeOfSwitch, int controller) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const &, short, int>(gaddrof(CCamera::TakeControlNoEntity), this, pos, typeOfSwitch, controller);
}

int addrof(CCamera::TakeControlWithSpline) = ADDRESS_BY_VERSION(0x471620, 0x471600, 0x471600);
int gaddrof(CCamera::TakeControlWithSpline) = GLOBAL_ADDRESS_BY_VERSION(0x471620, 0x471600, 0x471600);

void CCamera::TakeControlWithSpline(short typeOfSwitch) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::TakeControlWithSpline), this, typeOfSwitch);
}

int addrof(CCamera::TryToStartNewCamMode) = ADDRESS_BY_VERSION(0x471650, 0x471630, 0x471630);
int gaddrof(CCamera::TryToStartNewCamMode) = GLOBAL_ADDRESS_BY_VERSION(0x471650, 0x471630, 0x471630);

bool CCamera::TryToStartNewCamMode(int obbeMode) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, int>(gaddrof(CCamera::TryToStartNewCamMode), this, obbeMode);
}

int addrof(CCamera::UpdateAimingCoors) = ADDRESS_BY_VERSION(0x472F10, 0x472EF0, 0x472EF0);
int gaddrof(CCamera::UpdateAimingCoors) = GLOBAL_ADDRESS_BY_VERSION(0x472F10, 0x472EF0, 0x472EF0);

void CCamera::UpdateAimingCoors(CVector const &coors) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const &>(gaddrof(CCamera::UpdateAimingCoors), this, coors);
}

int addrof(CCamera::UpdateSoundDistances) = ADDRESS_BY_VERSION(0x470EA0, 0x470E80, 0x470E80);
int gaddrof(CCamera::UpdateSoundDistances) = GLOBAL_ADDRESS_BY_VERSION(0x470EA0, 0x470E80, 0x470E80);

void CCamera::UpdateSoundDistances() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::UpdateSoundDistances), this);
}

int addrof(CCamera::UpdateTargetEntity) = ADDRESS_BY_VERSION(0x4712A0, 0x471280, 0x471280);
int gaddrof(CCamera::UpdateTargetEntity) = GLOBAL_ADDRESS_BY_VERSION(0x4712A0, 0x471280, 0x471280);

void CCamera::UpdateTargetEntity() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::UpdateTargetEntity), this);
}

int addrof(CamShakeNoPos) = ADDRESS_BY_VERSION(0x46B100, 0x46B0E0, 0x46B0E0);
int gaddrof(CamShakeNoPos) = GLOBAL_ADDRESS_BY_VERSION(0x46B100, 0x46B0E0, 0x46B0E0);

void CamShakeNoPos(CCamera *camera, float strength) {
    plugin::CallDynGlobal<CCamera *, float>(gaddrof(CamShakeNoPos), camera, strength);
}
