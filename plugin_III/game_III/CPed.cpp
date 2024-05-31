/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector2D &CPed::ms_vec2DFleePosition = *reinterpret_cast<CVector2D *>(GLOBAL_ADDRESS_BY_VERSION(0x6EDF70, 0x6EDF70, 0x6FE0B0));
PLUGIN_VARIABLE bool &CPed::bNastyLimbsCheat = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD44, 0x95CEFC, 0x96D03C));
PLUGIN_VARIABLE bool &CPed::bPedCheat3 = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD59, 0x95CF11, 0x96D051));
PLUGIN_VARIABLE bool &CPed::bPedCheat2 = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD5A, 0x95CF12, 0x96D052));
PLUGIN_VARIABLE FightMove(&tFightMoves)[24] = *reinterpret_cast<FightMove(*)[24]>(GLOBAL_ADDRESS_BY_VERSION(0x5F9844, 0x5F962C, 0x606624));
PLUGIN_VARIABLE CVector &vecVehicleSeatPosOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62DB08, 0x62DB08, 0x63DB08));
PLUGIN_VARIABLE CColPoint(&aTempPedColPts_)[32] = *reinterpret_cast<CColPoint(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x62DB14, 0x62DB14, 0x63DB14));
PLUGIN_VARIABLE CVector &vecPedCarDoorAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E030, 0x62E030, 0x63E030));
PLUGIN_VARIABLE CVector &vecPedCarDoorLoAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E03C, 0x62E03C, 0x63E03C));
PLUGIN_VARIABLE CVector &vecPedVanRearDoorAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E048, 0x62E048, 0x63E048));
PLUGIN_VARIABLE CVector &vecPedTrainDoorAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E054, 0x62E054, 0x63E054));
PLUGIN_VARIABLE CVector &vecPedDraggedOutCarAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E060, 0x62E060, 0x63E060));
PLUGIN_VARIABLE CVector &vecPedQuickDraggedOutCarAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E06C, 0x62E06C, 0x63E06C));
PLUGIN_VARIABLE CPed *(&gapTempPedList)[50] = *reinterpret_cast<CPed *(*)[50]>(GLOBAL_ADDRESS_BY_VERSION(0x6E9628, 0x6E9628, 0x6F9768));
PLUGIN_VARIABLE RpClump *&pNastyClump = *reinterpret_cast<RpClump **>(GLOBAL_ADDRESS_BY_VERSION(0x880F78, 0x880F28, 0x891068));
PLUGIN_VARIABLE unsigned short &nPlayerInComboMove = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC58, 0x95CE10, 0x96CF50));
PLUGIN_VARIABLE unsigned short &gnNumTempPedList = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC7E, 0x95CE36, 0x96CF76));

int ctor_addr_o(CPed, void(unsigned int)) = ADDRESS_BY_VERSION(0x4C41C0, 0x4C4260, 0x4C41F0);
int ctor_gaddr_o(CPed, void(unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x4C41C0, 0x4C4260, 0x4C41F0);

int dtor_addr(CPed) = ADDRESS_BY_VERSION(0x4C50D0, 0x4C5170, 0x4C5100);
int dtor_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C50D0, 0x4C5170, 0x4C5100);

int op_new_addr(CPed) = ADDRESS_BY_VERSION(0x4C5220, 0x4C52C0, 0x4C5250);
int op_new_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C5220, 0x4C52C0, 0x4C5250);

int op_new_addr_o(CPed, void *(unsigned int, int)) = ADDRESS_BY_VERSION(0x4C5230, 0x4C52D0, 0x4C5260);
int op_new_gaddr_o(CPed, void *(unsigned int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4C5230, 0x4C52D0, 0x4C5260);

int op_delete_addr(CPed) = ADDRESS_BY_VERSION(0x4C5250, 0x4C52F0, 0x4C5280);
int op_delete_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C5250, 0x4C52F0, 0x4C5280);

int del_dtor_addr(CPed) = ADDRESS_BY_VERSION(0x43D4F0, 0x43D4F0, 0x43D4F0);
int del_dtor_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x43D4F0, 0x43D4F0, 0x43D4F0);

int addrof(CPed::SetModelIndex) = ADDRESS_BY_VERSION(0x4C52A0, 0x4C5340, 0x4C52D0);
int gaddrof(CPed::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4C52A0, 0x4C5340, 0x4C52D0);

void CPed::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CPed *, unsigned int>(this, modelIndex);
}

int addrof(CPed::ProcessControl) = ADDRESS_BY_VERSION(0x4C8910, 0x4C89B0, 0x4C8940);
int gaddrof(CPed::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4C8910, 0x4C89B0, 0x4C8940);

void CPed::ProcessControl() {
    plugin::CallVirtualMethod<8, CPed *>(this);
}

int addrof(CPed::Teleport) = ADDRESS_BY_VERSION(0x4D3E70, 0x4D3F10, 0x4D3EA0);
int gaddrof(CPed::Teleport) = GLOBAL_ADDRESS_BY_VERSION(0x4D3E70, 0x4D3F10, 0x4D3EA0);

void CPed::Teleport(CVector pos) {
    plugin::CallVirtualMethod<11, CPed *, CVector>(this, pos);
}

int addrof(CPed::PreRender) = ADDRESS_BY_VERSION(0x4CFDD0, 0x4CFE70, 0x4CFE00);
int gaddrof(CPed::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x4CFDD0, 0x4CFE70, 0x4CFE00);

void CPed::PreRender() {
    plugin::CallVirtualMethod<12, CPed *>(this);
}

int addrof(CPed::Render) = ADDRESS_BY_VERSION(0x4D03F0, 0x4D0490, 0x4D0420);
int gaddrof(CPed::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4D03F0, 0x4D0490, 0x4D0420);

void CPed::Render() {
    plugin::CallVirtualMethod<13, CPed *>(this);
}

int addrof(CPed::SetupLighting) = ADDRESS_BY_VERSION(0x4A7D30, 0x4A7E20, 0x4A7DB0);
int gaddrof(CPed::SetupLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7D30, 0x4A7E20, 0x4A7DB0);

bool CPed::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CPed *>(this);
}

int addrof(CPed::RemoveLighting) = ADDRESS_BY_VERSION(0x4A7DC0, 0x4A7EB0, 0x4A7E40);
int gaddrof(CPed::RemoveLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7DC0, 0x4A7EB0, 0x4A7E40);

void CPed::RemoveLighting(bool resetWorldColors) {
    plugin::CallVirtualMethod<15, CPed *, bool>(this, resetWorldColors);
}

int addrof(CPed::FlagToDestroyWhenNextProcessed) = ADDRESS_BY_VERSION(0x4D6570, 0x4D6610, 0x4D65A0);
int gaddrof(CPed::FlagToDestroyWhenNextProcessed) = GLOBAL_ADDRESS_BY_VERSION(0x4D6570, 0x4D6610, 0x4D65A0);

void CPed::FlagToDestroyWhenNextProcessed() {
    plugin::CallVirtualMethod<16, CPed *>(this);
}

int addrof(CPed::ProcessEntityCollision) = ADDRESS_BY_VERSION(0x4CBB30, 0x4CBBD0, 0x4CBB60);
int gaddrof(CPed::ProcessEntityCollision) = GLOBAL_ADDRESS_BY_VERSION(0x4CBB30, 0x4CBBD0, 0x4CBB60);

int CPed::ProcessEntityCollision(CEntity *entity, CColPoint *colPoint) {
    return plugin::CallVirtualMethodAndReturn<int, 17, CPed *, CEntity *, CColPoint *>(this, entity, colPoint);
}

int addrof(CPed::SetMoveAnim) = ADDRESS_BY_VERSION(0x4C5A40, 0x4C5AE0, 0x4C5A70);
int gaddrof(CPed::SetMoveAnim) = GLOBAL_ADDRESS_BY_VERSION(0x4C5A40, 0x4C5AE0, 0x4C5A70);

void CPed::SetMoveAnim() {
    plugin::CallVirtualMethod<18, CPed *>(this);
}

int addrof(CPed::AddWeaponModel) = ADDRESS_BY_VERSION(0x4CF8F0, 0x4CF990, 0x4CF920);
int gaddrof(CPed::AddWeaponModel) = GLOBAL_ADDRESS_BY_VERSION(0x4CF8F0, 0x4CF990, 0x4CF920);

void CPed::AddWeaponModel(int modelIndex) {
    plugin::CallMethodDynGlobal<CPed *, int>(gaddrof(CPed::AddWeaponModel), this, modelIndex);
}

int addrof(CPed::AimGun) = ADDRESS_BY_VERSION(0x4C6AA0, 0x4C6B40, 0x4C6AD0);
int gaddrof(CPed::AimGun) = GLOBAL_ADDRESS_BY_VERSION(0x4C6AA0, 0x4C6B40, 0x4C6AD0);

void CPed::AimGun() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::AimGun), this);
}

int addrof(CPed::ApplyHeadShot) = ADDRESS_BY_VERSION(0x4EB470, 0x4EB520, 0x4EB4B0);
int gaddrof(CPed::ApplyHeadShot) = GLOBAL_ADDRESS_BY_VERSION(0x4EB470, 0x4EB520, 0x4EB4B0);

void CPed::ApplyHeadShot(eWeaponType type, CVector pos, unsigned char evenOnPlayer) {
    plugin::CallMethodDynGlobal<CPed *, eWeaponType, CVector, unsigned char>(gaddrof(CPed::ApplyHeadShot), this, type, pos, evenOnPlayer);
}

int addrof(CPed::Attack) = ADDRESS_BY_VERSION(0x4E6BA0, 0x4E6C50, 0x4E6BE0);
int gaddrof(CPed::Attack) = GLOBAL_ADDRESS_BY_VERSION(0x4E6BA0, 0x4E6C50, 0x4E6BE0);

void CPed::Attack() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Attack), this);
}

int addrof(CPed::Avoid) = ADDRESS_BY_VERSION(0x4D2BB0, 0x4D2C50, 0x4D2BE0);
int gaddrof(CPed::Avoid) = GLOBAL_ADDRESS_BY_VERSION(0x4D2BB0, 0x4D2C50, 0x4D2BE0);

void CPed::Avoid() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Avoid), this);
}

int addrof(CPed::BeingDraggedFromCar) = ADDRESS_BY_VERSION(0x4E07D0, 0x4E0880, 0x4E0810);
int gaddrof(CPed::BeingDraggedFromCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E07D0, 0x4E0880, 0x4E0810);

void CPed::BeingDraggedFromCar() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::BeingDraggedFromCar), this);
}

int addrof(CPed::BuildPedLists) = ADDRESS_BY_VERSION(0x4C5350, 0x4C53F0, 0x4C5380);
int gaddrof(CPed::BuildPedLists) = GLOBAL_ADDRESS_BY_VERSION(0x4C5350, 0x4C53F0, 0x4C5380);

void CPed::BuildPedLists() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::BuildPedLists), this);
}

int addrof(CPed::CalculateNewOrientation) = ADDRESS_BY_VERSION(0x4C7EA0, 0x4C7F40, 0x4C7ED0);
int gaddrof(CPed::CalculateNewOrientation) = GLOBAL_ADDRESS_BY_VERSION(0x4C7EA0, 0x4C7F40, 0x4C7ED0);

void CPed::CalculateNewOrientation() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::CalculateNewOrientation), this);
}

int addrof(CPed::CalculateNewVelocity) = ADDRESS_BY_VERSION(0x4C73F0, 0x4C7490, 0x4C7420);
int gaddrof(CPed::CalculateNewVelocity) = GLOBAL_ADDRESS_BY_VERSION(0x4C73F0, 0x4C7490, 0x4C7420);

void CPed::CalculateNewVelocity() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::CalculateNewVelocity), this);
}

int addrof(CPed::CanBeDeleted) = ADDRESS_BY_VERSION(0x4CF8B0, 0x4CF950, 0x4CF8E0);
int gaddrof(CPed::CanBeDeleted) = GLOBAL_ADDRESS_BY_VERSION(0x4CF8B0, 0x4CF950, 0x4CF8E0);

bool CPed::CanBeDeleted() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CanBeDeleted), this);
}

int addrof(CPed::CanPedDriveOff) = ADDRESS_BY_VERSION(0x4D7AC0, 0x4D7B60, 0x4D7AF0);
int gaddrof(CPed::CanPedDriveOff) = GLOBAL_ADDRESS_BY_VERSION(0x4D7AC0, 0x4D7B60, 0x4D7AF0);

bool CPed::CanPedDriveOff() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CanPedDriveOff), this);
}

int addrof(CPed::CanPedJumpThis) = ADDRESS_BY_VERSION(0x4D72F0, 0x4D7390, 0x4D7320);
int gaddrof(CPed::CanPedJumpThis) = GLOBAL_ADDRESS_BY_VERSION(0x4D72F0, 0x4D7390, 0x4D7320);

bool CPed::CanPedJumpThis() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CanPedJumpThis), this);
}

int addrof(CPed::CanPedReturnToState) = ADDRESS_BY_VERSION(0x4CE760, 0x4CE800, 0x4CE790);
int gaddrof(CPed::CanPedReturnToState) = GLOBAL_ADDRESS_BY_VERSION(0x4CE760, 0x4CE800, 0x4CE790);

bool CPed::CanPedReturnToState() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CanPedReturnToState), this);
}

int addrof(CPed::CanSeeEntity) = ADDRESS_BY_VERSION(0x4DD820, 0x4DD8D0, 0x4DD860);
int gaddrof(CPed::CanSeeEntity) = GLOBAL_ADDRESS_BY_VERSION(0x4DD820, 0x4DD8D0, 0x4DD860);

bool CPed::CanSeeEntity(CEntity *entity, float threshold) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CEntity *, float>(gaddrof(CPed::CanSeeEntity), this, entity, threshold);
}

int addrof(CPed::CanSetPedState) = ADDRESS_BY_VERSION(0x4CE7A0, 0x4CE840, 0x4CE7D0);
int gaddrof(CPed::CanSetPedState) = GLOBAL_ADDRESS_BY_VERSION(0x4CE7A0, 0x4CE840, 0x4CE7D0);

bool CPed::CanSetPedState() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CanSetPedState), this);
}

int addrof(CPed::CanStrafeOrMouseControl) = ADDRESS_BY_VERSION(0x4CE7D0, 0x4CE870, 0x4CE800);
int gaddrof(CPed::CanStrafeOrMouseControl) = GLOBAL_ADDRESS_BY_VERSION(0x4CE7D0, 0x4CE870, 0x4CE800);

bool CPed::CanStrafeOrMouseControl() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CanStrafeOrMouseControl), this);
}

