/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"

PLUGIN_SOURCE_FILE

float &CCamera::m_f3rdPersonCHairMultY = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xB6EC10, 0, 0, 0, 0, 0));
float &CCamera::m_f3rdPersonCHairMultX = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xB6EC14, 0, 0, 0, 0, 0));
float &CCamera::m_fMouseAccelVertical = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xB6EC18, 0, 0, 0, 0, 0));
float &CCamera::m_fMouseAccelHorzntal = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xB6EC1C, 0, 0, 0, 0, 0));
bool &CCamera::m_bUseMouse3rdPerson = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xB6EC2E, 0, 0, 0, 0, 0));
CCamera &TheCamera = *reinterpret_cast<CCamera *>(GLOBAL_ADDRESS_BY_VERSION(0xB6F028, 0, 0, 0, 0, 0));

int ctor_addr(CCamera) = ADDRESS_BY_VERSION(0x51A450, 0, 0, 0, 0, 0);
int ctor_gaddr(CCamera) = GLOBAL_ADDRESS_BY_VERSION(0x51A450, 0, 0, 0, 0, 0);

int dtor_addr(CCamera) = ADDRESS_BY_VERSION(0x50A870, 0, 0, 0, 0, 0);
int dtor_gaddr(CCamera) = GLOBAL_ADDRESS_BY_VERSION(0x50A870, 0, 0, 0, 0, 0);

int del_dtor_addr(CCamera) = ADDRESS_BY_VERSION(0x514010, 0, 0, 0, 0, 0);
int del_dtor_gaddr(CCamera) = GLOBAL_ADDRESS_BY_VERSION(0x514010, 0, 0, 0, 0, 0);

int addrof(CCamera::AddShakeSimple) = ADDRESS_BY_VERSION(0x50D240, 0, 0, 0, 0, 0);
int gaddrof(CCamera::AddShakeSimple) = GLOBAL_ADDRESS_BY_VERSION(0x50D240, 0, 0, 0, 0, 0);

void CCamera::AddShakeSimple(float duration, int type, float intensity) {
    plugin::CallMethodDynGlobal<CCamera *, float, int, float>(gaddrof(CCamera::AddShakeSimple), this, duration, type, intensity);
}

int addrof(CCamera::AllowShootingWith2PlayersInCar) = ADDRESS_BY_VERSION(0x50C280, 0, 0, 0, 0, 0);
int gaddrof(CCamera::AllowShootingWith2PlayersInCar) = GLOBAL_ADDRESS_BY_VERSION(0x50C280, 0, 0, 0, 0, 0);

void CCamera::AllowShootingWith2PlayersInCar(bool bAllowShootingWith2PlayersInCar) {
    plugin::CallMethodDynGlobal<CCamera *, bool>(gaddrof(CCamera::AllowShootingWith2PlayersInCar), this, bAllowShootingWith2PlayersInCar);
}

int addrof(CCamera::ApplyVehicleCameraTweaks) = ADDRESS_BY_VERSION(0x50A480, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ApplyVehicleCameraTweaks) = GLOBAL_ADDRESS_BY_VERSION(0x50A480, 0, 0, 0, 0, 0);

void CCamera::ApplyVehicleCameraTweaks(CVehicle *vehicle) {
    plugin::CallMethodDynGlobal<CCamera *, CVehicle *>(gaddrof(CCamera::ApplyVehicleCameraTweaks), this, vehicle);
}

int addrof(CCamera::AvoidTheGeometry) = ADDRESS_BY_VERSION(0x514030, 0, 0, 0, 0, 0);
int gaddrof(CCamera::AvoidTheGeometry) = GLOBAL_ADDRESS_BY_VERSION(0x514030, 0, 0, 0, 0, 0);

void CCamera::AvoidTheGeometry(CVector const *arg2, CVector const *arg3, CVector *arg4, float FOV) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const *, CVector const *, CVector *, float>(gaddrof(CCamera::AvoidTheGeometry), this, arg2, arg3, arg4, FOV);
}

int addrof(CCamera::CalculateDerivedValues) = ADDRESS_BY_VERSION(0x5150E0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CalculateDerivedValues) = GLOBAL_ADDRESS_BY_VERSION(0x5150E0, 0, 0, 0, 0, 0);

void CCamera::CalculateDerivedValues(bool bForMirror, bool bOriented) {
    plugin::CallMethodDynGlobal<CCamera *, bool, bool>(gaddrof(CCamera::CalculateDerivedValues), this, bForMirror, bOriented);
}

int addrof(CCamera::CalculateFrustumPlanes) = ADDRESS_BY_VERSION(0x514D60, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CalculateFrustumPlanes) = GLOBAL_ADDRESS_BY_VERSION(0x514D60, 0, 0, 0, 0, 0);

void CCamera::CalculateFrustumPlanes(bool bForMirror) {
    plugin::CallMethodDynGlobal<CCamera *, bool>(gaddrof(CCamera::CalculateFrustumPlanes), this, bForMirror);
}

int addrof(CCamera::CalculateGroundHeight) = ADDRESS_BY_VERSION(0x514B80, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CalculateGroundHeight) = GLOBAL_ADDRESS_BY_VERSION(0x514B80, 0, 0, 0, 0, 0);

float CCamera::CalculateGroundHeight(unsigned int type) {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *, unsigned int>(gaddrof(CCamera::CalculateGroundHeight), this, type);
}

int addrof(CCamera::CalculateMirroredMatrix) = ADDRESS_BY_VERSION(0x50B380, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CalculateMirroredMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x50B380, 0, 0, 0, 0, 0);

void CCamera::CalculateMirroredMatrix(CVector posn, float MirrorV, CMatrix *CamMat, CMatrix *MirrorMat) {
    plugin::CallMethodDynGlobal<CCamera *, CVector, float, CMatrix *, CMatrix *>(gaddrof(CCamera::CalculateMirroredMatrix), this, posn, MirrorV, CamMat, MirrorMat);
}

int addrof(CCamera::CamControl) = ADDRESS_BY_VERSION(0x527FA0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CamControl) = GLOBAL_ADDRESS_BY_VERSION(0x527FA0, 0, 0, 0, 0, 0);

void CCamera::CamControl() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::CamControl), this);
}

int addrof(CCamera::CamShake) = ADDRESS_BY_VERSION(0x50A9F0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CamShake) = GLOBAL_ADDRESS_BY_VERSION(0x50A9F0, 0, 0, 0, 0, 0);

void CCamera::CamShake(float arg2, float x, float y, float z) {
    plugin::CallMethodDynGlobal<CCamera *, float, float, float, float>(gaddrof(CCamera::CamShake), this, arg2, x, y, z);
}

int addrof(CCamera::CameraColDetAndReact) = ADDRESS_BY_VERSION(0x520190, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CameraColDetAndReact) = GLOBAL_ADDRESS_BY_VERSION(0x520190, 0, 0, 0, 0, 0);

