/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPad.h"

short &CPad::ReconState                            = *(short *)0x628E64; 
short &CPad::GetAnaloguePadUp_oldfStickY           = *(short*)0x628E9A; 
short &CPad::GetAnaloguePadDown_oldfStickY         = *(short *)0x628E9E; 
short &CPad::GetAnaloguePadLeft_oldfStickX         = *(short *)0x628EA2; 
short &CPad::GetAnaloguePadRight_oldfStickX        = *(short *)0x628EA6; 
short &CPad::GetAnaloguePadLeftJustUp_oldfStickX   = *(short *)0x628EAA; 
short &CPad::GetAnaloguePadRightJustUp_oldfStickX  = *(short *)0x628EAE; 

CKeyboardState &CPad::NewKeyState  = *(CKeyboardState *)0x6E60D0;
CKeyboardState &CPad::OldKeyState  = *(CKeyboardState *)0x6F1E70;
CKeyboardState &CPad::TempKeyState = *(CKeyboardState *)0x774DE8;

char *CPad::KeyBoardCheatString         = (char *)0x885B90;
bool &CPad::m_bMapPadOneToPadTwo        = *(bool *)0x95CD48;
bool &CPad::bDisplayNoControllerMessage = *(bool *)0x95CD52;
bool &CPad::bObsoleteControllerMessage  = *(bool *)0x95CDB8;

CMouseControllerState &CPad::PCTempMouseControllerState = *(CMouseControllerState *)0x6F1E60;
CMouseControllerState &CPad::NewMouseControllerState    = *(CMouseControllerState *)0x8809F0;
CMouseControllerState &CPad::OldMouseControllerState    = *(CMouseControllerState *)0x8472A0;

// Converted from thiscall void CPad::AddToPCCheatString(char name) 0x492450 
void CPad::AddToPCCheatString(char name) {
    plugin::CallMethod<0x492450, CPad *, char>(this, name);
}

// Converted from thiscall void CPad::CPad(void) 0x494EE0 
CPad::CPad() {
    plugin::CallMethod<0x494EE0, CPad *>(this);
}

// Converted from thiscall bool CPad::CarGunJustDown(void) 0x4934F0
bool CPad::CarGunJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4934F0, CPad *>(this);
}

// Converted from thiscall bool CPad::ChangeStationJustDown(void) 0x493870
bool CPad::ChangeStationJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493870, CPad *>(this);
}

// Converted from thiscall void CPad::Clear(bool enable) 0x491A10 
void CPad::Clear(bool enable) {
    plugin::CallMethod<0x491A10, CPad *, bool>(this, enable);
}

// Converted from thiscall void CPad::ClearMouseHistory(void) 0x491B50 
void CPad::ClearMouseHistory() {
    plugin::CallMethod<0x491B50, CPad *>(this);
}

// Converted from thiscall bool CPad::CycleCameraModeDownJustDown(void) 0x493830 
bool CPad::CycleCameraModeDownJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493830, CPad *>(this);
}

// Converted from thiscall bool CPad::CycleCameraModeUpJustDown(void) 0x4937D0 
bool CPad::CycleCameraModeUpJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4937D0, CPad *>(this);
}

// Converted from thiscall bool CPad::CycleWeaponLeftJustDown(void) 0x493910 
bool CPad::CycleWeaponLeftJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493910, CPad *>(this);
}

// Converted from thiscall bool CPad::CycleWeaponRightJustDown(void) 0x493940 
bool CPad::CycleWeaponRightJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493940, CPad *>(this);
}

// Converted from thiscall void CPad::DoCheats(short) 0x492F20 
void CPad::DoCheats(short arg0) {
    plugin::CallMethod<0x492F20, CPad *, short>(this, arg0);
}

// Converted from cdecl void CPad::DoCheats(void) 0x492F00 
void CPad::DoCheats() {
    plugin::Call<0x492F00>();
}

// Converted from cdecl void CPad::EditCodesForControls(int *) 0x494690 
void CPad::EditCodesForControls(int* arg0) {
    plugin::Call<0x494690, int*>(arg0);
}