int addrof(CPed::Chat) = ADDRESS_BY_VERSION(0x4D3AC0, 0x4D3B60, 0x4D3AF0);
int gaddrof(CPed::Chat) = GLOBAL_ADDRESS_BY_VERSION(0x4D3AC0, 0x4D3B60, 0x4D3AF0);

void CPed::Chat() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Chat), this);
}

int addrof(CPed::CheckAroundForPossibleCollisions) = ADDRESS_BY_VERSION(0x4D0490, 0x4D0530, 0x4D04C0);
int gaddrof(CPed::CheckAroundForPossibleCollisions) = GLOBAL_ADDRESS_BY_VERSION(0x4D0490, 0x4D0530, 0x4D04C0);

void CPed::CheckAroundForPossibleCollisions() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::CheckAroundForPossibleCollisions), this);
}

int addrof(CPed::CheckForDeadPeds) = ADDRESS_BY_VERSION(0x4D4860, 0x4D4900, 0x4D4890);
int gaddrof(CPed::CheckForDeadPeds) = GLOBAL_ADDRESS_BY_VERSION(0x4D4860, 0x4D4900, 0x4D4890);

CPed *CPed::CheckForDeadPeds() {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CPed *>(gaddrof(CPed::CheckForDeadPeds), this);
}

int addrof(CPed::CheckForExplosions) = ADDRESS_BY_VERSION(0x4D4650, 0x4D46F0, 0x4D4680);
int gaddrof(CPed::CheckForExplosions) = GLOBAL_ADDRESS_BY_VERSION(0x4D4650, 0x4D46F0, 0x4D4680);

bool CPed::CheckForExplosions(CVector2D &area) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVector2D &>(gaddrof(CPed::CheckForExplosions), this, area);
}

int addrof(CPed::CheckForGunShots) = ADDRESS_BY_VERSION(0x4D47D0, 0x4D4870, 0x4D4800);
int gaddrof(CPed::CheckForGunShots) = GLOBAL_ADDRESS_BY_VERSION(0x4D47D0, 0x4D4870, 0x4D4800);

CPed *CPed::CheckForGunShots() {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CPed *>(gaddrof(CPed::CheckForGunShots), this);
}

int addrof(CPed::CheckForPointBlankPeds) = ADDRESS_BY_VERSION(0x4E6990, 0x4E6A40, 0x4E69D0);
int gaddrof(CPed::CheckForPointBlankPeds) = GLOBAL_ADDRESS_BY_VERSION(0x4E6990, 0x4E6A40, 0x4E69D0);

unsigned char CPed::CheckForPointBlankPeds(CPed *pedToVerify) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, CPed *, CPed *>(gaddrof(CPed::CheckForPointBlankPeds), this, pedToVerify);
}

int addrof(CPed::CheckIfInTheAir) = ADDRESS_BY_VERSION(0x4D0BE0, 0x4D0C80, 0x4D0C10);
int gaddrof(CPed::CheckIfInTheAir) = GLOBAL_ADDRESS_BY_VERSION(0x4D0BE0, 0x4D0C80, 0x4D0C10);

bool CPed::CheckIfInTheAir() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::CheckIfInTheAir), this);
}

int addrof(CPed::ClearAimFlag) = ADDRESS_BY_VERSION(0x4C6A50, 0x4C6AF0, 0x4C6A80);
int gaddrof(CPed::ClearAimFlag) = GLOBAL_ADDRESS_BY_VERSION(0x4C6A50, 0x4C6AF0, 0x4C6A80);

void CPed::ClearAimFlag() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearAimFlag), this);
}

int addrof(CPed::ClearAll) = ADDRESS_BY_VERSION(0x4C7F20, 0x4C7FC0, 0x4C7F50);
int gaddrof(CPed::ClearAll) = GLOBAL_ADDRESS_BY_VERSION(0x4C7F20, 0x4C7FC0, 0x4C7F50);

void CPed::ClearAll() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearAll), this);
}

int addrof(CPed::ClearAttack) = ADDRESS_BY_VERSION(0x4E6790, 0x4E6840, 0x4E67D0);
int gaddrof(CPed::ClearAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4E6790, 0x4E6840, 0x4E67D0);

void CPed::ClearAttack() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearAttack), this);
}

int addrof(CPed::ClearAttackByRemovingAnim) = ADDRESS_BY_VERSION(0x4E67F0, 0x4E68A0, 0x4E6830);
int gaddrof(CPed::ClearAttackByRemovingAnim) = GLOBAL_ADDRESS_BY_VERSION(0x4E67F0, 0x4E68A0, 0x4E6830);

void CPed::ClearAttackByRemovingAnim() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearAttackByRemovingAnim), this);
}

int addrof(CPed::ClearChat) = ADDRESS_BY_VERSION(0x4D3C80, 0x4D3D20, 0x4D3CB0);
int gaddrof(CPed::ClearChat) = GLOBAL_ADDRESS_BY_VERSION(0x4D3C80, 0x4D3D20, 0x4D3CB0);

void CPed::ClearChat() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearChat), this);
}

int addrof(CPed::ClearDuck) = ADDRESS_BY_VERSION(0x4E4A30, 0x4E4AE0, 0x4E4A70);
int gaddrof(CPed::ClearDuck) = GLOBAL_ADDRESS_BY_VERSION(0x4E4A30, 0x4E4AE0, 0x4E4A70);

void CPed::ClearDuck() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearDuck), this);
}

int addrof(CPed::ClearFall) = ADDRESS_BY_VERSION(0x4D0BB0, 0x4D0C50, 0x4D0BE0);
int gaddrof(CPed::ClearFall) = GLOBAL_ADDRESS_BY_VERSION(0x4D0BB0, 0x4D0C50, 0x4D0BE0);

void CPed::ClearFall() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearFall), this);
}

int addrof(CPed::ClearFlee) = ADDRESS_BY_VERSION(0x4D1EA0, 0x4D1F40, 0x4D1ED0);
int gaddrof(CPed::ClearFlee) = GLOBAL_ADDRESS_BY_VERSION(0x4D1EA0, 0x4D1F40, 0x4D1ED0);

void CPed::ClearFlee() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearFlee), this);
}

int addrof(CPed::ClearInvestigateEvent) = ADDRESS_BY_VERSION(0x4EA360, 0x4EA410, 0x4EA3A0);
int gaddrof(CPed::ClearInvestigateEvent) = GLOBAL_ADDRESS_BY_VERSION(0x4EA360, 0x4EA410, 0x4EA3A0);

void CPed::ClearInvestigateEvent() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearInvestigateEvent), this);
}

int addrof(CPed::ClearLeader) = ADDRESS_BY_VERSION(0x4D8E80, 0x4D8F20, 0x4D8EB0);
int gaddrof(CPed::ClearLeader) = GLOBAL_ADDRESS_BY_VERSION(0x4D8E80, 0x4D8F20, 0x4D8EB0);

void CPed::ClearLeader() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearLeader), this);
}

int addrof(CPed::ClearLook) = ADDRESS_BY_VERSION(0x4D1360, 0x4D1400, 0x4D1390);
int gaddrof(CPed::ClearLook) = GLOBAL_ADDRESS_BY_VERSION(0x4D1360, 0x4D1400, 0x4D1390);

void CPed::ClearLook() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearLook), this);
}

int addrof(CPed::ClearLookFlag) = ADDRESS_BY_VERSION(0x4C64F0, 0x4C6590, 0x4C6520);
int gaddrof(CPed::ClearLookFlag) = GLOBAL_ADDRESS_BY_VERSION(0x4C64F0, 0x4C6590, 0x4C6520);

void CPed::ClearLookFlag() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearLookFlag), this);
}

int addrof(CPed::ClearObjective) = ADDRESS_BY_VERSION(0x4D8DF0, 0x4D8E90, 0x4D8E20);
int gaddrof(CPed::ClearObjective) = GLOBAL_ADDRESS_BY_VERSION(0x4D8DF0, 0x4D8E90, 0x4D8E20);

void CPed::ClearObjective() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearObjective), this);
}

int addrof(CPed::ClearPause) = ADDRESS_BY_VERSION(0x4D0970, 0x4D0A10, 0x4D09A0);
int gaddrof(CPed::ClearPause) = GLOBAL_ADDRESS_BY_VERSION(0x4D0970, 0x4D0A10, 0x4D09A0);

void CPed::ClearPause() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearPause), this);
}

int addrof(CPed::ClearPointGunAt) = ADDRESS_BY_VERSION(0x4E6180, 0x4E6230, 0x4E61C0);
int gaddrof(CPed::ClearPointGunAt) = GLOBAL_ADDRESS_BY_VERSION(0x4E6180, 0x4E6230, 0x4E61C0);

void CPed::ClearPointGunAt() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearPointGunAt), this);
}

int addrof(CPed::ClearSeek) = ADDRESS_BY_VERSION(0x4D1620, 0x4D16C0, 0x4D1650);
int gaddrof(CPed::ClearSeek) = GLOBAL_ADDRESS_BY_VERSION(0x4D1620, 0x4D16C0, 0x4D1650);

void CPed::ClearSeek() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearSeek), this);
}

int addrof(CPed::ClearWeapons) = ADDRESS_BY_VERSION(0x4CFB70, 0x4CFC10, 0x4CFBA0);
int gaddrof(CPed::ClearWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x4CFB70, 0x4CFC10, 0x4CFBA0);

void CPed::ClearWeapons() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ClearWeapons), this);
}

int addrof(CPed::CollideWithPed) = ADDRESS_BY_VERSION(0x4EB9A0, 0x4EBA50, 0x4EB9E0);
int gaddrof(CPed::CollideWithPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EB9A0, 0x4EBA50, 0x4EB9E0);

void CPed::CollideWithPed(CPed *collideWith) {
    plugin::CallMethodDynGlobal<CPed *, CPed *>(gaddrof(CPed::CollideWithPed), this, collideWith);
}

int addrof(CPed::CreateDeadPedMoney) = ADDRESS_BY_VERSION(0x433490, 0x433490, 0x433490);
int gaddrof(CPed::CreateDeadPedMoney) = GLOBAL_ADDRESS_BY_VERSION(0x433490, 0x433490, 0x433490);

void CPed::CreateDeadPedMoney() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::CreateDeadPedMoney), this);
}

int addrof(CPed::CreateDeadPedWeaponPickups) = ADDRESS_BY_VERSION(0x433660, 0x433660, 0x433660);
int gaddrof(CPed::CreateDeadPedWeaponPickups) = GLOBAL_ADDRESS_BY_VERSION(0x433660, 0x433660, 0x433660);

void CPed::CreateDeadPedWeaponPickups() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::CreateDeadPedWeaponPickups), this);
}

int addrof(CPed::Die) = ADDRESS_BY_VERSION(0x4D3A50, 0x4D3AF0, 0x4D3A80);
int gaddrof(CPed::Die) = GLOBAL_ADDRESS_BY_VERSION(0x4D3A50, 0x4D3AF0, 0x4D3A80);

void CPed::Die() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Die), this);
}

int addrof(CPed::DoesLOSBulletHitPed) = ADDRESS_BY_VERSION(0x4EB5C0, 0x4EB670, 0x4EB600);
int gaddrof(CPed::DoesLOSBulletHitPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EB5C0, 0x4EB670, 0x4EB600);

unsigned char CPed::DoesLOSBulletHitPed(CColPoint &colPoint) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, CPed *, CColPoint &>(gaddrof(CPed::DoesLOSBulletHitPed), this, colPoint);
}

int addrof(CPed::Duck) = ADDRESS_BY_VERSION(0x4E4A10, 0x4E4AC0, 0x4E4A50);
int gaddrof(CPed::Duck) = GLOBAL_ADDRESS_BY_VERSION(0x4E4A10, 0x4E4AC0, 0x4E4A50);

void CPed::Duck() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Duck), this);
}

int addrof(CPed::DuckAndCover) = ADDRESS_BY_VERSION(0x4E3EC0, 0x4E3F70, 0x4E3F00);
int gaddrof(CPed::DuckAndCover) = GLOBAL_ADDRESS_BY_VERSION(0x4E3EC0, 0x4E3F70, 0x4E3F00);

bool CPed::DuckAndCover() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::DuckAndCover), this);
}

int addrof(CPed::EndFight) = ADDRESS_BY_VERSION(0x4E8D30, 0x4E8DE0, 0x4E8D70);
int gaddrof(CPed::EndFight) = GLOBAL_ADDRESS_BY_VERSION(0x4E8D30, 0x4E8DE0, 0x4E8D70);

void CPed::EndFight(unsigned char endType) {
    plugin::CallMethodDynGlobal<CPed *, unsigned char>(gaddrof(CPed::EndFight), this, endType);
}

int addrof(CPed::EnterCar) = ADDRESS_BY_VERSION(0x4E0D30, 0x4E0DE0, 0x4E0D70);
int gaddrof(CPed::EnterCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E0D30, 0x4E0DE0, 0x4E0D70);

void CPed::EnterCar() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::EnterCar), this);
}

int addrof(CPed::EnterTrain) = ADDRESS_BY_VERSION(0x4E33B0, 0x4E3460, 0x4E33F0);
int gaddrof(CPed::EnterTrain) = GLOBAL_ADDRESS_BY_VERSION(0x4E33B0, 0x4E3460, 0x4E33F0);

void CPed::EnterTrain() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::EnterTrain), this);
}

int addrof(CPed::ExitCar) = ADDRESS_BY_VERSION(0x4E18D0, 0x4E1980, 0x4E1910);
int gaddrof(CPed::ExitCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E18D0, 0x4E1980, 0x4E1910);

void CPed::ExitCar() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ExitCar), this);
}

int addrof(CPed::ExitTrain) = ADDRESS_BY_VERSION(0x4E36D0, 0x4E3780, 0x4E3710);
int gaddrof(CPed::ExitTrain) = GLOBAL_ADDRESS_BY_VERSION(0x4E36D0, 0x4E3780, 0x4E3710);

void CPed::ExitTrain() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ExitTrain), this);
}

int addrof(CPed::FacePhone) = ADDRESS_BY_VERSION(0x4D3CC0, 0x4D3D60, 0x4D3CF0);
int gaddrof(CPed::FacePhone) = GLOBAL_ADDRESS_BY_VERSION(0x4D3CC0, 0x4D3D60, 0x4D3CF0);

bool CPed::FacePhone() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::FacePhone), this);
}

int addrof(CPed::Fall) = ADDRESS_BY_VERSION(0x4D0BC0, 0x4D0C60, 0x4D0BF0);
int gaddrof(CPed::Fall) = GLOBAL_ADDRESS_BY_VERSION(0x4D0BC0, 0x4D0C60, 0x4D0BF0);