char CCamera::CameraColDetAndReact(CVector *source, CVector *target) {
    return plugin::CallMethodAndReturnDynGlobal<char, CCamera *, CVector *, CVector *>(gaddrof(CCamera::CameraColDetAndReact), this, source, target);
}

int addrof(CCamera::CameraGenericModeSpecialCases) = ADDRESS_BY_VERSION(0x50CD30, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CameraGenericModeSpecialCases) = GLOBAL_ADDRESS_BY_VERSION(0x50CD30, 0, 0, 0, 0, 0);

void CCamera::CameraGenericModeSpecialCases(CPed *targetPed) {
    plugin::CallMethodDynGlobal<CCamera *, CPed *>(gaddrof(CCamera::CameraGenericModeSpecialCases), this, targetPed);
}

int addrof(CCamera::CameraPedAimModeSpecialCases) = ADDRESS_BY_VERSION(0x50CDA0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CameraPedAimModeSpecialCases) = GLOBAL_ADDRESS_BY_VERSION(0x50CDA0, 0, 0, 0, 0, 0);

void CCamera::CameraPedAimModeSpecialCases(CPed *targPed) {
    plugin::CallMethodDynGlobal<CCamera *, CPed *>(gaddrof(CCamera::CameraPedAimModeSpecialCases), this, targPed);
}

int addrof(CCamera::CameraPedModeSpecialCases) = ADDRESS_BY_VERSION(0x50CD80, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CameraPedModeSpecialCases) = GLOBAL_ADDRESS_BY_VERSION(0x50CD80, 0, 0, 0, 0, 0);

void CCamera::CameraPedModeSpecialCases() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::CameraPedModeSpecialCases), this);
}

int addrof(CCamera::CameraVehicleModeSpecialCases) = ADDRESS_BY_VERSION(0x50CDE0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CameraVehicleModeSpecialCases) = GLOBAL_ADDRESS_BY_VERSION(0x50CDE0, 0, 0, 0, 0, 0);

void CCamera::CameraVehicleModeSpecialCases(CVehicle *targVehicle) {
    plugin::CallMethodDynGlobal<CCamera *, CVehicle *>(gaddrof(CCamera::CameraVehicleModeSpecialCases), this, targVehicle);
}

int addrof(CCamera::ClearPlayerWeaponMode) = ADDRESS_BY_VERSION(0x50AB10, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ClearPlayerWeaponMode) = GLOBAL_ADDRESS_BY_VERSION(0x50AB10, 0, 0, 0, 0, 0);

void CCamera::ClearPlayerWeaponMode() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ClearPlayerWeaponMode), this);
}

int addrof(CCamera::ConeCastCollisionResolve) = ADDRESS_BY_VERSION(0x51A5D0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ConeCastCollisionResolve) = GLOBAL_ADDRESS_BY_VERSION(0x51A5D0, 0, 0, 0, 0, 0);

bool CCamera::ConeCastCollisionResolve(CVector *source, CVector *center, CVector *pVecOut, float radius, float arg5, float *pFloatOut) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CVector *, CVector *, CVector *, float, float, float *>(gaddrof(CCamera::ConeCastCollisionResolve), this, source, center, pVecOut, radius, arg5, pFloatOut);
}

int addrof(CCamera::ConsiderPedAsDucking) = ADDRESS_BY_VERSION(0x50CEB0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ConsiderPedAsDucking) = GLOBAL_ADDRESS_BY_VERSION(0x50CEB0, 0, 0, 0, 0, 0);

bool CCamera::ConsiderPedAsDucking(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CPed *>(gaddrof(CCamera::ConsiderPedAsDucking), this, ped);
}

int addrof(CCamera::CopyCameraMatrixToRWCam) = ADDRESS_BY_VERSION(0x50AFA0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::CopyCameraMatrixToRWCam) = GLOBAL_ADDRESS_BY_VERSION(0x50AFA0, 0, 0, 0, 0, 0);

void CCamera::CopyCameraMatrixToRWCam(bool bUpdateMatrix) {
    plugin::CallMethodDynGlobal<CCamera *, bool>(gaddrof(CCamera::CopyCameraMatrixToRWCam), this, bUpdateMatrix);
}

int addrof(CCamera::DealWithMirrorBeforeConstructRenderList) = ADDRESS_BY_VERSION(0x50B510, 0, 0, 0, 0, 0);
int gaddrof(CCamera::DealWithMirrorBeforeConstructRenderList) = GLOBAL_ADDRESS_BY_VERSION(0x50B510, 0, 0, 0, 0, 0);

void CCamera::DealWithMirrorBeforeConstructRenderList(bool bActiveMirror, CVector MirrorNormal, float MirrorV, CMatrix *matMirror) {
    plugin::CallMethodDynGlobal<CCamera *, bool, CVector, float, CMatrix *>(gaddrof(CCamera::DealWithMirrorBeforeConstructRenderList), this, bActiveMirror, MirrorNormal, MirrorV, matMirror);
}

int addrof(CCamera::DeleteCutSceneCamDataMemory) = ADDRESS_BY_VERSION(0x5B24A0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::DeleteCutSceneCamDataMemory) = GLOBAL_ADDRESS_BY_VERSION(0x5B24A0, 0, 0, 0, 0, 0);

void CCamera::DeleteCutSceneCamDataMemory() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::DeleteCutSceneCamDataMemory), this);
}

int addrof(CCamera::DrawBordersForWideScreen) = ADDRESS_BY_VERSION(0x514860, 0, 0, 0, 0, 0);
int gaddrof(CCamera::DrawBordersForWideScreen) = GLOBAL_ADDRESS_BY_VERSION(0x514860, 0, 0, 0, 0, 0);

void CCamera::DrawBordersForWideScreen() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::DrawBordersForWideScreen), this);
}

int addrof(CCamera::Enable1rstPersonCamCntrlsScript) = ADDRESS_BY_VERSION(0x50AC00, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Enable1rstPersonCamCntrlsScript) = GLOBAL_ADDRESS_BY_VERSION(0x50AC00, 0, 0, 0, 0, 0);

void CCamera::Enable1rstPersonCamCntrlsScript() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Enable1rstPersonCamCntrlsScript), this);
}

int addrof(CCamera::Enable1rstPersonWeaponsCamera) = ADDRESS_BY_VERSION(0x50AC10, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Enable1rstPersonWeaponsCamera) = GLOBAL_ADDRESS_BY_VERSION(0x50AC10, 0, 0, 0, 0, 0);

void CCamera::Enable1rstPersonWeaponsCamera() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Enable1rstPersonWeaponsCamera), this);
}

int addrof(CCamera::Fade) = ADDRESS_BY_VERSION(0x50AC20, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Fade) = GLOBAL_ADDRESS_BY_VERSION(0x50AC20, 0, 0, 0, 0, 0);