// Converted from cdecl void CPad::EditString(char *name,int) 0x4944B0 
void CPad::EditString(char* name, int arg1) {
    plugin::Call<0x4944B0, char*, int>(name, arg1);
}

// Converted from thiscall bool CPad::ExitVehicleJustDown(void) 0x493650 
bool CPad::ExitVehicleJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493650, CPad *>(this);
}

// Converted from thiscall bool CPad::ForceCameraBehindPlayer(void) 0x493D80 
bool CPad::ForceCameraBehindPlayer() {
    return plugin::CallMethodAndReturn<bool, 0x493D80, CPad *>(this);
}

// Converted from thiscall short CPad::GetAccelerate(void) 0x493780 
short CPad::GetAccelerate() {
    return plugin::CallMethodAndReturn<short, 0x493780, CPad *>(this);
}

// Converted from cdecl bool CPad::GetAnaloguePadDown(void) 0x493BA0 
bool CPad::GetAnaloguePadDown() {
    return plugin::CallAndReturn<bool, 0x493BA0>();
}

// Converted from cdecl bool CPad::GetAnaloguePadLeft(void) 0x493C00 
bool CPad::GetAnaloguePadLeft() {
    return plugin::CallAndReturn<bool, 0x493C00>();
}

// Converted from cdecl bool CPad::GetAnaloguePadLeftJustUp(void) 0x493CC0 
bool CPad::GetAnaloguePadLeftJustUp() {
    return plugin::CallAndReturn<bool, 0x493CC0>();
}

// Converted from cdecl bool CPad::GetAnaloguePadRight(void) 0x493C60 
bool CPad::GetAnaloguePadRight() {
    return plugin::CallAndReturn<bool, 0x493C60>();
}

// Converted from cdecl bool CPad::GetAnaloguePadRightJustUp(void) 0x493D20 
bool CPad::GetAnaloguePadRightJustUp() {
    return plugin::CallAndReturn<bool, 0x493D20>();
}

// Converted from cdecl bool CPad::GetAnaloguePadUp(void) 0x493B40 
bool CPad::GetAnaloguePadUp() {
    return plugin::CallAndReturn<bool, 0x493B40>();
}

// Converted from thiscall short CPad::GetAnalogueUpDown(void) 0x493210
short CPad::GetAnalogueUpDown() {
    return plugin::CallMethodAndReturn<short, 0x493210, CPad *>(this);
}

// Converted from thiscall short CPad::GetBrake(void) 0x4935A0
short CPad::GetBrake() {
    return plugin::CallMethodAndReturn<short, 0x4935A0, CPad *>(this);
}

// Converted from thiscall bool CPad::GetCarGunFired(void) 0x493490
bool CPad::GetCarGunFired() {
    return plugin::CallMethodAndReturn<bool, 0x493490, CPad *>(this);
}

// Converted from thiscall short CPad::GetCarGunLeftRight(void) 0x4930C0
short CPad::GetCarGunLeftRight() {
    return plugin::CallMethodAndReturn<short, 0x4930C0, CPad *>(this);
}

// Converted from thiscall short CPad::GetCarGunUpDown(void) 0x493070
short CPad::GetCarGunUpDown() {
    return plugin::CallMethodAndReturn<short, 0x493070, CPad *>(this);
}

// Converted from thiscall bool CPad::GetExitVehicle(void) 0x4935F0
bool CPad::GetExitVehicle() {
    return plugin::CallMethodAndReturn<bool, 0x4935F0, CPad *>(this);
}

// Converted from thiscall short CPad::GetHandBrake(void) 0x493560
short CPad::GetHandBrake() {
    return plugin::CallMethodAndReturn<short, 0x493560, CPad *>(this);
}

// Converted from thiscall bool CPad::GetHorn(void) 0x493350
bool CPad::GetHorn() {
    return plugin::CallMethodAndReturn<bool, 0x493350, CPad *>(this);
}

