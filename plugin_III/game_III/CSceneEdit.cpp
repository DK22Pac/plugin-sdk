/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSceneEdit.h"

bool &CSceneEdit::m_bActor2Selected = *(bool*)0x95CD72;
bool &CSceneEdit::m_bActorSelected = *(bool*)0x95CDD4;
bool &CSceneEdit::m_bCameraFollowActor = *(bool*)0x940590;
bool &CSceneEdit::m_bCommandActive = *(bool*)0x95CD7F;
bool &CSceneEdit::m_bDrawGotoArrow = *(bool*)0x95CDBF;
bool &CSceneEdit::m_bEditOn = *(bool*)0x95CD77;
bool &CSceneEdit::m_bRecording = *(bool*)0x95CD1F;
bool &CSceneEdit::m_bVehicleSelected = *(bool*)0x95CDA1;
short &CSceneEdit::m_nActor = *(short*)0x95CC92;
short &CSceneEdit::m_nActor2 = *(short*)0x95CC5A;
unsigned short &CSceneEdit::m_nCurrentActor = *(unsigned short*)0x95CC8E;
unsigned short &CSceneEdit::m_nCurrentCommand = *(unsigned short*)0x95CC90;
unsigned short &CSceneEdit::m_nCurrentMovieCommand = *(unsigned short*)0x95CC48;
unsigned short &CSceneEdit::m_nCurrentVehicle = *(unsigned short*)0x95CCAC;
unsigned short &CSceneEdit::m_nNumActors = *(unsigned short*)0x95CC96;
unsigned short &CSceneEdit::m_nNumMovieCommands = *(unsigned short*)0x95CC28;
unsigned short &CSceneEdit::m_nNumVehicles = *(unsigned short*)0x95CC50;
unsigned int &CSceneEdit::m_nPedmodelId = *(unsigned int*)0x8F1B00;
short &CSceneEdit::m_nVehicle = *(short*)0x95CCF0;
short &CSceneEdit::m_nVehicle2 = *(short*)0x95CCE8;
unsigned int &CSceneEdit::m_nVehiclemodelId = *(unsigned int*)0x8F6244;
eWeaponType &CSceneEdit::m_nWeaponType = *(eWeaponType*)0x95CCB0;
CVector *CSceneEdit::m_vecCamHeading = (CVector*)0x942F8C;
CVector *CSceneEdit::m_vecCurrentPosition = (CVector*)0x943064;
CVector *CSceneEdit::m_vecGotoPosition = (CVector*)0x95CC10;
CPed **CSceneEdit::pActors = (CPed**)0x880F64;
CVehicle **CSceneEdit::pVehicles = (CVehicle**)0x8F6480;
CMovie *CSceneEdit::Movie = (CMovie*)0x713D28;

// Converted from cdecl void CSceneEdit::LoadMovie(void) 0x5850A0 
void CSceneEdit::LoadMovie() {
    plugin::Call<0x5850A0>();
}

// Converted from cdecl void CSceneEdit::SaveMovie(void) 0x585110 
void CSceneEdit::SaveMovie() {
    plugin::Call<0x585110>();
}

// Converted from cdecl void CSceneEdit::Initialise(void) 0x585170 
void CSceneEdit::Initialise() {
    plugin::Call<0x585170>();
}

// Converted from cdecl void CSceneEdit::InitPlayBack(void) 0x5852C0 
void CSceneEdit::InitPlayBack() {
    plugin::Call<0x5852C0>();
}

// Converted from cdecl void CSceneEdit::ReInitialise(void) 0x5853F0 
void CSceneEdit::ReInitialise() {
    plugin::Call<0x5853F0>();
}

// Converted from cdecl void CSceneEdit::Update(void) 0x585570 
void CSceneEdit::Update() {
    plugin::Call<0x585570>();
}

// Converted from cdecl void CSceneEdit::Draw(void) 0x5855F0 
void CSceneEdit::Draw() {
    plugin::Call<0x5855F0>();
}

// Converted from cdecl void CSceneEdit::ProcessCommand(void) 0x585BB0 
void CSceneEdit::ProcessCommand() {
    plugin::Call<0x585BB0>();
}

// Converted from cdecl void CSceneEdit::PlayBack(void) 0x587200 
void CSceneEdit::PlayBack() {
    plugin::Call<0x587200>();
}

// Converted from cdecl void CSceneEdit::ClearForNewCommand(void) 0x587AF0 
void CSceneEdit::ClearForNewCommand() {
    plugin::Call<0x587AF0>();
}

// Converted from cdecl bool CSceneEdit::SelectActor(void) 0x587B30 
bool CSceneEdit::SelectActor() {
    return plugin::CallAndReturn<bool, 0x587B30>();
}

// Converted from cdecl bool CSceneEdit::SelectActor2(void) 0x587DC0 
bool CSceneEdit::SelectActor2() {
    return plugin::CallAndReturn<bool, 0x587DC0>();
}

// Converted from cdecl bool CSceneEdit::SelectVehicle(void) 0x588040 
bool CSceneEdit::SelectVehicle() {
    return plugin::CallAndReturn<bool, 0x588040>();
}

// Converted from cdecl bool CSceneEdit::SelectWeapon(void) 0x588220 
bool CSceneEdit::SelectWeapon() {
    return plugin::CallAndReturn<bool, 0x588220>();
}

// Converted from cdecl int NextValidModelId(int currentModelIndex,int PrevOrNextModelIndex) 0x585050
int NextValidModelId(int currentModelIndex, int PrevOrNextModelIndex) {
    return plugin::CallAndReturn<int, 0x585050, int, int>(currentModelIndex, PrevOrNextModelIndex);
}