void CPed::Fall() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Fall), this);
}

int addrof(CPed::Fight) = ADDRESS_BY_VERSION(0x4E7EE0, 0x4E7F90, 0x4E7F20);
int gaddrof(CPed::Fight) = GLOBAL_ADDRESS_BY_VERSION(0x4E7EE0, 0x4E7F90, 0x4E7F20);

void CPed::Fight() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Fight), this);
}

int addrof(CPed::FightStrike) = ADDRESS_BY_VERSION(0x4E8EC0, 0x4E8F70, 0x4E8F00);
int gaddrof(CPed::FightStrike) = GLOBAL_ADDRESS_BY_VERSION(0x4E8EC0, 0x4E8F70, 0x4E8F00);

void CPed::FightStrike(CVector &touchedNodePos) {
    plugin::CallMethodDynGlobal<CPed *, CVector &>(gaddrof(CPed::FightStrike), this, touchedNodePos);
}

int addrof(CPed::FindBestCoordsFromNodes) = ADDRESS_BY_VERSION(0x4E3A90, 0x4E3B40, 0x4E3AD0);
int gaddrof(CPed::FindBestCoordsFromNodes) = GLOBAL_ADDRESS_BY_VERSION(0x4E3A90, 0x4E3B40, 0x4E3AD0);

bool CPed::FindBestCoordsFromNodes(CVector unused, CVector *bestCoords) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVector, CVector *>(gaddrof(CPed::FindBestCoordsFromNodes), this, unused, bestCoords);
}

int addrof(CPed::Flee) = ADDRESS_BY_VERSION(0x4D1ED0, 0x4D1F70, 0x4D1F00);
int gaddrof(CPed::Flee) = GLOBAL_ADDRESS_BY_VERSION(0x4D1ED0, 0x4D1F70, 0x4D1F00);

void CPed::Flee() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Flee), this);
}

int addrof(CPed::FollowPath) = ADDRESS_BY_VERSION(0x4D3020, 0x4D30C0, 0x4D3050);
int gaddrof(CPed::FollowPath) = GLOBAL_ADDRESS_BY_VERSION(0x4D3020, 0x4D30C0, 0x4D3050);

void CPed::FollowPath() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::FollowPath), this);
}

int addrof(CPed::ForceStoredObjective) = ADDRESS_BY_VERSION(0x4D8250, 0x4D82F0, 0x4D8280);
int gaddrof(CPed::ForceStoredObjective) = GLOBAL_ADDRESS_BY_VERSION(0x4D8250, 0x4D82F0, 0x4D8280);

void CPed::ForceStoredObjective(eObjective objective) {
    plugin::CallMethodDynGlobal<CPed *, eObjective>(gaddrof(CPed::ForceStoredObjective), this, objective);
}

int addrof(CPed::GetFormationPosition) = ADDRESS_BY_VERSION(0x4DF420, 0x4DF4D0, 0x4DF460);
int gaddrof(CPed::GetFormationPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4DF420, 0x4DF4D0, 0x4DF460);

CVector *CPed::GetFormationPosition() {
    return plugin::CallMethodAndReturnDynGlobal<CVector *, CPed *>(gaddrof(CPed::GetFormationPosition), this);
}

int addrof(CPed::GetLocalDirection) = ADDRESS_BY_VERSION(0x4CCE20, 0x4CCEC0, 0x4CCE50);
int gaddrof(CPed::GetLocalDirection) = GLOBAL_ADDRESS_BY_VERSION(0x4CCE20, 0x4CCEC0, 0x4CCE50);

int CPed::GetLocalDirection(CVector2D const &posOffset) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPed *, CVector2D const &>(gaddrof(CPed::GetLocalDirection), this, posOffset);
}

int addrof(CPed::GetNearestDoor) = ADDRESS_BY_VERSION(0x4E1CF0, 0x4E1DA0, 0x4E1D30);
int gaddrof(CPed::GetNearestDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4E1CF0, 0x4E1DA0, 0x4E1D30);

void CPed::GetNearestDoor(CVehicle *vehicle, CVector &posToOpen) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, CVector &>(gaddrof(CPed::GetNearestDoor), this, vehicle, posToOpen);
}

int addrof(CPed::GetNearestPassengerDoor) = ADDRESS_BY_VERSION(0x4E1F30, 0x4E1FE0, 0x4E1F70);
int gaddrof(CPed::GetNearestPassengerDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4E1F30, 0x4E1FE0, 0x4E1F70);

bool CPed::GetNearestPassengerDoor(CVehicle *vehicle, CVector &posToOpen) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVehicle *, CVector &>(gaddrof(CPed::GetNearestPassengerDoor), this, vehicle, posToOpen);
}

int addrof(CPed::GetNearestTrainDoor) = ADDRESS_BY_VERSION(0x4E2D70, 0x4E2E20, 0x4E2DB0);
int gaddrof(CPed::GetNearestTrainDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4E2D70, 0x4E2E20, 0x4E2DB0);

bool CPed::GetNearestTrainDoor(CVehicle *vehicle, CVector &doorPos) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVehicle *, CVector &>(gaddrof(CPed::GetNearestTrainDoor), this, vehicle, doorPos);
}

int addrof(CPed::GetNearestTrainPedPosition) = ADDRESS_BY_VERSION(0x4E2E50, 0x4E2F00, 0x4E2E90);
int gaddrof(CPed::GetNearestTrainPedPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4E2E50, 0x4E2F00, 0x4E2E90);

void CPed::GetNearestTrainPedPosition(CVehicle *vehicle, CVector &enterPos) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, CVector &>(gaddrof(CPed::GetNearestTrainPedPosition), this, vehicle, enterPos);
}

int addrof(CPed::GetNextPointOnRoute) = ADDRESS_BY_VERSION(0x4DD720, 0x4DD7D0, 0x4DD760);
int gaddrof(CPed::GetNextPointOnRoute) = GLOBAL_ADDRESS_BY_VERSION(0x4DD720, 0x4DD7D0, 0x4DD760);

short CPed::GetNextPointOnRoute() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPed *>(gaddrof(CPed::GetNextPointOnRoute), this);
}

int addrof(CPed::GetPedRadioCategory) = ADDRESS_BY_VERSION(0x4D7B50, 0x4D7BF0, 0x4D7B80);
int gaddrof(CPed::GetPedRadioCategory) = GLOBAL_ADDRESS_BY_VERSION(0x4D7B50, 0x4D7BF0, 0x4D7B80);

unsigned char CPed::GetPedRadioCategory(unsigned int modelIndex) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned char, CPed *, unsigned int>(gaddrof(CPed::GetPedRadioCategory), this, modelIndex);
}

int addrof(CPed::GetWeaponSlot) = ADDRESS_BY_VERSION(0x4CFA40, 0x4CFAE0, 0x4CFA70);
int gaddrof(CPed::GetWeaponSlot) = GLOBAL_ADDRESS_BY_VERSION(0x4CFA40, 0x4CFAE0, 0x4CFA70);

int CPed::GetWeaponSlot(eWeaponType type) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPed *, eWeaponType>(gaddrof(CPed::GetWeaponSlot), this, type);
}

int addrof(CPed::GiveWeapon) = ADDRESS_BY_VERSION(0x4CF9B0, 0x4CFA50, 0x4CF9E0);
int gaddrof(CPed::GiveWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4CF9B0, 0x4CFA50, 0x4CF9E0);

unsigned int CPed::GiveWeapon(eWeaponType type, unsigned int ammo) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CPed *, eWeaponType, unsigned int>(gaddrof(CPed::GiveWeapon), this, type, ammo);
}

int addrof(CPed::GoToNearestDoor) = ADDRESS_BY_VERSION(0x4E2220, 0x4E22D0, 0x4E2260);
int gaddrof(CPed::GoToNearestDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4E2220, 0x4E22D0, 0x4E2260);

void CPed::GoToNearestDoor(CVehicle *vehicle) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *>(gaddrof(CPed::GoToNearestDoor), this, vehicle);
}

int addrof(CPed::GrantAmmo) = ADDRESS_BY_VERSION(0x4CFAD0, 0x4CFB70, 0x4CFB00);
int gaddrof(CPed::GrantAmmo) = GLOBAL_ADDRESS_BY_VERSION(0x4CFAD0, 0x4CFB70, 0x4CFB00);

void CPed::GrantAmmo(eWeaponType type, unsigned int ammo) {
    plugin::CallMethodDynGlobal<CPed *, eWeaponType, unsigned int>(gaddrof(CPed::GrantAmmo), this, type, ammo);
}

int addrof(CPed::HaveReachedNextPointOnRoute) = ADDRESS_BY_VERSION(0x4DD7B0, 0x4DD860, 0x4DD7F0);
int gaddrof(CPed::HaveReachedNextPointOnRoute) = GLOBAL_ADDRESS_BY_VERSION(0x4DD7B0, 0x4DD860, 0x4DD7F0);

bool CPed::HaveReachedNextPointOnRoute(float distToCountReached) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, float>(gaddrof(CPed::HaveReachedNextPointOnRoute), this, distToCountReached);
}

int addrof(CPed::Idle) = ADDRESS_BY_VERSION(0x4D0690, 0x4D0730, 0x4D06C0);
int gaddrof(CPed::Idle) = GLOBAL_ADDRESS_BY_VERSION(0x4D0690, 0x4D0730, 0x4D06C0);

void CPed::Idle() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Idle), this);
}

int addrof(CPed::InTheAir) = ADDRESS_BY_VERSION(0x4D0D10, 0x4D0DB0, 0x4D0D40);
int gaddrof(CPed::InTheAir) = GLOBAL_ADDRESS_BY_VERSION(0x4D0D10, 0x4D0DB0, 0x4D0D40);

void CPed::InTheAir() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::InTheAir), this);
}

int addrof(CPed::InflictDamage) = ADDRESS_BY_VERSION(0x4EA420, 0x4EA4D0, 0x4EA460);
int gaddrof(CPed::InflictDamage) = GLOBAL_ADDRESS_BY_VERSION(0x4EA420, 0x4EA4D0, 0x4EA460);

bool CPed::InflictDamage(CEntity *damagedBy, eWeaponType type, float damage, ePedPieceTypes pedPiece, unsigned char direction) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CEntity *, eWeaponType, float, ePedPieceTypes, unsigned char>(gaddrof(CPed::InflictDamage), this, damagedBy, type, damage, pedPiece, direction);
}

int addrof(CPed::InformMyGangOfAttack) = ADDRESS_BY_VERSION(0x4E4AD0, 0x4E4B80, 0x4E4B10);
int gaddrof(CPed::InformMyGangOfAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4E4AD0, 0x4E4B80, 0x4E4B10);

void CPed::InformMyGangOfAttack(CEntity *attacker) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::InformMyGangOfAttack), this, attacker);
}

int addrof(CPed::InvestigateEvent) = ADDRESS_BY_VERSION(0x4E9B50, 0x4E9C00, 0x4E9B90);
int gaddrof(CPed::InvestigateEvent) = GLOBAL_ADDRESS_BY_VERSION(0x4E9B50, 0x4E9C00, 0x4E9B90);

void CPed::InvestigateEvent() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::InvestigateEvent), this);
}

int addrof(CPed::IsGangMember) = ADDRESS_BY_VERSION(0x4D4910, 0x4D49B0, 0x4D4940);
int gaddrof(CPed::IsGangMember) = GLOBAL_ADDRESS_BY_VERSION(0x4D4910, 0x4D49B0, 0x4D4940);

bool CPed::IsGangMember() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::IsGangMember), this);
}

int addrof(CPed::IsPedHeadAbovePos) = ADDRESS_BY_VERSION(0x4EB670, 0x4EB720, 0x4EB6B0);
int gaddrof(CPed::IsPedHeadAbovePos) = GLOBAL_ADDRESS_BY_VERSION(0x4EB670, 0x4EB720, 0x4EB6B0);

bool CPed::IsPedHeadAbovePos(float zOffset) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, float>(gaddrof(CPed::IsPedHeadAbovePos), this, zOffset);
}

int addrof(CPed::IsPedInControl) = ADDRESS_BY_VERSION(0x4CE6C0, 0x4CE760, 0x4CE6F0);
int gaddrof(CPed::IsPedInControl) = GLOBAL_ADDRESS_BY_VERSION(0x4CE6C0, 0x4CE760, 0x4CE6F0);

bool CPed::IsPedInControl() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::IsPedInControl), this);
}

int addrof(CPed::IsPedShootable) = ADDRESS_BY_VERSION(0x4CE710, 0x4CE7B0, 0x4CE740);
int gaddrof(CPed::IsPedShootable) = GLOBAL_ADDRESS_BY_VERSION(0x4CE710, 0x4CE7B0, 0x4CE740);

bool CPed::IsPedShootable() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::IsPedShootable), this);
}

int addrof(CPed::IsPlayer) = ADDRESS_BY_VERSION(0x4D48E0, 0x4D4980, 0x4D4910);
int gaddrof(CPed::IsPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4D48E0, 0x4D4980, 0x4D4910);

bool CPed::IsPlayer() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::IsPlayer), this);
}

int addrof(CPed::IsPointerValid) = ADDRESS_BY_VERSION(0x4D4930, 0x4D49D0, 0x4D4960);
int gaddrof(CPed::IsPointerValid) = GLOBAL_ADDRESS_BY_VERSION(0x4D4930, 0x4D49D0, 0x4D4960);

bool CPed::IsPointerValid() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::IsPointerValid), this);
}

int addrof(CPed::IsRoomToBeCarJacked) = ADDRESS_BY_VERSION(0x4E4D90, 0x4E4E40, 0x4E4DD0);
int gaddrof(CPed::IsRoomToBeCarJacked) = GLOBAL_ADDRESS_BY_VERSION(0x4E4D90, 0x4E4E40, 0x4E4DD0);

bool CPed::IsRoomToBeCarJacked() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::IsRoomToBeCarJacked), this);
}

int addrof(CPed::IsTemporaryObjective) = ADDRESS_BY_VERSION(0x4D8290, 0x4D8330, 0x4D82C0);
int gaddrof(CPed::IsTemporaryObjective) = GLOBAL_ADDRESS_BY_VERSION(0x4D8290, 0x4D8330, 0x4D82C0);

bool CPed::IsTemporaryObjective(eObjective objective) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, eObjective>(gaddrof(CPed::IsTemporaryObjective), this, objective);
}

int addrof(CPed::KillPedWithCar) = ADDRESS_BY_VERSION(0x4EC430, 0x4EC4E0, 0x4EC470);
int gaddrof(CPed::KillPedWithCar) = GLOBAL_ADDRESS_BY_VERSION(0x4EC430, 0x4EC4E0, 0x4EC470);

