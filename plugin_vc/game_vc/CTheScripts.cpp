/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

tScriptParam*CTheScripts::ScriptParams = (tScriptParam*)0x7D7438;

void CTheScripts::ClearSpaceForMissionEntity(CVector const& position, CEntity* entity) {
    plugin::Call<0x45F180, CVector const&, CEntity*>(position, entity);
}

PLUGIN_SOURCE_FILE

tIntroText(&CTheScripts::IntroTextLines)[48] = *reinterpret_cast<tIntroText(*)[48]>(GLOBAL_ADDRESS_BY_VERSION(0x7F0EA0, 0x7F0EA8, 0x7EFEA8));
unsigned char(&CTheScripts::ScriptSpace)[260512] = *reinterpret_cast<unsigned char(*)[260512]>(GLOBAL_ADDRESS_BY_VERSION(0x821280, 0x821288, 0x820288));
short &CTheScripts::NumberOfIntroTextLinesThisFrame = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A48, 0xA10A50, 0xA0FA50));

int addrof(CTheScripts::CleanUpThisObject) = ADDRESS_BY_VERSION(0x45EA80, 0x45EA80, 0x45E960);
int gaddrof(CTheScripts::CleanUpThisObject) = GLOBAL_ADDRESS_BY_VERSION(0x45EA80, 0x45EA80, 0x45E960);

void CTheScripts::CleanUpThisObject(CObject *pObject) {
    plugin::CallDynGlobal<CObject *>(gaddrof(CTheScripts::CleanUpThisObject), pObject);
}

int addrof(CTheScripts::CleanUpThisPed) = ADDRESS_BY_VERSION(0x45EB10, 0x45EB10, 0x45E9F0);
int gaddrof(CTheScripts::CleanUpThisPed) = GLOBAL_ADDRESS_BY_VERSION(0x45EB10, 0x45EB10, 0x45E9F0);

void CTheScripts::CleanUpThisPed(CPed *pPed) {
    plugin::CallDynGlobal<CPed *>(gaddrof(CTheScripts::CleanUpThisPed), pPed);
}

int addrof(CTheScripts::CleanUpThisVehicle) = ADDRESS_BY_VERSION(0x45EAD0, 0x45EAD0, 0x45E9B0);
int gaddrof(CTheScripts::CleanUpThisVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x45EAD0, 0x45EAD0, 0x45E9B0);

void CTheScripts::CleanUpThisVehicle(CVehicle *pVehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CTheScripts::CleanUpThisVehicle), pVehicle);
}

int addrof(CTheScripts::DrawScriptSpheres) = ADDRESS_BY_VERSION(0x458E50, 0x458E50, 0x458D30);
int gaddrof(CTheScripts::DrawScriptSpheres) = GLOBAL_ADDRESS_BY_VERSION(0x458E50, 0x458E50, 0x458D30);

void CTheScripts::DrawScriptSpheres() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::DrawScriptSpheres));
}

int addrof(CTheScripts::Init) = ADDRESS_BY_VERSION(0x450330, 0x450330, 0x450240);
int gaddrof(CTheScripts::Init) = GLOBAL_ADDRESS_BY_VERSION(0x450330, 0x450330, 0x450240);

void CTheScripts::Init() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::Init));
}

int addrof(CTheScripts::IsPlayerOnAMission) = ADDRESS_BY_VERSION(0x44FE30, 0x44FE30, 0x44FD40);
int gaddrof(CTheScripts::IsPlayerOnAMission) = GLOBAL_ADDRESS_BY_VERSION(0x44FE30, 0x44FE30, 0x44FD40);

bool CTheScripts::IsPlayerOnAMission() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CTheScripts::IsPlayerOnAMission));
}

int addrof(CTheScripts::IsPlayerStopped) = ADDRESS_BY_VERSION(0x45ED50, 0x45ED50, 0x45EC30);
int gaddrof(CTheScripts::IsPlayerStopped) = GLOBAL_ADDRESS_BY_VERSION(0x45ED50, 0x45ED50, 0x45EC30);

bool CTheScripts::IsPlayerStopped(CPlayerInfo *pPlayerIfo) {
    return plugin::CallAndReturnDynGlobal<bool, CPlayerInfo *>(gaddrof(CTheScripts::IsPlayerStopped), pPlayerIfo);
}

int addrof(CTheScripts::IsVehicleStopped) = ADDRESS_BY_VERSION(0x45ED20, 0x45ED20, 0x45EC00);
int gaddrof(CTheScripts::IsVehicleStopped) = GLOBAL_ADDRESS_BY_VERSION(0x45ED20, 0x45ED20, 0x45EC00);

