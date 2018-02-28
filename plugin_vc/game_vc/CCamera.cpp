/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"

CCamera &TheCamera = *(CCamera *)0x7E4688;

// Converted from thiscall void CCamera::AvoidTheGeometry(CVector const& Vector1,CVector const& Vector2 ,CVector& Vector3,float arg4)	0x473AA4 
void CCamera::AvoidTheGeometry(CVector const& Vector1, CVector const& Vector2, CVector& Vector3, float arg4) {
	plugin::CallMethod<0x473AA4, CCamera *, CVector const&, CVector const&, CVector&, float>(this, Vector1, Vector2, Vector3, arg4);
}

// Converted from thiscall void CCamera::CalculateDerivedValues(void)	0x46C3B6
void CCamera::CalculateDerivedValues() {
	plugin::CallMethod<0x46C3B6, CCamera *>(this);
}

// Converted from thiscall void CCamera::CamControl(void)	0x4700E7	
void CCamera::CamControl() {
	plugin::CallMethod<0x4700E7, CCamera *>(this);
}

// Converted from thiscall void CCamera::CamShake(float arg1,float x_coord,float y_coord,float z_coord)	0x46FF21
void CCamera::CamShake(float arg1, float x_coord, float y_coord, float z_coord) {
	plugin::CallMethod<0x46FF21, CCamera *, float, float, float, float>(this, arg1, x_coord, y_coord, z_coord);
}

// Converted from thiscall void CCamera::ClearPlayerWeaponMode(void)	0x46FE51	
void CCamera::ClearPlayerWeaponMode() {
	plugin::CallMethod<0x46FE51, CCamera *>(this);
}

// Converted from thiscall void CCamera::DeleteCutSceneCamDataMemory(void)	0x46FE25
void CCamera::DeleteCutSceneCamDataMemory() {
	plugin::CallMethod<0x46FE25, CCamera *>(this);
}

// Converted from cdecl void CCamera::DontProcessObbeCinemaCamera(void)	0x46FE13
void CCamera::DontProcessObbeCinemaCamera() {
	plugin::Call<0x46FE13>();
}

// Converted from thiscall void CCamera::DrawBordersForWideScreen(void)	0x46FC1C	
void CCamera::DrawBordersForWideScreen() {
	plugin::CallMethod<0x46FC1C, CCamera *>(this);
}

// Converted from thiscall void CCamera::Fade(float timeToFade,short FadingDirection)	0x46FBCB	
void CCamera::Fade(float timeToFade, short FadingDirection) {
	plugin::CallMethod<0x46FBCB, CCamera *, float, short>(this, timeToFade, FadingDirection);
}

// Converted from thiscall bool CCamera::Find3rdPersonCamTargetVector(float arg1,CVector vector1,CVector& vector2 ,CVector& vector3)	0x46F890 
bool CCamera::Find3rdPersonCamTargetVector(float arg1, CVector vector1, CVector& vector2, CVector& vector3) {
	return plugin::CallMethodAndReturn<bool, 0x46F890, CCamera *, float, CVector, CVector&, CVector&>(this, arg1, vector1, vector2, vector3);
}

// Converted from thiscall float CCamera::Find3rdPersonQuickAimPitch(void)	0x46F7C6	
float CCamera::Find3rdPersonQuickAimPitch() {
	return plugin::CallMethodAndReturn<float, 0x46F7C6, CCamera *>(this);
}

// Converted from thiscall void CCamera::FinishCutscene(void)	0x46FB3C	
void CCamera::FinishCutscene() {
	plugin::CallMethod<0x46FB3C, CCamera *>(this);
}

// Converted from cdecl bool CCamera::GetArrPosForVehicleType(int vehicleType,int &ArrPos)	0x46F659	
bool CCamera::GetArrPosForVehicleType(int vehicleType, int& ArrPos) {
	return plugin::CallAndReturn<bool, 0x46F659, int, int&>(vehicleType, ArrPos);
}

// Converted from thiscall int CCamera::GetCutSceneFinishTime(void)	0x46F77E	
int CCamera::GetCutSceneFinishTime() {
	return plugin::CallMethodAndReturn<int, 0x46F77E, CCamera *>(this);
}

// Converted from thiscall bool CCamera::GetFading(void)	0x46F777	
bool CCamera::GetFading() {
	return plugin::CallMethodAndReturn<bool, 0x46F777, CCamera *>(this);
}