void CPed::KillPedWithCar(CVehicle *vehicle, float impulse) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, float>(gaddrof(CPed::KillPedWithCar), this, vehicle, impulse);
}

int addrof(CPed::LineUpPedWithCar) = ADDRESS_BY_VERSION(0x4DF940, 0x4DF9F0, 0x4DF980);
int gaddrof(CPed::LineUpPedWithCar) = GLOBAL_ADDRESS_BY_VERSION(0x4DF940, 0x4DF9F0, 0x4DF980);

void CPed::LineUpPedWithCar(unsigned int phase) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::LineUpPedWithCar), this, phase);
}

int addrof(CPed::LineUpPedWithTrain) = ADDRESS_BY_VERSION(0x4E33D0, 0x4E3480, 0x4E3410);
int gaddrof(CPed::LineUpPedWithTrain) = GLOBAL_ADDRESS_BY_VERSION(0x4E33D0, 0x4E3480, 0x4E3410);

void CPed::LineUpPedWithTrain() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::LineUpPedWithTrain), this);
}

int addrof(CPed::Look) = ADDRESS_BY_VERSION(0x4D1380, 0x4D1420, 0x4D13B0);
int gaddrof(CPed::Look) = GLOBAL_ADDRESS_BY_VERSION(0x4D1380, 0x4D1420, 0x4D13B0);

void CPed::Look() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Look), this);
}

int addrof(CPed::LookForInterestingNodes) = ADDRESS_BY_VERSION(0x4D5040, 0x4D50E0, 0x4D5070);
int gaddrof(CPed::LookForInterestingNodes) = GLOBAL_ADDRESS_BY_VERSION(0x4D5040, 0x4D50E0, 0x4D5070);

bool CPed::LookForInterestingNodes() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::LookForInterestingNodes), this);
}

int addrof(CPed::LookForSexyCars) = ADDRESS_BY_VERSION(0x4D4F50, 0x4D4FF0, 0x4D4F80);
int gaddrof(CPed::LookForSexyCars) = GLOBAL_ADDRESS_BY_VERSION(0x4D4F50, 0x4D4FF0, 0x4D4F80);

void CPed::LookForSexyCars() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::LookForSexyCars), this);
}

int addrof(CPed::LookForSexyPeds) = ADDRESS_BY_VERSION(0x4D4DF0, 0x4D4E90, 0x4D4E20);
int gaddrof(CPed::LookForSexyPeds) = GLOBAL_ADDRESS_BY_VERSION(0x4D4DF0, 0x4D4E90, 0x4D4E20);

void CPed::LookForSexyPeds() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::LookForSexyPeds), this);
}

int addrof(CPed::MakePhonecall) = ADDRESS_BY_VERSION(0x4D3E20, 0x4D3EC0, 0x4D3E50);
int gaddrof(CPed::MakePhonecall) = GLOBAL_ADDRESS_BY_VERSION(0x4D3E20, 0x4D3EC0, 0x4D3E50);

bool CPed::MakePhonecall() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::MakePhonecall), this);
}

int addrof(CPed::MoveHeadToLook) = ADDRESS_BY_VERSION(0x4C65B0, 0x4C6650, 0x4C65E0);
int gaddrof(CPed::MoveHeadToLook) = GLOBAL_ADDRESS_BY_VERSION(0x4C65B0, 0x4C6650, 0x4C65E0);

void CPed::MoveHeadToLook() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::MoveHeadToLook), this);
}

int addrof(CPed::Mug) = ADDRESS_BY_VERSION(0x4D11D0, 0x4D1270, 0x4D1200);
int gaddrof(CPed::Mug) = GLOBAL_ADDRESS_BY_VERSION(0x4D11D0, 0x4D1270, 0x4D1200);

void CPed::Mug() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Mug), this);
}

int addrof(CPed::OurPedCanSeeThisOne) = ADDRESS_BY_VERSION(0x4C5700, 0x4C57A0, 0x4C5730);
int gaddrof(CPed::OurPedCanSeeThisOne) = GLOBAL_ADDRESS_BY_VERSION(0x4C5700, 0x4C57A0, 0x4C5730);

bool CPed::OurPedCanSeeThisOne(CEntity *entity) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CEntity *>(gaddrof(CPed::OurPedCanSeeThisOne), this, entity);
}

int addrof(CPed::Pause) = ADDRESS_BY_VERSION(0x4D0980, 0x4D0A20, 0x4D09B0);
int gaddrof(CPed::Pause) = GLOBAL_ADDRESS_BY_VERSION(0x4D0980, 0x4D0A20, 0x4D09B0);

void CPed::Pause() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Pause), this);
}

int addrof(CPed::PlacePedOnDryLand) = ADDRESS_BY_VERSION(0x4EB6E0, 0x4EB790, 0x4EB720);
int gaddrof(CPed::PlacePedOnDryLand) = GLOBAL_ADDRESS_BY_VERSION(0x4EB6E0, 0x4EB790, 0x4EB720);

bool CPed::PlacePedOnDryLand() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::PlacePedOnDryLand), this);
}

int addrof(CPed::PlayFootSteps) = ADDRESS_BY_VERSION(0x4CC6C0, 0x4CC760, 0x4CC6F0);
int gaddrof(CPed::PlayFootSteps) = GLOBAL_ADDRESS_BY_VERSION(0x4CC6C0, 0x4CC760, 0x4CC6F0);

void CPed::PlayFootSteps() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::PlayFootSteps), this);
}

int addrof(CPed::PlayHitSound) = ADDRESS_BY_VERSION(0x4E8E20, 0x4E8ED0, 0x4E8E60);
int gaddrof(CPed::PlayHitSound) = GLOBAL_ADDRESS_BY_VERSION(0x4E8E20, 0x4E8ED0, 0x4E8E60);

void CPed::PlayHitSound(CPed *hitTo) {
    plugin::CallMethodDynGlobal<CPed *, CPed *>(gaddrof(CPed::PlayHitSound), this, hitTo);
}

int addrof(CPed::PointGunAt) = ADDRESS_BY_VERSION(0x4E60B0, 0x4E6160, 0x4E60F0);
int gaddrof(CPed::PointGunAt) = GLOBAL_ADDRESS_BY_VERSION(0x4E60B0, 0x4E6160, 0x4E60F0);

void CPed::PointGunAt() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::PointGunAt), this);
}

int addrof(CPed::PositionPedOutOfCollision) = ADDRESS_BY_VERSION(0x4E4F30, 0x4E4FE0, 0x4E4F70);
int gaddrof(CPed::PositionPedOutOfCollision) = GLOBAL_ADDRESS_BY_VERSION(0x4E4F30, 0x4E4FE0, 0x4E4F70);

bool CPed::PositionPedOutOfCollision() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::PositionPedOutOfCollision), this);
}

int addrof(CPed::PossiblyFindBetterPosToSeekCar) = ADDRESS_BY_VERSION(0x4D6A00, 0x4D6AA0, 0x4D6A30);
int gaddrof(CPed::PossiblyFindBetterPosToSeekCar) = GLOBAL_ADDRESS_BY_VERSION(0x4D6A00, 0x4D6AA0, 0x4D6A30);

bool CPed::PossiblyFindBetterPosToSeekCar(CVector *pos, CVehicle *vehicle) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVector *, CVehicle *>(gaddrof(CPed::PossiblyFindBetterPosToSeekCar), this, pos, vehicle);
}

int addrof(CPed::ProcessBuoyancy) = ADDRESS_BY_VERSION(0x4C7FF0, 0x4C8090, 0x4C8020);
int gaddrof(CPed::ProcessBuoyancy) = GLOBAL_ADDRESS_BY_VERSION(0x4C7FF0, 0x4C8090, 0x4C8020);

void CPed::ProcessBuoyancy() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ProcessBuoyancy), this);
}

int addrof(CPed::ProcessObjective) = ADDRESS_BY_VERSION(0x4D94E0, 0x4D9580, 0x4D9510);
int gaddrof(CPed::ProcessObjective) = GLOBAL_ADDRESS_BY_VERSION(0x4D94E0, 0x4D9580, 0x4D9510);

void CPed::ProcessObjective() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ProcessObjective), this);
}

int addrof(CPed::QuitEnteringCar) = ADDRESS_BY_VERSION(0x4E0E00, 0x4E0EB0, 0x4E0E40);
int gaddrof(CPed::QuitEnteringCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E0E00, 0x4E0EB0, 0x4E0E40);

void CPed::QuitEnteringCar() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::QuitEnteringCar), this);
}

int addrof(CPed::ReactToAttack) = ADDRESS_BY_VERSION(0x4DDEC0, 0x4DDF70, 0x4DDF00);
int gaddrof(CPed::ReactToAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4DDEC0, 0x4DDF70, 0x4DDF00);

void CPed::ReactToAttack(CEntity *attacker) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::ReactToAttack), this, attacker);
}

int addrof(CPed::ReactToPointGun) = ADDRESS_BY_VERSION(0x4DD980, 0x4DDA30, 0x4DD9C0);
int gaddrof(CPed::ReactToPointGun) = GLOBAL_ADDRESS_BY_VERSION(0x4DD980, 0x4DDA30, 0x4DD9C0);

void CPed::ReactToPointGun(CEntity *entWithGun) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::ReactToPointGun), this, entWithGun);
}

int addrof(CPed::RegisterThreatWithGangPeds) = ADDRESS_BY_VERSION(0x4E3870, 0x4E3920, 0x4E38B0);
int gaddrof(CPed::RegisterThreatWithGangPeds) = GLOBAL_ADDRESS_BY_VERSION(0x4E3870, 0x4E3920, 0x4E38B0);

void CPed::RegisterThreatWithGangPeds(CEntity *attacker) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::RegisterThreatWithGangPeds), this, attacker);
}

int addrof(CPed::RemoveBodyPart) = ADDRESS_BY_VERSION(0x4EAEE0, 0x4EAF90, 0x4EAF20);
int gaddrof(CPed::RemoveBodyPart) = GLOBAL_ADDRESS_BY_VERSION(0x4EAEE0, 0x4EAF90, 0x4EAF20);

void CPed::RemoveBodyPart(int nodeId, char direction) {
    plugin::CallMethodDynGlobal<CPed *, int, char>(gaddrof(CPed::RemoveBodyPart), this, nodeId, direction);
}

int addrof(CPed::RemoveInCarAnims) = ADDRESS_BY_VERSION(0x4E4E20, 0x4E4ED0, 0x4E4E60);
int gaddrof(CPed::RemoveInCarAnims) = GLOBAL_ADDRESS_BY_VERSION(0x4E4E20, 0x4E4ED0, 0x4E4E60);

void CPed::RemoveInCarAnims() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RemoveInCarAnims), this);
}

int addrof(CPed::RemoveWeaponModel) = ADDRESS_BY_VERSION(0x4CF980, 0x4CFA20, 0x4CF9B0);
int gaddrof(CPed::RemoveWeaponModel) = GLOBAL_ADDRESS_BY_VERSION(0x4CF980, 0x4CFA20, 0x4CF9B0);

void CPed::RemoveWeaponModel(int modelIndex) {
    plugin::CallMethodDynGlobal<CPed *, int>(gaddrof(CPed::RemoveWeaponModel), this, modelIndex);
}

int addrof(CPed::RestartNonPartialAnims) = ADDRESS_BY_VERSION(0x4C5D80, 0x4C5E20, 0x4C5DB0);
int gaddrof(CPed::RestartNonPartialAnims) = GLOBAL_ADDRESS_BY_VERSION(0x4C5D80, 0x4C5E20, 0x4C5DB0);

void CPed::RestartNonPartialAnims() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RestartNonPartialAnims), this);
}

int addrof(CPed::RestoreGunPosition) = ADDRESS_BY_VERSION(0x4C6BB0, 0x4C6C50, 0x4C6BE0);
int gaddrof(CPed::RestoreGunPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4C6BB0, 0x4C6C50, 0x4C6BE0);

void CPed::RestoreGunPosition() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RestoreGunPosition), this);
}

int addrof(CPed::RestoreHeadPosition) = ADDRESS_BY_VERSION(0x4C6930, 0x4C69D0, 0x4C6960);
int gaddrof(CPed::RestoreHeadPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4C6930, 0x4C69D0, 0x4C6960);

void CPed::RestoreHeadPosition() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RestoreHeadPosition), this);
}

int addrof(CPed::RestoreHeadingRate) = ADDRESS_BY_VERSION(0x4D6540, 0x4D65E0, 0x4D6570);
int gaddrof(CPed::RestoreHeadingRate) = GLOBAL_ADDRESS_BY_VERSION(0x4D6540, 0x4D65E0, 0x4D6570);

void CPed::RestoreHeadingRate() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RestoreHeadingRate), this);
}

int addrof(CPed::RestorePreviousObjective) = ADDRESS_BY_VERSION(0x4D9460, 0x4D9500, 0x4D9490);
int gaddrof(CPed::RestorePreviousObjective) = GLOBAL_ADDRESS_BY_VERSION(0x4D9460, 0x4D9500, 0x4D9490);

void CPed::RestorePreviousObjective() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RestorePreviousObjective), this);
}

int addrof(CPed::RestorePreviousState) = ADDRESS_BY_VERSION(0x4C5E30, 0x4C5ED0, 0x4C5E60);
int gaddrof(CPed::RestorePreviousState) = GLOBAL_ADDRESS_BY_VERSION(0x4C5E30, 0x4C5ED0, 0x4C5E60);

void CPed::RestorePreviousState() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::RestorePreviousState), this);
}

int addrof(CPed::RunToReportCrime) = ADDRESS_BY_VERSION(0x4C10C0, 0x4C11B0, 0x4C1140);
int gaddrof(CPed::RunToReportCrime) = GLOBAL_ADDRESS_BY_VERSION(0x4C10C0, 0x4C11B0, 0x4C1140);

bool CPed::RunToReportCrime(eCrimeType type) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, eCrimeType>(gaddrof(CPed::RunToReportCrime), this, type);
}

int addrof(CPed::Say) = ADDRESS_BY_VERSION(0x4E5A10, 0x4E5AC0, 0x4E5A50);
int gaddrof(CPed::Say) = GLOBAL_ADDRESS_BY_VERSION(0x4E5A10, 0x4E5AC0, 0x4E5A50);

void CPed::Say(unsigned short audio) {
    plugin::CallMethodDynGlobal<CPed *, unsigned short>(gaddrof(CPed::Say), this, audio);
}

int addrof(CPed::ScanForInterestingStuff) = ADDRESS_BY_VERSION(0x4C6C10, 0x4C6CB0, 0x4C6C40);
int gaddrof(CPed::ScanForInterestingStuff) = GLOBAL_ADDRESS_BY_VERSION(0x4C6C10, 0x4C6CB0, 0x4C6C40);

