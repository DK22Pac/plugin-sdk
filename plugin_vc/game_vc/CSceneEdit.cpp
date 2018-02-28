/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSceneEdit.h"

bool &CSceneEdit::m_bActor2Selected = *(bool*)0xA10B24;
bool &CSceneEdit::m_bActorSelected = *(bool*)0xA10B9D;
bool &CSceneEdit::m_bCameraFollowActor = *(bool*)0xA0D008;
bool &CSceneEdit::m_bCommandActive = *(bool*)0xA10B39;
bool &CSceneEdit::m_bDrawGotoArrow = *(bool*)0xA10B8B;
bool &CSceneEdit::m_bEditOn = *(bool*)0xA10B2D;
bool &CSceneEdit::m_bRecording = *(bool*)0xA10AB9;
bool &CSceneEdit::m_bVehicleSelected = *(bool*)0xA10B65;
short &CSceneEdit::m_nActor = *(short*)0xA10A52;
short &CSceneEdit::m_nActor2 = *(short*)0xA10986;
unsigned short &CSceneEdit::m_nCurrentActor = *(unsigned short*)0xA10A4E;
unsigned short &CSceneEdit::m_nCurrentCommand = *(unsigned short*)0xA10A50;
unsigned short &CSceneEdit::m_nCurrentMovieCommand = *(unsigned short*)0xA10974;
unsigned short &CSceneEdit::m_nCurrentVehicle = *(unsigned short*)0xA10A6C;
unsigned short &CSceneEdit::m_nNumActors = *(unsigned short*)0xA10A56;
unsigned short &CSceneEdit::m_nNumMovieCommands = *(unsigned short*)0xA1093A;
unsigned short &CSceneEdit::m_nNumVehicles = *(unsigned short*)0xA1097C;
unsigned int &CSceneEdit::m_nPedmodelId = *(unsigned int*)0x9786B8;
short &CSceneEdit::m_nVehicle = *(short*)0xA10AAE;
short &CSceneEdit::m_nVehicle2 = *(short*)0xA10AA6;
unsigned int &CSceneEdit::m_nVehiclemodelId = *(unsigned int*)0x9B6CE0;
eWeaponType &CSceneEdit::m_nWeaponType = *(eWeaponType*)0xA10A6E;
CVector *CSceneEdit::m_vecCamHeading = (CVector*)0xA0FC60;
CVector *CSceneEdit::m_vecCurrentPosition = (CVector*)0xA0FD60;
CVector *CSceneEdit::m_vecGotoPosition = (CVector*)0xA1091C;
CPed **CSceneEdit::pActors = (CPed**)0x94DD1C;
CVehicle **CSceneEdit::pVehicles = (CVehicle**)0x9B6E3C;
CMovie *CSceneEdit::Movie = (CMovie*)0x7F9C98;

// Converted from cdecl bool CSceneEdit::SelectWeapon(void) 0x6032E0
bool CSceneEdit::SelectWeapon() {
    return plugin::CallAndReturn<bool, 0x6032E0>();
}

// Converted from cdecl bool CSceneEdit::SelectVehicle(void) 0x603520
bool CSceneEdit::SelectVehicle() {
    return plugin::CallAndReturn<bool, 0x603520>();
}

// Converted from cdecl bool CSceneEdit::SelectActor2(void) 0x603700 
bool CSceneEdit::SelectActor2() {
    return plugin::CallAndReturn<bool, 0x603700>();
}

// Converted from cdecl bool CSceneEdit::SelectActor(void) 0x603980 
bool CSceneEdit::SelectActor() {
    return plugin::CallAndReturn<bool, 0x603980>();
}

// Converted from cdecl void CSceneEdit::PlayBack(void) 0x603C10 
void CSceneEdit::PlayBack() {
    plugin::Call<0x603C10>();
}

// Converted from cdecl void CSceneEdit::ProcessCommand(void) 0x604500 
void CSceneEdit::ProcessCommand() {
    plugin::Call<0x604500>();
}

// Converted from cdecl void CSceneEdit::Draw(void) 0x605DB0 
void CSceneEdit::Draw() {
    plugin::Call<0x605DB0>();
}

// Converted from cdecl void CSceneEdit::Update(void) 0x606270 
void CSceneEdit::Update() {
    plugin::Call<0x606270>();
}

// Converted from cdecl void CSceneEdit::ReInitialise(void) 0x6062F0 
void CSceneEdit::ReInitialise() {
    plugin::Call<0x6062F0>();
}

// Converted from cdecl void CSceneEdit::InitPlayBack(void) 0x606470 
void CSceneEdit::InitPlayBack() {
    plugin::Call<0x606470>();
}

// Converted from cdecl void CSceneEdit::Initialise(void) 0x6065B0 
void CSceneEdit::Initialise() {
    plugin::Call<0x6065B0>();
}