void CCamera::Fade(float fadeDuration, short FadeInOutFlag) {
    plugin::CallMethodDynGlobal<CCamera *, float, short>(gaddrof(CCamera::Fade), this, fadeDuration, FadeInOutFlag);
}

int addrof(CCamera::Find3rdPersonCamTargetVector) = ADDRESS_BY_VERSION(0x514970, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Find3rdPersonCamTargetVector) = GLOBAL_ADDRESS_BY_VERSION(0x514970, 0, 0, 0, 0, 0);

void CCamera::Find3rdPersonCamTargetVector(float range, CVector source, CVector *pCamera, CVector *pPoint) {
    plugin::CallMethodDynGlobal<CCamera *, float, CVector, CVector *, CVector *>(gaddrof(CCamera::Find3rdPersonCamTargetVector), this, range, source, pCamera, pPoint);
}

int addrof(CCamera::Find3rdPersonQuickAimPitch) = ADDRESS_BY_VERSION(0x50AD40, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Find3rdPersonQuickAimPitch) = GLOBAL_ADDRESS_BY_VERSION(0x50AD40, 0, 0, 0, 0, 0);

float CCamera::Find3rdPersonQuickAimPitch() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *>(gaddrof(CCamera::Find3rdPersonQuickAimPitch), this);
}

int addrof(CCamera::FindCamFOV) = ADDRESS_BY_VERSION(0x50AD20, 0, 0, 0, 0, 0);
int gaddrof(CCamera::FindCamFOV) = GLOBAL_ADDRESS_BY_VERSION(0x50AD20, 0, 0, 0, 0, 0);

float CCamera::FindCamFOV() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *>(gaddrof(CCamera::FindCamFOV), this);
}

int addrof(CCamera::FinishCutscene) = ADDRESS_BY_VERSION(0x514950, 0, 0, 0, 0, 0);
int gaddrof(CCamera::FinishCutscene) = GLOBAL_ADDRESS_BY_VERSION(0x514950, 0, 0, 0, 0, 0);

void CCamera::FinishCutscene() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::FinishCutscene), this);
}

int addrof(CCamera::GetArrPosForVehicleType) = ADDRESS_BY_VERSION(0x50AF00, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetArrPosForVehicleType) = GLOBAL_ADDRESS_BY_VERSION(0x50AF00, 0, 0, 0, 0, 0);

void CCamera::GetArrPosForVehicleType(int type, int *arrPos) {
    plugin::CallMethodDynGlobal<CCamera *, int, int *>(gaddrof(CCamera::GetArrPosForVehicleType), this, type, arrPos);
}

int addrof(CCamera::GetCutSceneFinishTime) = ADDRESS_BY_VERSION(0x50AD90, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetCutSceneFinishTime) = GLOBAL_ADDRESS_BY_VERSION(0x50AD90, 0, 0, 0, 0, 0);

unsigned int CCamera::GetCutSceneFinishTime() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CCamera *>(gaddrof(CCamera::GetCutSceneFinishTime), this);
}

int addrof(CCamera::GetFading) = ADDRESS_BY_VERSION(0x50ADE0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetFading) = GLOBAL_ADDRESS_BY_VERSION(0x50ADE0, 0, 0, 0, 0, 0);

bool CCamera::GetFading() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::GetFading), this);
}

int addrof(CCamera::GetFadingDirection) = ADDRESS_BY_VERSION(0x50ADF0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetFadingDirection) = GLOBAL_ADDRESS_BY_VERSION(0x50ADF0, 0, 0, 0, 0, 0);

int CCamera::GetFadingDirection() {
    return plugin::CallMethodAndReturnDynGlobal<int, CCamera *>(gaddrof(CCamera::GetFadingDirection), this);
}

int addrof(CCamera::GetGameCamPosition) = ADDRESS_BY_VERSION(0x50AE50, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetGameCamPosition) = GLOBAL_ADDRESS_BY_VERSION(0x50AE50, 0, 0, 0, 0, 0);

CVector *CCamera::GetGameCamPosition() {
    return plugin::CallMethodAndReturnDynGlobal<CVector *, CCamera *>(gaddrof(CCamera::GetGameCamPosition), this);
}

int addrof(CCamera::GetLookDirection) = ADDRESS_BY_VERSION(0x50AE90, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetLookDirection) = GLOBAL_ADDRESS_BY_VERSION(0x50AE90, 0, 0, 0, 0, 0);

signed int CCamera::GetLookDirection() {
    return plugin::CallMethodAndReturnDynGlobal<signed int, CCamera *>(gaddrof(CCamera::GetLookDirection), this);
}

int addrof(CCamera::GetLookingForwardFirstPerson) = ADDRESS_BY_VERSION(0x50AED0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetLookingForwardFirstPerson) = GLOBAL_ADDRESS_BY_VERSION(0x50AED0, 0, 0, 0, 0, 0);

bool CCamera::GetLookingForwardFirstPerson() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::GetLookingForwardFirstPerson), this);
}

int addrof(CCamera::GetLookingLRBFirstPerson) = ADDRESS_BY_VERSION(0x50AE60, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetLookingLRBFirstPerson) = GLOBAL_ADDRESS_BY_VERSION(0x50AE60, 0, 0, 0, 0, 0);

bool CCamera::GetLookingLRBFirstPerson() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::GetLookingLRBFirstPerson), this);
}

int addrof(CCamera::GetPositionAlongSpline) = ADDRESS_BY_VERSION(0x50AF80, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetPositionAlongSpline) = GLOBAL_ADDRESS_BY_VERSION(0x50AF80, 0, 0, 0, 0, 0);

float CCamera::GetPositionAlongSpline() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *>(gaddrof(CCamera::GetPositionAlongSpline), this);
}

int addrof(CCamera::GetRoughDistanceToGround) = ADDRESS_BY_VERSION(0x516B00, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetRoughDistanceToGround) = GLOBAL_ADDRESS_BY_VERSION(0x516B00, 0, 0, 0, 0, 0);

float CCamera::GetRoughDistanceToGround() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCamera *>(gaddrof(CCamera::GetRoughDistanceToGround), this);
}

int addrof(CCamera::GetScreenFadeStatus) = ADDRESS_BY_VERSION(0x50AE20, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetScreenFadeStatus) = GLOBAL_ADDRESS_BY_VERSION(0x50AE20, 0, 0, 0, 0, 0);

signed int CCamera::GetScreenFadeStatus() {
    return plugin::CallMethodAndReturnDynGlobal<signed int, CCamera *>(gaddrof(CCamera::GetScreenFadeStatus), this);
}

int addrof(CCamera::GetScreenRect) = ADDRESS_BY_VERSION(0x50AB50, 0, 0, 0, 0, 0);
int gaddrof(CCamera::GetScreenRect) = GLOBAL_ADDRESS_BY_VERSION(0x50AB50, 0, 0, 0, 0, 0);

void CCamera::GetScreenRect(CRect *pRect) {
    plugin::CallMethodDynGlobal<CCamera *, CRect *>(gaddrof(CCamera::GetScreenRect), this, pRect);
}