// Converted from thiscall CVector* CCamera::GetGameCamPosition(void)	0x46F730	
CVector* CCamera::GetGameCamPosition() {
	return plugin::CallMethodAndReturn<CVector*, 0x46F730, CCamera *>(this);
}

// Converted from thiscall int CCamera::GetLookDirection(void)	0x46F6CE	
int CCamera::GetLookDirection() {
	return plugin::CallMethodAndReturn<int, 0x46F6CE, CCamera *>(this);
}

// Converted from thiscall bool CCamera::GetLookingForwardFirstPerson(void)	0x46F6A9	
bool CCamera::GetLookingForwardFirstPerson() {
	return plugin::CallMethodAndReturn<bool, 0x46F6A9, CCamera *>(this);
}

// Converted from thiscall bool CCamera::GetLookingLRBFirstPerson(void)	0x46F70B	
bool CCamera::GetLookingLRBFirstPerson() {
	return plugin::CallMethodAndReturn<bool, 0x46F70B, CCamera *>(this);
}

// Converted from thiscall float CCamera::GetPositionAlongSpline(void)	0x46F652	
float CCamera::GetPositionAlongSpline() {
	return plugin::CallMethodAndReturn<float, 0x46F652, CCamera *>(this);
}

// Converted from thiscall bool CCamera::GetScreenFadeStatus(void)	0x46F737	
bool CCamera::GetScreenFadeStatus() {
	return plugin::CallMethodAndReturn<bool, 0x46F737, CCamera *>(this);
}

// Converted from thiscall void CCamera::GetScreenRect(CRect & Rect)	0x46FD5D	
void CCamera::GetScreenRect(CRect& Rect) {
	plugin::CallMethod<0x46FD5D, CCamera *, CRect&>(this, Rect);
}

// Converted from thiscall bool CCamera::Get_Just_Switched_Status(void)	0x46F773	
bool CCamera::Get_Just_Switched_Status() {
	return plugin::CallMethodAndReturn<bool, 0x46F773, CCamera *>(this);
}

// Converted from thiscall void CCamera::Init(void)	0x46F108	
void CCamera::Init() {
	plugin::CallMethod<0x46F108, CCamera *>(this);
}

// Converted from thiscall bool CCamera::IsItTimeForNewcam(int arg1,int timer)	0x46E2C4	
bool CCamera::IsItTimeForNewcam(int arg1, int timer) {
	return plugin::CallMethodAndReturn<bool, 0x46E2C4, CCamera *, int, int>(this, arg1, timer);
}

// Converted from cdecl void CCamera::LoadPathSplines(int FilePtr)	0x46E140	
void CCamera::LoadPathSplines(int FilePtr) {
	plugin::Call<0x46E140, int>(FilePtr);
}

// Converted from thiscall void CCamera::Process(void)	0x46C58C	
void CCamera::Process() {
	plugin::CallMethod<0x46C58C, CCamera *>(this);
}

// Converted from thiscall void CCamera::ProcessFade(void)	0x46C278	
void CCamera::ProcessFade() {
	plugin::CallMethod<0x46C278, CCamera *>(this);
}

// Converted from thiscall void CCamera::ProcessMusicFade(void)	0x46C10D	
void CCamera::ProcessMusicFade() {
	plugin::CallMethod<0x46C10D, CCamera *>(this);
}

// Converted from thiscall void CCamera::ProcessObbeCinemaCameraCar(void)	0x46BFEE	
void CCamera::ProcessObbeCinemaCameraCar() {
	plugin::CallMethod<0x46BFEE, CCamera *>(this);
}

// Converted from thiscall void CCamera::ProcessObbeCinemaCameraHeli(void)	0x46BEE6	
void CCamera::ProcessObbeCinemaCameraHeli() {
	plugin::CallMethod<0x46BEE6, CCamera *>(this);
}

// Converted from thiscall void CCamera::ProcessObbeCinemaCameraPed(void)	0x46BE18	
void CCamera::ProcessObbeCinemaCameraPed() {
	plugin::CallMethod<0x46BE18, CCamera *>(this);
}

// Converted from thiscall void CCamera::RenderMotionBlur(void)	0x46BDE0	
void CCamera::RenderMotionBlur() {
	plugin::CallMethod<0x46BDE0, CCamera *>(this);
}