bool CTheScripts::IsVehicleStopped(CVehicle *pPlayer) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CTheScripts::IsVehicleStopped), pPlayer);
}

int addrof(CTheScripts::Process) = ADDRESS_BY_VERSION(0x44FED0, 0x44FED0, 0x44FDE0);
int gaddrof(CTheScripts::Process) = GLOBAL_ADDRESS_BY_VERSION(0x44FED0, 0x44FED0, 0x44FDE0);

void CTheScripts::Process() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::Process));
}

int addrof(CTheScripts::ReadMultiScriptFileOffsetsFromScript) = ADDRESS_BY_VERSION(0x45E530, 0x45E530, 0x45E410);
int gaddrof(CTheScripts::ReadMultiScriptFileOffsetsFromScript) = GLOBAL_ADDRESS_BY_VERSION(0x45E530, 0x45E530, 0x45E410);

void CTheScripts::ReadMultiScriptFileOffsetsFromScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ReadMultiScriptFileOffsetsFromScript));
}

int addrof(CTheScripts::ReadObjectNamesFromScript) = ADDRESS_BY_VERSION(0x45E910, 0x45E910, 0x45E7F0);
int gaddrof(CTheScripts::ReadObjectNamesFromScript) = GLOBAL_ADDRESS_BY_VERSION(0x45E910, 0x45E910, 0x45E7F0);

void CTheScripts::ReadObjectNamesFromScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ReadObjectNamesFromScript));
}

int addrof(CTheScripts::RemoveScriptTextureDictionary) = ADDRESS_BY_VERSION(0x450C80, 0x450C80, 0x450B90);
int gaddrof(CTheScripts::RemoveScriptTextureDictionary) = GLOBAL_ADDRESS_BY_VERSION(0x450C80, 0x450C80, 0x450B90);

void CTheScripts::RemoveScriptTextureDictionary() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::RemoveScriptTextureDictionary));
}

int addrof(CTheScripts::RemoveThisPed) = ADDRESS_BY_VERSION(0x45EC70, 0x45EC70, 0x45EB50);
int gaddrof(CTheScripts::RemoveThisPed) = GLOBAL_ADDRESS_BY_VERSION(0x45EC70, 0x45EC70, 0x45EB50);

void CTheScripts::RemoveThisPed(CPed *pPed) {
    plugin::CallDynGlobal<CPed *>(gaddrof(CTheScripts::RemoveThisPed), pPed);
}

int addrof(CTheScripts::StartNewScript) = ADDRESS_BY_VERSION(0x450270, 0x450270, 0x450180);
int gaddrof(CTheScripts::StartNewScript) = GLOBAL_ADDRESS_BY_VERSION(0x450270, 0x450270, 0x450180);

CRunningScript *CTheScripts::StartNewScript(int addr) {
    return plugin::CallAndReturnDynGlobal<CRunningScript *, int>(gaddrof(CTheScripts::StartNewScript), addr);
}

int addrof(CTheScripts::StartTestScript) = ADDRESS_BY_VERSION(0x44FE60, 0x44FE60, 0x44FD70);
int gaddrof(CTheScripts::StartTestScript) = GLOBAL_ADDRESS_BY_VERSION(0x44FE60, 0x44FE60, 0x44FD70);

CRunningScript *CTheScripts::StartTestScript() {
    return plugin::CallAndReturnDynGlobal<CRunningScript *>(gaddrof(CTheScripts::StartTestScript));
}

int addrof(CTheScripts::UndoBuildingSwaps) = ADDRESS_BY_VERSION(0x458CC0, 0x458CC0, 0x458BA0);
int gaddrof(CTheScripts::UndoBuildingSwaps) = GLOBAL_ADDRESS_BY_VERSION(0x458CC0, 0x458CC0, 0x458BA0);

void CTheScripts::UndoBuildingSwaps() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::UndoBuildingSwaps));
}

int addrof(CTheScripts::UndoEntityInvisibilitySettings) = ADDRESS_BY_VERSION(0x458C90, 0x458C90, 0x458B70);
int gaddrof(CTheScripts::UndoEntityInvisibilitySettings) = GLOBAL_ADDRESS_BY_VERSION(0x458C90, 0x458C90, 0x458B70);

void CTheScripts::UndoEntityInvisibilitySettings() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::UndoEntityInvisibilitySettings));
}

int addrof(CTheScripts::UpdateObjectIndices) = ADDRESS_BY_VERSION(0x45E820, 0x45E820, 0x45E700);
int gaddrof(CTheScripts::UpdateObjectIndices) = GLOBAL_ADDRESS_BY_VERSION(0x45E820, 0x45E820, 0x45E700);

void CTheScripts::UpdateObjectIndices() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::UpdateObjectIndices));
}