int addrof(CCamera::Get_Just_Switched_Status) = ADDRESS_BY_VERSION(0x50AE10, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Get_Just_Switched_Status) = GLOBAL_ADDRESS_BY_VERSION(0x50AE10, 0, 0, 0, 0, 0);

bool CCamera::Get_Just_Switched_Status() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::Get_Just_Switched_Status), this);
}

int addrof(CCamera::HandleCameraMotionForDucking) = ADDRESS_BY_VERSION(0x50CFA0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::HandleCameraMotionForDucking) = GLOBAL_ADDRESS_BY_VERSION(0x50CFA0, 0, 0, 0, 0, 0);

void CCamera::HandleCameraMotionForDucking(CPed *ped, CVector *source, CVector *targPosn, bool arg5) {
    plugin::CallMethodDynGlobal<CCamera *, CPed *, CVector *, CVector *, bool>(gaddrof(CCamera::HandleCameraMotionForDucking), this, ped, source, targPosn, arg5);
}

int addrof(CCamera::HandleCameraMotionForDuckingDuringAim) = ADDRESS_BY_VERSION(0x50D090, 0, 0, 0, 0, 0);
int gaddrof(CCamera::HandleCameraMotionForDuckingDuringAim) = GLOBAL_ADDRESS_BY_VERSION(0x50D090, 0, 0, 0, 0, 0);

void CCamera::HandleCameraMotionForDuckingDuringAim(CPed *ped, CVector *source, CVector *targPosn, bool arg5) {
    plugin::CallMethodDynGlobal<CCamera *, CPed *, CVector *, CVector *, bool>(gaddrof(CCamera::HandleCameraMotionForDuckingDuringAim), this, ped, source, targPosn, arg5);
}

int addrof(CCamera::ImproveNearClip) = ADDRESS_BY_VERSION(0x516B20, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ImproveNearClip) = GLOBAL_ADDRESS_BY_VERSION(0x516B20, 0, 0, 0, 0, 0);

void CCamera::ImproveNearClip(CVehicle *pVehicle, CPed *pPed, CVector *source, CVector *targPosn) {
    plugin::CallMethodDynGlobal<CCamera *, CVehicle *, CPed *, CVector *, CVector *>(gaddrof(CCamera::ImproveNearClip), this, pVehicle, pPed, source, targPosn);
}

int addrof(CCamera::Init) = ADDRESS_BY_VERSION(0x5BC520, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5BC520, 0, 0, 0, 0, 0);

void CCamera::Init() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Init), this);
}

int addrof(CCamera::InitCameraVehicleTweaks) = ADDRESS_BY_VERSION(0x50A3B0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::InitCameraVehicleTweaks) = GLOBAL_ADDRESS_BY_VERSION(0x50A3B0, 0, 0, 0, 0, 0);

void CCamera::InitCameraVehicleTweaks() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::InitCameraVehicleTweaks), this);
}

int addrof(CCamera::InitialiseScriptableComponents) = ADDRESS_BY_VERSION(0x50D2D0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::InitialiseScriptableComponents) = GLOBAL_ADDRESS_BY_VERSION(0x50D2D0, 0, 0, 0, 0, 0);

int CCamera::InitialiseScriptableComponents() {
    return plugin::CallMethodAndReturnDynGlobal<int, CCamera *>(gaddrof(CCamera::InitialiseScriptableComponents), this);
}

int addrof(CCamera::IsExtraEntityToIgnore) = ADDRESS_BY_VERSION(0x50CE80, 0, 0, 0, 0, 0);
int gaddrof(CCamera::IsExtraEntityToIgnore) = GLOBAL_ADDRESS_BY_VERSION(0x50CE80, 0, 0, 0, 0, 0);

bool CCamera::IsExtraEntityToIgnore(CEntity *entity) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CEntity *>(gaddrof(CCamera::IsExtraEntityToIgnore), this, entity);
}

int addrof(CCamera::IsItTimeForNewcam) = ADDRESS_BY_VERSION(0x51D770, 0, 0, 0, 0, 0);
int gaddrof(CCamera::IsItTimeForNewcam) = GLOBAL_ADDRESS_BY_VERSION(0x51D770, 0, 0, 0, 0, 0);

bool CCamera::IsItTimeForNewcam(int CamSequence, int StartTime) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, int, int>(gaddrof(CCamera::IsItTimeForNewcam), this, CamSequence, StartTime);
}

int addrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, RwMatrixTag *)) = ADDRESS_BY_VERSION(0x420C40, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, RwMatrixTag *)) = GLOBAL_ADDRESS_BY_VERSION(0x420C40, 0, 0, 0, 0, 0);

bool CCamera::IsSphereVisible(CVector const &origin, float radius, RwMatrixTag *transformMatrix) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CVector const &, float, RwMatrixTag *>(gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, RwMatrixTag *)), this, origin, radius, transformMatrix);
}

int addrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float)) = ADDRESS_BY_VERSION(0x420D40, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float)) = GLOBAL_ADDRESS_BY_VERSION(0x420D40, 0, 0, 0, 0, 0);

bool CCamera::IsSphereVisible(CVector const &origin, float radius) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, CVector const &, float>(gaddrof_o(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float)), this, origin, radius);
}

int addrof(CCamera::LerpFOV) = ADDRESS_BY_VERSION(0x50D280, 0, 0, 0, 0, 0);
int gaddrof(CCamera::LerpFOV) = GLOBAL_ADDRESS_BY_VERSION(0x50D280, 0, 0, 0, 0, 0);

void CCamera::LerpFOV(float zoomInFactor, float zoomOutFactor, float timelimit, bool bEase) {
    plugin::CallMethodDynGlobal<CCamera *, float, float, float, bool>(gaddrof(CCamera::LerpFOV), this, zoomInFactor, zoomOutFactor, timelimit, bEase);
}

int addrof(CCamera::LoadPathSplines) = ADDRESS_BY_VERSION(0x5B24D0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::LoadPathSplines) = GLOBAL_ADDRESS_BY_VERSION(0x5B24D0, 0, 0, 0, 0, 0);

void CCamera::LoadPathSplines(int pFile) {
    plugin::CallMethodDynGlobal<CCamera *, int>(gaddrof(CCamera::LoadPathSplines), this, pFile);
}

int addrof(CCamera::Process) = ADDRESS_BY_VERSION(0x52B730, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Process) = GLOBAL_ADDRESS_BY_VERSION(0x52B730, 0, 0, 0, 0, 0);

void CCamera::Process() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Process), this);
}

int addrof_o(CCamera::ProcessFOVLerp, void (CCamera::*)(float)) = ADDRESS_BY_VERSION(0x50D510, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessFOVLerp, void (CCamera::*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x50D510, 0, 0, 0, 0, 0);

void CCamera::ProcessFOVLerp(float ratio) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof_o(CCamera::ProcessFOVLerp, void (CCamera::*)(float)), this, ratio);
}