// Converted from thiscall void CCamera::Restore(void)	0x46BC7D	
void CCamera::Restore() {
	plugin::CallMethod<0x46BC7D, CCamera *>(this);
}

// Converted from thiscall void CCamera::RestoreWithJumpCut(void)	0x46BB24
void CCamera::RestoreWithJumpCut() {
	plugin::CallMethod<0x46BB24, CCamera *>(this);
}

// Converted from thiscall void CCamera::SetCamCutSceneOffSet(CVector const& vecCutSceneOffset)	0x46BB03	
void CCamera::SetCamCutSceneOffSet(CVector const& vecCutSceneOffset) {
	plugin::CallMethod<0x46BB03, CCamera *, CVector const&>(this, vecCutSceneOffset);
}

// Converted from thiscall void CCamera::SetCamPositionForFixedMode(CVector const& vecFixedModeSource,CVector const&vecFixedModeUpOffSet)	0x46BA72
void CCamera::SetCamPositionForFixedMode(CVector const& vecFixedModeSource, CVector const& vecFixedModeUpOffSet) {
	plugin::CallMethod<0x46BA72, CCamera *, CVector const&, CVector const&>(this, vecFixedModeSource, vecFixedModeUpOffSet);
}

// Converted from thiscall void CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString(void)	0x46BADE
void CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString() {
	plugin::CallMethod<0x46BADE, CCamera *>(this);
}

// Converted from thiscall void CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString(void)	0x46BAB9
void CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString() {
	plugin::CallMethod<0x46BAB9, CCamera *>(this);
}

// Converted from thiscall void CCamera::SetFadeColour(uchar red,uchar green,uchar blue)	0x46BA35
void CCamera::SetFadeColour(unsigned char red, unsigned char green, unsigned char blue) {
	plugin::CallMethod<0x46BA35, CCamera *, unsigned char, unsigned char, unsigned char>(this, red, green, blue);
}

// Converted from thiscall void CCamera::SetMotionBlur(int red,int green,int blue,int motionblur,int blurtype)	0x46BA00
void CCamera::SetMotionBlur(int red, int green, int blue, int motionblur, int blurtype) {
	plugin::CallMethod<0x46BA00, CCamera *, int, int, int, int, int>(this, red, green, blue, motionblur, blurtype);
}

// Converted from thiscall void CCamera::SetMotionBlurAlpha(int alpha)	0x46B9F3
void CCamera::SetMotionBlurAlpha(int alpha) {
	plugin::CallMethod<0x46B9F3, CCamera *, int>(this, alpha);
}

// Converted from thiscall void CCamera::SetNearClipScript(float fNearClipScript)	0x46B9E2
void CCamera::SetNearClipScript(float fNearClipScript) {
	plugin::CallMethod<0x46B9E2, CCamera *, float>(this, fNearClipScript);
}

// Converted from thiscall void CCamera::SetNewPlayerWeaponMode(short Mode,short MinZoom,short MaxZoom)	0x46B90D
void CCamera::SetNewPlayerWeaponMode(short Mode, short MinZoom, short MaxZoom) {
	plugin::CallMethod<0x46B90D, CCamera *, short, short, short>(this, Mode, MinZoom, MaxZoom);
}

// Converted from thiscall void CCamera::SetParametersForScriptInterpolation(float fScriptInterToStopMoving,float fScriptInterToCatchUp,uint fScriptTimeForInterPolation)	0x46B8AE
void CCamera::SetParametersForScriptInterpolation(float fScriptInterToStopMoving, float fScriptInterToCatchUp, unsigned int fScriptTimeForInterPolation) {
	plugin::CallMethod<0x46B8AE, CCamera *, float, float, unsigned int>(this, fScriptInterToStopMoving, fScriptInterToCatchUp, fScriptTimeForInterPolation);
}

// Converted from thiscall void CCamera::SetRwCamera(RwCamera *pRwCam)	0x46B87A
void CCamera::SetRwCamera(RwCamera* pRwCam) {
	plugin::CallMethod<0x46B87A, CCamera *, RwCamera*>(this, pRwCam);
}

// Converted from thiscall void CCamera::SetWideScreenOff(void)	0x46B863
void CCamera::SetWideScreenOff() {
	plugin::CallMethod<0x46B863, CCamera *>(this);
}

// Converted from thiscall void CCamera::SetWideScreenOn(void)	0x46B875
void CCamera::SetWideScreenOn() {
	plugin::CallMethod<0x46B875, CCamera *>(this);
}