void CPed::ScanForInterestingStuff() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ScanForInterestingStuff), this);
}

int addrof(CPed::ScanForThreats) = ADDRESS_BY_VERSION(0x4C5FE0, 0x4C6080, 0x4C6010);
int gaddrof(CPed::ScanForThreats) = GLOBAL_ADDRESS_BY_VERSION(0x4C5FE0, 0x4C6080, 0x4C6010);

unsigned int CPed::ScanForThreats() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CPed *>(gaddrof(CPed::ScanForThreats), this);
}

int addrof(CPed::Seek) = ADDRESS_BY_VERSION(0x4D1640, 0x4D16E0, 0x4D1670);
int gaddrof(CPed::Seek) = GLOBAL_ADDRESS_BY_VERSION(0x4D1640, 0x4D16E0, 0x4D1670);

bool CPed::Seek() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::Seek), this);
}

int addrof(CPed::SeekBoatPosition) = ADDRESS_BY_VERSION(0x4E4C70, 0x4E4D20, 0x4E4CB0);
int gaddrof(CPed::SeekBoatPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4E4C70, 0x4E4D20, 0x4E4CB0);

void CPed::SeekBoatPosition() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SeekBoatPosition), this);
}

int addrof(CPed::SeekCar) = ADDRESS_BY_VERSION(0x4D3F90, 0x4D4030, 0x4D3FC0);
int gaddrof(CPed::SeekCar) = GLOBAL_ADDRESS_BY_VERSION(0x4D3F90, 0x4D4030, 0x4D3FC0);

void CPed::SeekCar() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SeekCar), this);
}

int addrof(CPed::SeekFollowingPath) = ADDRESS_BY_VERSION(0x4D2E70, 0x4D2F10, 0x4D2EA0);
int gaddrof(CPed::SeekFollowingPath) = GLOBAL_ADDRESS_BY_VERSION(0x4D2E70, 0x4D2F10, 0x4D2EA0);

bool CPed::SeekFollowingPath(CVector *unused) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVector *>(gaddrof(CPed::SeekFollowingPath), this, unused);
}

int addrof(CPed::SelectGunIfArmed) = ADDRESS_BY_VERSION(0x4DD920, 0x4DD9D0, 0x4DD960);
int gaddrof(CPed::SelectGunIfArmed) = GLOBAL_ADDRESS_BY_VERSION(0x4DD920, 0x4DD9D0, 0x4DD960);

bool CPed::SelectGunIfArmed() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::SelectGunIfArmed), this);
}

int addrof(CPed::ServiceTalking) = ADDRESS_BY_VERSION(0x4E5870, 0x4E5920, 0x4E58B0);
int gaddrof(CPed::ServiceTalking) = GLOBAL_ADDRESS_BY_VERSION(0x4E5870, 0x4E5920, 0x4E58B0);

void CPed::ServiceTalking() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::ServiceTalking), this);
}

int addrof(CPed::ServiceTalkingWhenDead) = ADDRESS_BY_VERSION(0x4E5850, 0x4E5900, 0x4E5890);
int gaddrof(CPed::ServiceTalkingWhenDead) = GLOBAL_ADDRESS_BY_VERSION(0x4E5850, 0x4E5900, 0x4E5890);

bool CPed::ServiceTalkingWhenDead() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::ServiceTalkingWhenDead), this);
}

int addrof_o(CPed::SetAimFlag, void (CPed::*)(float)) = ADDRESS_BY_VERSION(0x4C6960, 0x4C6A00, 0x4C6990);
int gaddrof_o(CPed::SetAimFlag, void (CPed::*)(float)) = GLOBAL_ADDRESS_BY_VERSION(0x4C6960, 0x4C6A00, 0x4C6990);

void CPed::SetAimFlag(float direction) {
    plugin::CallMethodDynGlobal<CPed *, float>(gaddrof_o(CPed::SetAimFlag, void (CPed::*)(float)), this, direction);
}

int addrof_o(CPed::SetAimFlag, void (CPed::*)(CEntity *)) = ADDRESS_BY_VERSION(0x4C69E0, 0x4C6A80, 0x4C6A10);
int gaddrof_o(CPed::SetAimFlag, void (CPed::*)(CEntity *)) = GLOBAL_ADDRESS_BY_VERSION(0x4C69E0, 0x4C6A80, 0x4C6A10);

void CPed::SetAimFlag(CEntity *entity) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof_o(CPed::SetAimFlag, void (CPed::*)(CEntity *)), this, entity);
}

int addrof(CPed::SetAmmo) = ADDRESS_BY_VERSION(0x4CFB20, 0x4CFBC0, 0x4CFB50);
int gaddrof(CPed::SetAmmo) = GLOBAL_ADDRESS_BY_VERSION(0x4CFB20, 0x4CFBC0, 0x4CFB50);

void CPed::SetAmmo(eWeaponType type, unsigned int ammo) {
    plugin::CallMethodDynGlobal<CPed *, eWeaponType, unsigned int>(gaddrof(CPed::SetAmmo), this, type, ammo);
}

int addrof(CPed::SetAttack) = ADDRESS_BY_VERSION(0x4E6220, 0x4E62D0, 0x4E6260);
int gaddrof(CPed::SetAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4E6220, 0x4E62D0, 0x4E6260);

void CPed::SetAttack(CEntity *victim) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::SetAttack), this, victim);
}

int addrof(CPed::SetAttackTimer) = ADDRESS_BY_VERSION(0x4D1300, 0x4D13A0, 0x4D1330);
int gaddrof(CPed::SetAttackTimer) = GLOBAL_ADDRESS_BY_VERSION(0x4D1300, 0x4D13A0, 0x4D1330);

void CPed::SetAttackTimer(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::SetAttackTimer), this, time);
}

int addrof(CPed::SetBeingDraggedFromCar) = ADDRESS_BY_VERSION(0x4E0640, 0x4E06F0, 0x4E0680);
int gaddrof(CPed::SetBeingDraggedFromCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E0640, 0x4E06F0, 0x4E0680);

void CPed::SetBeingDraggedFromCar(CVehicle *vehicle, unsigned int doorNode, bool quickJack) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int, bool>(gaddrof(CPed::SetBeingDraggedFromCar), this, vehicle, doorNode, quickJack);
}

int addrof(CPed::SetBuyIceCream) = ADDRESS_BY_VERSION(0x4D6950, 0x4D69F0, 0x4D6980);
int gaddrof(CPed::SetBuyIceCream) = GLOBAL_ADDRESS_BY_VERSION(0x4D6950, 0x4D69F0, 0x4D6980);

void CPed::SetBuyIceCream() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetBuyIceCream), this);
}

int addrof(CPed::SetCarJack) = ADDRESS_BY_VERSION(0x4E0220, 0x4E02D0, 0x4E0260);
int gaddrof(CPed::SetCarJack) = GLOBAL_ADDRESS_BY_VERSION(0x4E0220, 0x4E02D0, 0x4E0260);

void CPed::SetCarJack(CVehicle *vehicle) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *>(gaddrof(CPed::SetCarJack), this, vehicle);
}

int addrof(CPed::SetCarJack_AllClear) = ADDRESS_BY_VERSION(0x4E03F0, 0x4E04A0, 0x4E0430);
int gaddrof(CPed::SetCarJack_AllClear) = GLOBAL_ADDRESS_BY_VERSION(0x4E03F0, 0x4E04A0, 0x4E0430);

void CPed::SetCarJack_AllClear(CVehicle *vehicle, unsigned int doorNode, unsigned int doorFlag) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int, unsigned int>(gaddrof(CPed::SetCarJack_AllClear), this, vehicle, doorNode, doorFlag);
}

int addrof(CPed::SetChat) = ADDRESS_BY_VERSION(0x4D3A60, 0x4D3B00, 0x4D3A90);
int gaddrof(CPed::SetChat) = GLOBAL_ADDRESS_BY_VERSION(0x4D3A60, 0x4D3B00, 0x4D3A90);

void CPed::SetChat(CEntity *chatWith, unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *, unsigned int>(gaddrof(CPed::SetChat), this, chatWith, time);
}

int addrof(CPed::SetCurrentWeapon) = ADDRESS_BY_VERSION(0x4CFA60, 0x4CFB00, 0x4CFA90);
int gaddrof(CPed::SetCurrentWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4CFA60, 0x4CFB00, 0x4CFA90);

void CPed::SetCurrentWeapon(int type) {
    plugin::CallMethodDynGlobal<CPed *, int>(gaddrof(CPed::SetCurrentWeapon), this, type);
}

int addrof(CPed::SetDead) = ADDRESS_BY_VERSION(0x4D3970, 0x4D3A10, 0x4D39A0);
int gaddrof(CPed::SetDead) = GLOBAL_ADDRESS_BY_VERSION(0x4D3970, 0x4D3A10, 0x4D39A0);

void CPed::SetDead() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetDead), this);
}

int addrof(CPed::SetDie) = ADDRESS_BY_VERSION(0x4D37D0, 0x4D3870, 0x4D3800);
int gaddrof(CPed::SetDie) = GLOBAL_ADDRESS_BY_VERSION(0x4D37D0, 0x4D3870, 0x4D3800);

void CPed::SetDie(int animId, float delta, float speed) {
    plugin::CallMethodDynGlobal<CPed *, int, float, float>(gaddrof(CPed::SetDie), this, animId, delta, speed);
}

int addrof(CPed::SetDirectionToWalkAroundObject) = ADDRESS_BY_VERSION(0x4CCEB0, 0x4CCF50, 0x4CCEE0);
int gaddrof(CPed::SetDirectionToWalkAroundObject) = GLOBAL_ADDRESS_BY_VERSION(0x4CCEB0, 0x4CCF50, 0x4CCEE0);

void CPed::SetDirectionToWalkAroundObject(CEntity *entity) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::SetDirectionToWalkAroundObject), this, entity);
}

int addrof(CPed::SetDuck) = ADDRESS_BY_VERSION(0x4E4920, 0x4E49D0, 0x4E4960);
int gaddrof(CPed::SetDuck) = GLOBAL_ADDRESS_BY_VERSION(0x4E4920, 0x4E49D0, 0x4E4960);

void CPed::SetDuck(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::SetDuck), this, time);
}

int addrof(CPed::SetEnterCar) = ADDRESS_BY_VERSION(0x4E0920, 0x4E09D0, 0x4E0960);
int gaddrof(CPed::SetEnterCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E0920, 0x4E09D0, 0x4E0960);

void CPed::SetEnterCar(CVehicle *vehicle, unsigned int unused) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int>(gaddrof(CPed::SetEnterCar), this, vehicle, unused);
}

int addrof(CPed::SetEnterCar_AllClear) = ADDRESS_BY_VERSION(0x4E0A40, 0x4E0AF0, 0x4E0A80);
int gaddrof(CPed::SetEnterCar_AllClear) = GLOBAL_ADDRESS_BY_VERSION(0x4E0A40, 0x4E0AF0, 0x4E0A80);

void CPed::SetEnterCar_AllClear(CVehicle *vehicle, unsigned int doorNode, unsigned int doorFlag) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int, unsigned int>(gaddrof(CPed::SetEnterCar_AllClear), this, vehicle, doorNode, doorFlag);
}

int addrof(CPed::SetEnterTrain) = ADDRESS_BY_VERSION(0x4E32D0, 0x4E3380, 0x4E3310);
int gaddrof(CPed::SetEnterTrain) = GLOBAL_ADDRESS_BY_VERSION(0x4E32D0, 0x4E3380, 0x4E3310);

void CPed::SetEnterTrain(CVehicle *train, unsigned int unused) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int>(gaddrof(CPed::SetEnterTrain), this, train, unused);
}

int addrof(CPed::SetEvasiveDive) = ADDRESS_BY_VERSION(0x4D33A0, 0x4D3440, 0x4D33D0);
int gaddrof(CPed::SetEvasiveDive) = GLOBAL_ADDRESS_BY_VERSION(0x4D33A0, 0x4D3440, 0x4D33D0);

void CPed::SetEvasiveDive(CPhysical *reason, unsigned char onlyRandomJump) {
    plugin::CallMethodDynGlobal<CPed *, CPhysical *, unsigned char>(gaddrof(CPed::SetEvasiveDive), this, reason, onlyRandomJump);
}

int addrof(CPed::SetEvasiveStep) = ADDRESS_BY_VERSION(0x4D30C0, 0x4D3160, 0x4D30F0);
int gaddrof(CPed::SetEvasiveStep) = GLOBAL_ADDRESS_BY_VERSION(0x4D30C0, 0x4D3160, 0x4D30F0);

void CPed::SetEvasiveStep(CPhysical *reason, unsigned char animType) {
    plugin::CallMethodDynGlobal<CPed *, CPhysical *, unsigned char>(gaddrof(CPed::SetEvasiveStep), this, reason, animType);
}

int addrof(CPed::SetExitCar) = ADDRESS_BY_VERSION(0x4E1010, 0x4E10C0, 0x4E1050);
int gaddrof(CPed::SetExitCar) = GLOBAL_ADDRESS_BY_VERSION(0x4E1010, 0x4E10C0, 0x4E1050);

void CPed::SetExitCar(CVehicle *vehicle, unsigned int doorNode) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int>(gaddrof(CPed::SetExitCar), this, vehicle, doorNode);
}

int addrof(CPed::SetExitTrain) = ADDRESS_BY_VERSION(0x4E3640, 0x4E36F0, 0x4E3680);
int gaddrof(CPed::SetExitTrain) = GLOBAL_ADDRESS_BY_VERSION(0x4E3640, 0x4E36F0, 0x4E3680);

void CPed::SetExitTrain(CVehicle *train) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *>(gaddrof(CPed::SetExitTrain), this, train);
}

int addrof(CPed::SetFall) = ADDRESS_BY_VERSION(0x4D09B0, 0x4D0A50, 0x4D09E0);
int gaddrof(CPed::SetFall) = GLOBAL_ADDRESS_BY_VERSION(0x4D09B0, 0x4D0A50, 0x4D09E0);

void CPed::SetFall(int extraTime, int animId, unsigned char evenIfNotInControl) {
    plugin::CallMethodDynGlobal<CPed *, int, int, unsigned char>(gaddrof(CPed::SetFall), this, extraTime, animId, evenIfNotInControl);
}