int addrof_o(CCamera::ProcessFOVLerp, void (CCamera::*)()) = ADDRESS_BY_VERSION(0x516500, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessFOVLerp, void (CCamera::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x516500, 0, 0, 0, 0, 0);

void CCamera::ProcessFOVLerp() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof_o(CCamera::ProcessFOVLerp, void (CCamera::*)()), this);
}

int addrof(CCamera::ProcessFade) = ADDRESS_BY_VERSION(0x50B5D0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessFade) = GLOBAL_ADDRESS_BY_VERSION(0x50B5D0, 0, 0, 0, 0, 0);

void CCamera::ProcessFade() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessFade), this);
}

int addrof(CCamera::ProcessMusicFade) = ADDRESS_BY_VERSION(0x50B6D0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessMusicFade) = GLOBAL_ADDRESS_BY_VERSION(0x50B6D0, 0, 0, 0, 0, 0);

void CCamera::ProcessMusicFade() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessMusicFade), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraBoat) = ADDRESS_BY_VERSION(0x526E20, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessObbeCinemaCameraBoat) = GLOBAL_ADDRESS_BY_VERSION(0x526E20, 0, 0, 0, 0, 0);

void CCamera::ProcessObbeCinemaCameraBoat() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraBoat), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraCar) = ADDRESS_BY_VERSION(0x5267C0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessObbeCinemaCameraCar) = GLOBAL_ADDRESS_BY_VERSION(0x5267C0, 0, 0, 0, 0, 0);

void CCamera::ProcessObbeCinemaCameraCar() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraCar), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraHeli) = ADDRESS_BY_VERSION(0x526AE0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessObbeCinemaCameraHeli) = GLOBAL_ADDRESS_BY_VERSION(0x526AE0, 0, 0, 0, 0, 0);

void CCamera::ProcessObbeCinemaCameraHeli() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraHeli), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraPed) = ADDRESS_BY_VERSION(0x50B880, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessObbeCinemaCameraPed) = GLOBAL_ADDRESS_BY_VERSION(0x50B880, 0, 0, 0, 0, 0);

unsigned int CCamera::ProcessObbeCinemaCameraPed() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraPed), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraPlane) = ADDRESS_BY_VERSION(0x526C80, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessObbeCinemaCameraPlane) = GLOBAL_ADDRESS_BY_VERSION(0x526C80, 0, 0, 0, 0, 0);

void CCamera::ProcessObbeCinemaCameraPlane() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraPlane), this);
}

int addrof(CCamera::ProcessObbeCinemaCameraTrain) = ADDRESS_BY_VERSION(0x526950, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessObbeCinemaCameraTrain) = GLOBAL_ADDRESS_BY_VERSION(0x526950, 0, 0, 0, 0, 0);

void CCamera::ProcessObbeCinemaCameraTrain() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessObbeCinemaCameraTrain), this);
}

int addrof(CCamera::ProcessScriptedCommands) = ADDRESS_BY_VERSION(0x516AE0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessScriptedCommands) = GLOBAL_ADDRESS_BY_VERSION(0x516AE0, 0, 0, 0, 0, 0);

void CCamera::ProcessScriptedCommands() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessScriptedCommands), this);
}

int addrof_o(CCamera::ProcessShake, void (CCamera::*)(float)) = ADDRESS_BY_VERSION(0x516560, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessShake, void (CCamera::*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x516560, 0, 0, 0, 0, 0);

void CCamera::ProcessShake(float JiggleIntensity) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof_o(CCamera::ProcessShake, void (CCamera::*)(float)), this, JiggleIntensity);
}

int addrof_o(CCamera::ProcessShake, void (CCamera::*)()) = ADDRESS_BY_VERSION(0x51A6F0, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessShake, void (CCamera::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x51A6F0, 0, 0, 0, 0, 0);

void CCamera::ProcessShake() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof_o(CCamera::ProcessShake, void (CCamera::*)()), this);
}

int addrof_o(CCamera::ProcessVectorMoveLinear, void (CCamera::*)(float)) = ADDRESS_BY_VERSION(0x50D430, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessVectorMoveLinear, void (CCamera::*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x50D430, 0, 0, 0, 0, 0);

void CCamera::ProcessVectorMoveLinear(float ratio) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof_o(CCamera::ProcessVectorMoveLinear, void (CCamera::*)(float)), this, ratio);
}

int addrof_o(CCamera::ProcessVectorMoveLinear, void (CCamera::*)()) = ADDRESS_BY_VERSION(0x5164A0, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessVectorMoveLinear, void (CCamera::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x5164A0, 0, 0, 0, 0, 0);

void CCamera::ProcessVectorMoveLinear() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof_o(CCamera::ProcessVectorMoveLinear, void (CCamera::*)()), this);
}

int addrof_o(CCamera::ProcessVectorTrackLinear, void (CCamera::*)(float)) = ADDRESS_BY_VERSION(0x50D350, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessVectorTrackLinear, void (CCamera::*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x50D350, 0, 0, 0, 0, 0);

void CCamera::ProcessVectorTrackLinear(float ratio) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof_o(CCamera::ProcessVectorTrackLinear, void (CCamera::*)(float)), this, ratio);
}

int addrof_o(CCamera::ProcessVectorTrackLinear, void (CCamera::*)()) = ADDRESS_BY_VERSION(0x516440, 0, 0, 0, 0, 0);
int gaddrof_o(CCamera::ProcessVectorTrackLinear, void (CCamera::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x516440, 0, 0, 0, 0, 0);

void CCamera::ProcessVectorTrackLinear() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof_o(CCamera::ProcessVectorTrackLinear, void (CCamera::*)()), this);
}

int addrof(CCamera::ProcessWideScreenOn) = ADDRESS_BY_VERSION(0x50B890, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ProcessWideScreenOn) = GLOBAL_ADDRESS_BY_VERSION(0x50B890, 0, 0, 0, 0, 0);

void CCamera::ProcessWideScreenOn() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::ProcessWideScreenOn), this);
}

int addrof(CCamera::RenderMotionBlur) = ADDRESS_BY_VERSION(0x50B8F0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::RenderMotionBlur) = GLOBAL_ADDRESS_BY_VERSION(0x50B8F0, 0, 0, 0, 0, 0);

void CCamera::RenderMotionBlur() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::RenderMotionBlur), this);
}

int addrof(CCamera::ResetDuckingSystem) = ADDRESS_BY_VERSION(0x50CEF0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::ResetDuckingSystem) = GLOBAL_ADDRESS_BY_VERSION(0x50CEF0, 0, 0, 0, 0, 0);

void CCamera::ResetDuckingSystem(CPed *ped) {
    plugin::CallMethodDynGlobal<CCamera *, CPed *>(gaddrof(CCamera::ResetDuckingSystem), this, ped);
}