// Converted from thiscall void CCamera::SetZoomValueCamStringScript(short mode)	0x46B743
void CCamera::SetZoomValueCamStringScript(short mode) {
	plugin::CallMethod<0x46B743, CCamera *, short>(this, mode);
}

// Converted from thiscall void CCamera::SetZoomValueFollowPedScript(short mode)	0x46B817
void CCamera::SetZoomValueFollowPedScript(short mode) {
	plugin::CallMethod<0x46B817, CCamera *, short>(this, mode);
}

// Converted from thiscall void CCamera::StartTransition(short mode)	0x46AB08	
void CCamera::StartTransition(short mode) {
	plugin::CallMethod<0x46AB08, CCamera *, short>(this, mode);
}

// Converted from thiscall void CCamera::StartTransitionWhenNotFinishedInter(short mode)	0x46AAF5	.
void CCamera::StartTransitionWhenNotFinishedInter(short mode) {
	plugin::CallMethod<0x46AAF5, CCamera *, short>(this, mode);
}

// Converted from thiscall void CCamera::StoreValuesDuringInterPol(CVector & SourceDuringInter,CVector & TargetDuringInter,CVector & UpDuringInter,float & FOVDuringInter)	0x46AA01
void CCamera::StoreValuesDuringInterPol(CVector& _SourceDuringInter, CVector& _TargetDuringInter, CVector& _UpDuringInter, float& _FOVDuringInter) {
	plugin::CallMethod<0x46AA01, CCamera *, CVector&, CVector&, CVector&, float&>(this, _SourceDuringInter, _TargetDuringInter, _UpDuringInter, _FOVDuringInter);
}

// Converted from thiscall void CCamera::TakeControl(CEntity * pEntity,short mode,short TypeOfSwitch,int WhoIsInControlOfTheCamera)	0x46A4F8
void CCamera::TakeControl(CEntity* pEntity, short mode, short _TypeOfSwitch, int _WhoIsInControlOfTheCamera) {
	plugin::CallMethod<0x46A4F8, CCamera *, CEntity*, short, short, int>(this, pEntity, mode, _TypeOfSwitch, _WhoIsInControlOfTheCamera);
}

// Converted from thiscall void CCamera::TakeControlNoEntity(CVector const& vecFixedModeVector,short TypeOfSwitch,int WhoIsInControlOfTheCamera)	0x46A494
void CCamera::TakeControlNoEntity(CVector const& vecFixedModeVector, short _TypeOfSwitch, int _WhoIsInControlOfTheCamera) {
	plugin::CallMethod<0x46A494, CCamera *, CVector const&, short, int>(this, vecFixedModeVector, _TypeOfSwitch, _WhoIsInControlOfTheCamera);
}

// Converted from thiscall void CCamera::TakeControlWithSpline(short TypeOfSwitch)	0x46A46A
void CCamera::TakeControlWithSpline(short TypeOfSwitch) {
	plugin::CallMethod<0x46A46A, CCamera *, short>(this, TypeOfSwitch);
}

// Converted from thiscall bool CCamera::TryToStartNewCamMode(int mode)	0x467AAD	
bool CCamera::TryToStartNewCamMode(int mode) {
	return plugin::CallMethodAndReturn<bool, 0x467AAD, CCamera *, int>(this, mode);
}

// Converted from thiscall void CCamera::UpdateAimingCoors(CVector const& vecAimingTarget)	0x467A8C	
void CCamera::UpdateAimingCoors(CVector const& vecAimingTarget) {
	plugin::CallMethod<0x467A8C, CCamera *, CVector const&>(this, vecAimingTarget);
}

// Converted from thiscall void CCamera::UpdateSoundDistances(void)	0x46A885	
void CCamera::UpdateSoundDistances() {
	plugin::CallMethod<0x46A885, CCamera *>(this);
}

// Converted from thiscall void CCamera::UpdateTargetEntity(void)	0x46A5A3	
void CCamera::UpdateTargetEntity() {
	plugin::CallMethod<0x46A5A3, CCamera *>(this);
}

// Converted from thiscall bool CCamera::Using1stPersonWeaponMode(void)	0x46B8E2	.	
bool CCamera::Using1stPersonWeaponMode() {
	return plugin::CallMethodAndReturn<bool, 0x46B8E2, CCamera *>(this);
}