int addrof_o(CPed::SetFlee, void (CPed::*)(CVector2D const &, int)) = ADDRESS_BY_VERSION(0x4D1C40, 0x4D1CE0, 0x4D1C70);
int gaddrof_o(CPed::SetFlee, void (CPed::*)(CVector2D const &, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4D1C40, 0x4D1CE0, 0x4D1C70);

void CPed::SetFlee(CVector2D const &from, int time) {
    plugin::CallMethodDynGlobal<CPed *, CVector2D const &, int>(gaddrof_o(CPed::SetFlee, void (CPed::*)(CVector2D const &, int)), this, from, time);
}

int addrof_o(CPed::SetFlee, void (CPed::*)(CEntity *, int)) = ADDRESS_BY_VERSION(0x4D1D70, 0x4D1E10, 0x4D1DA0);
int gaddrof_o(CPed::SetFlee, void (CPed::*)(CEntity *, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4D1D70, 0x4D1E10, 0x4D1DA0);

void CPed::SetFlee(CEntity *fleeFrom, int time) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *, int>(gaddrof_o(CPed::SetFlee, void (CPed::*)(CEntity *, int)), this, fleeFrom, time);
}

int addrof(CPed::SetFollowPath) = ADDRESS_BY_VERSION(0x4D2EA0, 0x4D2F40, 0x4D2ED0);
int gaddrof(CPed::SetFollowPath) = GLOBAL_ADDRESS_BY_VERSION(0x4D2EA0, 0x4D2F40, 0x4D2ED0);

bool CPed::SetFollowPath(CVector dest) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CVector>(gaddrof(CPed::SetFollowPath), this, dest);
}

int addrof(CPed::SetFollowRoute) = ADDRESS_BY_VERSION(0x4DD690, 0x4DD740, 0x4DD6D0);
int gaddrof(CPed::SetFollowRoute) = GLOBAL_ADDRESS_BY_VERSION(0x4DD690, 0x4DD740, 0x4DD6D0);

void CPed::SetFollowRoute(short currentPoint, short routeType) {
    plugin::CallMethodDynGlobal<CPed *, short, short>(gaddrof(CPed::SetFollowRoute), this, currentPoint, routeType);
}

int addrof(CPed::SetFormation) = ADDRESS_BY_VERSION(0x4DF3E0, 0x4DF490, 0x4DF420);
int gaddrof(CPed::SetFormation) = GLOBAL_ADDRESS_BY_VERSION(0x4DF3E0, 0x4DF490, 0x4DF420);

void CPed::SetFormation(eFormation formation) {
    plugin::CallMethodDynGlobal<CPed *, eFormation>(gaddrof(CPed::SetFormation), this, formation);
}

int addrof(CPed::SetGetUp) = ADDRESS_BY_VERSION(0x4D0F20, 0x4D0FC0, 0x4D0F50);
int gaddrof(CPed::SetGetUp) = GLOBAL_ADDRESS_BY_VERSION(0x4D0F20, 0x4D0FC0, 0x4D0F50);

void CPed::SetGetUp() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetGetUp), this);
}

int addrof(CPed::SetIdle) = ADDRESS_BY_VERSION(0x4D0600, 0x4D06A0, 0x4D0630);
int gaddrof(CPed::SetIdle) = GLOBAL_ADDRESS_BY_VERSION(0x4D0600, 0x4D06A0, 0x4D0630);

void CPed::SetIdle() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetIdle), this);
}

int addrof(CPed::SetInTheAir) = ADDRESS_BY_VERSION(0x4D0CA0, 0x4D0D40, 0x4D0CD0);
int gaddrof(CPed::SetInTheAir) = GLOBAL_ADDRESS_BY_VERSION(0x4D0CA0, 0x4D0D40, 0x4D0CD0);

void CPed::SetInTheAir() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetInTheAir), this);
}

int addrof(CPed::SetInvestigateEvent) = ADDRESS_BY_VERSION(0x4E9A80, 0x4E9B30, 0x4E9AC0);
int gaddrof(CPed::SetInvestigateEvent) = GLOBAL_ADDRESS_BY_VERSION(0x4E9A80, 0x4E9B30, 0x4E9AC0);

void CPed::SetInvestigateEvent(eEventType type, CVector2D pos, float distanceToCountDone, unsigned short time, float angle) {
    plugin::CallMethodDynGlobal<CPed *, eEventType, CVector2D, float, unsigned short, float>(gaddrof(CPed::SetInvestigateEvent), this, type, pos, distanceToCountDone, time, angle);
}

int addrof(CPed::SetJump) = ADDRESS_BY_VERSION(0x4D73D0, 0x4D7470, 0x4D7400);
int gaddrof(CPed::SetJump) = GLOBAL_ADDRESS_BY_VERSION(0x4D73D0, 0x4D7470, 0x4D7400);

void CPed::SetJump() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetJump), this);
}

int addrof(CPed::SetLanding) = ADDRESS_BY_VERSION(0x4D0E40, 0x4D0EE0, 0x4D0E70);
int gaddrof(CPed::SetLanding) = GLOBAL_ADDRESS_BY_VERSION(0x4D0E40, 0x4D0EE0, 0x4D0E70);

void CPed::SetLanding() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetLanding), this);
}

int addrof(CPed::SetLeader) = ADDRESS_BY_VERSION(0x4D72C0, 0x4D7360, 0x4D72F0);
int gaddrof(CPed::SetLeader) = GLOBAL_ADDRESS_BY_VERSION(0x4D72C0, 0x4D7360, 0x4D72F0);

void CPed::SetLeader(CPed *leader) {
    plugin::CallMethodDynGlobal<CPed *, CPed *>(gaddrof(CPed::SetLeader), this, leader);
}

int addrof_o(CPed::SetLookFlag, void (CPed::*)(float, bool)) = ADDRESS_BY_VERSION(0x4C63E0, 0x4C6480, 0x4C6410);
int gaddrof_o(CPed::SetLookFlag, void (CPed::*)(float, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x4C63E0, 0x4C6480, 0x4C6410);

void CPed::SetLookFlag(float direction, bool keepTryingToLook) {
    plugin::CallMethodDynGlobal<CPed *, float, bool>(gaddrof_o(CPed::SetLookFlag, void (CPed::*)(float, bool)), this, direction, keepTryingToLook);
}

int addrof_o(CPed::SetLookFlag, void (CPed::*)(CEntity *, bool)) = ADDRESS_BY_VERSION(0x4C6460, 0x4C6500, 0x4C6490);
int gaddrof_o(CPed::SetLookFlag, void (CPed::*)(CEntity *, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x4C6460, 0x4C6500, 0x4C6490);

void CPed::SetLookFlag(CEntity *target, bool keepTryingToLook) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *, bool>(gaddrof_o(CPed::SetLookFlag, void (CPed::*)(CEntity *, bool)), this, target, keepTryingToLook);
}

int addrof(CPed::SetLookTimer) = ADDRESS_BY_VERSION(0x4D12E0, 0x4D1380, 0x4D1310);
int gaddrof(CPed::SetLookTimer) = GLOBAL_ADDRESS_BY_VERSION(0x4D12E0, 0x4D1380, 0x4D1310);

void CPed::SetLookTimer(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::SetLookTimer), this, time);
}

int addrof(CPed::SetMoveState) = ADDRESS_BY_VERSION(0x4C5A30, 0x4C5AD0, 0x4C5A60);
int gaddrof(CPed::SetMoveState) = GLOBAL_ADDRESS_BY_VERSION(0x4C5A30, 0x4C5AD0, 0x4C5A60);

void CPed::SetMoveState(eMoveState state) {
    plugin::CallMethodDynGlobal<CPed *, eMoveState>(gaddrof(CPed::SetMoveState), this, state);
}

int addrof_o(CPed::SetObjective, void (CPed::*)(eObjective)) = ADDRESS_BY_VERSION(0x4D82C0, 0x4D8360, 0x4D82F0);
int gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective)) = GLOBAL_ADDRESS_BY_VERSION(0x4D82C0, 0x4D8360, 0x4D82F0);

void CPed::SetObjective(eObjective objective) {
    plugin::CallMethodDynGlobal<CPed *, eObjective>(gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective)), this, objective);
}

int addrof_o(CPed::SetObjective, void (CPed::*)(eObjective, void *)) = ADDRESS_BY_VERSION(0x4D83E0, 0x4D8480, 0x4D8410);
int gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, void *)) = GLOBAL_ADDRESS_BY_VERSION(0x4D83E0, 0x4D8480, 0x4D8410);

void CPed::SetObjective(eObjective objective, void *entity) {
    plugin::CallMethodDynGlobal<CPed *, eObjective, void *>(gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, void *)), this, objective, entity);
}

int addrof_o(CPed::SetObjective, void (CPed::*)(eObjective, CVector, float)) = ADDRESS_BY_VERSION(0x4D8770, 0x4D8810, 0x4D87A0);
int gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, CVector, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4D8770, 0x4D8810, 0x4D87A0);

void CPed::SetObjective(eObjective objective, CVector dest, float safeDist) {
    plugin::CallMethodDynGlobal<CPed *, eObjective, CVector, float>(gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, CVector, float)), this, objective, dest, safeDist);
}

int addrof_o(CPed::SetObjective, void (CPed::*)(eObjective, short, short)) = ADDRESS_BY_VERSION(0x4D89A0, 0x4D8A40, 0x4D89D0);
int gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, short, short)) = GLOBAL_ADDRESS_BY_VERSION(0x4D89A0, 0x4D8A40, 0x4D89D0);

void CPed::SetObjective(eObjective objective, short routePoint, short routeType) {
    plugin::CallMethodDynGlobal<CPed *, eObjective, short, short>(gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, short, short)), this, objective, routePoint, routeType);
}

int addrof_o(CPed::SetObjective, void (CPed::*)(eObjective, CVector)) = ADDRESS_BY_VERSION(0x4D8A90, 0x4D8B30, 0x4D8AC0);
int gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, CVector)) = GLOBAL_ADDRESS_BY_VERSION(0x4D8A90, 0x4D8B30, 0x4D8AC0);

void CPed::SetObjective(eObjective objective, CVector dest) {
    plugin::CallMethodDynGlobal<CPed *, eObjective, CVector>(gaddrof_o(CPed::SetObjective, void (CPed::*)(eObjective, CVector)), this, objective, dest);
}

int addrof(CPed::SetObjectiveTimer) = ADDRESS_BY_VERSION(0x4D81E0, 0x4D8280, 0x4D8210);
int gaddrof(CPed::SetObjectiveTimer) = GLOBAL_ADDRESS_BY_VERSION(0x4D81E0, 0x4D8280, 0x4D8210);

void CPed::SetObjectiveTimer(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::SetObjectiveTimer), this, time);
}

int addrof(CPed::SetPedPositionInCar) = ADDRESS_BY_VERSION(0x4D4970, 0x4D4A10, 0x4D49A0);
int gaddrof(CPed::SetPedPositionInCar) = GLOBAL_ADDRESS_BY_VERSION(0x4D4970, 0x4D4A10, 0x4D49A0);

void CPed::SetPedPositionInCar() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetPedPositionInCar), this);
}

int addrof(CPed::SetPedPositionInTrain) = ADDRESS_BY_VERSION(0x4E33C0, 0x4E3470, 0x4E3400);
int gaddrof(CPed::SetPedPositionInTrain) = GLOBAL_ADDRESS_BY_VERSION(0x4E33C0, 0x4E3470, 0x4E3400);

void CPed::SetPedPositionInTrain() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetPedPositionInTrain), this);
}

int addrof(CPed::SetPedStats) = ADDRESS_BY_VERSION(0x4C5330, 0x4C53D0, 0x4C5360);
int gaddrof(CPed::SetPedStats) = GLOBAL_ADDRESS_BY_VERSION(0x4C5330, 0x4C53D0, 0x4C5360);

void CPed::SetPedStats(ePedStats stat) {
    plugin::CallMethodDynGlobal<CPed *, ePedStats>(gaddrof(CPed::SetPedStats), this, stat);
}

int addrof(CPed::SetPointGunAt) = ADDRESS_BY_VERSION(0x4E5F70, 0x4E6020, 0x4E5FB0);
int gaddrof(CPed::SetPointGunAt) = GLOBAL_ADDRESS_BY_VERSION(0x4E5F70, 0x4E6020, 0x4E5FB0);

void CPed::SetPointGunAt(CEntity *entity) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *>(gaddrof(CPed::SetPointGunAt), this, entity);
}

int addrof(CPed::SetRadioStation) = ADDRESS_BY_VERSION(0x4D7BC0, 0x4D7C60, 0x4D7BF0);
int gaddrof(CPed::SetRadioStation) = GLOBAL_ADDRESS_BY_VERSION(0x4D7BC0, 0x4D7C60, 0x4D7BF0);

void CPed::SetRadioStation() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetRadioStation), this);
}

int addrof_o(CPed::SetSeek, void (CPed::*)(CVector, float)) = ADDRESS_BY_VERSION(0x4D14B0, 0x4D1550, 0x4D14E0);
int gaddrof_o(CPed::SetSeek, void (CPed::*)(CVector, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4D14B0, 0x4D1550, 0x4D14E0);

void CPed::SetSeek(CVector pos, float distanceToCountDone) {
    plugin::CallMethodDynGlobal<CPed *, CVector, float>(gaddrof_o(CPed::SetSeek, void (CPed::*)(CVector, float)), this, pos, distanceToCountDone);
}

int addrof_o(CPed::SetSeek, void (CPed::*)(CEntity *, float)) = ADDRESS_BY_VERSION(0x4D15A0, 0x4D1640, 0x4D15D0);
int gaddrof_o(CPed::SetSeek, void (CPed::*)(CEntity *, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4D15A0, 0x4D1640, 0x4D15D0);

void CPed::SetSeek(CEntity *seeking, float distanceToCountDone) {
    plugin::CallMethodDynGlobal<CPed *, CEntity *, float>(gaddrof_o(CPed::SetSeek, void (CPed::*)(CEntity *, float)), this, seeking, distanceToCountDone);
}

int addrof(CPed::SetSeekBoatPosition) = ADDRESS_BY_VERSION(0x4E4C00, 0x4E4CB0, 0x4E4C40);
int gaddrof(CPed::SetSeekBoatPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4E4C00, 0x4E4CB0, 0x4E4C40);

void CPed::SetSeekBoatPosition(CVehicle *boat) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *>(gaddrof(CPed::SetSeekBoatPosition), this, boat);
}

int addrof(CPed::SetSeekCar) = ADDRESS_BY_VERSION(0x4D3EF0, 0x4D3F90, 0x4D3F20);
int gaddrof(CPed::SetSeekCar) = GLOBAL_ADDRESS_BY_VERSION(0x4D3EF0, 0x4D3F90, 0x4D3F20);

void CPed::SetSeekCar(CVehicle *vehicle, unsigned int doorNode) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *, unsigned int>(gaddrof(CPed::SetSeekCar), this, vehicle, doorNode);
}