int addrof(CCamera::Restore) = ADDRESS_BY_VERSION(0x50B930, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Restore) = GLOBAL_ADDRESS_BY_VERSION(0x50B930, 0, 0, 0, 0, 0);

void CCamera::Restore() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::Restore), this);
}

int addrof(CCamera::RestoreCameraAfterMirror) = ADDRESS_BY_VERSION(0x51A5A0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::RestoreCameraAfterMirror) = GLOBAL_ADDRESS_BY_VERSION(0x51A5A0, 0, 0, 0, 0, 0);

void CCamera::RestoreCameraAfterMirror() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::RestoreCameraAfterMirror), this);
}

int addrof(CCamera::RestoreWithJumpCut) = ADDRESS_BY_VERSION(0x50BAB0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::RestoreWithJumpCut) = GLOBAL_ADDRESS_BY_VERSION(0x50BAB0, 0, 0, 0, 0, 0);

void CCamera::RestoreWithJumpCut() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::RestoreWithJumpCut), this);
}

int addrof(CCamera::SetCamCutSceneOffSet) = ADDRESS_BY_VERSION(0x50BD20, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetCamCutSceneOffSet) = GLOBAL_ADDRESS_BY_VERSION(0x50BD20, 0, 0, 0, 0, 0);

void CCamera::SetCamCutSceneOffSet(CVector const *cutsceneOffset) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const *>(gaddrof(CCamera::SetCamCutSceneOffSet), this, cutsceneOffset);
}

int addrof(CCamera::SetCamPositionForFixedMode) = ADDRESS_BY_VERSION(0x50BEC0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetCamPositionForFixedMode) = GLOBAL_ADDRESS_BY_VERSION(0x50BEC0, 0, 0, 0, 0, 0);

void CCamera::SetCamPositionForFixedMode(CVector const *fixedModeSource, CVector const *fixedModeUpOffset) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const *, CVector const *>(gaddrof(CCamera::SetCamPositionForFixedMode), this, fixedModeSource, fixedModeUpOffset);
}

int addrof(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString) = ADDRESS_BY_VERSION(0x50BD40, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString) = GLOBAL_ADDRESS_BY_VERSION(0x50BD40, 0, 0, 0, 0, 0);

void CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString), this);
}

int addrof(CCamera::SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString) = ADDRESS_BY_VERSION(0x50BDA0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString) = GLOBAL_ADDRESS_BY_VERSION(0x50BDA0, 0, 0, 0, 0, 0);

void CCamera::SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString(CPed *targetPed) {
    plugin::CallMethodDynGlobal<CCamera *, CPed *>(gaddrof(CCamera::SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString), this, targetPed);
}

int addrof(CCamera::SetCameraUpForMirror) = ADDRESS_BY_VERSION(0x51A560, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetCameraUpForMirror) = GLOBAL_ADDRESS_BY_VERSION(0x51A560, 0, 0, 0, 0, 0);

void CCamera::SetCameraUpForMirror() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetCameraUpForMirror), this);
}

int addrof(CCamera::SetFadeColour) = ADDRESS_BY_VERSION(0x50BF00, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetFadeColour) = GLOBAL_ADDRESS_BY_VERSION(0x50BF00, 0, 0, 0, 0, 0);

void CCamera::SetFadeColour(unsigned char Red, unsigned char Green, unsigned char Blue) {
    plugin::CallMethodDynGlobal<CCamera *, unsigned char, unsigned char, unsigned char>(gaddrof(CCamera::SetFadeColour), this, Red, Green, Blue);
}

int addrof(CCamera::SetMotionBlur) = ADDRESS_BY_VERSION(0x50BF40, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetMotionBlur) = GLOBAL_ADDRESS_BY_VERSION(0x50BF40, 0, 0, 0, 0, 0);

void CCamera::SetMotionBlur(int Red, int Green, int Blue, int value, int Blurtype) {
    plugin::CallMethodDynGlobal<CCamera *, int, int, int, int, int>(gaddrof(CCamera::SetMotionBlur), this, Red, Green, Blue, value, Blurtype);
}

int addrof(CCamera::SetMotionBlurAlpha) = ADDRESS_BY_VERSION(0x50BF80, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetMotionBlurAlpha) = GLOBAL_ADDRESS_BY_VERSION(0x50BF80, 0, 0, 0, 0, 0);

void CCamera::SetMotionBlurAlpha(int Alpha) {
    plugin::CallMethodDynGlobal<CCamera *, int>(gaddrof(CCamera::SetMotionBlurAlpha), this, Alpha);
}

int addrof(CCamera::SetNearClipBasedOnPedCollision) = ADDRESS_BY_VERSION(0x50CB90, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetNearClipBasedOnPedCollision) = GLOBAL_ADDRESS_BY_VERSION(0x50CB90, 0, 0, 0, 0, 0);

void CCamera::SetNearClipBasedOnPedCollision(float arg2) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof(CCamera::SetNearClipBasedOnPedCollision), this, arg2);
}

int addrof(CCamera::SetNearClipScript) = ADDRESS_BY_VERSION(0x50BF90, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetNearClipScript) = GLOBAL_ADDRESS_BY_VERSION(0x50BF90, 0, 0, 0, 0, 0);

void CCamera::SetNearClipScript(float NearClip) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof(CCamera::SetNearClipScript), this, NearClip);
}

int addrof(CCamera::SetNewPlayerWeaponMode) = ADDRESS_BY_VERSION(0x50BFB0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetNewPlayerWeaponMode) = GLOBAL_ADDRESS_BY_VERSION(0x50BFB0, 0, 0, 0, 0, 0);

void CCamera::SetNewPlayerWeaponMode(short mode, short maxZoom, short minZoom) {
    plugin::CallMethodDynGlobal<CCamera *, short, short, short>(gaddrof(CCamera::SetNewPlayerWeaponMode), this, mode, maxZoom, minZoom);
}

int addrof(CCamera::SetParametersForScriptInterpolation) = ADDRESS_BY_VERSION(0x50C030, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetParametersForScriptInterpolation) = GLOBAL_ADDRESS_BY_VERSION(0x50C030, 0, 0, 0, 0, 0);

void CCamera::SetParametersForScriptInterpolation(float InterpolationToStopMoving, float InterpolationToCatchUp, unsigned int TimeForInterPolation) {
    plugin::CallMethodDynGlobal<CCamera *, float, float, unsigned int>(gaddrof(CCamera::SetParametersForScriptInterpolation), this, InterpolationToStopMoving, InterpolationToCatchUp, TimeForInterPolation);
}

int addrof(CCamera::SetPercentAlongCutScene) = ADDRESS_BY_VERSION(0x50C070, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetPercentAlongCutScene) = GLOBAL_ADDRESS_BY_VERSION(0x50C070, 0, 0, 0, 0, 0);

void CCamera::SetPercentAlongCutScene(float percent) {
    plugin::CallMethodDynGlobal<CCamera *, float>(gaddrof(CCamera::SetPercentAlongCutScene), this, percent);
}