// Converted from thiscall bool CPad::GetLookBehindForCar(void) 0x4932F0 
bool CPad::GetLookBehindForCar() {
    return plugin::CallMethodAndReturn<bool, 0x4932F0, CPad *>(this);
}

// Converted from thiscall bool CPad::GetLookBehindForPed(void) 0x493320 
bool CPad::GetLookBehindForPed() {
    return plugin::CallMethodAndReturn<bool, 0x493320, CPad *>(this);
}

// Converted from thiscall bool CPad::GetLookLeft(void) 0x493290 
bool CPad::GetLookLeft() {
    return plugin::CallMethodAndReturn<bool, 0x493290, CPad *>(this);
}

// Converted from thiscall bool CPad::GetLookRight(void) 0x4932C0 
bool CPad::GetLookRight() {
    return plugin::CallMethodAndReturn<bool, 0x4932C0, CPad *>(this);
}

// Converted from cdecl CPad* CPad::GetPad(int padNumber) 0x492F60
CPad* CPad::GetPad(int padNumber) {
    return plugin::CallAndReturn<CPad*, 0x492F60, int>(padNumber);
}

// Converted from thiscall short CPad::GetPedWalkLeftRight(void) 0x493110 
short CPad::GetPedWalkLeftRight() {
    return plugin::CallMethodAndReturn<short, 0x493110, CPad *>(this);
}

// Converted from thiscall short CPad::GetPedWalkUpDown(void) 0x493190 
short CPad::GetPedWalkUpDown() {
    return plugin::CallMethodAndReturn<short, 0x493190, CPad *>(this);
}

// Converted from thiscall bool CPad::GetSprint(void) 0x493A70
bool CPad::GetSprint() {
    return plugin::CallMethodAndReturn<bool, 0x493A70, CPad *>(this);
}

// Converted from thiscall short CPad::GetSteeringLeftRight(void) 0x492F70 
short CPad::GetSteeringLeftRight() {
    return plugin::CallMethodAndReturn<short, 0x492F70, CPad *>(this);
}

// Converted from thiscall short CPad::GetSteeringUpDown(void) 0x492FF0 
short CPad::GetSteeringUpDown() {
    return plugin::CallMethodAndReturn<short, 0x492FF0, CPad *>(this);
}

// Converted from thiscall bool CPad::GetTarget(void) 0x493970
bool CPad::GetTarget() {
    return plugin::CallMethodAndReturn<bool, 0x493970, CPad *>(this);
}

// Converted from thiscall int CPad::GetWeapon(void) 0x4936C0
bool CPad::GetWeapon() {
    return plugin::CallMethodAndReturn<bool, 0x4936C0, CPad *>(this);
}

// Converted from thiscall bool CPad::HornJustDown(void) 0x4933F0 
bool CPad::HornJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4933F0, CPad *>(this);
}

// Converted from thiscall bool CPad::JumpJustDown(void) 0x493A40 
bool CPad::JumpJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493A40, CPad *>(this);
}

// Converted from thiscall int CPad::LookAroundLeftRight(void) 0x493F80 
int CPad::LookAroundLeftRight() {
    return plugin::CallMethodAndReturn<int, 0x493F80, CPad *>(this);
}

// Converted from thiscall int CPad::LookAroundUpDown(void) 0x494130 
int CPad::LookAroundUpDown() {
    return plugin::CallMethodAndReturn<int, 0x494130, CPad *>(this);
}

// Converted from cdecl void CPad::PrintErrorMessage(void) 0x4942B0 
void CPad::PrintErrorMessage() {
    plugin::Call<0x4942B0>();
}

// Converted from thiscall void CPad::ProcessPCSpecificStuff(void) 0x492C60 
void CPad::ProcessPCSpecificStuff() {
    plugin::CallMethod<0x492C60, CPad *>(this);
}

// Converted from thiscall void CPad::ReconcileTwoControllersInput(CControllerState const& controllerA,CControllerState const& controllerB) 0x491E60
void CPad::ReconcileTwoControllersInput(CControllerState const& controllerA, CControllerState const& controllerB) {
    plugin::CallMethod<0x491E60, CPad *, CControllerState const&, CControllerState const&>(this, controllerA, controllerB);
}