int addrof(CPed::SetShootTimer) = ADDRESS_BY_VERSION(0x4D1340, 0x4D13E0, 0x4D1370);
int gaddrof(CPed::SetShootTimer) = GLOBAL_ADDRESS_BY_VERSION(0x4D1340, 0x4D13E0, 0x4D1370);

void CPed::SetShootTimer(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::SetShootTimer), this, time);
}

int addrof(CPed::SetSolicit) = ADDRESS_BY_VERSION(0x4D6620, 0x4D66C0, 0x4D6650);
int gaddrof(CPed::SetSolicit) = GLOBAL_ADDRESS_BY_VERSION(0x4D6620, 0x4D66C0, 0x4D6650);

void CPed::SetSolicit(unsigned int time) {
    plugin::CallMethodDynGlobal<CPed *, unsigned int>(gaddrof(CPed::SetSolicit), this, time);
}

int addrof(CPed::SetStoredObjective) = ADDRESS_BY_VERSION(0x4D8220, 0x4D82C0, 0x4D8250);
int gaddrof(CPed::SetStoredObjective) = GLOBAL_ADDRESS_BY_VERSION(0x4D8220, 0x4D82C0, 0x4D8250);

void CPed::SetStoredObjective() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetStoredObjective), this);
}

int addrof(CPed::SetStoredState) = ADDRESS_BY_VERSION(0x4C5DB0, 0x4C5E50, 0x4C5DE0);
int gaddrof(CPed::SetStoredState) = GLOBAL_ADDRESS_BY_VERSION(0x4C5DB0, 0x4C5E50, 0x4C5DE0);

void CPed::SetStoredState() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::SetStoredState), this);
}

int addrof(CPed::SetWaitState) = ADDRESS_BY_VERSION(0x4D58D0, 0x4D5970, 0x4D5900);
int gaddrof(CPed::SetWaitState) = GLOBAL_ADDRESS_BY_VERSION(0x4D58D0, 0x4D5970, 0x4D5900);

void CPed::SetWaitState(eWaitState state, void *time) {
    plugin::CallMethodDynGlobal<CPed *, eWaitState, void *>(gaddrof(CPed::SetWaitState), this, state, time);
}

int addrof(CPed::SetWanderPath) = ADDRESS_BY_VERSION(0x4D2750, 0x4D27F0, 0x4D2780);
int gaddrof(CPed::SetWanderPath) = GLOBAL_ADDRESS_BY_VERSION(0x4D2750, 0x4D27F0, 0x4D2780);

bool CPed::SetWanderPath(char pathStateDest) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, char>(gaddrof(CPed::SetWanderPath), this, pathStateDest);
}

int addrof(CPed::Solicit) = ADDRESS_BY_VERSION(0x4D6780, 0x4D6820, 0x4D67B0);
int gaddrof(CPed::Solicit) = GLOBAL_ADDRESS_BY_VERSION(0x4D6780, 0x4D6820, 0x4D67B0);

void CPed::Solicit() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Solicit), this);
}

int addrof(CPed::SortPeds) = ADDRESS_BY_VERSION(0x4C57F0, 0x4C5890, 0x4C5820);
int gaddrof(CPed::SortPeds) = GLOBAL_ADDRESS_BY_VERSION(0x4C57F0, 0x4C5890, 0x4C5820);

void CPed::SortPeds(CPed **list, int min, int max) {
    plugin::CallMethodDynGlobal<CPed *, CPed **, int, int>(gaddrof(CPed::SortPeds), this, list, min, max);
}

int addrof(CPed::SpawnFlyingComponent) = ADDRESS_BY_VERSION(0x4EB060, 0x4EB110, 0x4EB0A0);
int gaddrof(CPed::SpawnFlyingComponent) = GLOBAL_ADDRESS_BY_VERSION(0x4EB060, 0x4EB110, 0x4EB0A0);

void CPed::SpawnFlyingComponent(int nodeId, char direction) {
    plugin::CallMethodDynGlobal<CPed *, int, char>(gaddrof(CPed::SpawnFlyingComponent), this, nodeId, direction);
}

int addrof(CPed::StartFightAttack) = ADDRESS_BY_VERSION(0x4E7530, 0x4E75E0, 0x4E7570);
int gaddrof(CPed::StartFightAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4E7530, 0x4E75E0, 0x4E7570);

void CPed::StartFightAttack(unsigned char buttonPressure) {
    plugin::CallMethodDynGlobal<CPed *, unsigned char>(gaddrof(CPed::StartFightAttack), this, buttonPressure);
}

int addrof(CPed::StartFightDefend) = ADDRESS_BY_VERSION(0x4E7780, 0x4E7830, 0x4E77C0);
int gaddrof(CPed::StartFightDefend) = GLOBAL_ADDRESS_BY_VERSION(0x4E7780, 0x4E7830, 0x4E77C0);

void CPed::StartFightDefend(unsigned char direction, unsigned char hitLevel, unsigned char strength) {
    plugin::CallMethodDynGlobal<CPed *, unsigned char, unsigned char, unsigned char>(gaddrof(CPed::StartFightDefend), this, direction, hitLevel, strength);
}

int addrof(CPed::StopNonPartialAnims) = ADDRESS_BY_VERSION(0x4C5D50, 0x4C5DF0, 0x4C5D80);
int gaddrof(CPed::StopNonPartialAnims) = GLOBAL_ADDRESS_BY_VERSION(0x4C5D50, 0x4C5DF0, 0x4C5D80);

void CPed::StopNonPartialAnims() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::StopNonPartialAnims), this);
}

int addrof(CPed::TurnBody) = ADDRESS_BY_VERSION(0x4D1390, 0x4D1430, 0x4D13C0);
int gaddrof(CPed::TurnBody) = GLOBAL_ADDRESS_BY_VERSION(0x4D1390, 0x4D1430, 0x4D13C0);

bool CPed::TurnBody() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::TurnBody), this);
}

int addrof(CPed::UpdateFromLeader) = ADDRESS_BY_VERSION(0x4D8F30, 0x4D8FD0, 0x4D8F60);
int gaddrof(CPed::UpdateFromLeader) = GLOBAL_ADDRESS_BY_VERSION(0x4D8F30, 0x4D8FD0, 0x4D8F60);

void CPed::UpdateFromLeader() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::UpdateFromLeader), this);
}

int addrof(CPed::UpdatePosition) = ADDRESS_BY_VERSION(0x4C7A00, 0x4C7AA0, 0x4C7A30);
int gaddrof(CPed::UpdatePosition) = GLOBAL_ADDRESS_BY_VERSION(0x4C7A00, 0x4C7AA0, 0x4C7A30);

void CPed::UpdatePosition() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::UpdatePosition), this);
}

int addrof(CPed::UseGroundColModel) = ADDRESS_BY_VERSION(0x4CE730, 0x4CE7D0, 0x4CE760);
int gaddrof(CPed::UseGroundColModel) = GLOBAL_ADDRESS_BY_VERSION(0x4CE730, 0x4CE7D0, 0x4CE760);

bool CPed::UseGroundColModel() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::UseGroundColModel), this);
}

int addrof(CPed::Wait) = ADDRESS_BY_VERSION(0x4D5D80, 0x4D5E20, 0x4D5DB0);
int gaddrof(CPed::Wait) = GLOBAL_ADDRESS_BY_VERSION(0x4D5D80, 0x4D5E20, 0x4D5DB0);

void CPed::Wait() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::Wait), this);
}

int addrof(CPed::WanderPath) = ADDRESS_BY_VERSION(0x4D28D0, 0x4D2970, 0x4D2900);
int gaddrof(CPed::WanderPath) = GLOBAL_ADDRESS_BY_VERSION(0x4D28D0, 0x4D2970, 0x4D2900);

void CPed::WanderPath() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::WanderPath), this);
}

int addrof(CPed::WanderRange) = ADDRESS_BY_VERSION(0x4D26C0, 0x4D2760, 0x4D26F0);
int gaddrof(CPed::WanderRange) = GLOBAL_ADDRESS_BY_VERSION(0x4D26C0, 0x4D2760, 0x4D26F0);

void CPed::WanderRange() {
    plugin::CallMethodDynGlobal<CPed *>(gaddrof(CPed::WanderRange), this);
}

int addrof(CPed::WarpPedIntoCar) = ADDRESS_BY_VERSION(0x4D7D20, 0x4D7DC0, 0x4D7D50);
int gaddrof(CPed::WarpPedIntoCar) = GLOBAL_ADDRESS_BY_VERSION(0x4D7D20, 0x4D7DC0, 0x4D7D50);

void CPed::WarpPedIntoCar(CVehicle *vehicle) {
    plugin::CallMethodDynGlobal<CPed *, CVehicle *>(gaddrof(CPed::WarpPedIntoCar), this, vehicle);
}

int addrof(CPed::WarpPedToNearEntityOffScreen) = ADDRESS_BY_VERSION(0x4E5570, 0x4E5620, 0x4E55B0);
int gaddrof(CPed::WarpPedToNearEntityOffScreen) = GLOBAL_ADDRESS_BY_VERSION(0x4E5570, 0x4E5620, 0x4E55B0);

bool CPed::WarpPedToNearEntityOffScreen(CEntity *warpTo) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CEntity *>(gaddrof(CPed::WarpPedToNearEntityOffScreen), this, warpTo);
}

int addrof(CPed::WarpPedToNearLeaderOffScreen) = ADDRESS_BY_VERSION(0x4E52A0, 0x4E5350, 0x4E52E0);
int gaddrof(CPed::WarpPedToNearLeaderOffScreen) = GLOBAL_ADDRESS_BY_VERSION(0x4E52A0, 0x4E5350, 0x4E52E0);

bool CPed::WarpPedToNearLeaderOffScreen() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *>(gaddrof(CPed::WarpPedToNearLeaderOffScreen), this);
}

int addrof(CPed::WillChat) = ADDRESS_BY_VERSION(0x4C7340, 0x4C73E0, 0x4C7370);
int gaddrof(CPed::WillChat) = GLOBAL_ADDRESS_BY_VERSION(0x4C7340, 0x4C73E0, 0x4C7370);

bool CPed::WillChat(CPed *stranger) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed *, CPed *>(gaddrof(CPed::WillChat), this, stranger);
}

int addrof(CPed::WorkOutHeadingForMovingFirstPerson) = ADDRESS_BY_VERSION(0x4C78F0, 0x4C7990, 0x4C7920);
int gaddrof(CPed::WorkOutHeadingForMovingFirstPerson) = GLOBAL_ADDRESS_BY_VERSION(0x4C78F0, 0x4C7990, 0x4C7920);

float CPed::WorkOutHeadingForMovingFirstPerson(float offset) {
    return plugin::CallMethodAndReturnDynGlobal<float, CPed *, float>(gaddrof(CPed::WorkOutHeadingForMovingFirstPerson), this, offset);
}

bool CPed::IsPedDoingDriveByShooting() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPed*>(0x564BB0, this);
}

int addrof(CPed::FinishDieAnimCB) = ADDRESS_BY_VERSION(0x4D3950, 0x4D39F0, 0x4D3980);
int gaddrof(CPed::FinishDieAnimCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D3950, 0x4D39F0, 0x4D3980);

void CPed::FinishDieAnimCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishDieAnimCB), association, data);
}

int addrof(CPed::FinishFightMoveCB) = ADDRESS_BY_VERSION(0x4E9830, 0x4E98E0, 0x4E9870);
int gaddrof(CPed::FinishFightMoveCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E9830, 0x4E98E0, 0x4E9870);

void CPed::FinishFightMoveCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishFightMoveCB), association, data);
}

int addrof(CPed::FinishHitHeadCB) = ADDRESS_BY_VERSION(0x4D7A80, 0x4D7B20, 0x4D7AB0);
int gaddrof(CPed::FinishHitHeadCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D7A80, 0x4D7B20, 0x4D7AB0);

void CPed::FinishHitHeadCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishHitHeadCB), association, data);
}

int addrof(CPed::FinishJumpCB) = ADDRESS_BY_VERSION(0x4D7A50, 0x4D7AF0, 0x4D7A80);
int gaddrof(CPed::FinishJumpCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D7A50, 0x4D7AF0, 0x4D7A80);

void CPed::FinishJumpCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishJumpCB), association, data);
}

int addrof(CPed::FinishLaunchCB) = ADDRESS_BY_VERSION(0x4D7490, 0x4D7530, 0x4D74C0);
int gaddrof(CPed::FinishLaunchCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D7490, 0x4D7530, 0x4D74C0);

void CPed::FinishLaunchCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishLaunchCB), association, data);
}

int addrof(CPed::FinishedAttackCB) = ADDRESS_BY_VERSION(0x4E68A0, 0x4E6950, 0x4E68E0);
int gaddrof(CPed::FinishedAttackCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E68A0, 0x4E6950, 0x4E68E0);

void CPed::FinishedAttackCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishedAttackCB), association, data);
}

int addrof(CPed::FinishedWaitCB) = ADDRESS_BY_VERSION(0x4D6520, 0x4D65C0, 0x4D6550);
int gaddrof(CPed::FinishedWaitCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D6520, 0x4D65C0, 0x4D6550);

void CPed::FinishedWaitCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::FinishedWaitCB), association, data);
}

int addrof(CPed::GetLocalPositionToOpenCarDoor) = ADDRESS_BY_VERSION(0x4E4730, 0x4E47E0, 0x4E4770);
int gaddrof(CPed::GetLocalPositionToOpenCarDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4E4730, 0x4E47E0, 0x4E4770);

CVector CPed::GetLocalPositionToOpenCarDoor(CVehicle *vehicle, unsigned int doorNode, float offset) {
    CVector ret_pos;
    plugin::CallDynGlobal<CVector *, CVehicle *, unsigned int, float>(gaddrof(CPed::GetLocalPositionToOpenCarDoor), &ret_pos, vehicle, doorNode, offset);
    return ret_pos;
}

int addrof(CPed::GetPositionToOpenCarDoor) = ADDRESS_BY_VERSION(0x4E1A30, 0x4E1AE0, 0x4E1A70);
int gaddrof(CPed::GetPositionToOpenCarDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4E1A30, 0x4E1AE0, 0x4E1A70);

CVector CPed::GetPositionToOpenCarDoor(CVehicle *vehicle, unsigned int doorNode) {
    CVector ret_pos;
    plugin::CallDynGlobal<CVector *, CVehicle *, unsigned int>(gaddrof(CPed::GetPositionToOpenCarDoor), &ret_pos, vehicle, doorNode);
    return ret_pos;
}