int addrof(CCamera::SetRwCamera) = ADDRESS_BY_VERSION(0x50C100, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetRwCamera) = GLOBAL_ADDRESS_BY_VERSION(0x50C100, 0, 0, 0, 0, 0);

void CCamera::SetRwCamera(RwCamera *rwcamera) {
    plugin::CallMethodDynGlobal<CCamera *, RwCamera *>(gaddrof(CCamera::SetRwCamera), this, rwcamera);
}

int addrof(CCamera::SetWideScreenOff) = ADDRESS_BY_VERSION(0x50C150, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetWideScreenOff) = GLOBAL_ADDRESS_BY_VERSION(0x50C150, 0, 0, 0, 0, 0);

void CCamera::SetWideScreenOff() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetWideScreenOff), this);
}

int addrof(CCamera::SetWideScreenOn) = ADDRESS_BY_VERSION(0x50C140, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetWideScreenOn) = GLOBAL_ADDRESS_BY_VERSION(0x50C140, 0, 0, 0, 0, 0);

void CCamera::SetWideScreenOn() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::SetWideScreenOn), this);
}

int addrof(CCamera::SetZoomValueCamStringScript) = ADDRESS_BY_VERSION(0x50C1B0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetZoomValueCamStringScript) = GLOBAL_ADDRESS_BY_VERSION(0x50C1B0, 0, 0, 0, 0, 0);

void CCamera::SetZoomValueCamStringScript(short zoomMode) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::SetZoomValueCamStringScript), this, zoomMode);
}

int addrof(CCamera::SetZoomValueFollowPedScript) = ADDRESS_BY_VERSION(0x50C160, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetZoomValueFollowPedScript) = GLOBAL_ADDRESS_BY_VERSION(0x50C160, 0, 0, 0, 0, 0);

void CCamera::SetZoomValueFollowPedScript(short zoomMode) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::SetZoomValueFollowPedScript), this, zoomMode);
}

int addrof(CCamera::StartCooperativeCamMode) = ADDRESS_BY_VERSION(0x50C260, 0, 0, 0, 0, 0);
int gaddrof(CCamera::StartCooperativeCamMode) = GLOBAL_ADDRESS_BY_VERSION(0x50C260, 0, 0, 0, 0, 0);

void CCamera::StartCooperativeCamMode() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::StartCooperativeCamMode), this);
}

int addrof(CCamera::StartTransition) = ADDRESS_BY_VERSION(0x515200, 0, 0, 0, 0, 0);
int gaddrof(CCamera::StartTransition) = GLOBAL_ADDRESS_BY_VERSION(0x515200, 0, 0, 0, 0, 0);

void CCamera::StartTransition(short currentCamMode) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::StartTransition), this, currentCamMode);
}

int addrof(CCamera::StartTransitionWhenNotFinishedInter) = ADDRESS_BY_VERSION(0x515BC0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::StartTransitionWhenNotFinishedInter) = GLOBAL_ADDRESS_BY_VERSION(0x515BC0, 0, 0, 0, 0, 0);

void CCamera::StartTransitionWhenNotFinishedInter(short currentCamMode) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::StartTransitionWhenNotFinishedInter), this, currentCamMode);
}

int addrof(CCamera::StopCooperativeCamMode) = ADDRESS_BY_VERSION(0x50C270, 0, 0, 0, 0, 0);
int gaddrof(CCamera::StopCooperativeCamMode) = GLOBAL_ADDRESS_BY_VERSION(0x50C270, 0, 0, 0, 0, 0);

void CCamera::StopCooperativeCamMode() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::StopCooperativeCamMode), this);
}

int addrof(CCamera::StoreValuesDuringInterPol) = ADDRESS_BY_VERSION(0x50C290, 0, 0, 0, 0, 0);
int gaddrof(CCamera::StoreValuesDuringInterPol) = GLOBAL_ADDRESS_BY_VERSION(0x50C290, 0, 0, 0, 0, 0);

void CCamera::StoreValuesDuringInterPol(CVector *SourceDuringInter, CVector *TargetDuringInter, CVector *UpDuringInter, float *FOVDuringInter) {
    plugin::CallMethodDynGlobal<CCamera *, CVector *, CVector *, CVector *, float *>(gaddrof(CCamera::StoreValuesDuringInterPol), this, SourceDuringInter, TargetDuringInter, UpDuringInter, FOVDuringInter);
}

int addrof(CCamera::TakeControl) = ADDRESS_BY_VERSION(0x50C7C0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::TakeControl) = GLOBAL_ADDRESS_BY_VERSION(0x50C7C0, 0, 0, 0, 0, 0);

void CCamera::TakeControl(CEntity *target, short ModeToGoTo, short TypeOfSwitch, int WhoIsInControlOfTheCamera) {
    plugin::CallMethodDynGlobal<CCamera *, CEntity *, short, short, int>(gaddrof(CCamera::TakeControl), this, target, ModeToGoTo, TypeOfSwitch, WhoIsInControlOfTheCamera);
}

int addrof(CCamera::TakeControlAttachToEntity) = ADDRESS_BY_VERSION(0x50C910, 0, 0, 0, 0, 0);
int gaddrof(CCamera::TakeControlAttachToEntity) = GLOBAL_ADDRESS_BY_VERSION(0x50C910, 0, 0, 0, 0, 0);

void CCamera::TakeControlAttachToEntity(CEntity *target, CEntity *attached, CVector *AttachedCamOffset, CVector *AttachedCamLookAt, float AttachedCamAngle, short TypeOfSwitch, int WhoIsInControlOfTheCamera) {
    plugin::CallMethodDynGlobal<CCamera *, CEntity *, CEntity *, CVector *, CVector *, float, short, int>(gaddrof(CCamera::TakeControlAttachToEntity), this, target, attached, AttachedCamOffset, AttachedCamLookAt, AttachedCamAngle, TypeOfSwitch, WhoIsInControlOfTheCamera);
}

int addrof(CCamera::TakeControlNoEntity) = ADDRESS_BY_VERSION(0x50C8B0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::TakeControlNoEntity) = GLOBAL_ADDRESS_BY_VERSION(0x50C8B0, 0, 0, 0, 0, 0);

void CCamera::TakeControlNoEntity(CVector const *FixedModeVector, short TypeOfSwitch, int WhoIsInControlOfTheCamera) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const *, short, int>(gaddrof(CCamera::TakeControlNoEntity), this, FixedModeVector, TypeOfSwitch, WhoIsInControlOfTheCamera);
}

int addrof(CCamera::TakeControlWithSpline) = ADDRESS_BY_VERSION(0x50CAE0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::TakeControlWithSpline) = GLOBAL_ADDRESS_BY_VERSION(0x50CAE0, 0, 0, 0, 0, 0);