// Converted from thiscall void CPad::ResetAverageWeapon(void) 0x494290
void CPad::ResetAverageWeapon() {
    plugin::CallMethod<0x494290, CPad *>(this);
}

// Converted from cdecl void CPad::ResetCheats(void) 0x494450 
void CPad::ResetCheats() {
    plugin::Call<0x494450>();
}

// Converted from thiscall bool CPad::ShiftTargetLeftJustDown(void) 0x493AE0 
bool CPad::ShiftTargetLeftJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493AE0, CPad *>(this);
}

// Converted from thiscall bool CPad::ShiftTargetRightJustDown(void) 0x493B10 
bool CPad::ShiftTargetRightJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493B10, CPad *>(this);
}

// Converted from thiscall short CPad::SniperModeLookLeftRight(void) 0x493EE0 
short CPad::SniperModeLookLeftRight() {
    return plugin::CallMethodAndReturn<short, 0x493EE0, CPad *>(this);
}

// Converted from thiscall short CPad::SniperModeLookUpDown(void) 0x493F30 
short CPad::SniperModeLookUpDown() {
    return plugin::CallMethodAndReturn<short, 0x493F30, CPad *>(this);
}

// Converted from thiscall bool CPad::SniperZoomIn(void) 0x493E00 
bool CPad::SniperZoomIn() {
    return plugin::CallMethodAndReturn<bool, 0x493E00, CPad *>(this);
}

// Converted from thiscall bool CPad::SniperZoomOut(void) 0x493E70 
bool CPad::SniperZoomOut() {
    return plugin::CallMethodAndReturn<bool, 0x493E70, CPad *>(this);
}

// Converted from thiscall void CPad::StartShake(short time,uchar frequency) 0x492230
void CPad::StartShake(short time, unsigned char frequency) {
    plugin::CallMethod<0x492230, CPad *, short, unsigned char>(this, time, frequency);
}

// Converted from thiscall void CPad::StartShake_Distance(short time,uchar frequency,float x,float y,float z) 0x492290
void CPad::StartShake_Distance(short time, unsigned char frequency, float x, float y, float z) {
    plugin::CallMethod<0x492290, CPad *, short, unsigned char, float, float, float>(this, time, frequency, x, y, z);
}

// Converted from thiscall void CPad::StartShake_Train(float x,float y) 0x492360 
void CPad::StartShake_Train(float x, float y) {
    plugin::CallMethod<0x492360, CPad *, float, float>(this, x, y);
}

// Converted from cdecl void CPad::StopPadsShaking(void) 0x492F30 
void CPad::StopPadsShaking() {
    plugin::Call<0x492F30>();
}

// Converted from thiscall void CPad::StopShaking(short) 0x492F50 
void CPad::StopShaking(short arg0) {
    plugin::CallMethod<0x492F50, CPad *, short>(this, arg0);
}

// Converted from thiscall bool CPad::TargetJustDown(void) 0x4939D0
bool CPad::TargetJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4939D0, CPad *>(this);
}

// Converted from thiscall void CPad::Update(void) 0x492C70 
void CPad::Update() {
    plugin::CallMethod<0x492C70, CPad *>(this);
}

// Converted from thiscall void CPad::UpdateMouse(void) 0x491CA0 
void CPad::UpdateMouse() {
    plugin::CallMethod<0x491CA0, CPad *>(this);
}

// Converted from cdecl void CPad::UpdatePads(void) 0x492720 
void CPad::UpdatePads() {
    plugin::Call<0x492720>();
}

// Converted from thiscall void CPad::WeaponJustDown(void) 0x493700 
bool CPad::WeaponJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x493700, CPad *>(this);
}

// Converted from thiscall void CPad::~CPad() 0x494ED0 
CPad::~CPad() {
    plugin::CallMethod<0x494ED0, CPad *>(this);
}