int addrof(CPed::GetPositionToOpenCarDoor_) = ADDRESS_BY_VERSION(0x4E4660, 0x4E4710, 0x4E46A0);
int gaddrof(CPed::GetPositionToOpenCarDoor_) = GLOBAL_ADDRESS_BY_VERSION(0x4E4660, 0x4E4710, 0x4E46A0);

CVector CPed::GetPositionToOpenCarDoor_(CVehicle *vehicle, unsigned int doorNode, float offset) {
    CVector ret_pos;
    plugin::CallDynGlobal<CVector *, CVehicle *, unsigned int, float>(gaddrof(CPed::GetPositionToOpenCarDoor_), &ret_pos, vehicle, doorNode, offset);
    return ret_pos;
}

int addrof(CPed::Initialise) = ADDRESS_BY_VERSION(0x4C5270, 0x4C5310, 0x4C52A0);
int gaddrof(CPed::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4C5270, 0x4C5310, 0x4C52A0);

void CPed::Initialise() {
    plugin::CallDynGlobal(gaddrof(CPed::Initialise));
}

int addrof(CPed::LoadFightData) = ADDRESS_BY_VERSION(0x4E9870, 0x4E9920, 0x4E98B0);
int gaddrof(CPed::LoadFightData) = GLOBAL_ADDRESS_BY_VERSION(0x4E9870, 0x4E9920, 0x4E98B0);

void CPed::LoadFightData() {
    plugin::CallDynGlobal(gaddrof(CPed::LoadFightData));
}

int addrof(CPed::PedAnimAlignCB) = ADDRESS_BY_VERSION(0x4DE130, 0x4DE1E0, 0x4DE170);
int gaddrof(CPed::PedAnimAlignCB) = GLOBAL_ADDRESS_BY_VERSION(0x4DE130, 0x4DE1E0, 0x4DE170);

void CPed::PedAnimAlignCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimAlignCB), association, data);
}

int addrof(CPed::PedAnimDoorCloseCB) = ADDRESS_BY_VERSION(0x4DF1B0, 0x4DF260, 0x4DF1F0);
int gaddrof(CPed::PedAnimDoorCloseCB) = GLOBAL_ADDRESS_BY_VERSION(0x4DF1B0, 0x4DF260, 0x4DF1F0);

void CPed::PedAnimDoorCloseCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimDoorCloseCB), association, data);
}

int addrof(CPed::PedAnimDoorCloseRollingCB) = ADDRESS_BY_VERSION(0x4E4B90, 0x4E4C40, 0x4E4BD0);
int gaddrof(CPed::PedAnimDoorCloseRollingCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E4B90, 0x4E4C40, 0x4E4BD0);

void CPed::PedAnimDoorCloseRollingCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimDoorCloseRollingCB), association, data);
}

int addrof(CPed::PedAnimDoorOpenCB) = ADDRESS_BY_VERSION(0x4DE500, 0x4DE5B0, 0x4DE540);
int gaddrof(CPed::PedAnimDoorOpenCB) = GLOBAL_ADDRESS_BY_VERSION(0x4DE500, 0x4DE5B0, 0x4DE540);

void CPed::PedAnimDoorOpenCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimDoorOpenCB), association, data);
}

int addrof(CPed::PedAnimGetInCB) = ADDRESS_BY_VERSION(0x4DEC80, 0x4DED30, 0x4DECC0);
int gaddrof(CPed::PedAnimGetInCB) = GLOBAL_ADDRESS_BY_VERSION(0x4DEC80, 0x4DED30, 0x4DECC0);

void CPed::PedAnimGetInCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimGetInCB), association, data);
}

int addrof(CPed::PedAnimPullPedOutCB) = ADDRESS_BY_VERSION(0x4DEAF0, 0x4DEBA0, 0x4DEB30);
int gaddrof(CPed::PedAnimPullPedOutCB) = GLOBAL_ADDRESS_BY_VERSION(0x4DEAF0, 0x4DEBA0, 0x4DEB30);

void CPed::PedAnimPullPedOutCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimPullPedOutCB), association, data);
}

int addrof(CPed::PedAnimStepOutCarCB) = ADDRESS_BY_VERSION(0x4DF5C0, 0x4DF670, 0x4DF600);
int gaddrof(CPed::PedAnimStepOutCarCB) = GLOBAL_ADDRESS_BY_VERSION(0x4DF5C0, 0x4DF670, 0x4DF600);

void CPed::PedAnimStepOutCarCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedAnimStepOutCarCB), association, data);
}

int addrof(CPed::PedEvadeCB) = ADDRESS_BY_VERSION(0x4D36E0, 0x4D3780, 0x4D3710);
int gaddrof(CPed::PedEvadeCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D36E0, 0x4D3780, 0x4D3710);

void CPed::PedEvadeCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedEvadeCB), association, data);
}

int addrof(CPed::PedGetupCB) = ADDRESS_BY_VERSION(0x4CE810, 0x4CE8B0, 0x4CE840);
int gaddrof(CPed::PedGetupCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CE810, 0x4CE8B0, 0x4CE840);

void CPed::PedGetupCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedGetupCB), association, data);
}

int addrof(CPed::PedLandCB) = ADDRESS_BY_VERSION(0x4CE8A0, 0x4CE940, 0x4CE8D0);
int gaddrof(CPed::PedLandCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CE8A0, 0x4CE940, 0x4CE8D0);

void CPed::PedLandCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedLandCB), association, data);
}

int addrof(CPed::PedSetDraggedOutCarCB) = ADDRESS_BY_VERSION(0x4CF000, 0x4CF0A0, 0x4CF030);
int gaddrof(CPed::PedSetDraggedOutCarCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CF000, 0x4CF0A0, 0x4CF030);

void CPed::PedSetDraggedOutCarCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetDraggedOutCarCB), association, data);
}

int addrof(CPed::PedSetDraggedOutCarPositionCB) = ADDRESS_BY_VERSION(0x4E2920, 0x4E29D0, 0x4E2960);
int gaddrof(CPed::PedSetDraggedOutCarPositionCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E2920, 0x4E29D0, 0x4E2960);

void CPed::PedSetDraggedOutCarPositionCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetDraggedOutCarPositionCB), association, data);
}

int addrof(CPed::PedSetInCarCB) = ADDRESS_BY_VERSION(0x4CF220, 0x4CF2C0, 0x4CF250);
int gaddrof(CPed::PedSetInCarCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CF220, 0x4CF2C0, 0x4CF250);

void CPed::PedSetInCarCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetInCarCB), association, data);
}

int addrof(CPed::PedSetInTrainCB) = ADDRESS_BY_VERSION(0x4E3290, 0x4E3340, 0x4E32D0);
int gaddrof(CPed::PedSetInTrainCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E3290, 0x4E3340, 0x4E32D0);

void CPed::PedSetInTrainCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetInTrainCB), association, data);
}

int addrof(CPed::PedSetOutCarCB) = ADDRESS_BY_VERSION(0x4CE8F0, 0x4CE990, 0x4CE920);
int gaddrof(CPed::PedSetOutCarCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CE8F0, 0x4CE990, 0x4CE920);

void CPed::PedSetOutCarCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetOutCarCB), association, data);
}

int addrof(CPed::PedSetOutTrainCB) = ADDRESS_BY_VERSION(0x4E36E0, 0x4E3790, 0x4E3720);
int gaddrof(CPed::PedSetOutTrainCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E36E0, 0x4E3790, 0x4E3720);

void CPed::PedSetOutTrainCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetOutTrainCB), association, data);
}

int addrof(CPed::PedSetQuickDraggedOutCarPositionCB) = ADDRESS_BY_VERSION(0x4E2480, 0x4E2530, 0x4E24C0);
int gaddrof(CPed::PedSetQuickDraggedOutCarPositionCB) = GLOBAL_ADDRESS_BY_VERSION(0x4E2480, 0x4E2530, 0x4E24C0);

void CPed::PedSetQuickDraggedOutCarPositionCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedSetQuickDraggedOutCarPositionCB), association, data);
}

int addrof(CPed::PedStaggerCB) = ADDRESS_BY_VERSION(0x4CE8D0, 0x4CE970, 0x4CE900);
int gaddrof(CPed::PedStaggerCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CE8D0, 0x4CE970, 0x4CE900);

void CPed::PedStaggerCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::PedStaggerCB), association, data);
}

int addrof(CPed::RestoreHeadingRateCB) = ADDRESS_BY_VERSION(0x4D6550, 0x4D65F0, 0x4D6580);
int gaddrof(CPed::RestoreHeadingRateCB) = GLOBAL_ADDRESS_BY_VERSION(0x4D6550, 0x4D65F0, 0x4D6580);

void CPed::RestoreHeadingRateCB(CAnimBlendAssociation *association, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(CPed::RestoreHeadingRateCB), association, data);
}

int addrof(CPed::SetAnimOffsetForEnterOrExitVehicle) = ADDRESS_BY_VERSION(0x4E2260, 0x4E2310, 0x4E22A0);
int gaddrof(CPed::SetAnimOffsetForEnterOrExitVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x4E2260, 0x4E2310, 0x4E22A0);

void CPed::SetAnimOffsetForEnterOrExitVehicle() {
    plugin::CallDynGlobal(gaddrof(CPed::SetAnimOffsetForEnterOrExitVehicle));
}

int addrof(CPed::Stagger) = ADDRESS_BY_VERSION(0x4C41B0, 0x4C4250, 0x4C41E0);
int gaddrof(CPed::Stagger) = GLOBAL_ADDRESS_BY_VERSION(0x4C41B0, 0x4C4250, 0x4C41E0);

void CPed::Stagger() {
    plugin::CallDynGlobal(gaddrof(CPed::Stagger));
}

int addrof(FinishFuckUCB) = ADDRESS_BY_VERSION(0x4C6580, 0x4C6620, 0x4C65B0);
int gaddrof(FinishFuckUCB) = GLOBAL_ADDRESS_BY_VERSION(0x4C6580, 0x4C6620, 0x4C65B0);

void FinishFuckUCB(CAnimBlendAssociation *anim, void *data) {
    plugin::CallDynGlobal<CAnimBlendAssociation *, void *>(gaddrof(FinishFuckUCB), anim, data);
}

int addrof(particleProduceFootSplash) = ADDRESS_BY_VERSION(0x4CC4C0, 0x4CC560, 0x4CC4F0);
int gaddrof(particleProduceFootSplash) = GLOBAL_ADDRESS_BY_VERSION(0x4CC4C0, 0x4CC560, 0x4CC4F0);

void particleProduceFootSplash(CPed *ped, CVector const &pos, float size, int times) {
    plugin::CallDynGlobal<CPed *, CVector const &, float, int>(gaddrof(particleProduceFootSplash), ped, pos, size, times);
}

int addrof(particleProduceFootDust) = ADDRESS_BY_VERSION(0x4CC5C0, 0x4CC660, 0x4CC5F0);
int gaddrof(particleProduceFootDust) = GLOBAL_ADDRESS_BY_VERSION(0x4CC5C0, 0x4CC660, 0x4CC5F0);

void particleProduceFootDust(CPed *ped, CVector const &pos, float size, int times) {
    plugin::CallDynGlobal<CPed *, CVector const &, float, int>(gaddrof(particleProduceFootDust), ped, pos, size, times);
}

int addrof(RemoveAllModelCB) = ADDRESS_BY_VERSION(0x4CF950, 0x4CF9F0, 0x4CF980);
int gaddrof(RemoveAllModelCB) = GLOBAL_ADDRESS_BY_VERSION(0x4CF950, 0x4CF9F0, 0x4CF980);

RwObject *RemoveAllModelCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(RemoveAllModelCB), object, data);
}

int addrof(AddYardieDoorSmoke) = ADDRESS_BY_VERSION(0x4E0FA0, 0x4E1050, 0x4E0FE0);
int gaddrof(AddYardieDoorSmoke) = GLOBAL_ADDRESS_BY_VERSION(0x4E0FA0, 0x4E1050, 0x4E0FE0);

void AddYardieDoorSmoke(CVehicle *vehicle, unsigned int doorNode) {
    plugin::CallDynGlobal<CVehicle *, unsigned int>(gaddrof(AddYardieDoorSmoke), vehicle, doorNode);
}

int addrof(CheckForPedsOnGroundToAttack) = ADDRESS_BY_VERSION(0x4E5BD0, 0x4E5C80, 0x4E5C10);
int gaddrof(CheckForPedsOnGroundToAttack) = GLOBAL_ADDRESS_BY_VERSION(0x4E5BD0, 0x4E5C80, 0x4E5C10);

int CheckForPedsOnGroundToAttack(CPed *attacker, CPed **pedOnGround) {
    return plugin::CallAndReturnDynGlobal<int, CPed *, CPed **>(gaddrof(CheckForPedsOnGroundToAttack), attacker, pedOnGround);
}

int addrof(SetPedAtomicVisibilityCB) = ADDRESS_BY_VERSION(0x4EAE10, 0x4EAEC0, 0x4EAE50);
int gaddrof(SetPedAtomicVisibilityCB) = GLOBAL_ADDRESS_BY_VERSION(0x4EAE10, 0x4EAEC0, 0x4EAE50);

RwObject *SetPedAtomicVisibilityCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(SetPedAtomicVisibilityCB), object, data);
}

int addrof(RecurseFrameChildrenVisibilityCB) = ADDRESS_BY_VERSION(0x4EAE20, 0x4EAED0, 0x4EAE60);
int gaddrof(RecurseFrameChildrenVisibilityCB) = GLOBAL_ADDRESS_BY_VERSION(0x4EAE20, 0x4EAED0, 0x4EAE60);

RwFrame *RecurseFrameChildrenVisibilityCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(RecurseFrameChildrenVisibilityCB), frame, data);
}

int addrof(CloneAtomicToFrameCB) = ADDRESS_BY_VERSION(0x4EAE50, 0x4EAF00, 0x4EAE90);
int gaddrof(CloneAtomicToFrameCB) = GLOBAL_ADDRESS_BY_VERSION(0x4EAE50, 0x4EAF00, 0x4EAE90);

RwObject *CloneAtomicToFrameCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(CloneAtomicToFrameCB), object, data);
}

int addrof(RecurseFrameChildrenToCloneCB) = ADDRESS_BY_VERSION(0x4EAE90, 0x4EAF40, 0x4EAED0);
int gaddrof(RecurseFrameChildrenToCloneCB) = GLOBAL_ADDRESS_BY_VERSION(0x4EAE90, 0x4EAF40, 0x4EAED0);

RwFrame *RecurseFrameChildrenToCloneCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(RecurseFrameChildrenToCloneCB), frame, data);
}