void CCamera::TakeControlWithSpline(short TypeOfSwitch) {
    plugin::CallMethodDynGlobal<CCamera *, short>(gaddrof(CCamera::TakeControlWithSpline), this, TypeOfSwitch);
}

int addrof(CCamera::TryToStartNewCamMode) = ADDRESS_BY_VERSION(0x51E560, 0, 0, 0, 0, 0);
int gaddrof(CCamera::TryToStartNewCamMode) = GLOBAL_ADDRESS_BY_VERSION(0x51E560, 0, 0, 0, 0, 0);

bool CCamera::TryToStartNewCamMode(int CamSequence) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *, int>(gaddrof(CCamera::TryToStartNewCamMode), this, CamSequence);
}

int addrof(CCamera::UpdateAimingCoors) = ADDRESS_BY_VERSION(0x50CB10, 0, 0, 0, 0, 0);
int gaddrof(CCamera::UpdateAimingCoors) = GLOBAL_ADDRESS_BY_VERSION(0x50CB10, 0, 0, 0, 0, 0);

void CCamera::UpdateAimingCoors(CVector const *AimingTargetCoors) {
    plugin::CallMethodDynGlobal<CCamera *, CVector const *>(gaddrof(CCamera::UpdateAimingCoors), this, AimingTargetCoors);
}

int addrof(CCamera::UpdateSoundDistances) = ADDRESS_BY_VERSION(0x515BD0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::UpdateSoundDistances) = GLOBAL_ADDRESS_BY_VERSION(0x515BD0, 0, 0, 0, 0, 0);

void CCamera::UpdateSoundDistances() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::UpdateSoundDistances), this);
}

int addrof(CCamera::UpdateTargetEntity) = ADDRESS_BY_VERSION(0x50C360, 0, 0, 0, 0, 0);
int gaddrof(CCamera::UpdateTargetEntity) = GLOBAL_ADDRESS_BY_VERSION(0x50C360, 0, 0, 0, 0, 0);

void CCamera::UpdateTargetEntity() {
    plugin::CallMethodDynGlobal<CCamera *>(gaddrof(CCamera::UpdateTargetEntity), this);
}

int addrof(CCamera::Using1stPersonWeaponMode) = ADDRESS_BY_VERSION(0x50BFF0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::Using1stPersonWeaponMode) = GLOBAL_ADDRESS_BY_VERSION(0x50BFF0, 0, 0, 0, 0, 0);

bool CCamera::Using1stPersonWeaponMode() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::Using1stPersonWeaponMode), this);
}

int addrof(CCamera::VectorMoveLinear) = ADDRESS_BY_VERSION(0x50D160, 0, 0, 0, 0, 0);
int gaddrof(CCamera::VectorMoveLinear) = GLOBAL_ADDRESS_BY_VERSION(0x50D160, 0, 0, 0, 0, 0);

void CCamera::VectorMoveLinear(CVector *MoveLinearPosnEnd, CVector *MoveLinearPosnStart, float duration, bool bMoveLinearWithEase) {
    plugin::CallMethodDynGlobal<CCamera *, CVector *, CVector *, float, bool>(gaddrof(CCamera::VectorMoveLinear), this, MoveLinearPosnEnd, MoveLinearPosnStart, duration, bMoveLinearWithEase);
}

int addrof(CCamera::VectorMoveRunning) = ADDRESS_BY_VERSION(0x4748A0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::VectorMoveRunning) = GLOBAL_ADDRESS_BY_VERSION(0x4748A0, 0, 0, 0, 0, 0);

bool CCamera::VectorMoveRunning() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::VectorMoveRunning), this);
}

int addrof(CCamera::VectorTrackLinear) = ADDRESS_BY_VERSION(0x50D1D0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::VectorTrackLinear) = GLOBAL_ADDRESS_BY_VERSION(0x50D1D0, 0, 0, 0, 0, 0);

void CCamera::VectorTrackLinear(CVector *TrackLinearStartPoint, CVector *TrackLinearEndPoint, float duration, bool bEase) {
    plugin::CallMethodDynGlobal<CCamera *, CVector *, CVector *, float, bool>(gaddrof(CCamera::VectorTrackLinear), this, TrackLinearStartPoint, TrackLinearEndPoint, duration, bEase);
}

int addrof(CCamera::VectorTrackRunning) = ADDRESS_BY_VERSION(0x474870, 0, 0, 0, 0, 0);
int gaddrof(CCamera::VectorTrackRunning) = GLOBAL_ADDRESS_BY_VERSION(0x474870, 0, 0, 0, 0, 0);

bool CCamera::VectorTrackRunning() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCamera *>(gaddrof(CCamera::VectorTrackRunning), this);
}

int addrof(CCamera::DontProcessObbeCinemaCamera) = ADDRESS_BY_VERSION(0x50AB40, 0, 0, 0, 0, 0);
int gaddrof(CCamera::DontProcessObbeCinemaCamera) = GLOBAL_ADDRESS_BY_VERSION(0x50AB40, 0, 0, 0, 0, 0);

void CCamera::DontProcessObbeCinemaCamera() {
    plugin::CallDynGlobal(gaddrof(CCamera::DontProcessObbeCinemaCamera));
}

int addrof(CCamera::SetCamCollisionVarDataSet) = ADDRESS_BY_VERSION(0x50CB60, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetCamCollisionVarDataSet) = GLOBAL_ADDRESS_BY_VERSION(0x50CB60, 0, 0, 0, 0, 0);

void CCamera::SetCamCollisionVarDataSet(int index) {
    plugin::CallDynGlobal<int>(gaddrof(CCamera::SetCamCollisionVarDataSet), index);
}

int addrof(CCamera::SetColVarsAimWeapon) = ADDRESS_BY_VERSION(0x50CBF0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetColVarsAimWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x50CBF0, 0, 0, 0, 0, 0);

void CCamera::SetColVarsAimWeapon(int aimingType) {
    plugin::CallDynGlobal<int>(gaddrof(CCamera::SetColVarsAimWeapon), aimingType);
}

int addrof(CCamera::SetColVarsPed) = ADDRESS_BY_VERSION(0x50CC50, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetColVarsPed) = GLOBAL_ADDRESS_BY_VERSION(0x50CC50, 0, 0, 0, 0, 0);

void CCamera::SetColVarsPed(int pedtype, int nCamPedZoom) {
    plugin::CallDynGlobal<int, int>(gaddrof(CCamera::SetColVarsPed), pedtype, nCamPedZoom);
}

int addrof(CCamera::SetColVarsVehicle) = ADDRESS_BY_VERSION(0x50CCA0, 0, 0, 0, 0, 0);
int gaddrof(CCamera::SetColVarsVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x50CCA0, 0, 0, 0, 0, 0);

void CCamera::SetColVarsVehicle(int vehicletype, int CamVehicleZoom) {
    plugin::CallDynGlobal<int, int>(gaddrof(CCamera::SetColVarsVehicle), vehicletype, CamVehicleZoom);
}
